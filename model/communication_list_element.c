#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_list_element.h"


char* e_communication_directioncommunication_list_element_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_direction) {
    char* e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
	return e_communication_directionArray[e_communication_direction];
}

ezmax_api_definition__full_communication_list_element__e e_communication_directioncommunication_list_element_FromString(char* e_communication_direction){
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
char* e_communication_importancecommunication_list_element_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_importance) {
    char* e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
	return e_communication_importanceArray[e_communication_importance];
}

ezmax_api_definition__full_communication_list_element__e e_communication_importancecommunication_list_element_FromString(char* e_communication_importance){
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
char* e_communication_typecommunication_list_element_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_type) {
    char* e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
	return e_communication_typeArray[e_communication_type];
}

ezmax_api_definition__full_communication_list_element__e e_communication_typecommunication_list_element_FromString(char* e_communication_type){
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

communication_list_element_t *communication_list_element_create(
    int pki_communication_id,
    int fki_ezsignfolder_id,
    int fki_inscription_id,
    int fki_inscriptionnotauthenticated_id,
    char *dt_created_date,
    computed_e_communication_direction_t *e_communication_direction,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    int i_communicationrecipient_count,
    char *s_communication_subject,
    char *s_communication_sender,
    char *s_communication_recipient
    ) {
    communication_list_element_t *communication_list_element_local_var = malloc(sizeof(communication_list_element_t));
    if (!communication_list_element_local_var) {
        return NULL;
    }
    communication_list_element_local_var->pki_communication_id = pki_communication_id;
    communication_list_element_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    communication_list_element_local_var->fki_inscription_id = fki_inscription_id;
    communication_list_element_local_var->fki_inscriptionnotauthenticated_id = fki_inscriptionnotauthenticated_id;
    communication_list_element_local_var->dt_created_date = dt_created_date;
    communication_list_element_local_var->e_communication_direction = e_communication_direction;
    communication_list_element_local_var->e_communication_importance = e_communication_importance;
    communication_list_element_local_var->e_communication_type = e_communication_type;
    communication_list_element_local_var->i_communicationrecipient_count = i_communicationrecipient_count;
    communication_list_element_local_var->s_communication_subject = s_communication_subject;
    communication_list_element_local_var->s_communication_sender = s_communication_sender;
    communication_list_element_local_var->s_communication_recipient = s_communication_recipient;

    return communication_list_element_local_var;
}


void communication_list_element_free(communication_list_element_t *communication_list_element) {
    if(NULL == communication_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_list_element->dt_created_date) {
        free(communication_list_element->dt_created_date);
        communication_list_element->dt_created_date = NULL;
    }
    if (communication_list_element->e_communication_direction) {
        computed_e_communication_direction_free(communication_list_element->e_communication_direction);
        communication_list_element->e_communication_direction = NULL;
    }
    if (communication_list_element->e_communication_importance) {
        field_e_communication_importance_free(communication_list_element->e_communication_importance);
        communication_list_element->e_communication_importance = NULL;
    }
    if (communication_list_element->e_communication_type) {
        field_e_communication_type_free(communication_list_element->e_communication_type);
        communication_list_element->e_communication_type = NULL;
    }
    if (communication_list_element->s_communication_subject) {
        free(communication_list_element->s_communication_subject);
        communication_list_element->s_communication_subject = NULL;
    }
    if (communication_list_element->s_communication_sender) {
        free(communication_list_element->s_communication_sender);
        communication_list_element->s_communication_sender = NULL;
    }
    if (communication_list_element->s_communication_recipient) {
        free(communication_list_element->s_communication_recipient);
        communication_list_element->s_communication_recipient = NULL;
    }
    free(communication_list_element);
}

cJSON *communication_list_element_convertToJSON(communication_list_element_t *communication_list_element) {
    cJSON *item = cJSON_CreateObject();

    // communication_list_element->pki_communication_id
    if (!communication_list_element->pki_communication_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", communication_list_element->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }


    // communication_list_element->fki_ezsignfolder_id
    if(communication_list_element->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", communication_list_element->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_list_element->fki_inscription_id
    if(communication_list_element->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", communication_list_element->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_list_element->fki_inscriptionnotauthenticated_id
    if(communication_list_element->fki_inscriptionnotauthenticated_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedID", communication_list_element->fki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_list_element->dt_created_date
    if (!communication_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", communication_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // communication_list_element->e_communication_direction
    if (ezmax_api_definition__full_communication_list_element__NULL == communication_list_element->e_communication_direction) {
        goto fail;
    }
    cJSON *e_communication_direction_local_JSON = computed_e_communication_direction_convertToJSON(communication_list_element->e_communication_direction);
    if(e_communication_direction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationDirection", e_communication_direction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_list_element->e_communication_importance
    if (ezmax_api_definition__full_communication_list_element__NULL == communication_list_element->e_communication_importance) {
        goto fail;
    }
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(communication_list_element->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_list_element->e_communication_type
    if (ezmax_api_definition__full_communication_list_element__NULL == communication_list_element->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(communication_list_element->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_list_element->i_communicationrecipient_count
    if (!communication_list_element->i_communicationrecipient_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationrecipientCount", communication_list_element->i_communicationrecipient_count) == NULL) {
    goto fail; //Numeric
    }


    // communication_list_element->s_communication_subject
    if (!communication_list_element->s_communication_subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_list_element->s_communication_subject) == NULL) {
    goto fail; //String
    }


    // communication_list_element->s_communication_sender
    if (!communication_list_element->s_communication_sender) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSender", communication_list_element->s_communication_sender) == NULL) {
    goto fail; //String
    }


    // communication_list_element->s_communication_recipient
    if (!communication_list_element->s_communication_recipient) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationRecipient", communication_list_element->s_communication_recipient) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_list_element_t *communication_list_element_parseFromJSON(cJSON *communication_list_elementJSON){

    communication_list_element_t *communication_list_element_local_var = NULL;

    // define the local variable for communication_list_element->e_communication_direction
    computed_e_communication_direction_t *e_communication_direction_local_nonprim = NULL;

    // define the local variable for communication_list_element->e_communication_importance
    field_e_communication_importance_t *e_communication_importance_local_nonprim = NULL;

    // define the local variable for communication_list_element->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // communication_list_element->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // communication_list_element->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "fkiEzsignfolderID");
    if (fki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // communication_list_element->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "fkiInscriptionID");
    if (fki_inscription_id) { 
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    }

    // communication_list_element->fki_inscriptionnotauthenticated_id
    cJSON *fki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "fkiInscriptionnotauthenticatedID");
    if (fki_inscriptionnotauthenticated_id) { 
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    }

    // communication_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "dtCreatedDate");
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // communication_list_element->e_communication_direction
    cJSON *e_communication_direction = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "eCommunicationDirection");
    if (!e_communication_direction) {
        goto end;
    }

    
    e_communication_direction_local_nonprim = computed_e_communication_direction_parseFromJSON(e_communication_direction); //custom

    // communication_list_element->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "eCommunicationImportance");
    if (!e_communication_importance) {
        goto end;
    }

    
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom

    // communication_list_element->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_list_element->i_communicationrecipient_count
    cJSON *i_communicationrecipient_count = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "iCommunicationrecipientCount");
    if (!i_communicationrecipient_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communicationrecipient_count))
    {
    goto end; //Numeric
    }

    // communication_list_element->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "sCommunicationSubject");
    if (!s_communication_subject) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_subject))
    {
    goto end; //String
    }

    // communication_list_element->s_communication_sender
    cJSON *s_communication_sender = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "sCommunicationSender");
    if (!s_communication_sender) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_sender))
    {
    goto end; //String
    }

    // communication_list_element->s_communication_recipient
    cJSON *s_communication_recipient = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "sCommunicationRecipient");
    if (!s_communication_recipient) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_recipient))
    {
    goto end; //String
    }


    communication_list_element_local_var = communication_list_element_create (
        pki_communication_id->valuedouble,
        fki_ezsignfolder_id ? fki_ezsignfolder_id->valuedouble : 0,
        fki_inscription_id ? fki_inscription_id->valuedouble : 0,
        fki_inscriptionnotauthenticated_id ? fki_inscriptionnotauthenticated_id->valuedouble : 0,
        strdup(dt_created_date->valuestring),
        e_communication_direction_local_nonprim,
        e_communication_importance_local_nonprim,
        e_communication_type_local_nonprim,
        i_communicationrecipient_count->valuedouble,
        strdup(s_communication_subject->valuestring),
        strdup(s_communication_sender->valuestring),
        strdup(s_communication_recipient->valuestring)
        );

    return communication_list_element_local_var;
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
