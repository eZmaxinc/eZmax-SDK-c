#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_generate_federation_token_v1_request.h"



billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_create(
    char *fks_ezmaxcustomer_code
    ) {
    billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_local_var = malloc(sizeof(billingentityexternal_generate_federation_token_v1_request_t));
    if (!billingentityexternal_generate_federation_token_v1_request_local_var) {
        return NULL;
    }
    billingentityexternal_generate_federation_token_v1_request_local_var->fks_ezmaxcustomer_code = fks_ezmaxcustomer_code;

    return billingentityexternal_generate_federation_token_v1_request_local_var;
}


void billingentityexternal_generate_federation_token_v1_request_free(billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request) {
    if(NULL == billingentityexternal_generate_federation_token_v1_request){
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

    // billingentityexternal_generate_federation_token_v1_request->fks_ezmaxcustomer_code
    cJSON *fks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(billingentityexternal_generate_federation_token_v1_requestJSON, "fksEzmaxcustomerCode");
    if (!fks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(fks_ezmaxcustomer_code))
    {
    goto end; //String
    }


    billingentityexternal_generate_federation_token_v1_request_local_var = billingentityexternal_generate_federation_token_v1_request_create (
        strdup(fks_ezmaxcustomer_code->valuestring)
        );

    return billingentityexternal_generate_federation_token_v1_request_local_var;
end:
    return NULL;

}
