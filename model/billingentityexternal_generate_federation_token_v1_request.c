#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_generate_federation_token_v1_request.h"



static billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_create_internal(
    char *fks_ezmaxcustomer_code
    ) {
    billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_local_var = malloc(sizeof(billingentityexternal_generate_federation_token_v1_request_t));
    if (!billingentityexternal_generate_federation_token_v1_request_local_var) {
        return NULL;
    }
    memset(billingentityexternal_generate_federation_token_v1_request_local_var, 0, sizeof(billingentityexternal_generate_federation_token_v1_request_t));
    billingentityexternal_generate_federation_token_v1_request_local_var->_library_owned = 1;
    billingentityexternal_generate_federation_token_v1_request_local_var->fks_ezmaxcustomer_code = fks_ezmaxcustomer_code;
    return billingentityexternal_generate_federation_token_v1_request_local_var;
}

__attribute__((deprecated)) billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_create(
    char *fks_ezmaxcustomer_code
    ) {
    billingentityexternal_generate_federation_token_v1_request_t *result = billingentityexternal_generate_federation_token_v1_request_create_internal (
        fks_ezmaxcustomer_code
        );
    if (!result) {
    }
    return result;
}

void billingentityexternal_generate_federation_token_v1_request_free(billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request) {
    if(NULL == billingentityexternal_generate_federation_token_v1_request){
        return ;
    }
    if(billingentityexternal_generate_federation_token_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityexternal_generate_federation_token_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code) {
        free(billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code);
        billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code = NULL;
    }
    free(billingentityexternal_generate_federation_token_v1_request);
}

cJSON *billingentityexternal_generate_federation_token_v1_request_convertToJSON(billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code
    if (!billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fksEzmaxcustomerCode", billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_parseFromJSON(cJSON *billingentityexternal_generate_federation_token_v1_requestJSON){

    billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_local_var = NULL;

    char *fks_ezmaxcustomer_code_local_str = NULL;

    // billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code
    cJSON *fks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(billingentityexternal_generate_federation_token_v1_requestJSON, "fksEzmaxcustomerCode");
    if (cJSON_IsNull(fks_ezmaxcustomer_code)) {
        fks_ezmaxcustomer_code = NULL;
    }
    if (!fks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(fks_ezmaxcustomer_code))
    {
    goto end; //String
    }


    if (fks_ezmaxcustomer_code && !cJSON_IsNull(fks_ezmaxcustomer_code)) fks_ezmaxcustomer_code_local_str = strdup(fks_ezmaxcustomer_code->valuestring);

    billingentityexternal_generate_federation_token_v1_request_local_var = billingentityexternal_generate_federation_token_v1_request_create_internal (
        fks_ezmaxcustomer_code_local_str
        );

    if (!billingentityexternal_generate_federation_token_v1_request_local_var) {
        goto end;
    }

    return billingentityexternal_generate_federation_token_v1_request_local_var;
end:
    if (fks_ezmaxcustomer_code_local_str) {
        free(fks_ezmaxcustomer_code_local_str);
        fks_ezmaxcustomer_code_local_str = NULL;
    }
    return NULL;

}
