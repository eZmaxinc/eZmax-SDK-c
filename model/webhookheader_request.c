#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhookheader_request.h"



static webhookheader_request_t *webhookheader_request_create_internal(
    int *pki_webhookheader_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    webhookheader_request_t *webhookheader_request_local_var = malloc(sizeof(webhookheader_request_t));
    if (!webhookheader_request_local_var) {
        return NULL;
    }
    memset(webhookheader_request_local_var, 0, sizeof(webhookheader_request_t));
    webhookheader_request_local_var->_library_owned = 1;
    webhookheader_request_local_var->pki_webhookheader_id = pki_webhookheader_id;
    webhookheader_request_local_var->s_webhookheader_name = s_webhookheader_name;
    webhookheader_request_local_var->s_webhookheader_value = s_webhookheader_value;
    return webhookheader_request_local_var;
}

__attribute__((deprecated)) webhookheader_request_t *webhookheader_request_create(
    int *pki_webhookheader_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    int *pki_webhookheader_id_copy = NULL;
    if (pki_webhookheader_id) {
        pki_webhookheader_id_copy = malloc(sizeof(int));
        if (pki_webhookheader_id_copy) *pki_webhookheader_id_copy = *pki_webhookheader_id;
    }
    webhookheader_request_t *result = webhookheader_request_create_internal (
        pki_webhookheader_id_copy,
        s_webhookheader_name,
        s_webhookheader_value
        );
    if (!result) {
        free(pki_webhookheader_id_copy);
    }
    return result;
}

void webhookheader_request_free(webhookheader_request_t *webhookheader_request) {
    if(NULL == webhookheader_request){
        return ;
    }
    if(webhookheader_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhookheader_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhookheader_request->pki_webhookheader_id) {
        free(webhookheader_request->pki_webhookheader_id);
        webhookheader_request->pki_webhookheader_id = NULL;
    }
    if (webhookheader_request->s_webhookheader_name) {
        free(webhookheader_request->s_webhookheader_name);
        webhookheader_request->s_webhookheader_name = NULL;
    }
    if (webhookheader_request->s_webhookheader_value) {
        free(webhookheader_request->s_webhookheader_value);
        webhookheader_request->s_webhookheader_value = NULL;
    }
    free(webhookheader_request);
}

cJSON *webhookheader_request_convertToJSON(webhookheader_request_t *webhookheader_request) {
    cJSON *item = cJSON_CreateObject();

    // webhookheader_request->pki_webhookheader_id
    if(webhookheader_request->pki_webhookheader_id) {
    if(cJSON_AddNumberToObject(item, "pkiWebhookheaderID", *webhookheader_request->pki_webhookheader_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhookheader_request->s_webhookheader_name
    if (!webhookheader_request->s_webhookheader_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderName", webhookheader_request->s_webhookheader_name) == NULL) {
    goto fail; //String
    }


    // webhookheader_request->s_webhookheader_value
    if (!webhookheader_request->s_webhookheader_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderValue", webhookheader_request->s_webhookheader_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhookheader_request_t *webhookheader_request_parseFromJSON(cJSON *webhookheader_requestJSON){

    webhookheader_request_t *webhookheader_request_local_var = NULL;

    // define the local variable for webhookheader_request->pki_webhookheader_id
    int *pki_webhookheader_id_local_var = NULL;

    char *s_webhookheader_name_local_str = NULL;

    char *s_webhookheader_value_local_str = NULL;

    // webhookheader_request->pki_webhookheader_id
    cJSON *pki_webhookheader_id = cJSON_GetObjectItemCaseSensitive(webhookheader_requestJSON, "pkiWebhookheaderID");
    if (cJSON_IsNull(pki_webhookheader_id)) {
        pki_webhookheader_id = NULL;
    }
    if (pki_webhookheader_id) { 
    if(!cJSON_IsNumber(pki_webhookheader_id))
    {
    goto end; //Numeric
    }
    pki_webhookheader_id_local_var = malloc(sizeof(int));
    if(!pki_webhookheader_id_local_var)
    {
        goto end;
    }
    *pki_webhookheader_id_local_var = pki_webhookheader_id->valuedouble;
    }

    // webhookheader_request->s_webhookheader_name
    cJSON *s_webhookheader_name = cJSON_GetObjectItemCaseSensitive(webhookheader_requestJSON, "sWebhookheaderName");
    if (cJSON_IsNull(s_webhookheader_name)) {
        s_webhookheader_name = NULL;
    }
    if (!s_webhookheader_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_name))
    {
    goto end; //String
    }

    // webhookheader_request->s_webhookheader_value
    cJSON *s_webhookheader_value = cJSON_GetObjectItemCaseSensitive(webhookheader_requestJSON, "sWebhookheaderValue");
    if (cJSON_IsNull(s_webhookheader_value)) {
        s_webhookheader_value = NULL;
    }
    if (!s_webhookheader_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_value))
    {
    goto end; //String
    }


    if (s_webhookheader_name && !cJSON_IsNull(s_webhookheader_name)) s_webhookheader_name_local_str = strdup(s_webhookheader_name->valuestring);
    if (s_webhookheader_value && !cJSON_IsNull(s_webhookheader_value)) s_webhookheader_value_local_str = strdup(s_webhookheader_value->valuestring);

    webhookheader_request_local_var = webhookheader_request_create_internal (
        pki_webhookheader_id_local_var,
        s_webhookheader_name_local_str,
        s_webhookheader_value_local_str
        );

    if (!webhookheader_request_local_var) {
        goto end;
    }

    return webhookheader_request_local_var;
end:
    if (pki_webhookheader_id_local_var) {
        free(pki_webhookheader_id_local_var);
        pki_webhookheader_id_local_var = NULL;
    }
    if (s_webhookheader_name_local_str) {
        free(s_webhookheader_name_local_str);
        s_webhookheader_name_local_str = NULL;
    }
    if (s_webhookheader_value_local_str) {
        free(s_webhookheader_value_local_str);
        s_webhookheader_value_local_str = NULL;
    }
    return NULL;

}
