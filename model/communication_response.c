#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_response.h"


char* e_communication_importancecommunication_response_ToString(ezmax_api_definition__full_communication_response__e e_communication_importance) {
    char* e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
	return e_communication_importanceArray[e_communication_importance];
}

ezmax_api_definition__full_communication_response__e e_communication_importancecommunication_response_FromString(char* e_communication_importance){
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
char* e_communication_typecommunication_response_ToString(ezmax_api_definition__full_communication_response__e e_communication_type) {
    char* e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
	return e_communication_typeArray[e_communication_type];
}

ezmax_api_definition__full_communication_response__e e_communication_typecommunication_response_FromString(char* e_communication_type){
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
char* e_communication_directioncommunication_response_ToString(ezmax_api_definition__full_communication_response__e e_communication_direction) {
    char* e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
	return e_communication_directionArray[e_communication_direction];
}

ezmax_api_definition__full_communication_response__e e_communication_directioncommunication_response_FromString(char* e_communication_direction){
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

communication_response_t *communication_response_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *s_communication_bodyurl,
    computed_e_communication_direction_t *e_communication_direction,
    int i_communicationrecipient_count,
    int b_communication_private,
    descriptionstatic_response_t *obj_descriptionstatic_sender,
    emailstatic_response_t *obj_emailstatic_sender,
    phonestatic_response_t *obj_phonestatic_sender,
    common_audit_t *obj_audit
    ) {
    communication_response_t *communication_response_local_var = malloc(sizeof(communication_response_t));
    if (!communication_response_local_var) {
        return NULL;
    }
    communication_response_local_var->pki_communication_id = pki_communication_id;
    communication_response_local_var->e_communication_importance = e_communication_importance;
    communication_response_local_var->e_communication_type = e_communication_type;
    communication_response_local_var->s_communication_subject = s_communication_subject;
    communication_response_local_var->s_communication_bodyurl = s_communication_bodyurl;
    communication_response_local_var->e_communication_direction = e_communication_direction;
    communication_response_local_var->i_communicationrecipient_count = i_communicationrecipient_count;
    communication_response_local_var->b_communication_private = b_communication_private;
    communication_response_local_var->obj_descriptionstatic_sender = obj_descriptionstatic_sender;
    communication_response_local_var->obj_emailstatic_sender = obj_emailstatic_sender;
    communication_response_local_var->obj_phonestatic_sender = obj_phonestatic_sender;
    communication_response_local_var->obj_audit = obj_audit;

    return communication_response_local_var;
}


void communication_response_free(communication_response_t *communication_response) {
    if(NULL == communication_response){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_response->e_communication_importance) {
        field_e_communication_importance_free(communication_response->e_communication_importance);
        communication_response->e_communication_importance = NULL;
    }
    if (communication_response->e_communication_type) {
        field_e_communication_type_free(communication_response->e_communication_type);
        communication_response->e_communication_type = NULL;
    }
    if (communication_response->s_communication_subject) {
        free(communication_response->s_communication_subject);
        communication_response->s_communication_subject = NULL;
    }
    if (communication_response->s_communication_bodyurl) {
        free(communication_response->s_communication_bodyurl);
        communication_response->s_communication_bodyurl = NULL;
    }
    if (communication_response->e_communication_direction) {
        computed_e_communication_direction_free(communication_response->e_communication_direction);
        communication_response->e_communication_direction = NULL;
    }
    if (communication_response->obj_descriptionstatic_sender) {
        descriptionstatic_response_free(communication_response->obj_descriptionstatic_sender);
        communication_response->obj_descriptionstatic_sender = NULL;
    }
    if (communication_response->obj_emailstatic_sender) {
        emailstatic_response_free(communication_response->obj_emailstatic_sender);
        communication_response->obj_emailstatic_sender = NULL;
    }
    if (communication_response->obj_phonestatic_sender) {
        phonestatic_response_free(communication_response->obj_phonestatic_sender);
        communication_response->obj_phonestatic_sender = NULL;
    }
    if (communication_response->obj_audit) {
        common_audit_free(communication_response->obj_audit);
        communication_response->obj_audit = NULL;
    }
    free(communication_response);
}

cJSON *communication_response_convertToJSON(communication_response_t *communication_response) {
    cJSON *item = cJSON_CreateObject();

    // communication_response->pki_communication_id
    if (!communication_response->pki_communication_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", communication_response->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }


    // communication_response->e_communication_importance
    if (ezmax_api_definition__full_communication_response__NULL == communication_response->e_communication_importance) {
        goto fail;
    }
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(communication_response->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response->e_communication_type
    if (ezmax_api_definition__full_communication_response__NULL == communication_response->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(communication_response->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response->s_communication_subject
    if (!communication_response->s_communication_subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_response->s_communication_subject) == NULL) {
    goto fail; //String
    }


    // communication_response->s_communication_bodyurl
    if(communication_response->s_communication_bodyurl) {
    if(cJSON_AddStringToObject(item, "sCommunicationBodyurl", communication_response->s_communication_bodyurl) == NULL) {
    goto fail; //String
    }
    }


    // communication_response->e_communication_direction
    if (ezmax_api_definition__full_communication_response__NULL == communication_response->e_communication_direction) {
        goto fail;
    }
    cJSON *e_communication_direction_local_JSON = computed_e_communication_direction_convertToJSON(communication_response->e_communication_direction);
    if(e_communication_direction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationDirection", e_communication_direction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response->i_communicationrecipient_count
    if (!communication_response->i_communicationrecipient_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationrecipientCount", communication_response->i_communicationrecipient_count) == NULL) {
    goto fail; //Numeric
    }


    // communication_response->b_communication_private
    if (!communication_response->b_communication_private) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCommunicationPrivate", communication_response->b_communication_private) == NULL) {
    goto fail; //Bool
    }


    // communication_response->obj_descriptionstatic_sender
    if(communication_response->obj_descriptionstatic_sender) {
    cJSON *obj_descriptionstatic_sender_local_JSON = descriptionstatic_response_convertToJSON(communication_response->obj_descriptionstatic_sender);
    if(obj_descriptionstatic_sender_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDescriptionstaticSender", obj_descriptionstatic_sender_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communication_response->obj_emailstatic_sender
    if(communication_response->obj_emailstatic_sender) {
    cJSON *obj_emailstatic_sender_local_JSON = emailstatic_response_convertToJSON(communication_response->obj_emailstatic_sender);
    if(obj_emailstatic_sender_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmailstaticSender", obj_emailstatic_sender_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communication_response->obj_phonestatic_sender
    if(communication_response->obj_phonestatic_sender) {
    cJSON *obj_phonestatic_sender_local_JSON = phonestatic_response_convertToJSON(communication_response->obj_phonestatic_sender);
    if(obj_phonestatic_sender_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhonestaticSender", obj_phonestatic_sender_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communication_response->obj_audit
    if (!communication_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(communication_response->obj_audit);
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

communication_response_t *communication_response_parseFromJSON(cJSON *communication_responseJSON){

    communication_response_t *communication_response_local_var = NULL;

    // define the local variable for communication_response->e_communication_importance
    field_e_communication_importance_t *e_communication_importance_local_nonprim = NULL;

    // define the local variable for communication_response->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // define the local variable for communication_response->e_communication_direction
    computed_e_communication_direction_t *e_communication_direction_local_nonprim = NULL;

    // define the local variable for communication_response->obj_descriptionstatic_sender
    descriptionstatic_response_t *obj_descriptionstatic_sender_local_nonprim = NULL;

    // define the local variable for communication_response->obj_emailstatic_sender
    emailstatic_response_t *obj_emailstatic_sender_local_nonprim = NULL;

    // define the local variable for communication_response->obj_phonestatic_sender
    phonestatic_response_t *obj_phonestatic_sender_local_nonprim = NULL;

    // define the local variable for communication_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // communication_response->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // communication_response->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "eCommunicationImportance");
    if (!e_communication_importance) {
        goto end;
    }

    
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom

    // communication_response->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_response->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "sCommunicationSubject");
    if (!s_communication_subject) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_subject))
    {
    goto end; //String
    }

    // communication_response->s_communication_bodyurl
    cJSON *s_communication_bodyurl = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "sCommunicationBodyurl");
    if (s_communication_bodyurl) { 
    if(!cJSON_IsString(s_communication_bodyurl) && !cJSON_IsNull(s_communication_bodyurl))
    {
    goto end; //String
    }
    }

    // communication_response->e_communication_direction
    cJSON *e_communication_direction = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "eCommunicationDirection");
    if (!e_communication_direction) {
        goto end;
    }

    
    e_communication_direction_local_nonprim = computed_e_communication_direction_parseFromJSON(e_communication_direction); //custom

    // communication_response->i_communicationrecipient_count
    cJSON *i_communicationrecipient_count = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "iCommunicationrecipientCount");
    if (!i_communicationrecipient_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communicationrecipient_count))
    {
    goto end; //Numeric
    }

    // communication_response->b_communication_private
    cJSON *b_communication_private = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "bCommunicationPrivate");
    if (!b_communication_private) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_communication_private))
    {
    goto end; //Bool
    }

    // communication_response->obj_descriptionstatic_sender
    cJSON *obj_descriptionstatic_sender = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "objDescriptionstaticSender");
    if (obj_descriptionstatic_sender) { 
    obj_descriptionstatic_sender_local_nonprim = descriptionstatic_response_parseFromJSON(obj_descriptionstatic_sender); //nonprimitive
    }

    // communication_response->obj_emailstatic_sender
    cJSON *obj_emailstatic_sender = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "objEmailstaticSender");
    if (obj_emailstatic_sender) { 
    obj_emailstatic_sender_local_nonprim = emailstatic_response_parseFromJSON(obj_emailstatic_sender); //nonprimitive
    }

    // communication_response->obj_phonestatic_sender
    cJSON *obj_phonestatic_sender = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "objPhonestaticSender");
    if (obj_phonestatic_sender) { 
    obj_phonestatic_sender_local_nonprim = phonestatic_response_parseFromJSON(obj_phonestatic_sender); //nonprimitive
    }

    // communication_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(communication_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    communication_response_local_var = communication_response_create (
        pki_communication_id->valuedouble,
        e_communication_importance_local_nonprim,
        e_communication_type_local_nonprim,
        strdup(s_communication_subject->valuestring),
        s_communication_bodyurl && !cJSON_IsNull(s_communication_bodyurl) ? strdup(s_communication_bodyurl->valuestring) : NULL,
        e_communication_direction_local_nonprim,
        i_communicationrecipient_count->valuedouble,
        b_communication_private->valueint,
        obj_descriptionstatic_sender ? obj_descriptionstatic_sender_local_nonprim : NULL,
        obj_emailstatic_sender ? obj_emailstatic_sender_local_nonprim : NULL,
        obj_phonestatic_sender ? obj_phonestatic_sender_local_nonprim : NULL,
        obj_audit_local_nonprim
        );

    return communication_response_local_var;
end:
    if (e_communication_importance_local_nonprim) {
        field_e_communication_importance_free(e_communication_importance_local_nonprim);
        e_communication_importance_local_nonprim = NULL;
    }
    if (e_communication_type_local_nonprim) {
        field_e_communication_type_free(e_communication_type_local_nonprim);
        e_communication_type_local_nonprim = NULL;
    }
    if (e_communication_direction_local_nonprim) {
        computed_e_communication_direction_free(e_communication_direction_local_nonprim);
        e_communication_direction_local_nonprim = NULL;
    }
    if (obj_descriptionstatic_sender_local_nonprim) {
        descriptionstatic_response_free(obj_descriptionstatic_sender_local_nonprim);
        obj_descriptionstatic_sender_local_nonprim = NULL;
    }
    if (obj_emailstatic_sender_local_nonprim) {
        emailstatic_response_free(obj_emailstatic_sender_local_nonprim);
        obj_emailstatic_sender_local_nonprim = NULL;
    }
    if (obj_phonestatic_sender_local_nonprim) {
        phonestatic_response_free(obj_phonestatic_sender_local_nonprim);
        obj_phonestatic_sender_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
