#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_response.h"



static apikey_response_t *apikey_response_create_internal(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    custom_contact_name_response_t *obj_contact_name,
    char *s_apikey_apikey,
    char *s_apikey_secret,
    int b_apikey_isactive,
    int b_apikey_issigned,
    common_audit_t *obj_audit
    ) {
    apikey_response_t *apikey_response_local_var = malloc(sizeof(apikey_response_t));
    if (!apikey_response_local_var) {
        return NULL;
    }
    apikey_response_local_var->pki_apikey_id = pki_apikey_id;
    apikey_response_local_var->fki_user_id = fki_user_id;
    apikey_response_local_var->obj_apikey_description = obj_apikey_description;
    apikey_response_local_var->obj_contact_name = obj_contact_name;
    apikey_response_local_var->s_apikey_apikey = s_apikey_apikey;
    apikey_response_local_var->s_apikey_secret = s_apikey_secret;
    apikey_response_local_var->b_apikey_isactive = b_apikey_isactive;
    apikey_response_local_var->b_apikey_issigned = b_apikey_issigned;
    apikey_response_local_var->obj_audit = obj_audit;

    apikey_response_local_var->_library_owned = 1;
    return apikey_response_local_var;
}

__attribute__((deprecated)) apikey_response_t *apikey_response_create(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    custom_contact_name_response_t *obj_contact_name,
    char *s_apikey_apikey,
    char *s_apikey_secret,
    int b_apikey_isactive,
    int b_apikey_issigned,
    common_audit_t *obj_audit
    ) {
    return apikey_response_create_internal (
        pki_apikey_id,
        fki_user_id,
        obj_apikey_description,
        obj_contact_name,
        s_apikey_apikey,
        s_apikey_secret,
        b_apikey_isactive,
        b_apikey_issigned,
        obj_audit
        );
}

void apikey_response_free(apikey_response_t *apikey_response) {
    if(NULL == apikey_response){
        return ;
    }
    if(apikey_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_response->obj_apikey_description) {
        multilingual_apikey_description_free(apikey_response->obj_apikey_description);
        apikey_response->obj_apikey_description = NULL;
    }
    if (apikey_response->obj_contact_name) {
        custom_contact_name_response_free(apikey_response->obj_contact_name);
        apikey_response->obj_contact_name = NULL;
    }
    if (apikey_response->s_apikey_apikey) {
        free(apikey_response->s_apikey_apikey);
        apikey_response->s_apikey_apikey = NULL;
    }
    if (apikey_response->s_apikey_secret) {
        free(apikey_response->s_apikey_secret);
        apikey_response->s_apikey_secret = NULL;
    }
    if (apikey_response->obj_audit) {
        common_audit_free(apikey_response->obj_audit);
        apikey_response->obj_audit = NULL;
    }
    free(apikey_response);
}

cJSON *apikey_response_convertToJSON(apikey_response_t *apikey_response) {
    cJSON *item = cJSON_CreateObject();

    // apikey_response->pki_apikey_id
    if (!apikey_response->pki_apikey_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", apikey_response->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_response->fki_user_id
    if (!apikey_response->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", apikey_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_response->obj_apikey_description
    if (!apikey_response->obj_apikey_description) {
        goto fail;
    }
    cJSON *obj_apikey_description_local_JSON = multilingual_apikey_description_convertToJSON(apikey_response->obj_apikey_description);
    if(obj_apikey_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyDescription", obj_apikey_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // apikey_response->obj_contact_name
    if (!apikey_response->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(apikey_response->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // apikey_response->s_apikey_apikey
    if(apikey_response->s_apikey_apikey) {
    if(cJSON_AddStringToObject(item, "sApikeyApikey", apikey_response->s_apikey_apikey) == NULL) {
    goto fail; //String
    }
    }


    // apikey_response->s_apikey_secret
    if(apikey_response->s_apikey_secret) {
    if(cJSON_AddStringToObject(item, "sApikeySecret", apikey_response->s_apikey_secret) == NULL) {
    goto fail; //String
    }
    }


    // apikey_response->b_apikey_isactive
    if (!apikey_response->b_apikey_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bApikeyIsactive", apikey_response->b_apikey_isactive) == NULL) {
    goto fail; //Bool
    }


    // apikey_response->b_apikey_issigned
    if(apikey_response->b_apikey_issigned) {
    if(cJSON_AddBoolToObject(item, "bApikeyIssigned", apikey_response->b_apikey_issigned) == NULL) {
    goto fail; //Bool
    }
    }


    // apikey_response->obj_audit
    if (!apikey_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(apikey_response->obj_audit);
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

apikey_response_t *apikey_response_parseFromJSON(cJSON *apikey_responseJSON){

    apikey_response_t *apikey_response_local_var = NULL;

    // define the local variable for apikey_response->obj_apikey_description
    multilingual_apikey_description_t *obj_apikey_description_local_nonprim = NULL;

    // define the local variable for apikey_response->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // define the local variable for apikey_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // apikey_response->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "pkiApikeyID");
    if (cJSON_IsNull(pki_apikey_id)) {
        pki_apikey_id = NULL;
    }
    if (!pki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }

    // apikey_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // apikey_response->obj_apikey_description
    cJSON *obj_apikey_description = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "objApikeyDescription");
    if (cJSON_IsNull(obj_apikey_description)) {
        obj_apikey_description = NULL;
    }
    if (!obj_apikey_description) {
        goto end;
    }

    
    obj_apikey_description_local_nonprim = multilingual_apikey_description_parseFromJSON(obj_apikey_description); //nonprimitive

    // apikey_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // apikey_response->s_apikey_apikey
    cJSON *s_apikey_apikey = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "sApikeyApikey");
    if (cJSON_IsNull(s_apikey_apikey)) {
        s_apikey_apikey = NULL;
    }
    if (s_apikey_apikey) { 
    if(!cJSON_IsString(s_apikey_apikey) && !cJSON_IsNull(s_apikey_apikey))
    {
    goto end; //String
    }
    }

    // apikey_response->s_apikey_secret
    cJSON *s_apikey_secret = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "sApikeySecret");
    if (cJSON_IsNull(s_apikey_secret)) {
        s_apikey_secret = NULL;
    }
    if (s_apikey_secret) { 
    if(!cJSON_IsString(s_apikey_secret) && !cJSON_IsNull(s_apikey_secret))
    {
    goto end; //String
    }
    }

    // apikey_response->b_apikey_isactive
    cJSON *b_apikey_isactive = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "bApikeyIsactive");
    if (cJSON_IsNull(b_apikey_isactive)) {
        b_apikey_isactive = NULL;
    }
    if (!b_apikey_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_apikey_isactive))
    {
    goto end; //Bool
    }

    // apikey_response->b_apikey_issigned
    cJSON *b_apikey_issigned = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "bApikeyIssigned");
    if (cJSON_IsNull(b_apikey_issigned)) {
        b_apikey_issigned = NULL;
    }
    if (b_apikey_issigned) { 
    if(!cJSON_IsBool(b_apikey_issigned))
    {
    goto end; //Bool
    }
    }

    // apikey_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(apikey_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    apikey_response_local_var = apikey_response_create_internal (
        pki_apikey_id->valuedouble,
        fki_user_id->valuedouble,
        obj_apikey_description_local_nonprim,
        obj_contact_name_local_nonprim,
        s_apikey_apikey && !cJSON_IsNull(s_apikey_apikey) ? strdup(s_apikey_apikey->valuestring) : NULL,
        s_apikey_secret && !cJSON_IsNull(s_apikey_secret) ? strdup(s_apikey_secret->valuestring) : NULL,
        b_apikey_isactive->valueint,
        b_apikey_issigned ? b_apikey_issigned->valueint : 0,
        obj_audit_local_nonprim
        );

    return apikey_response_local_var;
end:
    if (obj_apikey_description_local_nonprim) {
        multilingual_apikey_description_free(obj_apikey_description_local_nonprim);
        obj_apikey_description_local_nonprim = NULL;
    }
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
