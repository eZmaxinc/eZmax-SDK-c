#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "period_autocomplete_element_response.h"



static period_autocomplete_element_response_t *period_autocomplete_element_response_create_internal(
    char *s_period_yyyymm,
    int pki_period_id,
    int b_period_isactive
    ) {
    period_autocomplete_element_response_t *period_autocomplete_element_response_local_var = malloc(sizeof(period_autocomplete_element_response_t));
    if (!period_autocomplete_element_response_local_var) {
        return NULL;
    }
    period_autocomplete_element_response_local_var->s_period_yyyymm = s_period_yyyymm;
    period_autocomplete_element_response_local_var->pki_period_id = pki_period_id;
    period_autocomplete_element_response_local_var->b_period_isactive = b_period_isactive;

    period_autocomplete_element_response_local_var->_library_owned = 1;
    return period_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) period_autocomplete_element_response_t *period_autocomplete_element_response_create(
    char *s_period_yyyymm,
    int pki_period_id,
    int b_period_isactive
    ) {
    return period_autocomplete_element_response_create_internal (
        s_period_yyyymm,
        pki_period_id,
        b_period_isactive
        );
}

void period_autocomplete_element_response_free(period_autocomplete_element_response_t *period_autocomplete_element_response) {
    if(NULL == period_autocomplete_element_response){
        return ;
    }
    if(period_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "period_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (period_autocomplete_element_response->s_period_yyyymm) {
        free(period_autocomplete_element_response->s_period_yyyymm);
        period_autocomplete_element_response->s_period_yyyymm = NULL;
    }
    free(period_autocomplete_element_response);
}

cJSON *period_autocomplete_element_response_convertToJSON(period_autocomplete_element_response_t *period_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // period_autocomplete_element_response->s_period_yyyymm
    if (!period_autocomplete_element_response->s_period_yyyymm) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", period_autocomplete_element_response->s_period_yyyymm) == NULL) {
    goto fail; //String
    }


    // period_autocomplete_element_response->pki_period_id
    if (!period_autocomplete_element_response->pki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPeriodID", period_autocomplete_element_response->pki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // period_autocomplete_element_response->b_period_isactive
    if (!period_autocomplete_element_response->b_period_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPeriodIsactive", period_autocomplete_element_response->b_period_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

period_autocomplete_element_response_t *period_autocomplete_element_response_parseFromJSON(cJSON *period_autocomplete_element_responseJSON){

    period_autocomplete_element_response_t *period_autocomplete_element_response_local_var = NULL;

    // period_autocomplete_element_response->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(period_autocomplete_element_responseJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (!s_period_yyyymm) {
        goto end;
    }

    
    if(!cJSON_IsString(s_period_yyyymm))
    {
    goto end; //String
    }

    // period_autocomplete_element_response->pki_period_id
    cJSON *pki_period_id = cJSON_GetObjectItemCaseSensitive(period_autocomplete_element_responseJSON, "pkiPeriodID");
    if (cJSON_IsNull(pki_period_id)) {
        pki_period_id = NULL;
    }
    if (!pki_period_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_period_id))
    {
    goto end; //Numeric
    }

    // period_autocomplete_element_response->b_period_isactive
    cJSON *b_period_isactive = cJSON_GetObjectItemCaseSensitive(period_autocomplete_element_responseJSON, "bPeriodIsactive");
    if (cJSON_IsNull(b_period_isactive)) {
        b_period_isactive = NULL;
    }
    if (!b_period_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_period_isactive))
    {
    goto end; //Bool
    }


    period_autocomplete_element_response_local_var = period_autocomplete_element_response_create_internal (
        strdup(s_period_yyyymm->valuestring),
        pki_period_id->valuedouble,
        b_period_isactive->valueint
        );

    return period_autocomplete_element_response_local_var;
end:
    return NULL;

}
