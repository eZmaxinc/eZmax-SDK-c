#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationexternalrecipient_request_compound.h"



static communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_create_internal(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
    ) {
    communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_local_var = malloc(sizeof(communicationexternalrecipient_request_compound_t));
    if (!communicationexternalrecipient_request_compound_local_var) {
        return NULL;
    }
    communicationexternalrecipient_request_compound_local_var->pki_communicationexternalrecipient_id = pki_communicationexternalrecipient_id;
    communicationexternalrecipient_request_compound_local_var->s_email_address = s_email_address;
    communicationexternalrecipient_request_compound_local_var->s_phone_e164 = s_phone_e164;
    communicationexternalrecipient_request_compound_local_var->e_communicationexternalrecipient_type = e_communicationexternalrecipient_type;
    communicationexternalrecipient_request_compound_local_var->s_communicationexternalrecipient_name = s_communicationexternalrecipient_name;

    communicationexternalrecipient_request_compound_local_var->_library_owned = 1;
    return communicationexternalrecipient_request_compound_local_var;
}

__attribute__((deprecated)) communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
    ) {
    return communicationexternalrecipient_request_compound_create_internal (
        pki_communicationexternalrecipient_id,
        s_email_address,
        s_phone_e164,
        e_communicationexternalrecipient_type,
        s_communicationexternalrecipient_name
        );
}

void communicationexternalrecipient_request_compound_free(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound) {
    if(NULL == communicationexternalrecipient_request_compound){
        return ;
    }
    if(communicationexternalrecipient_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communicationexternalrecipient_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communicationexternalrecipient_request_compound->s_email_address) {
        free(communicationexternalrecipient_request_compound->s_email_address);
        communicationexternalrecipient_request_compound->s_email_address = NULL;
    }
    if (communicationexternalrecipient_request_compound->s_phone_e164) {
        free(communicationexternalrecipient_request_compound->s_phone_e164);
        communicationexternalrecipient_request_compound->s_phone_e164 = NULL;
    }
    if (communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name) {
        free(communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name);
        communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name = NULL;
    }
    free(communicationexternalrecipient_request_compound);
}

cJSON *communicationexternalrecipient_request_compound_convertToJSON(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationexternalrecipient_request_compound->pki_communicationexternalrecipient_id
    if(communicationexternalrecipient_request_compound->pki_communicationexternalrecipient_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationexternalrecipientID", communicationexternalrecipient_request_compound->pki_communicationexternalrecipient_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationexternalrecipient_request_compound->s_email_address
    if(communicationexternalrecipient_request_compound->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", communicationexternalrecipient_request_compound->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // communicationexternalrecipient_request_compound->s_phone_e164
    if(communicationexternalrecipient_request_compound->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", communicationexternalrecipient_request_compound->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // communicationexternalrecipient_request_compound->e_communicationexternalrecipient_type
    if(communicationexternalrecipient_request_compound->e_communicationexternalrecipient_type != ezmax_api_definition__full_field_e_communicationexternalrecipient_type__NULL) {
    cJSON *e_communicationexternalrecipient_type_local_JSON = field_e_communicationexternalrecipient_type_convertToJSON(communicationexternalrecipient_request_compound->e_communicationexternalrecipient_type);
    if(e_communicationexternalrecipient_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationexternalrecipientType", e_communicationexternalrecipient_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name
    if(communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name) {
    if(cJSON_AddStringToObject(item, "sCommunicationexternalrecipientName", communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name) == NULL) {
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

communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_parseFromJSON(cJSON *communicationexternalrecipient_request_compoundJSON){

    communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_local_var = NULL;

    // define the local variable for communicationexternalrecipient_request_compound->e_communicationexternalrecipient_type
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type_local_nonprim = 0;

    // communicationexternalrecipient_request_compound->pki_communicationexternalrecipient_id
    cJSON *pki_communicationexternalrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_request_compoundJSON, "pkiCommunicationexternalrecipientID");
    if (cJSON_IsNull(pki_communicationexternalrecipient_id)) {
        pki_communicationexternalrecipient_id = NULL;
    }
    if (pki_communicationexternalrecipient_id) { 
    if(!cJSON_IsNumber(pki_communicationexternalrecipient_id))
    {
    goto end; //Numeric
    }
    }

    // communicationexternalrecipient_request_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_request_compoundJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // communicationexternalrecipient_request_compound->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_request_compoundJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // communicationexternalrecipient_request_compound->e_communicationexternalrecipient_type
    cJSON *e_communicationexternalrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_request_compoundJSON, "eCommunicationexternalrecipientType");
    if (cJSON_IsNull(e_communicationexternalrecipient_type)) {
        e_communicationexternalrecipient_type = NULL;
    }
    if (e_communicationexternalrecipient_type) { 
    e_communicationexternalrecipient_type_local_nonprim = field_e_communicationexternalrecipient_type_parseFromJSON(e_communicationexternalrecipient_type); //custom
    }

    // communicationexternalrecipient_request_compound->s_communicationexternalrecipient_name
    cJSON *s_communicationexternalrecipient_name = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_request_compoundJSON, "sCommunicationexternalrecipientName");
    if (cJSON_IsNull(s_communicationexternalrecipient_name)) {
        s_communicationexternalrecipient_name = NULL;
    }
    if (s_communicationexternalrecipient_name) { 
    if(!cJSON_IsString(s_communicationexternalrecipient_name) && !cJSON_IsNull(s_communicationexternalrecipient_name))
    {
    goto end; //String
    }
    }


    communicationexternalrecipient_request_compound_local_var = communicationexternalrecipient_request_compound_create_internal (
        pki_communicationexternalrecipient_id ? pki_communicationexternalrecipient_id->valuedouble : 0,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL,
        e_communicationexternalrecipient_type ? e_communicationexternalrecipient_type_local_nonprim : 0,
        s_communicationexternalrecipient_name && !cJSON_IsNull(s_communicationexternalrecipient_name) ? strdup(s_communicationexternalrecipient_name->valuestring) : NULL
        );

    return communicationexternalrecipient_request_compound_local_var;
end:
    if (e_communicationexternalrecipient_type_local_nonprim) {
        e_communicationexternalrecipient_type_local_nonprim = 0;
    }
    return NULL;

}
