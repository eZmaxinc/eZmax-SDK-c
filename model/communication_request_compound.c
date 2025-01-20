#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_request_compound.h"


char* communication_request_compound_e_communication_importance_ToString(ezmax_api_definition__full_communication_request_compound__e e_communication_importance) {
    char* e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
    return e_communication_importanceArray[e_communication_importance];
}

ezmax_api_definition__full_communication_request_compound__e communication_request_compound_e_communication_importance_FromString(char* e_communication_importance){
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
char* communication_request_compound_e_communication_type_ToString(ezmax_api_definition__full_communication_request_compound__e e_communication_type) {
    char* e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
    return e_communication_typeArray[e_communication_type];
}

ezmax_api_definition__full_communication_request_compound__e communication_request_compound_e_communication_type_FromString(char* e_communication_type){
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
char* communication_request_compound_e_communication_attachmenttype_ToString(ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype) {
    char* e_communication_attachmenttypeArray[] =  { "NULL", "Attachment", "Url" };
    return e_communication_attachmenttypeArray[e_communication_attachmenttype];
}

ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e communication_request_compound_e_communication_attachmenttype_FromString(char* e_communication_attachmenttype){
    int stringToReturn = 0;
    char *e_communication_attachmenttypeArray[] =  { "NULL", "Attachment", "Url" };
    size_t sizeofArray = sizeof(e_communication_attachmenttypeArray) / sizeof(e_communication_attachmenttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communication_attachmenttype, e_communication_attachmenttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

communication_request_compound_t *communication_request_compound_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    custom_communicationsender_request_t *obj_communicationsender,
    char *s_communication_subject,
    char *t_communication_body,
    int b_communication_private,
    ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype,
    int i_communication_attachmentlinkexpiration,
    int b_communication_readreceipt,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationreference,
    list_t *a_obj_communicationexternalrecipient
    ) {
    communication_request_compound_t *communication_request_compound_local_var = malloc(sizeof(communication_request_compound_t));
    if (!communication_request_compound_local_var) {
        return NULL;
    }
    communication_request_compound_local_var->pki_communication_id = pki_communication_id;
    communication_request_compound_local_var->e_communication_importance = e_communication_importance;
    communication_request_compound_local_var->e_communication_type = e_communication_type;
    communication_request_compound_local_var->obj_communicationsender = obj_communicationsender;
    communication_request_compound_local_var->s_communication_subject = s_communication_subject;
    communication_request_compound_local_var->t_communication_body = t_communication_body;
    communication_request_compound_local_var->b_communication_private = b_communication_private;
    communication_request_compound_local_var->e_communication_attachmenttype = e_communication_attachmenttype;
    communication_request_compound_local_var->i_communication_attachmentlinkexpiration = i_communication_attachmentlinkexpiration;
    communication_request_compound_local_var->b_communication_readreceipt = b_communication_readreceipt;
    communication_request_compound_local_var->a_obj_communicationattachment = a_obj_communicationattachment;
    communication_request_compound_local_var->a_obj_communicationrecipient = a_obj_communicationrecipient;
    communication_request_compound_local_var->a_obj_communicationreference = a_obj_communicationreference;
    communication_request_compound_local_var->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;

    return communication_request_compound_local_var;
}


void communication_request_compound_free(communication_request_compound_t *communication_request_compound) {
    if(NULL == communication_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_request_compound->e_communication_importance) {
        field_e_communication_importance_free(communication_request_compound->e_communication_importance);
        communication_request_compound->e_communication_importance = NULL;
    }
    if (communication_request_compound->e_communication_type) {
        field_e_communication_type_free(communication_request_compound->e_communication_type);
        communication_request_compound->e_communication_type = NULL;
    }
    if (communication_request_compound->obj_communicationsender) {
        custom_communicationsender_request_free(communication_request_compound->obj_communicationsender);
        communication_request_compound->obj_communicationsender = NULL;
    }
    if (communication_request_compound->s_communication_subject) {
        free(communication_request_compound->s_communication_subject);
        communication_request_compound->s_communication_subject = NULL;
    }
    if (communication_request_compound->t_communication_body) {
        free(communication_request_compound->t_communication_body);
        communication_request_compound->t_communication_body = NULL;
    }
    if (communication_request_compound->a_obj_communicationattachment) {
        list_ForEach(listEntry, communication_request_compound->a_obj_communicationattachment) {
            custom_communicationattachment_request_free(listEntry->data);
        }
        list_freeList(communication_request_compound->a_obj_communicationattachment);
        communication_request_compound->a_obj_communicationattachment = NULL;
    }
    if (communication_request_compound->a_obj_communicationrecipient) {
        list_ForEach(listEntry, communication_request_compound->a_obj_communicationrecipient) {
            communicationrecipient_request_compound_free(listEntry->data);
        }
        list_freeList(communication_request_compound->a_obj_communicationrecipient);
        communication_request_compound->a_obj_communicationrecipient = NULL;
    }
    if (communication_request_compound->a_obj_communicationreference) {
        list_ForEach(listEntry, communication_request_compound->a_obj_communicationreference) {
            communicationreference_request_free(listEntry->data);
        }
        list_freeList(communication_request_compound->a_obj_communicationreference);
        communication_request_compound->a_obj_communicationreference = NULL;
    }
    if (communication_request_compound->a_obj_communicationexternalrecipient) {
        list_ForEach(listEntry, communication_request_compound->a_obj_communicationexternalrecipient) {
            communicationexternalrecipient_request_compound_free(listEntry->data);
        }
        list_freeList(communication_request_compound->a_obj_communicationexternalrecipient);
        communication_request_compound->a_obj_communicationexternalrecipient = NULL;
    }
    free(communication_request_compound);
}

cJSON *communication_request_compound_convertToJSON(communication_request_compound_t *communication_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communication_request_compound->pki_communication_id
    if(communication_request_compound->pki_communication_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", communication_request_compound->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_request_compound->e_communication_importance
    if(communication_request_compound->e_communication_importance != ezmax_api_definition__full_communication_request_compound__NULL) {
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(communication_request_compound->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // communication_request_compound->e_communication_type
    if (ezmax_api_definition__full_communication_request_compound__NULL == communication_request_compound->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(communication_request_compound->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_request_compound->obj_communicationsender
    if(communication_request_compound->obj_communicationsender) {
    cJSON *obj_communicationsender_local_JSON = custom_communicationsender_request_convertToJSON(communication_request_compound->obj_communicationsender);
    if(obj_communicationsender_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCommunicationsender", obj_communicationsender_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communication_request_compound->s_communication_subject
    if(communication_request_compound->s_communication_subject) {
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_request_compound->s_communication_subject) == NULL) {
    goto fail; //String
    }
    }


    // communication_request_compound->t_communication_body
    if (!communication_request_compound->t_communication_body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tCommunicationBody", communication_request_compound->t_communication_body) == NULL) {
    goto fail; //String
    }


    // communication_request_compound->b_communication_private
    if (!communication_request_compound->b_communication_private) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCommunicationPrivate", communication_request_compound->b_communication_private) == NULL) {
    goto fail; //Bool
    }


    // communication_request_compound->e_communication_attachmenttype
    if(communication_request_compound->e_communication_attachmenttype != ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "eCommunicationAttachmenttype", e_communication_attachmenttypecommunication_request_compound_ToString(communication_request_compound->e_communication_attachmenttype)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // communication_request_compound->i_communication_attachmentlinkexpiration
    if(communication_request_compound->i_communication_attachmentlinkexpiration) {
    if(cJSON_AddNumberToObject(item, "iCommunicationAttachmentlinkexpiration", communication_request_compound->i_communication_attachmentlinkexpiration) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_request_compound->b_communication_readreceipt
    if(communication_request_compound->b_communication_readreceipt) {
    if(cJSON_AddBoolToObject(item, "bCommunicationReadreceipt", communication_request_compound->b_communication_readreceipt) == NULL) {
    goto fail; //Bool
    }
    }


    // communication_request_compound->a_obj_communicationattachment
    if (!communication_request_compound->a_obj_communicationattachment) {
        goto fail;
    }
    cJSON *a_obj_communicationattachment = cJSON_AddArrayToObject(item, "a_objCommunicationattachment");
    if(a_obj_communicationattachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationattachmentListEntry;
    if (communication_request_compound->a_obj_communicationattachment) {
    list_ForEach(a_obj_communicationattachmentListEntry, communication_request_compound->a_obj_communicationattachment) {
    cJSON *itemLocal = custom_communicationattachment_request_convertToJSON(a_obj_communicationattachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationattachment, itemLocal);
    }
    }


    // communication_request_compound->a_obj_communicationrecipient
    if (!communication_request_compound->a_obj_communicationrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationrecipient");
    if(a_obj_communicationrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientListEntry;
    if (communication_request_compound->a_obj_communicationrecipient) {
    list_ForEach(a_obj_communicationrecipientListEntry, communication_request_compound->a_obj_communicationrecipient) {
    cJSON *itemLocal = communicationrecipient_request_compound_convertToJSON(a_obj_communicationrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationrecipient, itemLocal);
    }
    }


    // communication_request_compound->a_obj_communicationreference
    if (!communication_request_compound->a_obj_communicationreference) {
        goto fail;
    }
    cJSON *a_obj_communicationreference = cJSON_AddArrayToObject(item, "a_objCommunicationreference");
    if(a_obj_communicationreference == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationreferenceListEntry;
    if (communication_request_compound->a_obj_communicationreference) {
    list_ForEach(a_obj_communicationreferenceListEntry, communication_request_compound->a_obj_communicationreference) {
    cJSON *itemLocal = communicationreference_request_convertToJSON(a_obj_communicationreferenceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationreference, itemLocal);
    }
    }


    // communication_request_compound->a_obj_communicationexternalrecipient
    if (!communication_request_compound->a_obj_communicationexternalrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationexternalrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationexternalrecipient");
    if(a_obj_communicationexternalrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationexternalrecipientListEntry;
    if (communication_request_compound->a_obj_communicationexternalrecipient) {
    list_ForEach(a_obj_communicationexternalrecipientListEntry, communication_request_compound->a_obj_communicationexternalrecipient) {
    cJSON *itemLocal = communicationexternalrecipient_request_compound_convertToJSON(a_obj_communicationexternalrecipientListEntry->data);
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

communication_request_compound_t *communication_request_compound_parseFromJSON(cJSON *communication_request_compoundJSON){

    communication_request_compound_t *communication_request_compound_local_var = NULL;

    // define the local variable for communication_request_compound->e_communication_importance
    field_e_communication_importance_t *e_communication_importance_local_nonprim = NULL;

    // define the local variable for communication_request_compound->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // define the local variable for communication_request_compound->obj_communicationsender
    custom_communicationsender_request_t *obj_communicationsender_local_nonprim = NULL;

    // define the local list for communication_request_compound->a_obj_communicationattachment
    list_t *a_obj_communicationattachmentList = NULL;

    // define the local list for communication_request_compound->a_obj_communicationrecipient
    list_t *a_obj_communicationrecipientList = NULL;

    // define the local list for communication_request_compound->a_obj_communicationreference
    list_t *a_obj_communicationreferenceList = NULL;

    // define the local list for communication_request_compound->a_obj_communicationexternalrecipient
    list_t *a_obj_communicationexternalrecipientList = NULL;

    // communication_request_compound->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "pkiCommunicationID");
    if (pki_communication_id) { 
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }
    }

    // communication_request_compound->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "eCommunicationImportance");
    if (e_communication_importance) { 
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom
    }

    // communication_request_compound->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "eCommunicationType");
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_request_compound->obj_communicationsender
    cJSON *obj_communicationsender = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "objCommunicationsender");
    if (obj_communicationsender) { 
    obj_communicationsender_local_nonprim = custom_communicationsender_request_parseFromJSON(obj_communicationsender); //nonprimitive
    }

    // communication_request_compound->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "sCommunicationSubject");
    if (s_communication_subject) { 
    if(!cJSON_IsString(s_communication_subject) && !cJSON_IsNull(s_communication_subject))
    {
    goto end; //String
    }
    }

    // communication_request_compound->t_communication_body
    cJSON *t_communication_body = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "tCommunicationBody");
    if (!t_communication_body) {
        goto end;
    }

    
    if(!cJSON_IsString(t_communication_body))
    {
    goto end; //String
    }

    // communication_request_compound->b_communication_private
    cJSON *b_communication_private = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "bCommunicationPrivate");
    if (!b_communication_private) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_communication_private))
    {
    goto end; //Bool
    }

    // communication_request_compound->e_communication_attachmenttype
    cJSON *e_communication_attachmenttype = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "eCommunicationAttachmenttype");
    ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttypeVariable;
    if (e_communication_attachmenttype) { 
    if(!cJSON_IsString(e_communication_attachmenttype))
    {
    goto end; //Enum
    }
    e_communication_attachmenttypeVariable = communication_request_compound_e_communication_attachmenttype_FromString(e_communication_attachmenttype->valuestring);
    }

    // communication_request_compound->i_communication_attachmentlinkexpiration
    cJSON *i_communication_attachmentlinkexpiration = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "iCommunicationAttachmentlinkexpiration");
    if (i_communication_attachmentlinkexpiration) { 
    if(!cJSON_IsNumber(i_communication_attachmentlinkexpiration))
    {
    goto end; //Numeric
    }
    }

    // communication_request_compound->b_communication_readreceipt
    cJSON *b_communication_readreceipt = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "bCommunicationReadreceipt");
    if (b_communication_readreceipt) { 
    if(!cJSON_IsBool(b_communication_readreceipt))
    {
    goto end; //Bool
    }
    }

    // communication_request_compound->a_obj_communicationattachment
    cJSON *a_obj_communicationattachment = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "a_objCommunicationattachment");
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
        custom_communicationattachment_request_t *a_obj_communicationattachmentItem = custom_communicationattachment_request_parseFromJSON(a_obj_communicationattachment_local_nonprimitive);

        list_addElement(a_obj_communicationattachmentList, a_obj_communicationattachmentItem);
    }

    // communication_request_compound->a_obj_communicationrecipient
    cJSON *a_obj_communicationrecipient = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "a_objCommunicationrecipient");
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
        communicationrecipient_request_compound_t *a_obj_communicationrecipientItem = communicationrecipient_request_compound_parseFromJSON(a_obj_communicationrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationrecipientList, a_obj_communicationrecipientItem);
    }

    // communication_request_compound->a_obj_communicationreference
    cJSON *a_obj_communicationreference = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "a_objCommunicationreference");
    if (!a_obj_communicationreference) {
        goto end;
    }

    
    cJSON *a_obj_communicationreference_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationreference)){
        goto end; //nonprimitive container
    }

    a_obj_communicationreferenceList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationreference_local_nonprimitive,a_obj_communicationreference )
    {
        if(!cJSON_IsObject(a_obj_communicationreference_local_nonprimitive)){
            goto end;
        }
        communicationreference_request_t *a_obj_communicationreferenceItem = communicationreference_request_parseFromJSON(a_obj_communicationreference_local_nonprimitive);

        list_addElement(a_obj_communicationreferenceList, a_obj_communicationreferenceItem);
    }

    // communication_request_compound->a_obj_communicationexternalrecipient
    cJSON *a_obj_communicationexternalrecipient = cJSON_GetObjectItemCaseSensitive(communication_request_compoundJSON, "a_objCommunicationexternalrecipient");
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
        communicationexternalrecipient_request_compound_t *a_obj_communicationexternalrecipientItem = communicationexternalrecipient_request_compound_parseFromJSON(a_obj_communicationexternalrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationexternalrecipientList, a_obj_communicationexternalrecipientItem);
    }


    communication_request_compound_local_var = communication_request_compound_create (
        pki_communication_id ? pki_communication_id->valuedouble : 0,
        e_communication_importance ? e_communication_importance_local_nonprim : NULL,
        e_communication_type_local_nonprim,
        obj_communicationsender ? obj_communicationsender_local_nonprim : NULL,
        s_communication_subject && !cJSON_IsNull(s_communication_subject) ? strdup(s_communication_subject->valuestring) : NULL,
        strdup(t_communication_body->valuestring),
        b_communication_private->valueint,
        e_communication_attachmenttype ? e_communication_attachmenttypeVariable : ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_NULL,
        i_communication_attachmentlinkexpiration ? i_communication_attachmentlinkexpiration->valuedouble : 0,
        b_communication_readreceipt ? b_communication_readreceipt->valueint : 0,
        a_obj_communicationattachmentList,
        a_obj_communicationrecipientList,
        a_obj_communicationreferenceList,
        a_obj_communicationexternalrecipientList
        );

    return communication_request_compound_local_var;
end:
    if (e_communication_importance_local_nonprim) {
        field_e_communication_importance_free(e_communication_importance_local_nonprim);
        e_communication_importance_local_nonprim = NULL;
    }
    if (e_communication_type_local_nonprim) {
        field_e_communication_type_free(e_communication_type_local_nonprim);
        e_communication_type_local_nonprim = NULL;
    }
    if (obj_communicationsender_local_nonprim) {
        custom_communicationsender_request_free(obj_communicationsender_local_nonprim);
        obj_communicationsender_local_nonprim = NULL;
    }
    if (a_obj_communicationattachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationattachmentList) {
            custom_communicationattachment_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationattachmentList);
        a_obj_communicationattachmentList = NULL;
    }
    if (a_obj_communicationrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationrecipientList) {
            communicationrecipient_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationrecipientList);
        a_obj_communicationrecipientList = NULL;
    }
    if (a_obj_communicationreferenceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationreferenceList) {
            communicationreference_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationreferenceList);
        a_obj_communicationreferenceList = NULL;
    }
    if (a_obj_communicationexternalrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationexternalrecipientList) {
            communicationexternalrecipient_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationexternalrecipientList);
        a_obj_communicationexternalrecipientList = NULL;
    }
    return NULL;

}
