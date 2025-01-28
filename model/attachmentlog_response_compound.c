#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachmentlog_response_compound.h"



static attachmentlog_response_compound_t *attachmentlog_response_compound_create_internal(
    int fki_attachment_id,
    int fki_user_id,
    char *dt_attachmentlog_datetime,
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type,
    char *s_attachmentlog_detail
    ) {
    attachmentlog_response_compound_t *attachmentlog_response_compound_local_var = malloc(sizeof(attachmentlog_response_compound_t));
    if (!attachmentlog_response_compound_local_var) {
        return NULL;
    }
    attachmentlog_response_compound_local_var->fki_attachment_id = fki_attachment_id;
    attachmentlog_response_compound_local_var->fki_user_id = fki_user_id;
    attachmentlog_response_compound_local_var->dt_attachmentlog_datetime = dt_attachmentlog_datetime;
    attachmentlog_response_compound_local_var->e_attachmentlog_type = e_attachmentlog_type;
    attachmentlog_response_compound_local_var->s_attachmentlog_detail = s_attachmentlog_detail;

    attachmentlog_response_compound_local_var->_library_owned = 1;
    return attachmentlog_response_compound_local_var;
}

__attribute__((deprecated)) attachmentlog_response_compound_t *attachmentlog_response_compound_create(
    int fki_attachment_id,
    int fki_user_id,
    char *dt_attachmentlog_datetime,
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type,
    char *s_attachmentlog_detail
    ) {
    return attachmentlog_response_compound_create_internal (
        fki_attachment_id,
        fki_user_id,
        dt_attachmentlog_datetime,
        e_attachmentlog_type,
        s_attachmentlog_detail
        );
}

void attachmentlog_response_compound_free(attachmentlog_response_compound_t *attachmentlog_response_compound) {
    if(NULL == attachmentlog_response_compound){
        return ;
    }
    if(attachmentlog_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachmentlog_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachmentlog_response_compound->dt_attachmentlog_datetime) {
        free(attachmentlog_response_compound->dt_attachmentlog_datetime);
        attachmentlog_response_compound->dt_attachmentlog_datetime = NULL;
    }
    if (attachmentlog_response_compound->s_attachmentlog_detail) {
        free(attachmentlog_response_compound->s_attachmentlog_detail);
        attachmentlog_response_compound->s_attachmentlog_detail = NULL;
    }
    free(attachmentlog_response_compound);
}

cJSON *attachmentlog_response_compound_convertToJSON(attachmentlog_response_compound_t *attachmentlog_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // attachmentlog_response_compound->fki_attachment_id
    if (!attachmentlog_response_compound->fki_attachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAttachmentID", attachmentlog_response_compound->fki_attachment_id) == NULL) {
    goto fail; //Numeric
    }


    // attachmentlog_response_compound->fki_user_id
    if (!attachmentlog_response_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", attachmentlog_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // attachmentlog_response_compound->dt_attachmentlog_datetime
    if (!attachmentlog_response_compound->dt_attachmentlog_datetime) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtAttachmentlogDatetime", attachmentlog_response_compound->dt_attachmentlog_datetime) == NULL) {
    goto fail; //String
    }


    // attachmentlog_response_compound->e_attachmentlog_type
    if (ezmax_api_definition__full_field_e_attachmentlog_type__NULL == attachmentlog_response_compound->e_attachmentlog_type) {
        goto fail;
    }
    cJSON *e_attachmentlog_type_local_JSON = field_e_attachmentlog_type_convertToJSON(attachmentlog_response_compound->e_attachmentlog_type);
    if(e_attachmentlog_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentlogType", e_attachmentlog_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachmentlog_response_compound->s_attachmentlog_detail
    if(attachmentlog_response_compound->s_attachmentlog_detail) {
    if(cJSON_AddStringToObject(item, "sAttachmentlogDetail", attachmentlog_response_compound->s_attachmentlog_detail) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachmentlog_response_compound_t *attachmentlog_response_compound_parseFromJSON(cJSON *attachmentlog_response_compoundJSON){

    attachmentlog_response_compound_t *attachmentlog_response_compound_local_var = NULL;

    // define the local variable for attachmentlog_response_compound->e_attachmentlog_type
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type_local_nonprim = 0;

    // attachmentlog_response_compound->fki_attachment_id
    cJSON *fki_attachment_id = cJSON_GetObjectItemCaseSensitive(attachmentlog_response_compoundJSON, "fkiAttachmentID");
    if (cJSON_IsNull(fki_attachment_id)) {
        fki_attachment_id = NULL;
    }
    if (!fki_attachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_attachment_id))
    {
    goto end; //Numeric
    }

    // attachmentlog_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(attachmentlog_response_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // attachmentlog_response_compound->dt_attachmentlog_datetime
    cJSON *dt_attachmentlog_datetime = cJSON_GetObjectItemCaseSensitive(attachmentlog_response_compoundJSON, "dtAttachmentlogDatetime");
    if (cJSON_IsNull(dt_attachmentlog_datetime)) {
        dt_attachmentlog_datetime = NULL;
    }
    if (!dt_attachmentlog_datetime) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_attachmentlog_datetime))
    {
    goto end; //String
    }

    // attachmentlog_response_compound->e_attachmentlog_type
    cJSON *e_attachmentlog_type = cJSON_GetObjectItemCaseSensitive(attachmentlog_response_compoundJSON, "eAttachmentlogType");
    if (cJSON_IsNull(e_attachmentlog_type)) {
        e_attachmentlog_type = NULL;
    }
    if (!e_attachmentlog_type) {
        goto end;
    }

    
    e_attachmentlog_type_local_nonprim = field_e_attachmentlog_type_parseFromJSON(e_attachmentlog_type); //custom

    // attachmentlog_response_compound->s_attachmentlog_detail
    cJSON *s_attachmentlog_detail = cJSON_GetObjectItemCaseSensitive(attachmentlog_response_compoundJSON, "sAttachmentlogDetail");
    if (cJSON_IsNull(s_attachmentlog_detail)) {
        s_attachmentlog_detail = NULL;
    }
    if (s_attachmentlog_detail) { 
    if(!cJSON_IsString(s_attachmentlog_detail) && !cJSON_IsNull(s_attachmentlog_detail))
    {
    goto end; //String
    }
    }


    attachmentlog_response_compound_local_var = attachmentlog_response_compound_create_internal (
        fki_attachment_id->valuedouble,
        fki_user_id->valuedouble,
        strdup(dt_attachmentlog_datetime->valuestring),
        e_attachmentlog_type_local_nonprim,
        s_attachmentlog_detail && !cJSON_IsNull(s_attachmentlog_detail) ? strdup(s_attachmentlog_detail->valuestring) : NULL
        );

    return attachmentlog_response_compound_local_var;
end:
    if (e_attachmentlog_type_local_nonprim) {
        e_attachmentlog_type_local_nonprim = 0;
    }
    return NULL;

}
