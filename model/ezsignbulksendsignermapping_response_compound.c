#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_response_compound.h"



ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_local_var = malloc(sizeof(ezsignbulksendsignermapping_response_compound_t));
    if (!ezsignbulksendsignermapping_response_compound_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_response_compound_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_response_compound_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_response_compound_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_response_compound_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;

    return ezsignbulksendsignermapping_response_compound_local_var;
}


void ezsignbulksendsignermapping_response_compound_free(ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound) {
    if(NULL == ezsignbulksendsignermapping_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_response_compound);
}

cJSON *ezsignbulksendsignermapping_response_compound_convertToJSON(ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_response_compound->pki_ezsignbulksendsignermapping_id
    if (!ezsignbulksendsignermapping_response_compound->pki_ezsignbulksendsignermapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", ezsignbulksendsignermapping_response_compound->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response_compound->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_response_compound->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendsignermapping_response_compound->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response_compound->fki_user_id
    if(ezsignbulksendsignermapping_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignbulksendsignermapping_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_parseFromJSON(cJSON *ezsignbulksendsignermapping_response_compoundJSON){

    ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_local_var = NULL;

    // ezsignbulksendsignermapping_response_compound->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_response_compoundJSON, "pkiEzsignbulksendsignermappingID");
    if (!pki_ezsignbulksendsignermapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_response_compound->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_response_compoundJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksendsignermapping_response_compound->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_response_compoundJSON, "sEzsignbulksendsignermappingDescription");
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    ezsignbulksendsignermapping_response_compound_local_var = ezsignbulksendsignermapping_response_compound_create (
        pki_ezsignbulksendsignermapping_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_ezsignbulksendsignermapping_description->valuestring)
        );

    return ezsignbulksendsignermapping_response_compound_local_var;
end:
    return NULL;

}
