#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_response_compound.h"



apikey_response_compound_t *apikey_response_compound_create(
    multilingual_apikey_description_t *obj_apikey_description,
    char *s_computed_token,
    int pki_apikey_id,
    common_audit_t *obj_audit
    ) {
    apikey_response_compound_t *apikey_response_compound_local_var = malloc(sizeof(apikey_response_compound_t));
    if (!apikey_response_compound_local_var) {
        return NULL;
    }
    apikey_response_compound_local_var->obj_apikey_description = obj_apikey_description;
    apikey_response_compound_local_var->s_computed_token = s_computed_token;
    apikey_response_compound_local_var->pki_apikey_id = pki_apikey_id;
    apikey_response_compound_local_var->obj_audit = obj_audit;

    return apikey_response_compound_local_var;
}


void apikey_response_compound_free(apikey_response_compound_t *apikey_response_compound) {
    if(NULL == apikey_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_response_compound->obj_apikey_description) {
        multilingual_apikey_description_free(apikey_response_compound->obj_apikey_description);
        apikey_response_compound->obj_apikey_description = NULL;
    }
    if (apikey_response_compound->s_computed_token) {
        free(apikey_response_compound->s_computed_token);
        apikey_response_compound->s_computed_token = NULL;
    }
    if (apikey_response_compound->obj_audit) {
        common_audit_free(apikey_response_compound->obj_audit);
        apikey_response_compound->obj_audit = NULL;
    }
    free(apikey_response_compound);
}

cJSON *apikey_response_compound_convertToJSON(apikey_response_compound_t *apikey_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // apikey_response_compound->obj_apikey_description
    if (!apikey_response_compound->obj_apikey_description) {
        goto fail;
    }
    
    cJSON *obj_apikey_description_local_JSON = multilingual_apikey_description_convertToJSON(apikey_response_compound->obj_apikey_description);
    if(obj_apikey_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyDescription", obj_apikey_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // apikey_response_compound->s_computed_token
    if(apikey_response_compound->s_computed_token) { 
    if(cJSON_AddStringToObject(item, "sComputedToken", apikey_response_compound->s_computed_token) == NULL) {
    goto fail; //String
    }
     } 


    // apikey_response_compound->pki_apikey_id
    if (!apikey_response_compound->pki_apikey_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", apikey_response_compound->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_response_compound->obj_audit
    if (!apikey_response_compound->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(apikey_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_response_compound_t *apikey_response_compound_parseFromJSON(cJSON *apikey_response_compoundJSON){

    apikey_response_compound_t *apikey_response_compound_local_var = NULL;

    // define the local variable for apikey_response_compound->obj_apikey_description
    multilingual_apikey_description_t *obj_apikey_description_local_nonprim = NULL;

    // define the local variable for apikey_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // apikey_response_compound->obj_apikey_description
    cJSON *obj_apikey_description = cJSON_GetObjectItemCaseSensitive(apikey_response_compoundJSON, "objApikeyDescription");
    if (!obj_apikey_description) {
        goto end;
    }

    
    obj_apikey_description_local_nonprim = multilingual_apikey_description_parseFromJSON(obj_apikey_description); //nonprimitive

    // apikey_response_compound->s_computed_token
    cJSON *s_computed_token = cJSON_GetObjectItemCaseSensitive(apikey_response_compoundJSON, "sComputedToken");
    if (s_computed_token) { 
    if(!cJSON_IsString(s_computed_token))
    {
    goto end; //String
    }
    }

    // apikey_response_compound->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(apikey_response_compoundJSON, "pkiApikeyID");
    if (!pki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }

    // apikey_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(apikey_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    apikey_response_compound_local_var = apikey_response_compound_create (
        obj_apikey_description_local_nonprim,
        s_computed_token ? strdup(s_computed_token->valuestring) : NULL,
        pki_apikey_id->valuedouble,
        obj_audit_local_nonprim
        );

    return apikey_response_compound_local_var;
end:
    if (obj_apikey_description_local_nonprim) {
        multilingual_apikey_description_free(obj_apikey_description_local_nonprim);
        obj_apikey_description_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
