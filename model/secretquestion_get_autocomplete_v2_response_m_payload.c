#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "secretquestion_get_autocomplete_v2_response_m_payload.h"



secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_secretquestion
    ) {
    secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(secretquestion_get_autocomplete_v2_response_m_payload_t));
    if (!secretquestion_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    secretquestion_get_autocomplete_v2_response_m_payload_local_var->a_obj_secretquestion = a_obj_secretquestion;

    return secretquestion_get_autocomplete_v2_response_m_payload_local_var;
}


void secretquestion_get_autocomplete_v2_response_m_payload_free(secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload) {
    if(NULL == secretquestion_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion) {
        list_ForEach(listEntry, secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion) {
            secretquestion_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion);
        secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion = NULL;
    }
    free(secretquestion_get_autocomplete_v2_response_m_payload);
}

cJSON *secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion
    if (!secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion) {
        goto fail;
    }
    cJSON *a_obj_secretquestion = cJSON_AddArrayToObject(item, "a_objSecretquestion");
    if(a_obj_secretquestion == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_secretquestionListEntry;
    if (secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion) {
    list_ForEach(a_obj_secretquestionListEntry, secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion) {
    cJSON *itemLocal = secretquestion_autocomplete_element_response_convertToJSON(a_obj_secretquestionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_secretquestion, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_response_m_payloadJSON){

    secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion
    list_t *a_obj_secretquestionList = NULL;

    // secretquestion_get_autocomplete_v2_response_m_payload->a_obj_secretquestion
    cJSON *a_obj_secretquestion = cJSON_GetObjectItemCaseSensitive(secretquestion_get_autocomplete_v2_response_m_payloadJSON, "a_objSecretquestion");
    if (!a_obj_secretquestion) {
        goto end;
    }

    
    cJSON *a_obj_secretquestion_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_secretquestion)){
        goto end; //nonprimitive container
    }

    a_obj_secretquestionList = list_createList();

    cJSON_ArrayForEach(a_obj_secretquestion_local_nonprimitive,a_obj_secretquestion )
    {
        if(!cJSON_IsObject(a_obj_secretquestion_local_nonprimitive)){
            goto end;
        }
        secretquestion_autocomplete_element_response_t *a_obj_secretquestionItem = secretquestion_autocomplete_element_response_parseFromJSON(a_obj_secretquestion_local_nonprimitive);

        list_addElement(a_obj_secretquestionList, a_obj_secretquestionItem);
    }


    secretquestion_get_autocomplete_v2_response_m_payload_local_var = secretquestion_get_autocomplete_v2_response_m_payload_create (
        a_obj_secretquestionList
        );

    return secretquestion_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_secretquestionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_secretquestionList) {
            secretquestion_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_secretquestionList);
        a_obj_secretquestionList = NULL;
    }
    return NULL;

}
