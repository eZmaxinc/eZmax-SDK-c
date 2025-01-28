#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_response.h"



static ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_create_internal(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_local_var = malloc(sizeof(ezsignbulksendsignermapping_response_t));
    if (!ezsignbulksendsignermapping_response_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_response_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_response_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_response_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_response_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;

    ezsignbulksendsignermapping_response_local_var->_library_owned = 1;
    return ezsignbulksendsignermapping_response_local_var;
}

__attribute__((deprecated)) ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
    ) {
    return ezsignbulksendsignermapping_response_create_internal (
        pki_ezsignbulksendsignermapping_id,
        fki_ezsignbulksend_id,
        fki_user_id,
        s_ezsignbulksendsignermapping_description
        );
}

void ezsignbulksendsignermapping_response_free(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response) {
    if(NULL == ezsignbulksendsignermapping_response){
        return ;
    }
    if(ezsignbulksendsignermapping_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendsignermapping_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_response);
}

cJSON *ezsignbulksendsignermapping_response_convertToJSON(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id
    if (!ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_response->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendsignermapping_response->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response->fki_user_id
    if(ezsignbulksendsignermapping_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignbulksendsignermapping_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_responseJSON){

    ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_local_var = NULL;

    // ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "pkiEzsignbulksendsignermappingID");
    if (cJSON_IsNull(pki_ezsignbulksendsignermapping_id)) {
        pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (!pki_ezsignbulksendsignermapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_response->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "fkiEzsignbulksendID");
    if (cJSON_IsNull(fki_ezsignbulksend_id)) {
        fki_ezsignbulksend_id = NULL;
    }
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "sEzsignbulksendsignermappingDescription");
    if (cJSON_IsNull(s_ezsignbulksendsignermapping_description)) {
        s_ezsignbulksendsignermapping_description = NULL;
    }
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    ezsignbulksendsignermapping_response_local_var = ezsignbulksendsignermapping_response_create_internal (
        pki_ezsignbulksendsignermapping_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_ezsignbulksendsignermapping_description->valuestring)
        );

    return ezsignbulksendsignermapping_response_local_var;
end:
    return NULL;

}
