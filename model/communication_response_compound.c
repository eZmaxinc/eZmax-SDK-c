#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_response_compound.h"


char* e_communication_emailimportancecommunication_response_compound_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_emailimportance) {
    char* e_communication_emailimportanceArray[] =  { "NULL", "High", "Normal", "Low" };
	return e_communication_emailimportanceArray[e_communication_emailimportance];
}

ezmax_api_definition__full_communication_response_compound__e e_communication_emailimportancecommunication_response_compound_FromString(char* e_communication_emailimportance){
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

communication_response_compound_t *communication_response_compound_create(
    int pki_communication_id,
    field_e_communication_emailimportance_t *e_communication_emailimportance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *dt_communication_sentdate,
    custom_contact_name_response_t *obj_contact_from,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient,
    list_t *a_obj_communicationimage,
    list_t *a_obj_communicationexternalimage
    ) {
    communication_response_compound_t *communication_response_compound_local_var = malloc(sizeof(communication_response_compound_t));
    if (!communication_response_compound_local_var) {
        return NULL;
    }
    communication_response_compound_local_var->pki_communication_id = pki_communication_id;
    communication_response_compound_local_var->e_communication_emailimportance = e_communication_emailimportance;
    communication_response_compound_local_var->e_communication_type = e_communication_type;
    communication_response_compound_local_var->s_communication_subject = s_communication_subject;
    communication_response_compound_local_var->dt_communication_sentdate = dt_communication_sentdate;
    communication_response_compound_local_var->obj_contact_from = obj_contact_from;
    communication_response_compound_local_var->a_obj_communicationattachment = a_obj_communicationattachment;
    communication_response_compound_local_var->a_obj_communicationrecipient = a_obj_communicationrecipient;
    communication_response_compound_local_var->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;
    communication_response_compound_local_var->a_obj_communicationimage = a_obj_communicationimage;
    communication_response_compound_local_var->a_obj_communicationexternalimage = a_obj_communicationexternalimage;

    return communication_response_compound_local_var;
}


void communication_response_compound_free(communication_response_compound_t *communication_response_compound) {
    if(NULL == communication_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_response_compound->e_communication_emailimportance) {
        field_e_communication_emailimportance_free(communication_response_compound->e_communication_emailimportance);
        communication_response_compound->e_communication_emailimportance = NULL;
    }
    if (communication_response_compound->e_communication_type) {
        field_e_communication_type_free(communication_response_compound->e_communication_type);
        communication_response_compound->e_communication_type = NULL;
    }
    if (communication_response_compound->s_communication_subject) {
        free(communication_response_compound->s_communication_subject);
        communication_response_compound->s_communication_subject = NULL;
    }
    if (communication_response_compound->dt_communication_sentdate) {
        free(communication_response_compound->dt_communication_sentdate);
        communication_response_compound->dt_communication_sentdate = NULL;
    }
    if (communication_response_compound->obj_contact_from) {
        custom_contact_name_response_free(communication_response_compound->obj_contact_from);
        communication_response_compound->obj_contact_from = NULL;
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
    if (communication_response_compound->a_obj_communicationimage) {
        list_ForEach(listEntry, communication_response_compound->a_obj_communicationimage) {
            communicationimage_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound->a_obj_communicationimage);
        communication_response_compound->a_obj_communicationimage = NULL;
    }
    if (communication_response_compound->a_obj_communicationexternalimage) {
        list_ForEach(listEntry, communication_response_compound->a_obj_communicationexternalimage) {
            communicationexternalimage_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound->a_obj_communicationexternalimage);
        communication_response_compound->a_obj_communicationexternalimage = NULL;
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


    // communication_response_compound->e_communication_emailimportance
    if(communication_response_compound->e_communication_emailimportance != ezmax_api_definition__full_communication_response_compound__NULL) {
    cJSON *e_communication_emailimportance_local_JSON = field_e_communication_emailimportance_convertToJSON(communication_response_compound->e_communication_emailimportance);
    if(e_communication_emailimportance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationEmailimportance", e_communication_emailimportance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
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


    // communication_response_compound->dt_communication_sentdate
    if (!communication_response_compound->dt_communication_sentdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCommunicationSentdate", communication_response_compound->dt_communication_sentdate) == NULL) {
    goto fail; //String
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


    // communication_response_compound->a_obj_communicationimage
    if (!communication_response_compound->a_obj_communicationimage) {
        goto fail;
    }
    cJSON *a_obj_communicationimage = cJSON_AddArrayToObject(item, "a_objCommunicationimage");
    if(a_obj_communicationimage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationimageListEntry;
    if (communication_response_compound->a_obj_communicationimage) {
    list_ForEach(a_obj_communicationimageListEntry, communication_response_compound->a_obj_communicationimage) {
    cJSON *itemLocal = communicationimage_response_compound_convertToJSON(a_obj_communicationimageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationimage, itemLocal);
    }
    }


    // communication_response_compound->a_obj_communicationexternalimage
    if (!communication_response_compound->a_obj_communicationexternalimage) {
        goto fail;
    }
    cJSON *a_obj_communicationexternalimage = cJSON_AddArrayToObject(item, "a_objCommunicationexternalimage");
    if(a_obj_communicationexternalimage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationexternalimageListEntry;
    if (communication_response_compound->a_obj_communicationexternalimage) {
    list_ForEach(a_obj_communicationexternalimageListEntry, communication_response_compound->a_obj_communicationexternalimage) {
    cJSON *itemLocal = communicationexternalimage_response_compound_convertToJSON(a_obj_communicationexternalimageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationexternalimage, itemLocal);
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

    // define the local variable for communication_response_compound->e_communication_emailimportance
    field_e_communication_emailimportance_t *e_communication_emailimportance_local_nonprim = NULL;

    // define the local variable for communication_response_compound->e_communication_type
    field_e_communication_type_t *e_communication_type_local_nonprim = NULL;

    // define the local variable for communication_response_compound->obj_contact_from
    custom_contact_name_response_t *obj_contact_from_local_nonprim = NULL;

    // define the local list for communication_response_compound->a_obj_communicationattachment
    list_t *a_obj_communicationattachmentList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationrecipient
    list_t *a_obj_communicationrecipientList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationexternalrecipient
    list_t *a_obj_communicationexternalrecipientList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationimage
    list_t *a_obj_communicationimageList = NULL;

    // define the local list for communication_response_compound->a_obj_communicationexternalimage
    list_t *a_obj_communicationexternalimageList = NULL;

    // communication_response_compound->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "pkiCommunicationID");
    if (!pki_communication_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }

    // communication_response_compound->e_communication_emailimportance
    cJSON *e_communication_emailimportance = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "eCommunicationEmailimportance");
    if (e_communication_emailimportance) { 
    e_communication_emailimportance_local_nonprim = field_e_communication_emailimportance_parseFromJSON(e_communication_emailimportance); //custom
    }

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

    // communication_response_compound->dt_communication_sentdate
    cJSON *dt_communication_sentdate = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "dtCommunicationSentdate");
    if (!dt_communication_sentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_communication_sentdate))
    {
    goto end; //String
    }

    // communication_response_compound->obj_contact_from
    cJSON *obj_contact_from = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "objContactFrom");
    if (!obj_contact_from) {
        goto end;
    }

    
    obj_contact_from_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_from); //nonprimitive

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

    // communication_response_compound->a_obj_communicationimage
    cJSON *a_obj_communicationimage = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "a_objCommunicationimage");
    if (!a_obj_communicationimage) {
        goto end;
    }

    
    cJSON *a_obj_communicationimage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationimage)){
        goto end; //nonprimitive container
    }

    a_obj_communicationimageList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationimage_local_nonprimitive,a_obj_communicationimage )
    {
        if(!cJSON_IsObject(a_obj_communicationimage_local_nonprimitive)){
            goto end;
        }
        communicationimage_response_compound_t *a_obj_communicationimageItem = communicationimage_response_compound_parseFromJSON(a_obj_communicationimage_local_nonprimitive);

        list_addElement(a_obj_communicationimageList, a_obj_communicationimageItem);
    }

    // communication_response_compound->a_obj_communicationexternalimage
    cJSON *a_obj_communicationexternalimage = cJSON_GetObjectItemCaseSensitive(communication_response_compoundJSON, "a_objCommunicationexternalimage");
    if (!a_obj_communicationexternalimage) {
        goto end;
    }

    
    cJSON *a_obj_communicationexternalimage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationexternalimage)){
        goto end; //nonprimitive container
    }

    a_obj_communicationexternalimageList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationexternalimage_local_nonprimitive,a_obj_communicationexternalimage )
    {
        if(!cJSON_IsObject(a_obj_communicationexternalimage_local_nonprimitive)){
            goto end;
        }
        communicationexternalimage_response_compound_t *a_obj_communicationexternalimageItem = communicationexternalimage_response_compound_parseFromJSON(a_obj_communicationexternalimage_local_nonprimitive);

        list_addElement(a_obj_communicationexternalimageList, a_obj_communicationexternalimageItem);
    }


    communication_response_compound_local_var = communication_response_compound_create (
        pki_communication_id->valuedouble,
        e_communication_emailimportance ? e_communication_emailimportance_local_nonprim : NULL,
        e_communication_type_local_nonprim,
        strdup(s_communication_subject->valuestring),
        strdup(dt_communication_sentdate->valuestring),
        obj_contact_from_local_nonprim,
        a_obj_communicationattachmentList,
        a_obj_communicationrecipientList,
        a_obj_communicationexternalrecipientList,
        a_obj_communicationimageList,
        a_obj_communicationexternalimageList
        );

    return communication_response_compound_local_var;
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
    if (a_obj_communicationimageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationimageList) {
            communicationimage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationimageList);
        a_obj_communicationimageList = NULL;
    }
    if (a_obj_communicationexternalimageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationexternalimageList) {
            communicationexternalimage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationexternalimageList);
        a_obj_communicationexternalimageList = NULL;
    }
    return NULL;

}
