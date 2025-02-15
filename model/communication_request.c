#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_request.h"


char* communication_request_e_communication_attachmenttype_ToString(ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype) {
    char* e_communication_attachmenttypeArray[] =  { "NULL", "Attachment", "Url" };
    return e_communication_attachmenttypeArray[e_communication_attachmenttype];
}

ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e communication_request_e_communication_attachmenttype_FromString(char* e_communication_attachmenttype){
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

static communication_request_t *communication_request_create_internal(
    int pki_communication_id,
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance,
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type,
    custom_communicationsender_request_t *obj_communicationsender,
    char *s_communication_subject,
    char *t_communication_body,
    int b_communication_private,
    ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype,
    int i_communication_attachmentlinkexpiration,
    int b_communication_readreceipt
    ) {
    communication_request_t *communication_request_local_var = malloc(sizeof(communication_request_t));
    if (!communication_request_local_var) {
        return NULL;
    }
    communication_request_local_var->pki_communication_id = pki_communication_id;
    communication_request_local_var->e_communication_importance = e_communication_importance;
    communication_request_local_var->e_communication_type = e_communication_type;
    communication_request_local_var->obj_communicationsender = obj_communicationsender;
    communication_request_local_var->s_communication_subject = s_communication_subject;
    communication_request_local_var->t_communication_body = t_communication_body;
    communication_request_local_var->b_communication_private = b_communication_private;
    communication_request_local_var->e_communication_attachmenttype = e_communication_attachmenttype;
    communication_request_local_var->i_communication_attachmentlinkexpiration = i_communication_attachmentlinkexpiration;
    communication_request_local_var->b_communication_readreceipt = b_communication_readreceipt;

    communication_request_local_var->_library_owned = 1;
    return communication_request_local_var;
}

__attribute__((deprecated)) communication_request_t *communication_request_create(
    int pki_communication_id,
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance,
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type,
    custom_communicationsender_request_t *obj_communicationsender,
    char *s_communication_subject,
    char *t_communication_body,
    int b_communication_private,
    ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype,
    int i_communication_attachmentlinkexpiration,
    int b_communication_readreceipt
    ) {
    return communication_request_create_internal (
        pki_communication_id,
        e_communication_importance,
        e_communication_type,
        obj_communicationsender,
        s_communication_subject,
        t_communication_body,
        b_communication_private,
        e_communication_attachmenttype,
        i_communication_attachmentlinkexpiration,
        b_communication_readreceipt
        );
}

void communication_request_free(communication_request_t *communication_request) {
    if(NULL == communication_request){
        return ;
    }
    if(communication_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communication_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communication_request->obj_communicationsender) {
        custom_communicationsender_request_free(communication_request->obj_communicationsender);
        communication_request->obj_communicationsender = NULL;
    }
    if (communication_request->s_communication_subject) {
        free(communication_request->s_communication_subject);
        communication_request->s_communication_subject = NULL;
    }
    if (communication_request->t_communication_body) {
        free(communication_request->t_communication_body);
        communication_request->t_communication_body = NULL;
    }
    free(communication_request);
}

cJSON *communication_request_convertToJSON(communication_request_t *communication_request) {
    cJSON *item = cJSON_CreateObject();

    // communication_request->pki_communication_id
    if(communication_request->pki_communication_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationID", communication_request->pki_communication_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_request->e_communication_importance
    if(communication_request->e_communication_importance != ezmax_api_definition__full_field_e_communication_importance__NULL) {
    cJSON *e_communication_importance_local_JSON = field_e_communication_importance_convertToJSON(communication_request->e_communication_importance);
    if(e_communication_importance_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationImportance", e_communication_importance_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // communication_request->e_communication_type
    if (ezmax_api_definition__full_field_e_communication_type__NULL == communication_request->e_communication_type) {
        goto fail;
    }
    cJSON *e_communication_type_local_JSON = field_e_communication_type_convertToJSON(communication_request->e_communication_type);
    if(e_communication_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationType", e_communication_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // communication_request->obj_communicationsender
    if(communication_request->obj_communicationsender) {
    cJSON *obj_communicationsender_local_JSON = custom_communicationsender_request_convertToJSON(communication_request->obj_communicationsender);
    if(obj_communicationsender_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCommunicationsender", obj_communicationsender_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // communication_request->s_communication_subject
    if(communication_request->s_communication_subject) {
    if(cJSON_AddStringToObject(item, "sCommunicationSubject", communication_request->s_communication_subject) == NULL) {
    goto fail; //String
    }
    }


    // communication_request->t_communication_body
    if (!communication_request->t_communication_body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tCommunicationBody", communication_request->t_communication_body) == NULL) {
    goto fail; //String
    }


    // communication_request->b_communication_private
    if (!communication_request->b_communication_private) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCommunicationPrivate", communication_request->b_communication_private) == NULL) {
    goto fail; //Bool
    }


    // communication_request->e_communication_attachmenttype
    if(communication_request->e_communication_attachmenttype != ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "eCommunicationAttachmenttype", communication_request_e_communication_attachmenttype_ToString(communication_request->e_communication_attachmenttype)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // communication_request->i_communication_attachmentlinkexpiration
    if(communication_request->i_communication_attachmentlinkexpiration) {
    if(cJSON_AddNumberToObject(item, "iCommunicationAttachmentlinkexpiration", communication_request->i_communication_attachmentlinkexpiration) == NULL) {
    goto fail; //Numeric
    }
    }


    // communication_request->b_communication_readreceipt
    if(communication_request->b_communication_readreceipt) {
    if(cJSON_AddBoolToObject(item, "bCommunicationReadreceipt", communication_request->b_communication_readreceipt) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_request_t *communication_request_parseFromJSON(cJSON *communication_requestJSON){

    communication_request_t *communication_request_local_var = NULL;

    // define the local variable for communication_request->e_communication_importance
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance_local_nonprim = 0;

    // define the local variable for communication_request->e_communication_type
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type_local_nonprim = 0;

    // define the local variable for communication_request->obj_communicationsender
    custom_communicationsender_request_t *obj_communicationsender_local_nonprim = NULL;

    // communication_request->pki_communication_id
    cJSON *pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "pkiCommunicationID");
    if (cJSON_IsNull(pki_communication_id)) {
        pki_communication_id = NULL;
    }
    if (pki_communication_id) { 
    if(!cJSON_IsNumber(pki_communication_id))
    {
    goto end; //Numeric
    }
    }

    // communication_request->e_communication_importance
    cJSON *e_communication_importance = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "eCommunicationImportance");
    if (cJSON_IsNull(e_communication_importance)) {
        e_communication_importance = NULL;
    }
    if (e_communication_importance) { 
    e_communication_importance_local_nonprim = field_e_communication_importance_parseFromJSON(e_communication_importance); //custom
    }

    // communication_request->e_communication_type
    cJSON *e_communication_type = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "eCommunicationType");
    if (cJSON_IsNull(e_communication_type)) {
        e_communication_type = NULL;
    }
    if (!e_communication_type) {
        goto end;
    }

    
    e_communication_type_local_nonprim = field_e_communication_type_parseFromJSON(e_communication_type); //custom

    // communication_request->obj_communicationsender
    cJSON *obj_communicationsender = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "objCommunicationsender");
    if (cJSON_IsNull(obj_communicationsender)) {
        obj_communicationsender = NULL;
    }
    if (obj_communicationsender) { 
    obj_communicationsender_local_nonprim = custom_communicationsender_request_parseFromJSON(obj_communicationsender); //nonprimitive
    }

    // communication_request->s_communication_subject
    cJSON *s_communication_subject = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "sCommunicationSubject");
    if (cJSON_IsNull(s_communication_subject)) {
        s_communication_subject = NULL;
    }
    if (s_communication_subject) { 
    if(!cJSON_IsString(s_communication_subject) && !cJSON_IsNull(s_communication_subject))
    {
    goto end; //String
    }
    }

    // communication_request->t_communication_body
    cJSON *t_communication_body = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "tCommunicationBody");
    if (cJSON_IsNull(t_communication_body)) {
        t_communication_body = NULL;
    }
    if (!t_communication_body) {
        goto end;
    }

    
    if(!cJSON_IsString(t_communication_body))
    {
    goto end; //String
    }

    // communication_request->b_communication_private
    cJSON *b_communication_private = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "bCommunicationPrivate");
    if (cJSON_IsNull(b_communication_private)) {
        b_communication_private = NULL;
    }
    if (!b_communication_private) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_communication_private))
    {
    goto end; //Bool
    }

    // communication_request->e_communication_attachmenttype
    cJSON *e_communication_attachmenttype = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "eCommunicationAttachmenttype");
    if (cJSON_IsNull(e_communication_attachmenttype)) {
        e_communication_attachmenttype = NULL;
    }
    ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttypeVariable;
    if (e_communication_attachmenttype) { 
    if(!cJSON_IsString(e_communication_attachmenttype))
    {
    goto end; //Enum
    }
    e_communication_attachmenttypeVariable = communication_request_e_communication_attachmenttype_FromString(e_communication_attachmenttype->valuestring);
    }

    // communication_request->i_communication_attachmentlinkexpiration
    cJSON *i_communication_attachmentlinkexpiration = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "iCommunicationAttachmentlinkexpiration");
    if (cJSON_IsNull(i_communication_attachmentlinkexpiration)) {
        i_communication_attachmentlinkexpiration = NULL;
    }
    if (i_communication_attachmentlinkexpiration) { 
    if(!cJSON_IsNumber(i_communication_attachmentlinkexpiration))
    {
    goto end; //Numeric
    }
    }

    // communication_request->b_communication_readreceipt
    cJSON *b_communication_readreceipt = cJSON_GetObjectItemCaseSensitive(communication_requestJSON, "bCommunicationReadreceipt");
    if (cJSON_IsNull(b_communication_readreceipt)) {
        b_communication_readreceipt = NULL;
    }
    if (b_communication_readreceipt) { 
    if(!cJSON_IsBool(b_communication_readreceipt))
    {
    goto end; //Bool
    }
    }


    communication_request_local_var = communication_request_create_internal (
        pki_communication_id ? pki_communication_id->valuedouble : 0,
        e_communication_importance ? e_communication_importance_local_nonprim : 0,
        e_communication_type_local_nonprim,
        obj_communicationsender ? obj_communicationsender_local_nonprim : NULL,
        s_communication_subject && !cJSON_IsNull(s_communication_subject) ? strdup(s_communication_subject->valuestring) : NULL,
        strdup(t_communication_body->valuestring),
        b_communication_private->valueint,
        e_communication_attachmenttype ? e_communication_attachmenttypeVariable : ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_NULL,
        i_communication_attachmentlinkexpiration ? i_communication_attachmentlinkexpiration->valuedouble : 0,
        b_communication_readreceipt ? b_communication_readreceipt->valueint : 0
        );

    return communication_request_local_var;
end:
    if (e_communication_importance_local_nonprim) {
        e_communication_importance_local_nonprim = 0;
    }
    if (e_communication_type_local_nonprim) {
        e_communication_type_local_nonprim = 0;
    }
    if (obj_communicationsender_local_nonprim) {
        custom_communicationsender_request_free(obj_communicationsender_local_nonprim);
        obj_communicationsender_local_nonprim = NULL;
    }
    return NULL;

}
