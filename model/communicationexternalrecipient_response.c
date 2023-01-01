#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationexternalrecipient_response.h"


char* e_communicationexternalrecipient_typecommunicationexternalrecipient_response_ToString(ezmax_api_definition__full_communicationexternalrecipient_response__e e_communicationexternalrecipient_type) {
    char* e_communicationexternalrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
	return e_communicationexternalrecipient_typeArray[e_communicationexternalrecipient_type];
}

ezmax_api_definition__full_communicationexternalrecipient_response__e e_communicationexternalrecipient_typecommunicationexternalrecipient_response_FromString(char* e_communicationexternalrecipient_type){
    int stringToReturn = 0;
    char *e_communicationexternalrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    size_t sizeofArray = sizeof(e_communicationexternalrecipient_typeArray) / sizeof(e_communicationexternalrecipient_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communicationexternalrecipient_type, e_communicationexternalrecipient_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

communicationexternalrecipient_response_t *communicationexternalrecipient_response_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    phone_response_compound_t *obj_phone_sms,
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
    ) {
    communicationexternalrecipient_response_t *communicationexternalrecipient_response_local_var = malloc(sizeof(communicationexternalrecipient_response_t));
    if (!communicationexternalrecipient_response_local_var) {
        return NULL;
    }
    communicationexternalrecipient_response_local_var->pki_communicationexternalrecipient_id = pki_communicationexternalrecipient_id;
    communicationexternalrecipient_response_local_var->s_email_address = s_email_address;
    communicationexternalrecipient_response_local_var->obj_phone_sms = obj_phone_sms;
    communicationexternalrecipient_response_local_var->e_communicationexternalrecipient_type = e_communicationexternalrecipient_type;
    communicationexternalrecipient_response_local_var->s_communicationexternalrecipient_name = s_communicationexternalrecipient_name;

    return communicationexternalrecipient_response_local_var;
}


void communicationexternalrecipient_response_free(communicationexternalrecipient_response_t *communicationexternalrecipient_response) {
    if(NULL == communicationexternalrecipient_response){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationexternalrecipient_response->s_email_address) {
        free(communicationexternalrecipient_response->s_email_address);
        communicationexternalrecipient_response->s_email_address = NULL;
    }
    if (communicationexternalrecipient_response->obj_phone_sms) {
        phone_response_compound_free(communicationexternalrecipient_response->obj_phone_sms);
        communicationexternalrecipient_response->obj_phone_sms = NULL;
    }
    if (communicationexternalrecipient_response->e_communicationexternalrecipient_type) {
        field_e_communicationexternalrecipient_type_free(communicationexternalrecipient_response->e_communicationexternalrecipient_type);
        communicationexternalrecipient_response->e_communicationexternalrecipient_type = NULL;
    }
    if (communicationexternalrecipient_response->s_communicationexternalrecipient_name) {
        free(communicationexternalrecipient_response->s_communicationexternalrecipient_name);
        communicationexternalrecipient_response->s_communicationexternalrecipient_name = NULL;
    }
    free(communicationexternalrecipient_response);
}

cJSON *communicationexternalrecipient_response_convertToJSON(communicationexternalrecipient_response_t *communicationexternalrecipient_response) {
    cJSON *item = cJSON_CreateObject();

    // communicationexternalrecipient_response->pki_communicationexternalrecipient_id
    if (!communicationexternalrecipient_response->pki_communicationexternalrecipient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationexternalrecipientID", communicationexternalrecipient_response->pki_communicationexternalrecipient_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationexternalrecipient_response->s_email_address
    if(communicationexternalrecipient_response->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", communicationexternalrecipient_response->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // communicationexternalrecipient_response->obj_phone_sms
    if(communicationexternalrecipient_response->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_response_compound_convertToJSON(communicationexternalrecipient_response->obj_phone_sms);
    if(obj_phone_sms_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneSms", obj_phone_sms_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communicationexternalrecipient_response->e_communicationexternalrecipient_type
    if (ezmax_api_definition__full_communicationexternalrecipient_response__NULL == communicationexternalrecipient_response->e_communicationexternalrecipient_type) {
        goto fail;
    }
    cJSON *e_communicationexternalrecipient_type_local_JSON = field_e_communicationexternalrecipient_type_convertToJSON(communicationexternalrecipient_response->e_communicationexternalrecipient_type);
    if(e_communicationexternalrecipient_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationexternalrecipientType", e_communicationexternalrecipient_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communicationexternalrecipient_response->s_communicationexternalrecipient_name
    if (!communicationexternalrecipient_response->s_communicationexternalrecipient_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationexternalrecipientName", communicationexternalrecipient_response->s_communicationexternalrecipient_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communicationexternalrecipient_response_t *communicationexternalrecipient_response_parseFromJSON(cJSON *communicationexternalrecipient_responseJSON){

    communicationexternalrecipient_response_t *communicationexternalrecipient_response_local_var = NULL;

    // define the local variable for communicationexternalrecipient_response->obj_phone_sms
    phone_response_compound_t *obj_phone_sms_local_nonprim = NULL;

    // define the local variable for communicationexternalrecipient_response->e_communicationexternalrecipient_type
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type_local_nonprim = NULL;

    // communicationexternalrecipient_response->pki_communicationexternalrecipient_id
    cJSON *pki_communicationexternalrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "pkiCommunicationexternalrecipientID");
    if (!pki_communicationexternalrecipient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationexternalrecipient_id))
    {
    goto end; //Numeric
    }

    // communicationexternalrecipient_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // communicationexternalrecipient_response->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "objPhoneSms");
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }

    // communicationexternalrecipient_response->e_communicationexternalrecipient_type
    cJSON *e_communicationexternalrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "eCommunicationexternalrecipientType");
    if (!e_communicationexternalrecipient_type) {
        goto end;
    }

    
    e_communicationexternalrecipient_type_local_nonprim = field_e_communicationexternalrecipient_type_parseFromJSON(e_communicationexternalrecipient_type); //custom

    // communicationexternalrecipient_response->s_communicationexternalrecipient_name
    cJSON *s_communicationexternalrecipient_name = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "sCommunicationexternalrecipientName");
    if (!s_communicationexternalrecipient_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communicationexternalrecipient_name))
    {
    goto end; //String
    }


    communicationexternalrecipient_response_local_var = communicationexternalrecipient_response_create (
        pki_communicationexternalrecipient_id->valuedouble,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL,
        e_communicationexternalrecipient_type_local_nonprim,
        strdup(s_communicationexternalrecipient_name->valuestring)
        );

    return communicationexternalrecipient_response_local_var;
end:
    if (obj_phone_sms_local_nonprim) {
        phone_response_compound_free(obj_phone_sms_local_nonprim);
        obj_phone_sms_local_nonprim = NULL;
    }
    if (e_communicationexternalrecipient_type_local_nonprim) {
        field_e_communicationexternalrecipient_type_free(e_communicationexternalrecipient_type_local_nonprim);
        e_communicationexternalrecipient_type_local_nonprim = NULL;
    }
    return NULL;

}
