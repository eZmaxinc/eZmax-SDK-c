#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_generate_federation_token_v1_request.h"



activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_create(
    char *fks_ezmaxcustomer_code
    ) {
    activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_local_var = malloc(sizeof(activesession_generate_federation_token_v1_request_t));
    if (!activesession_generate_federation_token_v1_request_local_var) {
        return NULL;
    }
    activesession_generate_federation_token_v1_request_local_var->fks_ezmaxcustomer_code = fks_ezmaxcustomer_code;

    return activesession_generate_federation_token_v1_request_local_var;
}


void activesession_generate_federation_token_v1_request_free(activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request) {
    if(NULL == activesession_generate_federation_token_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code) {
        free(activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code);
        activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code = NULL;
    }
    free(activesession_generate_federation_token_v1_request);
}

cJSON *activesession_generate_federation_token_v1_request_convertToJSON(activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code
    if (!activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fksEzmaxcustomerCode", activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_parseFromJSON(cJSON *activesession_generate_federation_token_v1_requestJSON){

    activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_local_var = NULL;

    // activesession_generate_federation_token_v1_request->fks_ezmaxcustomer_code
    cJSON *fks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(activesession_generate_federation_token_v1_requestJSON, "fksEzmaxcustomerCode");
    if (!fks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(fks_ezmaxcustomer_code))
    {
    goto end; //String
    }


    activesession_generate_federation_token_v1_request_local_var = activesession_generate_federation_token_v1_request_create (
        strdup(fks_ezmaxcustomer_code->valuestring)
        );

    return activesession_generate_federation_token_v1_request_local_var;
end:
    return NULL;

}
