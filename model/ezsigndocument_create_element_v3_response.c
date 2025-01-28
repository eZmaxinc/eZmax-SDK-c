#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_create_element_v3_response.h"



static ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_create_internal(
    int pki_ezsigndocument_id,
    list_t *a_obj_matchingtemplate
    ) {
    ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_local_var = malloc(sizeof(ezsigndocument_create_element_v3_response_t));
    if (!ezsigndocument_create_element_v3_response_local_var) {
        return NULL;
    }
    ezsigndocument_create_element_v3_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_create_element_v3_response_local_var->a_obj_matchingtemplate = a_obj_matchingtemplate;

    ezsigndocument_create_element_v3_response_local_var->_library_owned = 1;
    return ezsigndocument_create_element_v3_response_local_var;
}

__attribute__((deprecated)) ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_create(
    int pki_ezsigndocument_id,
    list_t *a_obj_matchingtemplate
    ) {
    return ezsigndocument_create_element_v3_response_create_internal (
        pki_ezsigndocument_id,
        a_obj_matchingtemplate
        );
}

void ezsigndocument_create_element_v3_response_free(ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response) {
    if(NULL == ezsigndocument_create_element_v3_response){
        return ;
    }
    if(ezsigndocument_create_element_v3_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_create_element_v3_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_create_element_v3_response->a_obj_matchingtemplate) {
        list_ForEach(listEntry, ezsigndocument_create_element_v3_response->a_obj_matchingtemplate) {
            ezsigndocument_matchingtemplate_v3_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_create_element_v3_response->a_obj_matchingtemplate);
        ezsigndocument_create_element_v3_response->a_obj_matchingtemplate = NULL;
    }
    free(ezsigndocument_create_element_v3_response);
}

cJSON *ezsigndocument_create_element_v3_response_convertToJSON(ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_create_element_v3_response->pki_ezsigndocument_id
    if (!ezsigndocument_create_element_v3_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_create_element_v3_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_create_element_v3_response->a_obj_matchingtemplate
    if (!ezsigndocument_create_element_v3_response->a_obj_matchingtemplate) {
        goto fail;
    }
    cJSON *a_obj_matchingtemplate = cJSON_AddArrayToObject(item, "a_objMatchingtemplate");
    if(a_obj_matchingtemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_matchingtemplateListEntry;
    if (ezsigndocument_create_element_v3_response->a_obj_matchingtemplate) {
    list_ForEach(a_obj_matchingtemplateListEntry, ezsigndocument_create_element_v3_response->a_obj_matchingtemplate) {
    cJSON *itemLocal = ezsigndocument_matchingtemplate_v3_response_convertToJSON(a_obj_matchingtemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_matchingtemplate, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_parseFromJSON(cJSON *ezsigndocument_create_element_v3_responseJSON){

    ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_local_var = NULL;

    // define the local list for ezsigndocument_create_element_v3_response->a_obj_matchingtemplate
    list_t *a_obj_matchingtemplateList = NULL;

    // ezsigndocument_create_element_v3_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_element_v3_responseJSON, "pkiEzsigndocumentID");
    if (cJSON_IsNull(pki_ezsigndocument_id)) {
        pki_ezsigndocument_id = NULL;
    }
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_create_element_v3_response->a_obj_matchingtemplate
    cJSON *a_obj_matchingtemplate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_element_v3_responseJSON, "a_objMatchingtemplate");
    if (cJSON_IsNull(a_obj_matchingtemplate)) {
        a_obj_matchingtemplate = NULL;
    }
    if (!a_obj_matchingtemplate) {
        goto end;
    }

    
    cJSON *a_obj_matchingtemplate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_matchingtemplate)){
        goto end; //nonprimitive container
    }

    a_obj_matchingtemplateList = list_createList();

    cJSON_ArrayForEach(a_obj_matchingtemplate_local_nonprimitive,a_obj_matchingtemplate )
    {
        if(!cJSON_IsObject(a_obj_matchingtemplate_local_nonprimitive)){
            goto end;
        }
        ezsigndocument_matchingtemplate_v3_response_t *a_obj_matchingtemplateItem = ezsigndocument_matchingtemplate_v3_response_parseFromJSON(a_obj_matchingtemplate_local_nonprimitive);

        list_addElement(a_obj_matchingtemplateList, a_obj_matchingtemplateItem);
    }


    ezsigndocument_create_element_v3_response_local_var = ezsigndocument_create_element_v3_response_create_internal (
        pki_ezsigndocument_id->valuedouble,
        a_obj_matchingtemplateList
        );

    return ezsigndocument_create_element_v3_response_local_var;
end:
    if (a_obj_matchingtemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_matchingtemplateList) {
            ezsigndocument_matchingtemplate_v3_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_matchingtemplateList);
        a_obj_matchingtemplateList = NULL;
    }
    return NULL;

}
