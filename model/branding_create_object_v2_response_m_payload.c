#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_create_object_v2_response_m_payload.h"



static branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_create_internal(
    list_t *a_pki_branding_id
    ) {
    branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_local_var = malloc(sizeof(branding_create_object_v2_response_m_payload_t));
    if (!branding_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    branding_create_object_v2_response_m_payload_local_var->a_pki_branding_id = a_pki_branding_id;

    branding_create_object_v2_response_m_payload_local_var->_library_owned = 1;
    return branding_create_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_create(
    list_t *a_pki_branding_id
    ) {
    return branding_create_object_v2_response_m_payload_create_internal (
        a_pki_branding_id
        );
}

void branding_create_object_v2_response_m_payload_free(branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload) {
    if(NULL == branding_create_object_v2_response_m_payload){
        return ;
    }
    if(branding_create_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_create_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_create_object_v2_response_m_payload->a_pki_branding_id) {
        list_ForEach(listEntry, branding_create_object_v2_response_m_payload->a_pki_branding_id) {
            free(listEntry->data);
        }
        list_freeList(branding_create_object_v2_response_m_payload->a_pki_branding_id);
        branding_create_object_v2_response_m_payload->a_pki_branding_id = NULL;
    }
    free(branding_create_object_v2_response_m_payload);
}

cJSON *branding_create_object_v2_response_m_payload_convertToJSON(branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // branding_create_object_v2_response_m_payload->a_pki_branding_id
    if (!branding_create_object_v2_response_m_payload->a_pki_branding_id) {
        goto fail;
    }
    cJSON *a_pki_branding_id = cJSON_AddArrayToObject(item, "a_pkiBrandingID");
    if(a_pki_branding_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_branding_idListEntry;
    list_ForEach(a_pki_branding_idListEntry, branding_create_object_v2_response_m_payload->a_pki_branding_id) {
    if(cJSON_AddNumberToObject(a_pki_branding_id, "", *(double *)a_pki_branding_idListEntry->data) == NULL)
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

branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_parseFromJSON(cJSON *branding_create_object_v2_response_m_payloadJSON){

    branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for branding_create_object_v2_response_m_payload->a_pki_branding_id
    list_t *a_pki_branding_idList = NULL;

    // branding_create_object_v2_response_m_payload->a_pki_branding_id
    cJSON *a_pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_create_object_v2_response_m_payloadJSON, "a_pkiBrandingID");
    if (cJSON_IsNull(a_pki_branding_id)) {
        a_pki_branding_id = NULL;
    }
    if (!a_pki_branding_id) {
        goto end;
    }

    
    cJSON *a_pki_branding_id_local = NULL;
    if(!cJSON_IsArray(a_pki_branding_id)) {
        goto end;//primitive container
    }
    a_pki_branding_idList = list_createList();

    cJSON_ArrayForEach(a_pki_branding_id_local, a_pki_branding_id)
    {
        if(!cJSON_IsNumber(a_pki_branding_id_local))
        {
            goto end;
        }
        double *a_pki_branding_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_branding_id_local_value)
        {
            goto end;
        }
        *a_pki_branding_id_local_value = a_pki_branding_id_local->valuedouble;
        list_addElement(a_pki_branding_idList , a_pki_branding_id_local_value);
    }


    branding_create_object_v2_response_m_payload_local_var = branding_create_object_v2_response_m_payload_create_internal (
        a_pki_branding_idList
        );

    return branding_create_object_v2_response_m_payload_local_var;
end:
    if (a_pki_branding_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_branding_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_branding_idList);
        a_pki_branding_idList = NULL;
    }
    return NULL;

}
