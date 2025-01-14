#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsigndocument_request.h"



custom_ezsigndocument_request_t *custom_ezsigndocument_request_create(
    int pki_ezsigndocument_id,
    list_t *a_obj_ezsigndocumentdependency
    ) {
    custom_ezsigndocument_request_t *custom_ezsigndocument_request_local_var = malloc(sizeof(custom_ezsigndocument_request_t));
    if (!custom_ezsigndocument_request_local_var) {
        return NULL;
    }
    custom_ezsigndocument_request_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_ezsigndocument_request_local_var->a_obj_ezsigndocumentdependency = a_obj_ezsigndocumentdependency;

    return custom_ezsigndocument_request_local_var;
}


void custom_ezsigndocument_request_free(custom_ezsigndocument_request_t *custom_ezsigndocument_request) {
    if(NULL == custom_ezsigndocument_request){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsigndocument_request->a_obj_ezsigndocumentdependency) {
        list_ForEach(listEntry, custom_ezsigndocument_request->a_obj_ezsigndocumentdependency) {
            ezsigndocumentdependency_request_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsigndocument_request->a_obj_ezsigndocumentdependency);
        custom_ezsigndocument_request->a_obj_ezsigndocumentdependency = NULL;
    }
    free(custom_ezsigndocument_request);
}

cJSON *custom_ezsigndocument_request_convertToJSON(custom_ezsigndocument_request_t *custom_ezsigndocument_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsigndocument_request->pki_ezsigndocument_id
    if (!custom_ezsigndocument_request->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", custom_ezsigndocument_request->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsigndocument_request->a_obj_ezsigndocumentdependency
    if (!custom_ezsigndocument_request->a_obj_ezsigndocumentdependency) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocumentdependency = cJSON_AddArrayToObject(item, "a_objEzsigndocumentdependency");
    if(a_obj_ezsigndocumentdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentdependencyListEntry;
    if (custom_ezsigndocument_request->a_obj_ezsigndocumentdependency) {
    list_ForEach(a_obj_ezsigndocumentdependencyListEntry, custom_ezsigndocument_request->a_obj_ezsigndocumentdependency) {
    cJSON *itemLocal = ezsigndocumentdependency_request_compound_convertToJSON(a_obj_ezsigndocumentdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocumentdependency, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsigndocument_request_t *custom_ezsigndocument_request_parseFromJSON(cJSON *custom_ezsigndocument_requestJSON){

    custom_ezsigndocument_request_t *custom_ezsigndocument_request_local_var = NULL;

    // define the local list for custom_ezsigndocument_request->a_obj_ezsigndocumentdependency
    list_t *a_obj_ezsigndocumentdependencyList = NULL;

    // custom_ezsigndocument_request->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_requestJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // custom_ezsigndocument_request->a_obj_ezsigndocumentdependency
    cJSON *a_obj_ezsigndocumentdependency = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_requestJSON, "a_objEzsigndocumentdependency");
    if (!a_obj_ezsigndocumentdependency) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndocumentdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndocumentdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocumentdependency_local_nonprimitive,a_obj_ezsigndocumentdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocumentdependency_local_nonprimitive)){
            goto end;
        }
        ezsigndocumentdependency_request_compound_t *a_obj_ezsigndocumentdependencyItem = ezsigndocumentdependency_request_compound_parseFromJSON(a_obj_ezsigndocumentdependency_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentdependencyList, a_obj_ezsigndocumentdependencyItem);
    }


    custom_ezsigndocument_request_local_var = custom_ezsigndocument_request_create (
        pki_ezsigndocument_id->valuedouble,
        a_obj_ezsigndocumentdependencyList
        );

    return custom_ezsigndocument_request_local_var;
end:
    if (a_obj_ezsigndocumentdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentdependencyList) {
            ezsigndocumentdependency_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentdependencyList);
        a_obj_ezsigndocumentdependencyList = NULL;
    }
    return NULL;

}
