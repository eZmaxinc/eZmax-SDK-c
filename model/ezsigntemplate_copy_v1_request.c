#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_copy_v1_request.h"



ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_create(
    list_t *a_fki_ezsignfoldertype_id
    ) {
    ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_local_var = malloc(sizeof(ezsigntemplate_copy_v1_request_t));
    if (!ezsigntemplate_copy_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplate_copy_v1_request_local_var->a_fki_ezsignfoldertype_id = a_fki_ezsignfoldertype_id;

    return ezsigntemplate_copy_v1_request_local_var;
}


void ezsigntemplate_copy_v1_request_free(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request) {
    if(NULL == ezsigntemplate_copy_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
        list_ForEach(listEntry, ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id);
        ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id = NULL;
    }
    free(ezsigntemplate_copy_v1_request);
}

cJSON *ezsigntemplate_copy_v1_request_convertToJSON(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    if (!ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldertype_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldertypeID");
    if(a_fki_ezsignfoldertype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldertype_idListEntry;
    list_ForEach(a_fki_ezsignfoldertype_idListEntry, ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldertype_id, "", *(double *)a_fki_ezsignfoldertype_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_parseFromJSON(cJSON *ezsigntemplate_copy_v1_requestJSON){

    ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_local_var = NULL;

    // define the local list for ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    list_t *a_fki_ezsignfoldertype_idList = NULL;

    // ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    cJSON *a_fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_copy_v1_requestJSON, "a_fkiEzsignfoldertypeID");
    if (!a_fki_ezsignfoldertype_id) {
        goto end;
    }

    
    cJSON *a_fki_ezsignfoldertype_id_local = NULL;
    if(!cJSON_IsArray(a_fki_ezsignfoldertype_id)) {
        goto end;//primitive container
    }
    a_fki_ezsignfoldertype_idList = list_createList();

    cJSON_ArrayForEach(a_fki_ezsignfoldertype_id_local, a_fki_ezsignfoldertype_id)
    {
        if(!cJSON_IsNumber(a_fki_ezsignfoldertype_id_local))
        {
            goto end;
        }
        double *a_fki_ezsignfoldertype_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_ezsignfoldertype_id_local_value)
        {
            goto end;
        }
        *a_fki_ezsignfoldertype_id_local_value = a_fki_ezsignfoldertype_id_local->valuedouble;
        list_addElement(a_fki_ezsignfoldertype_idList , a_fki_ezsignfoldertype_id_local_value);
    }


    ezsigntemplate_copy_v1_request_local_var = ezsigntemplate_copy_v1_request_create (
        a_fki_ezsignfoldertype_idList
        );

    return ezsigntemplate_copy_v1_request_local_var;
end:
    if (a_fki_ezsignfoldertype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_ezsignfoldertype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_ezsignfoldertype_idList);
        a_fki_ezsignfoldertype_idList = NULL;
    }
    return NULL;

}
