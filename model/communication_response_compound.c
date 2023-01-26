#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_response_compound.h"


char* e_communication_importancecommunication_response_compound_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_importance) {
    char* e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
	return e_communication_importanceArray[e_communication_importance];
}

ezmax_api_definition__full_communication_response_compound__e e_communication_importancecommunication_response_compound_FromString(char* e_communication_importance){
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
char* e_communication_typecommunication_response_compound_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_type) {
    char* e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
	return e_communication_typeArray[e_communication_type];
}

ezmax_api_definition__full_communication_response_compound__e e_communication_typecommunication_response_compound_FromString(char* e_communication_type){
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
char* e_communication_directioncommunication_response_compound_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_direction) {
    char* e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
	return e_communication_directionArray[e_communication_direction];
}

ezmax_api_definition__full_communication_response_compound__e e_communication_directioncommunication_response_compound_FromString(char* e_communication_direction){
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

communication_response_compound_t *communication_response_compound_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    computed_e_communication_direction_t *e_communication_direction,
    int i_communicationrecipient_count,
    custom_contact_name_response_t *obj_contact_from,
    common_audit_t *obj_audit,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient
    ) {
    communication_response_compound_t *communication_response_compound_local_var = malloc(sizeof(communication_response_compound_t));
    if (!communication_response_compound_local_var) {
        return NULL;
    }
    communication_response_compound_local_var->pki_communication_id = pki_communication_id;
    communication_response_compound_local_var->e_communication_importance = e_communication_importance;
    communication_response_compound_local_var->e_communication_type = e_communication_type;
    communication_response_compound_local_var->s_communication_subject = s_communication_subject;
    communication_response_compound_local_var->e_communication_direction = e_communication_direction;
    communication_response_compound_local_var->i_communicationrecipient_count = i_communicationrecipient_count;
    communication_response_compound_local_var->obj_contact_from = obj_contact_from;
    communication_response_compound_local_var->obj_audit = obj_audit;
    communication_response_compound_local_var->a_obj_communicationattachment = a_obj_communicationattachment;
    communication_response_compound_local_var->a_obj_communicationrecipient = a_obj_communicationrecipient;
    communication_response_compound_local_var->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;

    return communication_response_compound_local_var;
}


void communication_response_compound_free(communication_response_compound_t *communication_response_compound) {
    if(NULL == communication_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_response_compound->e_communication_importance) {
        field_e_communication_importance_free(communication_response_compound->e_communication_importance);
        communication_response_compound->e_communication_importance = NULL;
    }
    if (communication_response_compound->e_communication_type) {
        field_e_communication_type_free(communication_response_compound->e_communication_type);
        communication_response_compound->e_communication_type = NULL;
    }
    if (communication_response_compound->s_communication_subject) {
        free(communication_response_compound->s_communication_subject);
        communication_response_compound->s_communication_subject = NULL;
    }
    if (communication_response_compound->e_communication_direction) {
        computed_e_communication_direction_free(communication_response_compound->e_communication_direction);
        communication_response_compound->e_communication_direction = NULL;
    }
    if (communication_response_compound->obj_contact_from) {
        custom_contact_name_response_free(communication_response_compound->obj_contact_from);
        communication_response_compound->obj_contact_from = NULL;
    }
    if (communication_response_compound->obj_audit) {
        common_audit_free(communication_response_compound->obj_audit);
        communication_response_compound->obj_audit = NULL;
    }
    if (communication_response_compound->a_obj_communicationattachment) {
        list_ForEach(listEntry, communication_response_compound->a_obj_communicationattachment) {
            communicationattachment_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound->a_obj_communicationattachment);
        communication_response_compound->a_obj_communicationattachment = NULL;
    }
    if (communication_response_compound->a_obj_communicationrecipient) {
        list_ForEach(listEntry, communication_response_compound->a_obj_communicationrecipient) {
            communicationrecipient_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound->a_obj_communicationrecipient);
        communication_response_compound->a_obj_communicationrecipient = NULL;
    }
    if (communication_response_compound->a_obj_communicationexternalrecipient) {
        list_ForEach(listEntry, communication_response_compound->a_obj_communicationexternalrecipient) {
            communicationexternalrecipient_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound->a_obj_communicationexternalrecipient);
        communication_response_compound->a_obj_communicationexternalrecipient = NULL;
    }
    free(communication_response_compound);
}

cJSON *communication_response_compound_convertToJSON(communication_response_compound_t *communication_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // communication_response_compound->pki_communication_id
    if (!communication_response_compound->pki_communication_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", communication_response_compound->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }


    // communication_response_compound->e_communication_importance
    if (ezmax_api_definition__full_communication_response_compound__NULL == communication_response_compound->e_communication_importance) {
        goto fail;
    }
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(communication_response_compound->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response_compound->e_communication_type
    if (ezmax_api_definition__full_communication_response_compound__NULL == communication_response_compound->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(communication_response_compound->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response_compound->s_communication_subject
    if (!communication_response_compound->s_communication_subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_response_compound->s_communication_subject) == NULL) {
    goto fail; //String
    }


    // communication_response_compound->e_communication_direction
    if (ezmax_api_definition__full_communication_response_compound__NULL == communication_response_compound->e_communication_direction) {
        goto fail;
    }
    cJSON *e_communication_direction_local_JSON = computed_e_communication_direction_convertToJSON(communication_response_compound->e_communication_direction);
    if(e_communication_direction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationDirection", e_communication_direction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_response_compound->i_communicationrecipient_count
    if (!communication_response_compound->i_communicationrecipient_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationrecipientCount", communication_response_compound->i_communicationrecipient_count) == NULL) {
    goto fail; //Numeric
    }


    // communication_response_compound->obj_contact_from
    if (!communication_response_compound->obj_contact_from) {
        goto fail;
    }
    cJSON *obj_contact_from_local_JSON = custom_contact_name_response_convertToJSON(communication_response_compound->obj_contact_from);
    if(obj_contact_from_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactFrom", obj_contact_from_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // communication_response_compound->obj_audit
    if (!communication_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(communication_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // communication_response_compound->a_obj_communicationattachment
    if (!communication_response_compound->a_obj_communicationattachment) {
        goto fail;
    }
    cJSON *a_obj_communicationattachment = cJSON_AddArrayToObject(item, "a_objCommunicationattachment");
    if(a_obj_communicationattachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationattachmentListEntry;
    if (communication_response_compound->a_obj_communicationattachment) {
    list_ForEach(a_obj_communicationattachmentListEntry, communication_response_compound->a_obj_communicationattachment) {
    cJSON *itemLocal = communicationattachment_response_compound_convertToJSON(a_obj_communicationattachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationattachment, itemLocal);
    }
    }


    // communication_response_compound->a_obj_communicationrecipient
    if (!communication_response_compound->a_obj_communicationrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationrecipient");
    if(a_obj_communicationrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientListEntry;
    if (communication_response_compound->a_obj_communicationrecipient) {
    list_ForEach(a_obj_communicationrecipientListEntry, communication_response_compound->a_obj_communicationrecipient) {
    cJSON *itemLocal = communicationrecipient_response_compound_convertToJSON(a_obj_communicationrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationrecipient, itemLocal);
    }
    }


    // communication_response_compound->a_obj_communicationexternalrecipient
    if (!communication_response_compound->a_obj_communicationexternalrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationexternalrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationexternalrecipient");
    if(a_obj_communicationexternalrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationexternalrecipientListEntry;
    if (communication_response_compound->a_obj_communicationexternalrecipient) {
    list_ForEach(a_obj_communicationexternalrecipientListEntry, communication_response_compound->a_obj_communicationexternalrecipient) {
    cJSON *itemLocal = communicationexternalrecipient_response_compound_convertToJSON(a_obj_communicationexternalrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationexternalrecipient, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_response_compound_t *communication_response_compound_parseFromJSON(cJSON *communication_response_compoundJSON){

    communication_response_compound_t *communication_response_compound_local_var = NULL;

    // define the local variable for communication_response_compound->e_communication_importance
    field_e_communication_importance_t *e_communication_importance_local_nonprim = NULL;

    // define the local variable for communication_response_compound->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // define the local variable for communication_response_compound->e_communication_direction
    computed_e_communication_direction_t *e_communication_direction_local_nonprim = NULL;

    // define the local variable for communication_response_compound->obj_contact_from
    custom_contact_name_response_t *obj_contact_from_local_nonprim = NULL;

    // define the local variable for communication_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for communication_response_compound->a_obj_communicationattachment
    list_t *a_obj_communicationattachmentList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationrecipient
    list_t *a_obj_communicationrecipientList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationexternalrecipient
    list_t *a_obj_communicationexternalrecipientList = NULL;

    // communication_response_compound->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // communication_response_compound->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "eCommunicationImportance");
    if (!e_communication_importance) {
        goto end;
    }

    
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom

    // communication_response_compound->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_response_compound->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "sCommunicationSubject");
    if (!s_communication_subject) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communication_subject))
    {
    goto end; //String
    }

    // communication_response_compound->e_communication_direction
    cJSON *e_communication_direction = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "eCommunicationDirection");
    if (!e_communication_direction) {
        goto end;
    }

    
    e_communication_direction_local_nonprim = computed_e_communication_direction_parseFromJSON(e_communication_direction); //custom

    // communication_response_compound->i_communicationrecipient_count
    cJSON *i_communicationrecipient_count = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "iCommunicationrecipientCount");
    if (!i_communicationrecipient_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communicationrecipient_count))
    {
    goto end; //Numeric
    }

    // communication_response_compound->obj_contact_from
    cJSON *obj_contact_from = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "objContactFrom");
    if (!obj_contact_from) {
        goto end;
    }

    
    obj_contact_from_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_from); //nonprimitive

    // communication_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // communication_response_compound->a_obj_communicationattachment
    cJSON *a_obj_communicationattachment = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "a_objCommunicationattachment");
    if (!a_obj_communicationattachment) {
        goto end;
    }

    
    cJSON *a_obj_communicationattachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationattachment)){
        goto end; //nonprimitive container
    }

    a_obj_communicationattachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationattachment_local_nonprimitive,a_obj_communicationattachment )
    {
        if(!cJSON_IsObject(a_obj_communicationattachment_local_nonprimitive)){
            goto end;
        }
        communicationattachment_response_compound_t *a_obj_communicationattachmentItem = communicationattachment_response_compound_parseFromJSON(a_obj_communicationattachment_local_nonprimitive);

        list_addElement(a_obj_communicationattachmentList, a_obj_communicationattachmentItem);
    }

    // communication_response_compound->a_obj_communicationrecipient
    cJSON *a_obj_communicationrecipient = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "a_objCommunicationrecipient");
    if (!a_obj_communicationrecipient) {
        goto end;
    }

    
    cJSON *a_obj_communicationrecipient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationrecipient)){
        goto end; //nonprimitive container
    }

    a_obj_communicationrecipientList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationrecipient_local_nonprimitive,a_obj_communicationrecipient )
    {
        if(!cJSON_IsObject(a_obj_communicationrecipient_local_nonprimitive)){
            goto end;
        }
        communicationrecipient_response_compound_t *a_obj_communicationrecipientItem = communicationrecipient_response_compound_parseFromJSON(a_obj_communicationrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationrecipientList, a_obj_communicationrecipientItem);
    }

    // communication_response_compound->a_obj_communicationexternalrecipient
    cJSON *a_obj_communicationexternalrecipient = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "a_objCommunicationexternalrecipient");
    if (!a_obj_communicationexternalrecipient) {
        goto end;
    }

    
    cJSON *a_obj_communicationexternalrecipient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationexternalrecipient)){
        goto end; //nonprimitive container
    }

    a_obj_communicationexternalrecipientList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationexternalrecipient_local_nonprimitive,a_obj_communicationexternalrecipient )
    {
        if(!cJSON_IsObject(a_obj_communicationexternalrecipient_local_nonprimitive)){
            goto end;
        }
        communicationexternalrecipient_response_compound_t *a_obj_communicationexternalrecipientItem = communicationexternalrecipient_response_compound_parseFromJSON(a_obj_communicationexternalrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationexternalrecipientList, a_obj_communicationexternalrecipientItem);
    }


    communication_response_compound_local_var = communication_response_compound_create (
        pki_communication_id->valuedouble,
        e_communication_importance_local_nonprim,
        e_communication_type_local_nonprim,
        strdup(s_communication_subject->valuestring),
        e_communication_direction_local_nonprim,
        i_communicationrecipient_count->valuedouble,
        obj_contact_from_local_nonprim,
        obj_audit_local_nonprim,
        a_obj_communicationattachmentList,
        a_obj_communicationrecipientList,
        a_obj_communicationexternalrecipientList
        );

    return communication_response_compound_local_var;
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
    if (obj_contact_from_local_nonprim) {
        custom_contact_name_response_free(obj_contact_from_local_nonprim);
        obj_contact_from_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_communicationattachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationattachmentList) {
            communicationattachment_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationattachmentList);
        a_obj_communicationattachmentList = NULL;
    }
    if (a_obj_communicationrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationrecipientList) {
            communicationrecipient_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationrecipientList);
        a_obj_communicationrecipientList = NULL;
    }
    if (a_obj_communicationexternalrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationexternalrecipientList) {
            communicationexternalrecipient_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationexternalrecipientList);
        a_obj_communicationexternalrecipientList = NULL;
    }
    return NULL;

}
