#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxmaillinglist_subscribe_v1_request.h"



static ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_create_internal(
    list_t *a_pki_ezmaxmaillinglist_id
    ) {
    ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_local_var = malloc(sizeof(ezmaxmaillinglist_subscribe_v1_request_t));
    if (!ezmaxmaillinglist_subscribe_v1_request_local_var) {
        return NULL;
    }
    memset(ezmaxmaillinglist_subscribe_v1_request_local_var, 0, sizeof(ezmaxmaillinglist_subscribe_v1_request_t));
    ezmaxmaillinglist_subscribe_v1_request_local_var->_library_owned = 1;
    ezmaxmaillinglist_subscribe_v1_request_local_var->a_pki_ezmaxmaillinglist_id = a_pki_ezmaxmaillinglist_id;
    return ezmaxmaillinglist_subscribe_v1_request_local_var;
}

__attribute__((deprecated)) ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_create(
    list_t *a_pki_ezmaxmaillinglist_id
    ) {
    ezmaxmaillinglist_subscribe_v1_request_t *result = ezmaxmaillinglist_subscribe_v1_request_create_internal (
        a_pki_ezmaxmaillinglist_id
        );
    if (!result) {
    }
    return result;
}

void ezmaxmaillinglist_subscribe_v1_request_free(ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request) {
    if(NULL == ezmaxmaillinglist_subscribe_v1_request){
        return ;
    }
    if(ezmaxmaillinglist_subscribe_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxmaillinglist_subscribe_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id) {
        list_ForEach(listEntry, ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id) {
            free(listEntry->data);
        }
        list_freeList(ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id);
        ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id = NULL;
    }
    free(ezmaxmaillinglist_subscribe_v1_request);
}

cJSON *ezmaxmaillinglist_subscribe_v1_request_convertToJSON(ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id
    if (!ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id) {
        goto fail;
    }
    cJSON *a_pki_ezmaxmaillinglist_id = cJSON_AddArrayToObject(item, "a_pkiEzmaxmaillinglistID");
    if(a_pki_ezmaxmaillinglist_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezmaxmaillinglist_idListEntry;
    list_ForEach(a_pki_ezmaxmaillinglist_idListEntry, ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id) {
    if(cJSON_AddNumberToObject(a_pki_ezmaxmaillinglist_id, "", *(double *)a_pki_ezmaxmaillinglist_idListEntry->data) == NULL)
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

ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_parseFromJSON(cJSON *ezmaxmaillinglist_subscribe_v1_requestJSON){

    ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_local_var = NULL;

    // define the local list for ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id
    list_t *a_pki_ezmaxmaillinglist_idList = NULL;

    // ezmaxmaillinglist_subscribe_v1_request->a_pki_ezmaxmaillinglist_id
    cJSON *a_pki_ezmaxmaillinglist_id = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_subscribe_v1_requestJSON, "a_pkiEzmaxmaillinglistID");
    if (cJSON_IsNull(a_pki_ezmaxmaillinglist_id)) {
        a_pki_ezmaxmaillinglist_id = NULL;
    }
    if (!a_pki_ezmaxmaillinglist_id) {
        goto end;
    }

    
    cJSON *a_pki_ezmaxmaillinglist_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezmaxmaillinglist_id)) {
        goto end;//primitive container
    }
    a_pki_ezmaxmaillinglist_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezmaxmaillinglist_id_local, a_pki_ezmaxmaillinglist_id)
    {
        if(!cJSON_IsNumber(a_pki_ezmaxmaillinglist_id_local))
        {
            goto end;
        }
        double *a_pki_ezmaxmaillinglist_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezmaxmaillinglist_id_local_value)
        {
            goto end;
        }
        *a_pki_ezmaxmaillinglist_id_local_value = a_pki_ezmaxmaillinglist_id_local->valuedouble;
        list_addElement(a_pki_ezmaxmaillinglist_idList , a_pki_ezmaxmaillinglist_id_local_value);
    }



    ezmaxmaillinglist_subscribe_v1_request_local_var = ezmaxmaillinglist_subscribe_v1_request_create_internal (
        a_pki_ezmaxmaillinglist_idList
        );

    if (!ezmaxmaillinglist_subscribe_v1_request_local_var) {
        goto end;
    }

    return ezmaxmaillinglist_subscribe_v1_request_local_var;
end:
    if (a_pki_ezmaxmaillinglist_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezmaxmaillinglist_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezmaxmaillinglist_idList);
        a_pki_ezmaxmaillinglist_idList = NULL;
    }
    return NULL;

}
