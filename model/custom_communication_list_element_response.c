#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communication_list_element_response.h"


char* custom_communication_list_element_response_e_communication_direction_ToString(ezmax_api_definition__full_custom_communication_list_element_response__e e_communication_direction) {
    char* e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
    return e_communication_directionArray[e_communication_direction];
}

ezmax_api_definition__full_custom_communication_list_element_response__e custom_communication_list_element_response_e_communication_direction_FromString(char* e_communication_direction){
    int stringToReturn = 0;
    char *e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
    size_t sizeofArray = sizeof(e_communication_directionArray) / sizeof(e_communication_directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communication_direction, e_communication_directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_communication_list_element_response_e_communication_importance_ToString(ezmax_api_definition__full_custom_communication_list_element_response__e e_communication_importance) {
    char* e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
    return e_communication_importanceArray[e_communication_importance];
}

ezmax_api_definition__full_custom_communication_list_element_response__e custom_communication_list_element_response_e_communication_importance_FromString(char* e_communication_importance){
    int stringToReturn = 0;
    char *e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
    size_t sizeofArray = sizeof(e_communication_importanceArray) / sizeof(e_communication_importanceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communication_importance, e_communication_importanceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_communication_list_element_response_e_communication_type_ToString(ezmax_api_definition__full_custom_communication_list_element_response__e e_communication_type) {
    char* e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
    return e_communication_typeArray[e_communication_type];
}

ezmax_api_definition__full_custom_communication_list_element_response__e custom_communication_list_element_response_e_communication_type_FromString(char* e_communication_type){
    int stringToReturn = 0;
    char *e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
    size_t sizeofArray = sizeof(e_communication_typeArray) / sizeof(e_communication_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communication_type, e_communication_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_communication_list_element_response_t *custom_communication_list_element_response_create(
    int pki_communication_id,
    char *dt_created_date,
    computed_e_communication_direction_t *e_communication_direction,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    int i_communicationrecipient_count,
    char *s_communication_subject,
    char *s_communication_sender,
    char *s_communication_recipient
    ) {
    custom_communication_list_element_response_t *custom_communication_list_element_response_local_var = malloc(sizeof(custom_communication_list_element_response_t));
    if (!custom_communication_list_element_response_local_var) {
        return NULL;
    }
    custom_communication_list_element_response_local_var->pki_communication_id = pki_communication_id;
    custom_communication_list_element_response_local_var->dt_created_date = dt_created_date;
    custom_communication_list_element_response_local_var->e_communication_direction = e_communication_direction;
    custom_communication_list_element_response_local_var->e_communication_importance = e_communication_importance;
    custom_communication_list_element_response_local_var->e_communication_type = e_communication_type;
    custom_communication_list_element_response_local_var->i_communicationrecipient_count = i_communicationrecipient_count;
    custom_communication_list_element_response_local_var->s_communication_subject = s_communication_subject;
    custom_communication_list_element_response_local_var->s_communication_sender = s_communication_sender;
    custom_communication_list_element_response_local_var->s_communication_recipient = s_communication_recipient;

    return custom_communication_list_element_response_local_var;
}


void custom_communication_list_element_response_free(custom_communication_list_element_response_t *custom_communication_list_element_response) {
    if(NULL == custom_communication_list_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communication_list_element_response->dt_created_date) {
        free(custom_communication_list_element_response->dt_created_date);
        custom_communication_list_element_response->dt_created_date = NULL;
    }
    if (custom_communication_list_element_response->e_communication_direction) {
        computed_e_communication_direction_free(custom_communication_list_element_response->e_communication_direction);
        custom_communication_list_element_response->e_communication_direction = NULL;
    }
    if (custom_communication_list_element_response->e_communication_importance) {
        field_e_communication_importance_free(custom_communication_list_element_response->e_communication_importance);
        custom_communication_list_element_response->e_communication_importance = NULL;
    }
    if (custom_communication_list_element_response->e_communication_type) {
        field_e_communication_type_free(custom_communication_list_element_response->e_communication_type);
        custom_communication_list_element_response->e_communication_type = NULL;
    }
    if (custom_communication_list_element_response->s_communication_subject) {
        free(custom_communication_list_element_response->s_communication_subject);
        custom_communication_list_element_response->s_communication_subject = NULL;
    }
    if (custom_communication_list_element_response->s_communication_sender) {
        free(custom_communication_list_element_response->s_communication_sender);
        custom_communication_list_element_response->s_communication_sender = NULL;
    }
    if (custom_communication_list_element_response->s_communication_recipient) {
        free(custom_communication_list_element_response->s_communication_recipient);
        custom_communication_list_element_response->s_communication_recipient = NULL;
    }
    free(custom_communication_list_element_response);
}

cJSON *custom_communication_list_element_response_convertToJSON(custom_communication_list_element_response_t *custom_communication_list_element_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_communication_list_element_response->pki_communication_id
    if (!custom_communication_list_element_response->pki_communication_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", custom_communication_list_element_response->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_communication_list_element_response->dt_created_date
    if (!custom_communication_list_element_response->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", custom_communication_list_element_response->dt_created_date) == NULL) {
    goto fail; //String
    }


    // custom_communication_list_element_response->e_communication_direction
    if (ezmax_api_definition__full_custom_communication_list_element_response__NULL == custom_communication_list_element_response->e_communication_direction) {
        goto fail;
    }
    cJSON *e_communication_direction_local_JSON = computed_e_communication_direction_convertToJSON(custom_communication_list_element_response->e_communication_direction);
    if(e_communication_direction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationDirection", e_communication_direction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_communication_list_element_response->e_communication_importance
    if (ezmax_api_definition__full_custom_communication_list_element_response__NULL == custom_communication_list_element_response->e_communication_importance) {
        goto fail;
    }
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(custom_communication_list_element_response->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_communication_list_element_response->e_communication_type
    if (ezmax_api_definition__full_custom_communication_list_element_response__NULL == custom_communication_list_element_response->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(custom_communication_list_element_response->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_communication_list_element_response->i_communicationrecipient_count
    if (!custom_communication_list_element_response->i_communicationrecipient_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationrecipientCount", custom_communication_list_element_response->i_communicationrecipient_count) == NULL) {
    goto fail; //Numeric
    }


    // custom_communication_list_element_response->s_communication_subject
    if (!custom_communication_list_element_response->s_communication_subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", custom_communication_list_element_response->s_communication_subject) == NULL) {
    goto fail; //String
    }


    // custom_communication_list_element_response->s_communication_sender
    if (!custom_communication_list_element_response->s_communication_sender) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSender", custom_communication_list_element_response->s_communication_sender) == NULL) {
    goto fail; //String
    }


    // custom_communication_list_element_response->s_communication_recipient
    if (!custom_communication_list_element_response->s_communication_recipient) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationRecipient", custom_communication_list_element_response->s_communication_recipient) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_communication_list_element_response_t *custom_communication_list_element_response_parseFromJSON(cJSON *custom_communication_list_element_responseJSON){

    custom_communication_list_element_response_t *custom_communication_list_element_response_local_var = NULL;

    // define the local variable for custom_communication_list_element_response->e_communication_direction
    computed_e_communication_direction_t *e_communication_direction_local_nonprim = NULL;

    // define the local variable for custom_communication_list_element_response->e_communication_importance
    field_e_communication_importance_t *e_communication_importance_local_nonprim = NULL;

    // define the local variable for custom_communication_list_element_response->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // custom_communication_list_element_response->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // custom_communication_list_element_response->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "dtCreatedDate");
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // custom_communication_list_element_response->e_communication_direction
    cJSON *e_communication_direction = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "eCommunicationDirection");
    if (!e_communication_direction) {
        goto end;
    }

    
    e_communication_direction_local_nonprim = computed_e_communication_direction_parseFromJSON(e_communication_direction); //custom

    // custom_communication_list_element_response->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "eCommunicationImportance");
    if (!e_communication_importance) {
        goto end;
    }

    
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom

    // custom_communication_list_element_response->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // custom_communication_list_element_response->i_communicationrecipient_count
    cJSON *i_communicationrecipient_count = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "iCommunicationrecipientCount");
    if (!i_communicationrecipient_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communicationrecipient_count))
    {
    goto end; //Numeric
    }

    // custom_communication_list_element_response->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "sCommunicationSubject");
    if (!s_communication_subject) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_subject))
    {
    goto end; //String
    }

    // custom_communication_list_element_response->s_communication_sender
    cJSON *s_communication_sender = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "sCommunicationSender");
    if (!s_communication_sender) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_sender))
    {
    goto end; //String
    }

    // custom_communication_list_element_response->s_communication_recipient
    cJSON *s_communication_recipient = cJSON_GetObjectItemCaseSensitive(custom_communication_list_element_responseJSON, "sCommunicationRecipient");
    if (!s_communication_recipient) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_recipient))
    {
    goto end; //String
    }


    custom_communication_list_element_response_local_var = custom_communication_list_element_response_create (
        pki_communication_id->valuedouble,
        strdup(dt_created_date->valuestring),
        e_communication_direction_local_nonprim,
        e_communication_importance_local_nonprim,
        e_communication_type_local_nonprim,
        i_communicationrecipient_count->valuedouble,
        strdup(s_communication_subject->valuestring),
        strdup(s_communication_sender->valuestring),
        strdup(s_communication_recipient->valuestring)
        );

    return custom_communication_list_element_response_local_var;
end:
    if (e_communication_direction_local_nonprim) {
        computed_e_communication_direction_free(e_communication_direction_local_nonprim);
        e_communication_direction_local_nonprim = NULL;
    }
    if (e_communication_importance_local_nonprim) {
        field_e_communication_importance_free(e_communication_importance_local_nonprim);
        e_communication_importance_local_nonprim = NULL;
    }
    if (e_communication_type_local_nonprim) {
        field_e_communication_type_free(e_communication_type_local_nonprim);
        e_communication_type_local_nonprim = NULL;
    }
    return NULL;

}
