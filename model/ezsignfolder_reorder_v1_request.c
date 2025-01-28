#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_reorder_v1_request.h"



static ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_create_internal(
    list_t *a_pki_ezsigndocument_id
    ) {
    ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_local_var = malloc(sizeof(ezsignfolder_reorder_v1_request_t));
    if (!ezsignfolder_reorder_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_reorder_v1_request_local_var->a_pki_ezsigndocument_id = a_pki_ezsigndocument_id;

    ezsignfolder_reorder_v1_request_local_var->_library_owned = 1;
    return ezsignfolder_reorder_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_create(
    list_t *a_pki_ezsigndocument_id
    ) {
    return ezsignfolder_reorder_v1_request_create_internal (
        a_pki_ezsigndocument_id
        );
}

void ezsignfolder_reorder_v1_request_free(ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request) {
    if(NULL == ezsignfolder_reorder_v1_request){
        return ;
    }
    if(ezsignfolder_reorder_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_reorder_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id) {
        list_ForEach(listEntry, ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id);
        ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id = NULL;
    }
    free(ezsignfolder_reorder_v1_request);
}

cJSON *ezsignfolder_reorder_v1_request_convertToJSON(ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id
    if (!ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigndocument_id = cJSON_AddArrayToObject(item, "a_pkiEzsigndocumentID");
    if(a_pki_ezsigndocument_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigndocument_idListEntry;
    list_ForEach(a_pki_ezsigndocument_idListEntry, ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigndocument_id, "", *(double *)a_pki_ezsigndocument_idListEntry->data) == NULL)
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

ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_parseFromJSON(cJSON *ezsignfolder_reorder_v1_requestJSON){

    ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_local_var = NULL;

    // define the local list for ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id
    list_t *a_pki_ezsigndocument_idList = NULL;

    // ezsignfolder_reorder_v1_request->a_pki_ezsigndocument_id
    cJSON *a_pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_reorder_v1_requestJSON, "a_pkiEzsigndocumentID");
    if (cJSON_IsNull(a_pki_ezsigndocument_id)) {
        a_pki_ezsigndocument_id = NULL;
    }
    if (!a_pki_ezsigndocument_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigndocument_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigndocument_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigndocument_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigndocument_id_local, a_pki_ezsigndocument_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigndocument_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigndocument_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigndocument_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigndocument_id_local_value = a_pki_ezsigndocument_id_local->valuedouble;
        list_addElement(a_pki_ezsigndocument_idList , a_pki_ezsigndocument_id_local_value);
    }


    ezsignfolder_reorder_v1_request_local_var = ezsignfolder_reorder_v1_request_create_internal (
        a_pki_ezsigndocument_idList
        );

    return ezsignfolder_reorder_v1_request_local_var;
end:
    if (a_pki_ezsigndocument_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigndocument_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigndocument_idList);
        a_pki_ezsigndocument_idList = NULL;
    }
    return NULL;

}
