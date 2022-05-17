#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_request.h"



ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_local_var = malloc(sizeof(ezsignbulksendsignermapping_request_t));
    if (!ezsignbulksendsignermapping_request_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_request_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_request_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_request_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_request_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;

    return ezsignbulksendsignermapping_request_local_var;
}


void ezsignbulksendsignermapping_request_free(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request) {
    if(NULL == ezsignbulksendsignermapping_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_request);
}

cJSON *ezsignbulksendsignermapping_request_convertToJSON(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id
    if(ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_request->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendsignermapping_request->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_request->fki_user_id
    if(ezsignbulksendsignermapping_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignbulksendsignermapping_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_requestJSON){

    ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_local_var = NULL;

    // ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "pkiEzsignbulksendsignermappingID");
    if (pki_ezsignbulksendsignermapping_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksendsignermapping_request->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "sEzsignbulksendsignermappingDescription");
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    ezsignbulksendsignermapping_request_local_var = ezsignbulksendsignermapping_request_create (
        pki_ezsignbulksendsignermapping_id ? pki_ezsignbulksendsignermapping_id->valuedouble : 0,
        fki_ezsignbulksend_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_ezsignbulksendsignermapping_description->valuestring)
        );

    return ezsignbulksendsignermapping_request_local_var;
end:
    return NULL;

}
