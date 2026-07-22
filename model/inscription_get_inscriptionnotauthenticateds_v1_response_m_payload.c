#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_inscriptionnotauthenticateds_v1_response_m_payload.h"



static inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_create_internal(
    list_t *a_obj_inscriptionnotauthenticated
    ) {
    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t));
    if (!inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var, 0, sizeof(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t));
    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var->_library_owned = 1;
    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var->a_obj_inscriptionnotauthenticated = a_obj_inscriptionnotauthenticated;
    return inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_create(
    list_t *a_obj_inscriptionnotauthenticated
    ) {
    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *result = inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_create_internal (
        a_obj_inscriptionnotauthenticated
        );
    if (!result) {
    }
    return result;
}

void inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_free(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload) {
    if(NULL == inscription_get_inscriptionnotauthenticateds_v1_response_m_payload){
        return ;
    }
    if(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
        list_ForEach(listEntry, inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
            inscriptionnotauthenticated_response_compound_free(listEntry->data);
        }
        list_freeList(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated);
        inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated = NULL;
    }
    free(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload);
}

cJSON *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_convertToJSON(inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    if (!inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
        goto fail;
    }
    cJSON *a_obj_inscriptionnotauthenticated = cJSON_AddArrayToObject(item, "a_objInscriptionnotauthenticated");
    if(a_obj_inscriptionnotauthenticated == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionnotauthenticatedListEntry;
    if (inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
    list_ForEach(a_obj_inscriptionnotauthenticatedListEntry, inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
    cJSON *itemLocal = inscriptionnotauthenticated_response_compound_convertToJSON(a_obj_inscriptionnotauthenticatedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptionnotauthenticated, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_inscriptionnotauthenticateds_v1_response_m_payloadJSON){

    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_t *inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var = NULL;

    // define the local list for inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    list_t *a_obj_inscriptionnotauthenticatedList = NULL;

    // inscription_get_inscriptionnotauthenticateds_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    cJSON *a_obj_inscriptionnotauthenticated = cJSON_GetObjectItemCaseSensitive(inscription_get_inscriptionnotauthenticateds_v1_response_m_payloadJSON, "a_objInscriptionnotauthenticated");
    if (cJSON_IsNull(a_obj_inscriptionnotauthenticated)) {
        a_obj_inscriptionnotauthenticated = NULL;
    }
    if (!a_obj_inscriptionnotauthenticated) {
        goto end;
    }

    
    cJSON *a_obj_inscriptionnotauthenticated_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptionnotauthenticated)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionnotauthenticatedList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptionnotauthenticated_local_nonprimitive,a_obj_inscriptionnotauthenticated )
    {
        if(!cJSON_IsObject(a_obj_inscriptionnotauthenticated_local_nonprimitive)){
            goto end;
        }
        inscriptionnotauthenticated_response_compound_t *a_obj_inscriptionnotauthenticatedItem = inscriptionnotauthenticated_response_compound_parseFromJSON(a_obj_inscriptionnotauthenticated_local_nonprimitive);

        list_addElement(a_obj_inscriptionnotauthenticatedList, a_obj_inscriptionnotauthenticatedItem);
    }



    inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var = inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_create_internal (
        a_obj_inscriptionnotauthenticatedList
        );

    if (!inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscription_get_inscriptionnotauthenticateds_v1_response_m_payload_local_var;
end:
    if (a_obj_inscriptionnotauthenticatedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionnotauthenticatedList) {
            inscriptionnotauthenticated_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionnotauthenticatedList);
        a_obj_inscriptionnotauthenticatedList = NULL;
    }
    return NULL;

}
