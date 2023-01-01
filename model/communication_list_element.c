#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_list_element.h"


char* e_communication_emailimportancecommunication_list_element_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_emailimportance) {
    char* e_communication_emailimportanceArray[] =  { "NULL", "High", "Normal", "Low" };
	return e_communication_emailimportanceArray[e_communication_emailimportance];
}

ezmax_api_definition__full_communication_list_element__e e_communication_emailimportancecommunication_list_element_FromString(char* e_communication_emailimportance){
    int stringToReturn = 0;
    char *e_communication_emailimportanceArray[] =  { "NULL", "High", "Normal", "Low" };
    size_t sizeofArray = sizeof(e_communication_emailimportanceArray) / sizeof(e_communication_emailimportanceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communication_emailimportance, e_communication_emailimportanceArray[stringToReturn]) == 0) {
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
    field_e_communication_emailimportance_t *e_communication_emailimportance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *dt_communication_sentdate,
    custom_contact_name_response_t *obj_contact_from
    ) {
    communication_list_element_t *communication_list_element_local_var = malloc(sizeof(communication_list_element_t));
    if (!communication_list_element_local_var) {
        return NULL;
    }
    communication_list_element_local_var->pki_communication_id = pki_communication_id;
    communication_list_element_local_var->e_communication_emailimportance = e_communication_emailimportance;
    communication_list_element_local_var->e_communication_type = e_communication_type;
    communication_list_element_local_var->s_communication_subject = s_communication_subject;
    communication_list_element_local_var->dt_communication_sentdate = dt_communication_sentdate;
    communication_list_element_local_var->obj_contact_from = obj_contact_from;

    return communication_list_element_local_var;
}


void communication_list_element_free(communication_list_element_t *communication_list_element) {
    if(NULL == communication_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_list_element->e_communication_emailimportance) {
        field_e_communication_emailimportance_free(communication_list_element->e_communication_emailimportance);
        communication_list_element->e_communication_emailimportance = NULL;
    }
    if (communication_list_element->e_communication_type) {
        field_e_communication_type_free(communication_list_element->e_communication_type);
        communication_list_element->e_communication_type = NULL;
    }
    if (communication_list_element->s_communication_subject) {
        free(communication_list_element->s_communication_subject);
        communication_list_element->s_communication_subject = NULL;
    }
    if (communication_list_element->dt_communication_sentdate) {
        free(communication_list_element->dt_communication_sentdate);
        communication_list_element->dt_communication_sentdate = NULL;
    }
    if (communication_list_element->obj_contact_from) {
        custom_contact_name_response_free(communication_list_element->obj_contact_from);
        communication_list_element->obj_contact_from = NULL;
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


    // communication_list_element->e_communication_emailimportance
    if(communication_list_element->e_communication_emailimportance != ezmax_api_definition__full_communication_list_element__NULL) {
    cJSON *e_communication_emailimportance_local_JSON = field_e_communication_emailimportance_convertToJSON(communication_list_element->e_communication_emailimportance);
    if(e_communication_emailimportance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationEmailimportance", e_communication_emailimportance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
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


    // communication_list_element->s_communication_subject
    if (!communication_list_element->s_communication_subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_list_element->s_communication_subject) == NULL) {
    goto fail; //String
    }


    // communication_list_element->dt_communication_sentdate
    if (!communication_list_element->dt_communication_sentdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCommunicationSentdate", communication_list_element->dt_communication_sentdate) == NULL) {
    goto fail; //String
    }


    // communication_list_element->obj_contact_from
    if (!communication_list_element->obj_contact_from) {
        goto fail;
    }
    cJSON *obj_contact_from_local_JSON = custom_contact_name_response_convertToJSON(communication_list_element->obj_contact_from);
    if(obj_contact_from_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactFrom", obj_contact_from_local_JSON);
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

communication_list_element_t *communication_list_element_parseFromJSON(cJSON *communication_list_elementJSON){

    communication_list_element_t *communication_list_element_local_var = NULL;

    // define the local variable for communication_list_element->e_communication_emailimportance
    field_e_communication_emailimportance_t *e_communication_emailimportance_local_nonprim = NULL;

    // define the local variable for communication_list_element->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // define the local variable for communication_list_element->obj_contact_from
    custom_contact_name_response_t *obj_contact_from_local_nonprim = NULL;

    // communication_list_element->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // communication_list_element->e_communication_emailimportance
    cJSON *e_communication_emailimportance = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "eCommunicationEmailimportance");
    if (e_communication_emailimportance) { 
    e_communication_emailimportance_local_nonprim = field_e_communication_emailimportance_parseFromJSON(e_communication_emailimportance); //custom
    }

    // communication_list_element->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_list_element->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "sCommunicationSubject");
    if (!s_communication_subject) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_subject))
    {
    goto end; //String
    }

    // communication_list_element->dt_communication_sentdate
    cJSON *dt_communication_sentdate = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "dtCommunicationSentdate");
    if (!dt_communication_sentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_communication_sentdate))
    {
    goto end; //String
    }

    // communication_list_element->obj_contact_from
    cJSON *obj_contact_from = cJSON_GetObjectItemCaseSensitive(communication_list_elementJSON, "objContactFrom");
    if (!obj_contact_from) {
        goto end;
    }

    
    obj_contact_from_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_from); //nonprimitive


    communication_list_element_local_var = communication_list_element_create (
        pki_communication_id->valuedouble,
        e_communication_emailimportance ? e_communication_emailimportance_local_nonprim : NULL,
        e_communication_type_local_nonprim,
        strdup(s_communication_subject->valuestring),
        strdup(dt_communication_sentdate->valuestring),
        obj_contact_from_local_nonprim
        );

    return communication_list_element_local_var;
end:
    if (e_communication_emailimportance_local_nonprim) {
        field_e_communication_emailimportance_free(e_communication_emailimportance_local_nonprim);
        e_communication_emailimportance_local_nonprim = NULL;
    }
    if (e_communication_type_local_nonprim) {
        field_e_communication_type_free(e_communication_type_local_nonprim);
        e_communication_type_local_nonprim = NULL;
    }
    if (obj_contact_from_local_nonprim) {
        custom_contact_name_response_free(obj_contact_from_local_nonprim);
        obj_contact_from_local_nonprim = NULL;
    }
    return NULL;

}
