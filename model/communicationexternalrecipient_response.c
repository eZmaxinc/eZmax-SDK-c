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
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type,
    descriptionstatic_response_compound_t *obj_descriptionstatic,
    emailstatic_response_compound_t *obj_emailstatic,
    phonestatic_response_compound_t *obj_phonestatic
    ) {
    communicationexternalrecipient_response_t *communicationexternalrecipient_response_local_var = malloc(sizeof(communicationexternalrecipient_response_t));
    if (!communicationexternalrecipient_response_local_var) {
        return NULL;
    }
    communicationexternalrecipient_response_local_var->pki_communicationexternalrecipient_id = pki_communicationexternalrecipient_id;
    communicationexternalrecipient_response_local_var->e_communicationexternalrecipient_type = e_communicationexternalrecipient_type;
    communicationexternalrecipient_response_local_var->obj_descriptionstatic = obj_descriptionstatic;
    communicationexternalrecipient_response_local_var->obj_emailstatic = obj_emailstatic;
    communicationexternalrecipient_response_local_var->obj_phonestatic = obj_phonestatic;

    return communicationexternalrecipient_response_local_var;
}


void communicationexternalrecipient_response_free(communicationexternalrecipient_response_t *communicationexternalrecipient_response) {
    if(NULL == communicationexternalrecipient_response){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationexternalrecipient_response->e_communicationexternalrecipient_type) {
        field_e_communicationexternalrecipient_type_free(communicationexternalrecipient_response->e_communicationexternalrecipient_type);
        communicationexternalrecipient_response->e_communicationexternalrecipient_type = NULL;
    }
    if (communicationexternalrecipient_response->obj_descriptionstatic) {
        descriptionstatic_response_compound_free(communicationexternalrecipient_response->obj_descriptionstatic);
        communicationexternalrecipient_response->obj_descriptionstatic = NULL;
    }
    if (communicationexternalrecipient_response->obj_emailstatic) {
        emailstatic_response_compound_free(communicationexternalrecipient_response->obj_emailstatic);
        communicationexternalrecipient_response->obj_emailstatic = NULL;
    }
    if (communicationexternalrecipient_response->obj_phonestatic) {
        phonestatic_response_compound_free(communicationexternalrecipient_response->obj_phonestatic);
        communicationexternalrecipient_response->obj_phonestatic = NULL;
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


    // communicationexternalrecipient_response->obj_descriptionstatic
    if (!communicationexternalrecipient_response->obj_descriptionstatic) {
        goto fail;
    }
    cJSON *obj_descriptionstatic_local_JSON = descriptionstatic_response_compound_convertToJSON(communicationexternalrecipient_response->obj_descriptionstatic);
    if(obj_descriptionstatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDescriptionstatic", obj_descriptionstatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // communicationexternalrecipient_response->obj_emailstatic
    if(communicationexternalrecipient_response->obj_emailstatic) {
    cJSON *obj_emailstatic_local_JSON = emailstatic_response_compound_convertToJSON(communicationexternalrecipient_response->obj_emailstatic);
    if(obj_emailstatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmailstatic", obj_emailstatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communicationexternalrecipient_response->obj_phonestatic
    if(communicationexternalrecipient_response->obj_phonestatic) {
    cJSON *obj_phonestatic_local_JSON = phonestatic_response_compound_convertToJSON(communicationexternalrecipient_response->obj_phonestatic);
    if(obj_phonestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhonestatic", obj_phonestatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
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

    // define the local variable for communicationexternalrecipient_response->e_communicationexternalrecipient_type
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type_local_nonprim = NULL;

    // define the local variable for communicationexternalrecipient_response->obj_descriptionstatic
    descriptionstatic_response_compound_t *obj_descriptionstatic_local_nonprim = NULL;

    // define the local variable for communicationexternalrecipient_response->obj_emailstatic
    emailstatic_response_compound_t *obj_emailstatic_local_nonprim = NULL;

    // define the local variable for communicationexternalrecipient_response->obj_phonestatic
    phonestatic_response_compound_t *obj_phonestatic_local_nonprim = NULL;

    // communicationexternalrecipient_response->pki_communicationexternalrecipient_id
    cJSON *pki_communicationexternalrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "pkiCommunicationexternalrecipientID");
    if (!pki_communicationexternalrecipient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationexternalrecipient_id))
    {
    goto end; //Numeric
    }

    // communicationexternalrecipient_response->e_communicationexternalrecipient_type
    cJSON *e_communicationexternalrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "eCommunicationexternalrecipientType");
    if (!e_communicationexternalrecipient_type) {
        goto end;
    }

    
    e_communicationexternalrecipient_type_local_nonprim = field_e_communicationexternalrecipient_type_parseFromJSON(e_communicationexternalrecipient_type); //custom

    // communicationexternalrecipient_response->obj_descriptionstatic
    cJSON *obj_descriptionstatic = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "objDescriptionstatic");
    if (!obj_descriptionstatic) {
        goto end;
    }

    
    obj_descriptionstatic_local_nonprim = descriptionstatic_response_compound_parseFromJSON(obj_descriptionstatic); //nonprimitive

    // communicationexternalrecipient_response->obj_emailstatic
    cJSON *obj_emailstatic = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "objEmailstatic");
    if (obj_emailstatic) { 
    obj_emailstatic_local_nonprim = emailstatic_response_compound_parseFromJSON(obj_emailstatic); //nonprimitive
    }

    // communicationexternalrecipient_response->obj_phonestatic
    cJSON *obj_phonestatic = cJSON_GetObjectItemCaseSensitive(communicationexternalrecipient_responseJSON, "objPhonestatic");
    if (obj_phonestatic) { 
    obj_phonestatic_local_nonprim = phonestatic_response_compound_parseFromJSON(obj_phonestatic); //nonprimitive
    }


    communicationexternalrecipient_response_local_var = communicationexternalrecipient_response_create (
        pki_communicationexternalrecipient_id->valuedouble,
        e_communicationexternalrecipient_type_local_nonprim,
        obj_descriptionstatic_local_nonprim,
        obj_emailstatic ? obj_emailstatic_local_nonprim : NULL,
        obj_phonestatic ? obj_phonestatic_local_nonprim : NULL
        );

    return communicationexternalrecipient_response_local_var;
end:
    if (e_communicationexternalrecipient_type_local_nonprim) {
        field_e_communicationexternalrecipient_type_free(e_communicationexternalrecipient_type_local_nonprim);
        e_communicationexternalrecipient_type_local_nonprim = NULL;
    }
    if (obj_descriptionstatic_local_nonprim) {
        descriptionstatic_response_compound_free(obj_descriptionstatic_local_nonprim);
        obj_descriptionstatic_local_nonprim = NULL;
    }
    if (obj_emailstatic_local_nonprim) {
        emailstatic_response_compound_free(obj_emailstatic_local_nonprim);
        obj_emailstatic_local_nonprim = NULL;
    }
    if (obj_phonestatic_local_nonprim) {
        phonestatic_response_compound_free(obj_phonestatic_local_nonprim);
        obj_phonestatic_local_nonprim = NULL;
    }
    return NULL;

}
