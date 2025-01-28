#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_reorder_v1_request.h"



static ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_create_internal(
    list_t *a_pki_ezsignbulksenddocumentmapping_id
    ) {
    ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_local_var = malloc(sizeof(ezsignbulksend_reorder_v1_request_t));
    if (!ezsignbulksend_reorder_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksend_reorder_v1_request_local_var->a_pki_ezsignbulksenddocumentmapping_id = a_pki_ezsignbulksenddocumentmapping_id;

    ezsignbulksend_reorder_v1_request_local_var->_library_owned = 1;
    return ezsignbulksend_reorder_v1_request_local_var;
}

__attribute__((deprecated)) ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_create(
    list_t *a_pki_ezsignbulksenddocumentmapping_id
    ) {
    return ezsignbulksend_reorder_v1_request_create_internal (
        a_pki_ezsignbulksenddocumentmapping_id
        );
}

void ezsignbulksend_reorder_v1_request_free(ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request) {
    if(NULL == ezsignbulksend_reorder_v1_request){
        return ;
    }
    if(ezsignbulksend_reorder_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_reorder_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id) {
        list_ForEach(listEntry, ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id);
        ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    free(ezsignbulksend_reorder_v1_request);
}

cJSON *ezsignbulksend_reorder_v1_request_convertToJSON(ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id
    if (!ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignbulksenddocumentmapping_id = cJSON_AddArrayToObject(item, "a_pkiEzsignbulksenddocumentmappingID");
    if(a_pki_ezsignbulksenddocumentmapping_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignbulksenddocumentmapping_idListEntry;
    list_ForEach(a_pki_ezsignbulksenddocumentmapping_idListEntry, ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignbulksenddocumentmapping_id, "", *(double *)a_pki_ezsignbulksenddocumentmapping_idListEntry->data) == NULL)
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

ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_parseFromJSON(cJSON *ezsignbulksend_reorder_v1_requestJSON){

    ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_local_var = NULL;

    // define the local list for ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id
    list_t *a_pki_ezsignbulksenddocumentmapping_idList = NULL;

    // ezsignbulksend_reorder_v1_request->a_pki_ezsignbulksenddocumentmapping_id
    cJSON *a_pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_reorder_v1_requestJSON, "a_pkiEzsignbulksenddocumentmappingID");
    if (cJSON_IsNull(a_pki_ezsignbulksenddocumentmapping_id)) {
        a_pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    if (!a_pki_ezsignbulksenddocumentmapping_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignbulksenddocumentmapping_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignbulksenddocumentmapping_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignbulksenddocumentmapping_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignbulksenddocumentmapping_id_local, a_pki_ezsignbulksenddocumentmapping_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignbulksenddocumentmapping_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignbulksenddocumentmapping_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignbulksenddocumentmapping_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignbulksenddocumentmapping_id_local_value = a_pki_ezsignbulksenddocumentmapping_id_local->valuedouble;
        list_addElement(a_pki_ezsignbulksenddocumentmapping_idList , a_pki_ezsignbulksenddocumentmapping_id_local_value);
    }


    ezsignbulksend_reorder_v1_request_local_var = ezsignbulksend_reorder_v1_request_create_internal (
        a_pki_ezsignbulksenddocumentmapping_idList
        );

    return ezsignbulksend_reorder_v1_request_local_var;
end:
    if (a_pki_ezsignbulksenddocumentmapping_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignbulksenddocumentmapping_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignbulksenddocumentmapping_idList);
        a_pki_ezsignbulksenddocumentmapping_idList = NULL;
    }
    return NULL;

}
