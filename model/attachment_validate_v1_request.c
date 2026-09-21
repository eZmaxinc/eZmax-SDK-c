#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_validate_v1_request.h"



static attachment_validate_v1_request_t *attachment_validate_v1_request_create_internal(
    int *fki_attachmentrejectreason_id,
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified,
    char *t_attachment_rejectioncomment,
    list_t *a_s_notification_email_address,
    char *t_notification_message,
    int *b_notification_include_attachment
    ) {
    attachment_validate_v1_request_t *attachment_validate_v1_request_local_var = malloc(sizeof(attachment_validate_v1_request_t));
    if (!attachment_validate_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_validate_v1_request_local_var, 0, sizeof(attachment_validate_v1_request_t));
    attachment_validate_v1_request_local_var->_library_owned = 1;
    attachment_validate_v1_request_local_var->fki_attachmentrejectreason_id = fki_attachmentrejectreason_id;
    attachment_validate_v1_request_local_var->e_attachment_verified = e_attachment_verified;
    attachment_validate_v1_request_local_var->t_attachment_rejectioncomment = t_attachment_rejectioncomment;
    attachment_validate_v1_request_local_var->a_s_notification_email_address = a_s_notification_email_address;
    attachment_validate_v1_request_local_var->t_notification_message = t_notification_message;
    attachment_validate_v1_request_local_var->b_notification_include_attachment = b_notification_include_attachment;
    return attachment_validate_v1_request_local_var;
}

__attribute__((deprecated)) attachment_validate_v1_request_t *attachment_validate_v1_request_create(
    int *fki_attachmentrejectreason_id,
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified,
    char *t_attachment_rejectioncomment,
    list_t *a_s_notification_email_address,
    char *t_notification_message,
    int *b_notification_include_attachment
    ) {
    int *fki_attachmentrejectreason_id_copy = NULL;
    if (fki_attachmentrejectreason_id) {
        fki_attachmentrejectreason_id_copy = malloc(sizeof(int));
        if (fki_attachmentrejectreason_id_copy) *fki_attachmentrejectreason_id_copy = *fki_attachmentrejectreason_id;
    }
    int *b_notification_include_attachment_copy = NULL;
    if (b_notification_include_attachment) {
        b_notification_include_attachment_copy = malloc(sizeof(int));
        if (b_notification_include_attachment_copy) *b_notification_include_attachment_copy = *b_notification_include_attachment;
    }
    attachment_validate_v1_request_t *result = attachment_validate_v1_request_create_internal (
        fki_attachmentrejectreason_id_copy,
        e_attachment_verified,
        t_attachment_rejectioncomment,
        a_s_notification_email_address,
        t_notification_message,
        b_notification_include_attachment_copy
        );
    if (!result) {
        free(fki_attachmentrejectreason_id_copy);
        free(b_notification_include_attachment_copy);
    }
    return result;
}

void attachment_validate_v1_request_free(attachment_validate_v1_request_t *attachment_validate_v1_request) {
    if(NULL == attachment_validate_v1_request){
        return ;
    }
    if(attachment_validate_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_validate_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_validate_v1_request->fki_attachmentrejectreason_id) {
        free(attachment_validate_v1_request->fki_attachmentrejectreason_id);
        attachment_validate_v1_request->fki_attachmentrejectreason_id = NULL;
    }
    if (attachment_validate_v1_request->t_attachment_rejectioncomment) {
        free(attachment_validate_v1_request->t_attachment_rejectioncomment);
        attachment_validate_v1_request->t_attachment_rejectioncomment = NULL;
    }
    if (attachment_validate_v1_request->a_s_notification_email_address) {
        list_ForEach(listEntry, attachment_validate_v1_request->a_s_notification_email_address) {
            free(listEntry->data);
        }
        list_freeList(attachment_validate_v1_request->a_s_notification_email_address);
        attachment_validate_v1_request->a_s_notification_email_address = NULL;
    }
    if (attachment_validate_v1_request->t_notification_message) {
        free(attachment_validate_v1_request->t_notification_message);
        attachment_validate_v1_request->t_notification_message = NULL;
    }
    if (attachment_validate_v1_request->b_notification_include_attachment) {
        free(attachment_validate_v1_request->b_notification_include_attachment);
        attachment_validate_v1_request->b_notification_include_attachment = NULL;
    }
    free(attachment_validate_v1_request);
}

cJSON *attachment_validate_v1_request_convertToJSON(attachment_validate_v1_request_t *attachment_validate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_validate_v1_request->fki_attachmentrejectreason_id
    if(attachment_validate_v1_request->fki_attachmentrejectreason_id) {
    if(cJSON_AddNumberToObject(item, "fkiAttachmentrejectreasonID", *attachment_validate_v1_request->fki_attachmentrejectreason_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_validate_v1_request->e_attachment_verified
    if (ezmax_api_definition__full_field_e_attachment_verified__NULL == attachment_validate_v1_request->e_attachment_verified) {
        goto fail;
    }
    cJSON *e_attachment_verified_local_JSON = field_e_attachment_verified_convertToJSON(attachment_validate_v1_request->e_attachment_verified);
    if(e_attachment_verified_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentVerified", e_attachment_verified_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_validate_v1_request->t_attachment_rejectioncomment
    if(attachment_validate_v1_request->t_attachment_rejectioncomment) {
    if(cJSON_AddStringToObject(item, "tAttachmentRejectioncomment", attachment_validate_v1_request->t_attachment_rejectioncomment) == NULL) {
    goto fail; //String
    }
    }


    // attachment_validate_v1_request->a_s_notification_email_address
    if(attachment_validate_v1_request->a_s_notification_email_address) {
    cJSON *a_s_notification_email_address = cJSON_AddArrayToObject(item, "a_sNotificationEmailAddress");
    if(a_s_notification_email_address == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_notification_email_addressListEntry;
    list_ForEach(a_s_notification_email_addressListEntry, attachment_validate_v1_request->a_s_notification_email_address) {
    if(cJSON_AddStringToObject(a_s_notification_email_address, "", a_s_notification_email_addressListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // attachment_validate_v1_request->t_notification_message
    if(attachment_validate_v1_request->t_notification_message) {
    if(cJSON_AddStringToObject(item, "tNotificationMessage", attachment_validate_v1_request->t_notification_message) == NULL) {
    goto fail; //String
    }
    }


    // attachment_validate_v1_request->b_notification_include_attachment
    if(attachment_validate_v1_request->b_notification_include_attachment) {
    if(cJSON_AddBoolToObject(item, "bNotificationIncludeAttachment", *attachment_validate_v1_request->b_notification_include_attachment) == NULL) {
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

attachment_validate_v1_request_t *attachment_validate_v1_request_parseFromJSON(cJSON *attachment_validate_v1_requestJSON){

    attachment_validate_v1_request_t *attachment_validate_v1_request_local_var = NULL;

    // define the local variable for attachment_validate_v1_request->fki_attachmentrejectreason_id
    int *fki_attachmentrejectreason_id_local_var = NULL;

    // define the local variable for attachment_validate_v1_request->e_attachment_verified
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified_local_nonprim = 0;

    char *t_attachment_rejectioncomment_local_str = NULL;

    // define the local list for attachment_validate_v1_request->a_s_notification_email_address
    list_t *a_s_notification_email_addressList = NULL;

    char *t_notification_message_local_str = NULL;

    // define the local variable for attachment_validate_v1_request->b_notification_include_attachment
    int *b_notification_include_attachment_local_var = NULL;

    // attachment_validate_v1_request->fki_attachmentrejectreason_id
    cJSON *fki_attachmentrejectreason_id = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "fkiAttachmentrejectreasonID");
    if (cJSON_IsNull(fki_attachmentrejectreason_id)) {
        fki_attachmentrejectreason_id = NULL;
    }
    if (fki_attachmentrejectreason_id) { 
    if(!cJSON_IsNumber(fki_attachmentrejectreason_id))
    {
    goto end; //Numeric
    }
    fki_attachmentrejectreason_id_local_var = malloc(sizeof(int));
    if(!fki_attachmentrejectreason_id_local_var)
    {
        goto end;
    }
    *fki_attachmentrejectreason_id_local_var = fki_attachmentrejectreason_id->valuedouble;
    }

    // attachment_validate_v1_request->e_attachment_verified
    cJSON *e_attachment_verified = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "eAttachmentVerified");
    if (cJSON_IsNull(e_attachment_verified)) {
        e_attachment_verified = NULL;
    }
    if (!e_attachment_verified) {
        goto end;
    }

    
    e_attachment_verified_local_nonprim = field_e_attachment_verified_parseFromJSON(e_attachment_verified); //custom

    // attachment_validate_v1_request->t_attachment_rejectioncomment
    cJSON *t_attachment_rejectioncomment = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "tAttachmentRejectioncomment");
    if (cJSON_IsNull(t_attachment_rejectioncomment)) {
        t_attachment_rejectioncomment = NULL;
    }
    if (t_attachment_rejectioncomment) { 
    if(!cJSON_IsString(t_attachment_rejectioncomment) && !cJSON_IsNull(t_attachment_rejectioncomment))
    {
    goto end; //String
    }
    }

    // attachment_validate_v1_request->a_s_notification_email_address
    cJSON *a_s_notification_email_address = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "a_sNotificationEmailAddress");
    if (cJSON_IsNull(a_s_notification_email_address)) {
        a_s_notification_email_address = NULL;
    }
    if (a_s_notification_email_address) { 
    cJSON *a_s_notification_email_address_local = NULL;
    if(!cJSON_IsArray(a_s_notification_email_address)) {
        goto end;//primitive container
    }
    a_s_notification_email_addressList = list_createList();

    cJSON_ArrayForEach(a_s_notification_email_address_local, a_s_notification_email_address)
    {
        if(!cJSON_IsString(a_s_notification_email_address_local))
        {
            goto end;
        }
        list_addElement(a_s_notification_email_addressList , strdup(a_s_notification_email_address_local->valuestring));
    }
    }

    // attachment_validate_v1_request->t_notification_message
    cJSON *t_notification_message = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "tNotificationMessage");
    if (cJSON_IsNull(t_notification_message)) {
        t_notification_message = NULL;
    }
    if (t_notification_message) { 
    if(!cJSON_IsString(t_notification_message) && !cJSON_IsNull(t_notification_message))
    {
    goto end; //String
    }
    }

    // attachment_validate_v1_request->b_notification_include_attachment
    cJSON *b_notification_include_attachment = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "bNotificationIncludeAttachment");
    if (cJSON_IsNull(b_notification_include_attachment)) {
        b_notification_include_attachment = NULL;
    }
    if (b_notification_include_attachment) { 
    if(!cJSON_IsBool(b_notification_include_attachment))
    {
    goto end; //Bool
    }
    b_notification_include_attachment_local_var = malloc(sizeof(int));
    if(!b_notification_include_attachment_local_var)
    {
        goto end;
    }
    *b_notification_include_attachment_local_var = b_notification_include_attachment->valueint;
    }


    if (t_attachment_rejectioncomment && !cJSON_IsNull(t_attachment_rejectioncomment)) t_attachment_rejectioncomment_local_str = strdup(t_attachment_rejectioncomment->valuestring);
    if (t_notification_message && !cJSON_IsNull(t_notification_message)) t_notification_message_local_str = strdup(t_notification_message->valuestring);

    attachment_validate_v1_request_local_var = attachment_validate_v1_request_create_internal (
        fki_attachmentrejectreason_id_local_var,
        e_attachment_verified_local_nonprim,
        t_attachment_rejectioncomment_local_str,
        a_s_notification_email_address ? a_s_notification_email_addressList : NULL,
        t_notification_message_local_str,
        b_notification_include_attachment_local_var
        );

    if (!attachment_validate_v1_request_local_var) {
        goto end;
    }

    return attachment_validate_v1_request_local_var;
end:
    if (fki_attachmentrejectreason_id_local_var) {
        free(fki_attachmentrejectreason_id_local_var);
        fki_attachmentrejectreason_id_local_var = NULL;
    }
    if (e_attachment_verified_local_nonprim) {
        e_attachment_verified_local_nonprim = 0;
    }
    if (t_attachment_rejectioncomment_local_str) {
        free(t_attachment_rejectioncomment_local_str);
        t_attachment_rejectioncomment_local_str = NULL;
    }
    if (a_s_notification_email_addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_notification_email_addressList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_notification_email_addressList);
        a_s_notification_email_addressList = NULL;
    }
    if (t_notification_message_local_str) {
        free(t_notification_message_local_str);
        t_notification_message_local_str = NULL;
    }
    if (b_notification_include_attachment_local_var) {
        free(b_notification_include_attachment_local_var);
        b_notification_include_attachment_local_var = NULL;
    }
    return NULL;

}
