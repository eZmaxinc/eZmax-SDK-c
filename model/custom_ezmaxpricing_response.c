#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxpricing_response.h"



static custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_create_internal(
    int pki_ezmaxpricing_id,
    char *d_ezmaxpricing_rebateezsignallagents,
    char *dt_ezmaxpricing_start,
    char *dt_ezmaxpricing_end
    ) {
    custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_local_var = malloc(sizeof(custom_ezmaxpricing_response_t));
    if (!custom_ezmaxpricing_response_local_var) {
        return NULL;
    }
    custom_ezmaxpricing_response_local_var->pki_ezmaxpricing_id = pki_ezmaxpricing_id;
    custom_ezmaxpricing_response_local_var->d_ezmaxpricing_rebateezsignallagents = d_ezmaxpricing_rebateezsignallagents;
    custom_ezmaxpricing_response_local_var->dt_ezmaxpricing_start = dt_ezmaxpricing_start;
    custom_ezmaxpricing_response_local_var->dt_ezmaxpricing_end = dt_ezmaxpricing_end;

    custom_ezmaxpricing_response_local_var->_library_owned = 1;
    return custom_ezmaxpricing_response_local_var;
}

__attribute__((deprecated)) custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_create(
    int pki_ezmaxpricing_id,
    char *d_ezmaxpricing_rebateezsignallagents,
    char *dt_ezmaxpricing_start,
    char *dt_ezmaxpricing_end
    ) {
    return custom_ezmaxpricing_response_create_internal (
        pki_ezmaxpricing_id,
        d_ezmaxpricing_rebateezsignallagents,
        dt_ezmaxpricing_start,
        dt_ezmaxpricing_end
        );
}

void custom_ezmaxpricing_response_free(custom_ezmaxpricing_response_t *custom_ezmaxpricing_response) {
    if(NULL == custom_ezmaxpricing_response){
        return ;
    }
    if(custom_ezmaxpricing_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezmaxpricing_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents) {
        free(custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents);
        custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents = NULL;
    }
    if (custom_ezmaxpricing_response->dt_ezmaxpricing_start) {
        free(custom_ezmaxpricing_response->dt_ezmaxpricing_start);
        custom_ezmaxpricing_response->dt_ezmaxpricing_start = NULL;
    }
    if (custom_ezmaxpricing_response->dt_ezmaxpricing_end) {
        free(custom_ezmaxpricing_response->dt_ezmaxpricing_end);
        custom_ezmaxpricing_response->dt_ezmaxpricing_end = NULL;
    }
    free(custom_ezmaxpricing_response);
}

cJSON *custom_ezmaxpricing_response_convertToJSON(custom_ezmaxpricing_response_t *custom_ezmaxpricing_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxpricing_response->pki_ezmaxpricing_id
    if (!custom_ezmaxpricing_response->pki_ezmaxpricing_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxpricingID", custom_ezmaxpricing_response->pki_ezmaxpricing_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents
    if (!custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxpricingRebateezsignallagents", custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpricing_response->dt_ezmaxpricing_start
    if (!custom_ezmaxpricing_response->dt_ezmaxpricing_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxpricingStart", custom_ezmaxpricing_response->dt_ezmaxpricing_start) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpricing_response->dt_ezmaxpricing_end
    if(custom_ezmaxpricing_response->dt_ezmaxpricing_end) {
    if(cJSON_AddStringToObject(item, "dtEzmaxpricingEnd", custom_ezmaxpricing_response->dt_ezmaxpricing_end) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_parseFromJSON(cJSON *custom_ezmaxpricing_responseJSON){

    custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_local_var = NULL;

    // custom_ezmaxpricing_response->pki_ezmaxpricing_id
    cJSON *pki_ezmaxpricing_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpricing_responseJSON, "pkiEzmaxpricingID");
    if (cJSON_IsNull(pki_ezmaxpricing_id)) {
        pki_ezmaxpricing_id = NULL;
    }
    if (!pki_ezmaxpricing_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxpricing_id))
    {
    goto end; //Numeric
    }

    // custom_ezmaxpricing_response->d_ezmaxpricing_rebateezsignallagents
    cJSON *d_ezmaxpricing_rebateezsignallagents = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpricing_responseJSON, "dEzmaxpricingRebateezsignallagents");
    if (cJSON_IsNull(d_ezmaxpricing_rebateezsignallagents)) {
        d_ezmaxpricing_rebateezsignallagents = NULL;
    }
    if (!d_ezmaxpricing_rebateezsignallagents) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxpricing_rebateezsignallagents))
    {
    goto end; //String
    }

    // custom_ezmaxpricing_response->dt_ezmaxpricing_start
    cJSON *dt_ezmaxpricing_start = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpricing_responseJSON, "dtEzmaxpricingStart");
    if (cJSON_IsNull(dt_ezmaxpricing_start)) {
        dt_ezmaxpricing_start = NULL;
    }
    if (!dt_ezmaxpricing_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxpricing_start))
    {
    goto end; //String
    }

    // custom_ezmaxpricing_response->dt_ezmaxpricing_end
    cJSON *dt_ezmaxpricing_end = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpricing_responseJSON, "dtEzmaxpricingEnd");
    if (cJSON_IsNull(dt_ezmaxpricing_end)) {
        dt_ezmaxpricing_end = NULL;
    }
    if (dt_ezmaxpricing_end) { 
    if(!cJSON_IsString(dt_ezmaxpricing_end) && !cJSON_IsNull(dt_ezmaxpricing_end))
    {
    goto end; //String
    }
    }


    custom_ezmaxpricing_response_local_var = custom_ezmaxpricing_response_create_internal (
        pki_ezmaxpricing_id->valuedouble,
        strdup(d_ezmaxpricing_rebateezsignallagents->valuestring),
        strdup(dt_ezmaxpricing_start->valuestring),
        dt_ezmaxpricing_end && !cJSON_IsNull(dt_ezmaxpricing_end) ? strdup(dt_ezmaxpricing_end->valuestring) : NULL
        );

    return custom_ezmaxpricing_response_local_var;
end:
    return NULL;

}
