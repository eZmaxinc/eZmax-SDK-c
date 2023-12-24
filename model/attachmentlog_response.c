#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachmentlog_response.h"


char* e_attachmentlog_typeattachmentlog_response_ToString(ezmax_api_definition__full_attachmentlog_response__e e_attachmentlog_type) {
    char* e_attachmentlog_typeArray[] =  { "NULL", "AutoValidation", "CopyFrom", "CopyTo", "CopyToEzsign", "CreateByEzsign", "Download", "Deleted", "Destroyed", "Email", "EmailCC", "EmailCCI", "Fax", "ImportedFromExternalSystem", "ImportedFromEZA", "ImportedFromFaltour", "ImportedFromLonewolf", "ImportedFromProspects", "Move", "OpenFromEmail", "Purged", "Reject", "Rename", "Restore", "Scanned", "SendToGED", "UnvalidatedBy", "Upload", "ValidatedBy", "VetinfoUpload" };
    return e_attachmentlog_typeArray[e_attachmentlog_type];
}

ezmax_api_definition__full_attachmentlog_response__e e_attachmentlog_typeattachmentlog_response_FromString(char* e_attachmentlog_type){
    int stringToReturn = 0;
    char *e_attachmentlog_typeArray[] =  { "NULL", "AutoValidation", "CopyFrom", "CopyTo", "CopyToEzsign", "CreateByEzsign", "Download", "Deleted", "Destroyed", "Email", "EmailCC", "EmailCCI", "Fax", "ImportedFromExternalSystem", "ImportedFromEZA", "ImportedFromFaltour", "ImportedFromLonewolf", "ImportedFromProspects", "Move", "OpenFromEmail", "Purged", "Reject", "Rename", "Restore", "Scanned", "SendToGED", "UnvalidatedBy", "Upload", "ValidatedBy", "VetinfoUpload" };
    size_t sizeofArray = sizeof(e_attachmentlog_typeArray) / sizeof(e_attachmentlog_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachmentlog_type, e_attachmentlog_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

attachmentlog_response_t *attachmentlog_response_create(
    int fki_attachment_id,
    int fki_user_id,
    char *dt_attachmentlog_datetime,
    field_e_attachmentlog_type_t *e_attachmentlog_type,
    char *s_attachmentlog_detail
    ) {
    attachmentlog_response_t *attachmentlog_response_local_var = malloc(sizeof(attachmentlog_response_t));
    if (!attachmentlog_response_local_var) {
        return NULL;
    }
    attachmentlog_response_local_var->fki_attachment_id = fki_attachment_id;
    attachmentlog_response_local_var->fki_user_id = fki_user_id;
    attachmentlog_response_local_var->dt_attachmentlog_datetime = dt_attachmentlog_datetime;
    attachmentlog_response_local_var->e_attachmentlog_type = e_attachmentlog_type;
    attachmentlog_response_local_var->s_attachmentlog_detail = s_attachmentlog_detail;

    return attachmentlog_response_local_var;
}


void attachmentlog_response_free(attachmentlog_response_t *attachmentlog_response) {
    if(NULL == attachmentlog_response){
        return ;
    }
    listEntry_t *listEntry;
    if (attachmentlog_response->dt_attachmentlog_datetime) {
        free(attachmentlog_response->dt_attachmentlog_datetime);
        attachmentlog_response->dt_attachmentlog_datetime = NULL;
    }
    if (attachmentlog_response->e_attachmentlog_type) {
        field_e_attachmentlog_type_free(attachmentlog_response->e_attachmentlog_type);
        attachmentlog_response->e_attachmentlog_type = NULL;
    }
    if (attachmentlog_response->s_attachmentlog_detail) {
        free(attachmentlog_response->s_attachmentlog_detail);
        attachmentlog_response->s_attachmentlog_detail = NULL;
    }
    free(attachmentlog_response);
}

cJSON *attachmentlog_response_convertToJSON(attachmentlog_response_t *attachmentlog_response) {
    cJSON *item = cJSON_CreateObject();

    // attachmentlog_response->fki_attachment_id
    if (!attachmentlog_response->fki_attachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAttachmentID", attachmentlog_response->fki_attachment_id) == NULL) {
    goto fail; //Numeric
    }


    // attachmentlog_response->fki_user_id
    if (!attachmentlog_response->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", attachmentlog_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // attachmentlog_response->dt_attachmentlog_datetime
    if (!attachmentlog_response->dt_attachmentlog_datetime) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtAttachmentlogDatetime", attachmentlog_response->dt_attachmentlog_datetime) == NULL) {
    goto fail; //String
    }


    // attachmentlog_response->e_attachmentlog_type
    if (ezmax_api_definition__full_attachmentlog_response__NULL == attachmentlog_response->e_attachmentlog_type) {
        goto fail;
    }
    cJSON *e_attachmentlog_type_local_JSON = field_e_attachmentlog_type_convertToJSON(attachmentlog_response->e_attachmentlog_type);
    if(e_attachmentlog_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentlogType", e_attachmentlog_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachmentlog_response->s_attachmentlog_detail
    if(attachmentlog_response->s_attachmentlog_detail) {
    if(cJSON_AddStringToObject(item, "sAttachmentlogDetail", attachmentlog_response->s_attachmentlog_detail) == NULL) {
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

attachmentlog_response_t *attachmentlog_response_parseFromJSON(cJSON *attachmentlog_responseJSON){

    attachmentlog_response_t *attachmentlog_response_local_var = NULL;

    // define the local variable for attachmentlog_response->e_attachmentlog_type
    field_e_attachmentlog_type_t *e_attachmentlog_type_local_nonprim = NULL;

    // attachmentlog_response->fki_attachment_id
    cJSON *fki_attachment_id = cJSON_GetObjectItemCaseSensitive(attachmentlog_responseJSON, "fkiAttachmentID");
    if (!fki_attachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_attachment_id))
    {
    goto end; //Numeric
    }

    // attachmentlog_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(attachmentlog_responseJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // attachmentlog_response->dt_attachmentlog_datetime
    cJSON *dt_attachmentlog_datetime = cJSON_GetObjectItemCaseSensitive(attachmentlog_responseJSON, "dtAttachmentlogDatetime");
    if (!dt_attachmentlog_datetime) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_attachmentlog_datetime))
    {
    goto end; //String
    }

    // attachmentlog_response->e_attachmentlog_type
    cJSON *e_attachmentlog_type = cJSON_GetObjectItemCaseSensitive(attachmentlog_responseJSON, "eAttachmentlogType");
    if (!e_attachmentlog_type) {
        goto end;
    }

    
    e_attachmentlog_type_local_nonprim = field_e_attachmentlog_type_parseFromJSON(e_attachmentlog_type); //custom

    // attachmentlog_response->s_attachmentlog_detail
    cJSON *s_attachmentlog_detail = cJSON_GetObjectItemCaseSensitive(attachmentlog_responseJSON, "sAttachmentlogDetail");
    if (s_attachmentlog_detail) { 
    if(!cJSON_IsString(s_attachmentlog_detail) && !cJSON_IsNull(s_attachmentlog_detail))
    {
    goto end; //String
    }
    }


    attachmentlog_response_local_var = attachmentlog_response_create (
        fki_attachment_id->valuedouble,
        fki_user_id->valuedouble,
        strdup(dt_attachmentlog_datetime->valuestring),
        e_attachmentlog_type_local_nonprim,
        s_attachmentlog_detail && !cJSON_IsNull(s_attachmentlog_detail) ? strdup(s_attachmentlog_detail->valuestring) : NULL
        );

    return attachmentlog_response_local_var;
end:
    if (e_attachmentlog_type_local_nonprim) {
        field_e_attachmentlog_type_free(e_attachmentlog_type_local_nonprim);
        e_attachmentlog_type_local_nonprim = NULL;
    }
    return NULL;

}
