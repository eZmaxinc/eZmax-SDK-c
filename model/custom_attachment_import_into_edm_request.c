#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachment_import_into_edm_request.h"


char* custom_attachment_import_into_edm_request_e_attachment_source_ToString(ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source) {
    char* e_attachment_sourceArray[] =  { "NULL", "Attachment", "Base64", "Url" };
    return e_attachment_sourceArray[e_attachment_source];
}

ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e custom_attachment_import_into_edm_request_e_attachment_source_FromString(char* e_attachment_source){
    int stringToReturn = 0;
    char *e_attachment_sourceArray[] =  { "NULL", "Attachment", "Base64", "Url" };
    size_t sizeofArray = sizeof(e_attachment_sourceArray) / sizeof(e_attachment_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_source, e_attachment_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_create_internal(
    ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source,
    int *fki_attachment_id,
    int *fki_inscriptionchecklist_id,
    char *s_attachment_url,
    char *s_attachment_base64,
    char *s_attachment_name,
    char *s_attachment_category,
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int *fki_user_id_specific,
    char *s_attachment_md5,
    int *b_attachment_forceoverwrite,
    int *b_attachment_forcerestore
    ) {
    custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_local_var = malloc(sizeof(custom_attachment_import_into_edm_request_t));
    if (!custom_attachment_import_into_edm_request_local_var) {
        return NULL;
    }
    memset(custom_attachment_import_into_edm_request_local_var, 0, sizeof(custom_attachment_import_into_edm_request_t));
    custom_attachment_import_into_edm_request_local_var->_library_owned = 1;
    custom_attachment_import_into_edm_request_local_var->e_attachment_source = e_attachment_source;
    custom_attachment_import_into_edm_request_local_var->fki_attachment_id = fki_attachment_id;
    custom_attachment_import_into_edm_request_local_var->fki_inscriptionchecklist_id = fki_inscriptionchecklist_id;
    custom_attachment_import_into_edm_request_local_var->s_attachment_url = s_attachment_url;
    custom_attachment_import_into_edm_request_local_var->s_attachment_base64 = s_attachment_base64;
    custom_attachment_import_into_edm_request_local_var->s_attachment_name = s_attachment_name;
    custom_attachment_import_into_edm_request_local_var->s_attachment_category = s_attachment_category;
    custom_attachment_import_into_edm_request_local_var->e_attachment_privacy = e_attachment_privacy;
    custom_attachment_import_into_edm_request_local_var->fki_user_id_specific = fki_user_id_specific;
    custom_attachment_import_into_edm_request_local_var->s_attachment_md5 = s_attachment_md5;
    custom_attachment_import_into_edm_request_local_var->b_attachment_forceoverwrite = b_attachment_forceoverwrite;
    custom_attachment_import_into_edm_request_local_var->b_attachment_forcerestore = b_attachment_forcerestore;
    return custom_attachment_import_into_edm_request_local_var;
}

__attribute__((deprecated)) custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_create(
    ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_source,
    int *fki_attachment_id,
    int *fki_inscriptionchecklist_id,
    char *s_attachment_url,
    char *s_attachment_base64,
    char *s_attachment_name,
    char *s_attachment_category,
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int *fki_user_id_specific,
    char *s_attachment_md5,
    int *b_attachment_forceoverwrite,
    int *b_attachment_forcerestore
    ) {
    int *fki_attachment_id_copy = NULL;
    if (fki_attachment_id) {
        fki_attachment_id_copy = malloc(sizeof(int));
        if (fki_attachment_id_copy) *fki_attachment_id_copy = *fki_attachment_id;
    }
    int *fki_inscriptionchecklist_id_copy = NULL;
    if (fki_inscriptionchecklist_id) {
        fki_inscriptionchecklist_id_copy = malloc(sizeof(int));
        if (fki_inscriptionchecklist_id_copy) *fki_inscriptionchecklist_id_copy = *fki_inscriptionchecklist_id;
    }
    int *fki_user_id_specific_copy = NULL;
    if (fki_user_id_specific) {
        fki_user_id_specific_copy = malloc(sizeof(int));
        if (fki_user_id_specific_copy) *fki_user_id_specific_copy = *fki_user_id_specific;
    }
    int *b_attachment_forceoverwrite_copy = NULL;
    if (b_attachment_forceoverwrite) {
        b_attachment_forceoverwrite_copy = malloc(sizeof(int));
        if (b_attachment_forceoverwrite_copy) *b_attachment_forceoverwrite_copy = *b_attachment_forceoverwrite;
    }
    int *b_attachment_forcerestore_copy = NULL;
    if (b_attachment_forcerestore) {
        b_attachment_forcerestore_copy = malloc(sizeof(int));
        if (b_attachment_forcerestore_copy) *b_attachment_forcerestore_copy = *b_attachment_forcerestore;
    }
    custom_attachment_import_into_edm_request_t *result = custom_attachment_import_into_edm_request_create_internal (
        e_attachment_source,
        fki_attachment_id_copy,
        fki_inscriptionchecklist_id_copy,
        s_attachment_url,
        s_attachment_base64,
        s_attachment_name,
        s_attachment_category,
        e_attachment_privacy,
        fki_user_id_specific_copy,
        s_attachment_md5,
        b_attachment_forceoverwrite_copy,
        b_attachment_forcerestore_copy
        );
    if (!result) {
        free(fki_attachment_id_copy);
        free(fki_inscriptionchecklist_id_copy);
        free(fki_user_id_specific_copy);
        free(b_attachment_forceoverwrite_copy);
        free(b_attachment_forcerestore_copy);
    }
    return result;
}

void custom_attachment_import_into_edm_request_free(custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request) {
    if(NULL == custom_attachment_import_into_edm_request){
        return ;
    }
    if(custom_attachment_import_into_edm_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_attachment_import_into_edm_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attachment_import_into_edm_request->fki_attachment_id) {
        free(custom_attachment_import_into_edm_request->fki_attachment_id);
        custom_attachment_import_into_edm_request->fki_attachment_id = NULL;
    }
    if (custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id) {
        free(custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id);
        custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id = NULL;
    }
    if (custom_attachment_import_into_edm_request->s_attachment_url) {
        free(custom_attachment_import_into_edm_request->s_attachment_url);
        custom_attachment_import_into_edm_request->s_attachment_url = NULL;
    }
    if (custom_attachment_import_into_edm_request->s_attachment_base64) {
        free(custom_attachment_import_into_edm_request->s_attachment_base64);
        custom_attachment_import_into_edm_request->s_attachment_base64 = NULL;
    }
    if (custom_attachment_import_into_edm_request->s_attachment_name) {
        free(custom_attachment_import_into_edm_request->s_attachment_name);
        custom_attachment_import_into_edm_request->s_attachment_name = NULL;
    }
    if (custom_attachment_import_into_edm_request->s_attachment_category) {
        free(custom_attachment_import_into_edm_request->s_attachment_category);
        custom_attachment_import_into_edm_request->s_attachment_category = NULL;
    }
    if (custom_attachment_import_into_edm_request->fki_user_id_specific) {
        free(custom_attachment_import_into_edm_request->fki_user_id_specific);
        custom_attachment_import_into_edm_request->fki_user_id_specific = NULL;
    }
    if (custom_attachment_import_into_edm_request->s_attachment_md5) {
        free(custom_attachment_import_into_edm_request->s_attachment_md5);
        custom_attachment_import_into_edm_request->s_attachment_md5 = NULL;
    }
    if (custom_attachment_import_into_edm_request->b_attachment_forceoverwrite) {
        free(custom_attachment_import_into_edm_request->b_attachment_forceoverwrite);
        custom_attachment_import_into_edm_request->b_attachment_forceoverwrite = NULL;
    }
    if (custom_attachment_import_into_edm_request->b_attachment_forcerestore) {
        free(custom_attachment_import_into_edm_request->b_attachment_forcerestore);
        custom_attachment_import_into_edm_request->b_attachment_forcerestore = NULL;
    }
    free(custom_attachment_import_into_edm_request);
}

cJSON *custom_attachment_import_into_edm_request_convertToJSON(custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachment_import_into_edm_request->e_attachment_source
    if (ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_NULL == custom_attachment_import_into_edm_request->e_attachment_source) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eAttachmentSource", custom_attachment_import_into_edm_request_e_attachment_source_ToString(custom_attachment_import_into_edm_request->e_attachment_source)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_attachment_import_into_edm_request->fki_attachment_id
    if(custom_attachment_import_into_edm_request->fki_attachment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAttachmentID", *custom_attachment_import_into_edm_request->fki_attachment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id
    if(custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionchecklistID", *custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_import_into_edm_request->s_attachment_url
    if(custom_attachment_import_into_edm_request->s_attachment_url) {
    if(cJSON_AddStringToObject(item, "sAttachmentUrl", custom_attachment_import_into_edm_request->s_attachment_url) == NULL) {
    goto fail; //String
    }
    }


    // custom_attachment_import_into_edm_request->s_attachment_base64
    if(custom_attachment_import_into_edm_request->s_attachment_base64) {
    if(cJSON_AddStringToObject(item, "sAttachmentBase64", custom_attachment_import_into_edm_request->s_attachment_base64) == NULL) {
    goto fail; //ByteArray
    }
    }


    // custom_attachment_import_into_edm_request->s_attachment_name
    if (!custom_attachment_import_into_edm_request->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", custom_attachment_import_into_edm_request->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // custom_attachment_import_into_edm_request->s_attachment_category
    if (!custom_attachment_import_into_edm_request->s_attachment_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentCategory", custom_attachment_import_into_edm_request->s_attachment_category) == NULL) {
    goto fail; //String
    }


    // custom_attachment_import_into_edm_request->e_attachment_privacy
    if (ezmax_api_definition__full_field_e_attachment_privacy__NULL == custom_attachment_import_into_edm_request->e_attachment_privacy) {
        goto fail;
    }
    cJSON *e_attachment_privacy_local_JSON = field_e_attachment_privacy_convertToJSON(custom_attachment_import_into_edm_request->e_attachment_privacy);
    if(e_attachment_privacy_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentPrivacy", e_attachment_privacy_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachment_import_into_edm_request->fki_user_id_specific
    if(custom_attachment_import_into_edm_request->fki_user_id_specific) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDSpecific", *custom_attachment_import_into_edm_request->fki_user_id_specific) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_import_into_edm_request->s_attachment_md5
    if(custom_attachment_import_into_edm_request->s_attachment_md5) {
    if(cJSON_AddStringToObject(item, "sAttachmentMD5", custom_attachment_import_into_edm_request->s_attachment_md5) == NULL) {
    goto fail; //String
    }
    }


    // custom_attachment_import_into_edm_request->b_attachment_forceoverwrite
    if(custom_attachment_import_into_edm_request->b_attachment_forceoverwrite) {
    if(cJSON_AddBoolToObject(item, "bAttachmentForceoverwrite", *custom_attachment_import_into_edm_request->b_attachment_forceoverwrite) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_attachment_import_into_edm_request->b_attachment_forcerestore
    if(custom_attachment_import_into_edm_request->b_attachment_forcerestore) {
    if(cJSON_AddBoolToObject(item, "bAttachmentForcerestore", *custom_attachment_import_into_edm_request->b_attachment_forcerestore) == NULL) {
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

custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_parseFromJSON(cJSON *custom_attachment_import_into_edm_requestJSON){

    custom_attachment_import_into_edm_request_t *custom_attachment_import_into_edm_request_local_var = NULL;

    // define the local variable for custom_attachment_import_into_edm_request->fki_attachment_id
    int *fki_attachment_id_local_var = NULL;

    // define the local variable for custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id
    int *fki_inscriptionchecklist_id_local_var = NULL;

    char *s_attachment_url_local_str = NULL;

    char *s_attachment_base64_local_str = NULL;

    char *s_attachment_name_local_str = NULL;

    char *s_attachment_category_local_str = NULL;

    // define the local variable for custom_attachment_import_into_edm_request->e_attachment_privacy
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy_local_nonprim = 0;

    // define the local variable for custom_attachment_import_into_edm_request->fki_user_id_specific
    int *fki_user_id_specific_local_var = NULL;

    char *s_attachment_md5_local_str = NULL;

    // define the local variable for custom_attachment_import_into_edm_request->b_attachment_forceoverwrite
    int *b_attachment_forceoverwrite_local_var = NULL;

    // define the local variable for custom_attachment_import_into_edm_request->b_attachment_forcerestore
    int *b_attachment_forcerestore_local_var = NULL;

    // custom_attachment_import_into_edm_request->e_attachment_source
    cJSON *e_attachment_source = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "eAttachmentSource");
    if (cJSON_IsNull(e_attachment_source)) {
        e_attachment_source = NULL;
    }
    if (!e_attachment_source) {
        goto end;
    }

    ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e e_attachment_sourceVariable;
    
    if(!cJSON_IsString(e_attachment_source))
    {
    goto end; //Enum
    }
    e_attachment_sourceVariable = custom_attachment_import_into_edm_request_e_attachment_source_FromString(e_attachment_source->valuestring);

    // custom_attachment_import_into_edm_request->fki_attachment_id
    cJSON *fki_attachment_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "fkiAttachmentID");
    if (cJSON_IsNull(fki_attachment_id)) {
        fki_attachment_id = NULL;
    }
    if (fki_attachment_id) { 
    if(!cJSON_IsNumber(fki_attachment_id))
    {
    goto end; //Numeric
    }
    fki_attachment_id_local_var = malloc(sizeof(int));
    if(!fki_attachment_id_local_var)
    {
        goto end;
    }
    *fki_attachment_id_local_var = fki_attachment_id->valuedouble;
    }

    // custom_attachment_import_into_edm_request->fki_inscriptionchecklist_id
    cJSON *fki_inscriptionchecklist_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "fkiInscriptionchecklistID");
    if (cJSON_IsNull(fki_inscriptionchecklist_id)) {
        fki_inscriptionchecklist_id = NULL;
    }
    if (fki_inscriptionchecklist_id) { 
    if(!cJSON_IsNumber(fki_inscriptionchecklist_id))
    {
    goto end; //Numeric
    }
    fki_inscriptionchecklist_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptionchecklist_id_local_var)
    {
        goto end;
    }
    *fki_inscriptionchecklist_id_local_var = fki_inscriptionchecklist_id->valuedouble;
    }

    // custom_attachment_import_into_edm_request->s_attachment_url
    cJSON *s_attachment_url = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "sAttachmentUrl");
    if (cJSON_IsNull(s_attachment_url)) {
        s_attachment_url = NULL;
    }
    if (s_attachment_url) { 
    if(!cJSON_IsString(s_attachment_url) && !cJSON_IsNull(s_attachment_url))
    {
    goto end; //String
    }
    }

    // custom_attachment_import_into_edm_request->s_attachment_base64
    cJSON *s_attachment_base64 = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "sAttachmentBase64");
    if (cJSON_IsNull(s_attachment_base64)) {
        s_attachment_base64 = NULL;
    }
    if (s_attachment_base64) { 
    if(!cJSON_IsString(s_attachment_base64))
    {
    goto end; //ByteArray
    }
    }

    // custom_attachment_import_into_edm_request->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "sAttachmentName");
    if (cJSON_IsNull(s_attachment_name)) {
        s_attachment_name = NULL;
    }
    if (!s_attachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_name))
    {
    goto end; //String
    }

    // custom_attachment_import_into_edm_request->s_attachment_category
    cJSON *s_attachment_category = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "sAttachmentCategory");
    if (cJSON_IsNull(s_attachment_category)) {
        s_attachment_category = NULL;
    }
    if (!s_attachment_category) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_category))
    {
    goto end; //String
    }

    // custom_attachment_import_into_edm_request->e_attachment_privacy
    cJSON *e_attachment_privacy = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "eAttachmentPrivacy");
    if (cJSON_IsNull(e_attachment_privacy)) {
        e_attachment_privacy = NULL;
    }
    if (!e_attachment_privacy) {
        goto end;
    }

    
    e_attachment_privacy_local_nonprim = field_e_attachment_privacy_parseFromJSON(e_attachment_privacy); //custom

    // custom_attachment_import_into_edm_request->fki_user_id_specific
    cJSON *fki_user_id_specific = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "fkiUserIDSpecific");
    if (cJSON_IsNull(fki_user_id_specific)) {
        fki_user_id_specific = NULL;
    }
    if (fki_user_id_specific) { 
    if(!cJSON_IsNumber(fki_user_id_specific))
    {
    goto end; //Numeric
    }
    fki_user_id_specific_local_var = malloc(sizeof(int));
    if(!fki_user_id_specific_local_var)
    {
        goto end;
    }
    *fki_user_id_specific_local_var = fki_user_id_specific->valuedouble;
    }

    // custom_attachment_import_into_edm_request->s_attachment_md5
    cJSON *s_attachment_md5 = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "sAttachmentMD5");
    if (cJSON_IsNull(s_attachment_md5)) {
        s_attachment_md5 = NULL;
    }
    if (s_attachment_md5) { 
    if(!cJSON_IsString(s_attachment_md5) && !cJSON_IsNull(s_attachment_md5))
    {
    goto end; //String
    }
    }

    // custom_attachment_import_into_edm_request->b_attachment_forceoverwrite
    cJSON *b_attachment_forceoverwrite = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "bAttachmentForceoverwrite");
    if (cJSON_IsNull(b_attachment_forceoverwrite)) {
        b_attachment_forceoverwrite = NULL;
    }
    if (b_attachment_forceoverwrite) { 
    if(!cJSON_IsBool(b_attachment_forceoverwrite))
    {
    goto end; //Bool
    }
    b_attachment_forceoverwrite_local_var = malloc(sizeof(int));
    if(!b_attachment_forceoverwrite_local_var)
    {
        goto end;
    }
    *b_attachment_forceoverwrite_local_var = b_attachment_forceoverwrite->valueint;
    }

    // custom_attachment_import_into_edm_request->b_attachment_forcerestore
    cJSON *b_attachment_forcerestore = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_requestJSON, "bAttachmentForcerestore");
    if (cJSON_IsNull(b_attachment_forcerestore)) {
        b_attachment_forcerestore = NULL;
    }
    if (b_attachment_forcerestore) { 
    if(!cJSON_IsBool(b_attachment_forcerestore))
    {
    goto end; //Bool
    }
    b_attachment_forcerestore_local_var = malloc(sizeof(int));
    if(!b_attachment_forcerestore_local_var)
    {
        goto end;
    }
    *b_attachment_forcerestore_local_var = b_attachment_forcerestore->valueint;
    }


    if (s_attachment_url && !cJSON_IsNull(s_attachment_url)) s_attachment_url_local_str = strdup(s_attachment_url->valuestring);
    if (s_attachment_base64) s_attachment_base64_local_str = strdup(s_attachment_base64->valuestring);
    if (s_attachment_name && !cJSON_IsNull(s_attachment_name)) s_attachment_name_local_str = strdup(s_attachment_name->valuestring);
    if (s_attachment_category && !cJSON_IsNull(s_attachment_category)) s_attachment_category_local_str = strdup(s_attachment_category->valuestring);
    if (s_attachment_md5 && !cJSON_IsNull(s_attachment_md5)) s_attachment_md5_local_str = strdup(s_attachment_md5->valuestring);

    custom_attachment_import_into_edm_request_local_var = custom_attachment_import_into_edm_request_create_internal (
        e_attachment_sourceVariable,
        fki_attachment_id_local_var,
        fki_inscriptionchecklist_id_local_var,
        s_attachment_url_local_str,
        s_attachment_base64_local_str,
        s_attachment_name_local_str,
        s_attachment_category_local_str,
        e_attachment_privacy_local_nonprim,
        fki_user_id_specific_local_var,
        s_attachment_md5_local_str,
        b_attachment_forceoverwrite_local_var,
        b_attachment_forcerestore_local_var
        );

    if (!custom_attachment_import_into_edm_request_local_var) {
        goto end;
    }

    return custom_attachment_import_into_edm_request_local_var;
end:
    if (fki_attachment_id_local_var) {
        free(fki_attachment_id_local_var);
        fki_attachment_id_local_var = NULL;
    }
    if (fki_inscriptionchecklist_id_local_var) {
        free(fki_inscriptionchecklist_id_local_var);
        fki_inscriptionchecklist_id_local_var = NULL;
    }
    if (s_attachment_url_local_str) {
        free(s_attachment_url_local_str);
        s_attachment_url_local_str = NULL;
    }
    if (s_attachment_base64_local_str) {
        free(s_attachment_base64_local_str);
        s_attachment_base64_local_str = NULL;
    }
    if (s_attachment_name_local_str) {
        free(s_attachment_name_local_str);
        s_attachment_name_local_str = NULL;
    }
    if (s_attachment_category_local_str) {
        free(s_attachment_category_local_str);
        s_attachment_category_local_str = NULL;
    }
    if (e_attachment_privacy_local_nonprim) {
        e_attachment_privacy_local_nonprim = 0;
    }
    if (fki_user_id_specific_local_var) {
        free(fki_user_id_specific_local_var);
        fki_user_id_specific_local_var = NULL;
    }
    if (s_attachment_md5_local_str) {
        free(s_attachment_md5_local_str);
        s_attachment_md5_local_str = NULL;
    }
    if (b_attachment_forceoverwrite_local_var) {
        free(b_attachment_forceoverwrite_local_var);
        b_attachment_forceoverwrite_local_var = NULL;
    }
    if (b_attachment_forcerestore_local_var) {
        free(b_attachment_forcerestore_local_var);
        b_attachment_forcerestore_local_var = NULL;
    }
    return NULL;

}
