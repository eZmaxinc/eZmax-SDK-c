#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingcommission_response.h"



static ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_create_internal(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount
    ) {
    ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_local_var = malloc(sizeof(ezmaxinvoicingcommission_response_t));
    if (!ezmaxinvoicingcommission_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingcommission_response_local_var->pki_ezmaxinvoicingcommission_id = pki_ezmaxinvoicingcommission_id;
    ezmaxinvoicingcommission_response_local_var->fki_ezmaxinvoicingsummaryglobal_id = fki_ezmaxinvoicingsummaryglobal_id;
    ezmaxinvoicingcommission_response_local_var->fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    ezmaxinvoicingcommission_response_local_var->fki_ezmaxrepresentative_id = fki_ezmaxrepresentative_id;
    ezmaxinvoicingcommission_response_local_var->dt_ezmaxinvoicingcommission_start = dt_ezmaxinvoicingcommission_start;
    ezmaxinvoicingcommission_response_local_var->dt_ezmaxinvoicingcommission_end = dt_ezmaxinvoicingcommission_end;
    ezmaxinvoicingcommission_response_local_var->i_ezmaxinvoicingcommission_days = i_ezmaxinvoicingcommission_days;
    ezmaxinvoicingcommission_response_local_var->d_ezmaxinvoicingcommission_amount = d_ezmaxinvoicingcommission_amount;

    ezmaxinvoicingcommission_response_local_var->_library_owned = 1;
    return ezmaxinvoicingcommission_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_create(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount
    ) {
    return ezmaxinvoicingcommission_response_create_internal (
        pki_ezmaxinvoicingcommission_id,
        fki_ezmaxinvoicingsummaryglobal_id,
        fki_ezmaxpartner_id,
        fki_ezmaxrepresentative_id,
        dt_ezmaxinvoicingcommission_start,
        dt_ezmaxinvoicingcommission_end,
        i_ezmaxinvoicingcommission_days,
        d_ezmaxinvoicingcommission_amount
        );
}

void ezmaxinvoicingcommission_response_free(ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response) {
    if(NULL == ezmaxinvoicingcommission_response){
        return ;
    }
    if(ezmaxinvoicingcommission_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingcommission_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start) {
        free(ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start);
        ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start = NULL;
    }
    if (ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end) {
        free(ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end);
        ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end = NULL;
    }
    if (ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount) {
        free(ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount);
        ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount = NULL;
    }
    free(ezmaxinvoicingcommission_response);
}

cJSON *ezmaxinvoicingcommission_response_convertToJSON(ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingcommission_response->pki_ezmaxinvoicingcommission_id
    if(ezmaxinvoicingcommission_response->pki_ezmaxinvoicingcommission_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingcommissionID", ezmaxinvoicingcommission_response->pki_ezmaxinvoicingcommission_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response->fki_ezmaxinvoicingsummaryglobal_id
    if(ezmaxinvoicingcommission_response->fki_ezmaxinvoicingsummaryglobal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingsummaryglobalID", ezmaxinvoicingcommission_response->fki_ezmaxinvoicingsummaryglobal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response->fki_ezmaxpartner_id
    if(ezmaxinvoicingcommission_response->fki_ezmaxpartner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpartnerID", ezmaxinvoicingcommission_response->fki_ezmaxpartner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response->fki_ezmaxrepresentative_id
    if(ezmaxinvoicingcommission_response->fki_ezmaxrepresentative_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxrepresentativeID", ezmaxinvoicingcommission_response->fki_ezmaxrepresentative_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start
    if (!ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcommissionStart", ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end
    if (!ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcommissionEnd", ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcommission_response->i_ezmaxinvoicingcommission_days
    if (!ezmaxinvoicingcommission_response->i_ezmaxinvoicingcommission_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingcommissionDays", ezmaxinvoicingcommission_response->i_ezmaxinvoicingcommission_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount
    if (!ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingcommissionAmount", ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_parseFromJSON(cJSON *ezmaxinvoicingcommission_responseJSON){

    ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_local_var = NULL;

    // ezmaxinvoicingcommission_response->pki_ezmaxinvoicingcommission_id
    cJSON *pki_ezmaxinvoicingcommission_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "pkiEzmaxinvoicingcommissionID");
    if (cJSON_IsNull(pki_ezmaxinvoicingcommission_id)) {
        pki_ezmaxinvoicingcommission_id = NULL;
    }
    if (pki_ezmaxinvoicingcommission_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingcommission_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response->fki_ezmaxinvoicingsummaryglobal_id
    cJSON *fki_ezmaxinvoicingsummaryglobal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "fkiEzmaxinvoicingsummaryglobalID");
    if (cJSON_IsNull(fki_ezmaxinvoicingsummaryglobal_id)) {
        fki_ezmaxinvoicingsummaryglobal_id = NULL;
    }
    if (fki_ezmaxinvoicingsummaryglobal_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicingsummaryglobal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response->fki_ezmaxpartner_id
    cJSON *fki_ezmaxpartner_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "fkiEzmaxpartnerID");
    if (cJSON_IsNull(fki_ezmaxpartner_id)) {
        fki_ezmaxpartner_id = NULL;
    }
    if (fki_ezmaxpartner_id) { 
    if(!cJSON_IsNumber(fki_ezmaxpartner_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response->fki_ezmaxrepresentative_id
    cJSON *fki_ezmaxrepresentative_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "fkiEzmaxrepresentativeID");
    if (cJSON_IsNull(fki_ezmaxrepresentative_id)) {
        fki_ezmaxrepresentative_id = NULL;
    }
    if (fki_ezmaxrepresentative_id) { 
    if(!cJSON_IsNumber(fki_ezmaxrepresentative_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_start
    cJSON *dt_ezmaxinvoicingcommission_start = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "dtEzmaxinvoicingcommissionStart");
    if (cJSON_IsNull(dt_ezmaxinvoicingcommission_start)) {
        dt_ezmaxinvoicingcommission_start = NULL;
    }
    if (!dt_ezmaxinvoicingcommission_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcommission_start))
    {
    goto end; //String
    }

    // ezmaxinvoicingcommission_response->dt_ezmaxinvoicingcommission_end
    cJSON *dt_ezmaxinvoicingcommission_end = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "dtEzmaxinvoicingcommissionEnd");
    if (cJSON_IsNull(dt_ezmaxinvoicingcommission_end)) {
        dt_ezmaxinvoicingcommission_end = NULL;
    }
    if (!dt_ezmaxinvoicingcommission_end) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcommission_end))
    {
    goto end; //String
    }

    // ezmaxinvoicingcommission_response->i_ezmaxinvoicingcommission_days
    cJSON *i_ezmaxinvoicingcommission_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "iEzmaxinvoicingcommissionDays");
    if (cJSON_IsNull(i_ezmaxinvoicingcommission_days)) {
        i_ezmaxinvoicingcommission_days = NULL;
    }
    if (!i_ezmaxinvoicingcommission_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingcommission_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingcommission_response->d_ezmaxinvoicingcommission_amount
    cJSON *d_ezmaxinvoicingcommission_amount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_responseJSON, "dEzmaxinvoicingcommissionAmount");
    if (cJSON_IsNull(d_ezmaxinvoicingcommission_amount)) {
        d_ezmaxinvoicingcommission_amount = NULL;
    }
    if (!d_ezmaxinvoicingcommission_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingcommission_amount))
    {
    goto end; //String
    }


    ezmaxinvoicingcommission_response_local_var = ezmaxinvoicingcommission_response_create_internal (
        pki_ezmaxinvoicingcommission_id ? pki_ezmaxinvoicingcommission_id->valuedouble : 0,
        fki_ezmaxinvoicingsummaryglobal_id ? fki_ezmaxinvoicingsummaryglobal_id->valuedouble : 0,
        fki_ezmaxpartner_id ? fki_ezmaxpartner_id->valuedouble : 0,
        fki_ezmaxrepresentative_id ? fki_ezmaxrepresentative_id->valuedouble : 0,
        strdup(dt_ezmaxinvoicingcommission_start->valuestring),
        strdup(dt_ezmaxinvoicingcommission_end->valuestring),
        i_ezmaxinvoicingcommission_days->valuedouble,
        strdup(d_ezmaxinvoicingcommission_amount->valuestring)
        );

    return ezmaxinvoicingcommission_response_local_var;
end:
    return NULL;

}
