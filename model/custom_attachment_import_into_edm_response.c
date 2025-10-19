#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachment_import_into_edm_response.h"


char* custom_attachment_import_into_edm_response_e_attachment_status_ToString(ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status) {
    char* e_attachment_statusArray[] =  { "NULL", "Accepted", "FileExists", "Forbidden", "Overwrite" };
    return e_attachment_statusArray[e_attachment_status];
}

ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e custom_attachment_import_into_edm_response_e_attachment_status_FromString(char* e_attachment_status){
    int stringToReturn = 0;
    char *e_attachment_statusArray[] =  { "NULL", "Accepted", "FileExists", "Forbidden", "Overwrite" };
    size_t sizeofArray = sizeof(e_attachment_statusArray) / sizeof(e_attachment_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_status, e_attachment_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_create_internal(
    int pki_attachment_id_source,
    int pki_attachment_id_new,
    ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status,
    int b_allow_overwrite
    ) {
    custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_local_var = malloc(sizeof(custom_attachment_import_into_edm_response_t));
    if (!custom_attachment_import_into_edm_response_local_var) {
        return NULL;
    }
    custom_attachment_import_into_edm_response_local_var->pki_attachment_id_source = pki_attachment_id_source;
    custom_attachment_import_into_edm_response_local_var->pki_attachment_id_new = pki_attachment_id_new;
    custom_attachment_import_into_edm_response_local_var->e_attachment_status = e_attachment_status;
    custom_attachment_import_into_edm_response_local_var->b_allow_overwrite = b_allow_overwrite;

    custom_attachment_import_into_edm_response_local_var->_library_owned = 1;
    return custom_attachment_import_into_edm_response_local_var;
}

__attribute__((deprecated)) custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_create(
    int pki_attachment_id_source,
    int pki_attachment_id_new,
    ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_status,
    int b_allow_overwrite
    ) {
    return custom_attachment_import_into_edm_response_create_internal (
        pki_attachment_id_source,
        pki_attachment_id_new,
        e_attachment_status,
        b_allow_overwrite
        );
}

void custom_attachment_import_into_edm_response_free(custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response) {
    if(NULL == custom_attachment_import_into_edm_response){
        return ;
    }
    if(custom_attachment_import_into_edm_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_attachment_import_into_edm_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(custom_attachment_import_into_edm_response);
}

cJSON *custom_attachment_import_into_edm_response_convertToJSON(custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachment_import_into_edm_response->pki_attachment_id_source
    if(custom_attachment_import_into_edm_response->pki_attachment_id_source) {
    if(cJSON_AddNumberToObject(item, "pkiAttachmentIDSource", custom_attachment_import_into_edm_response->pki_attachment_id_source) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_import_into_edm_response->pki_attachment_id_new
    if(custom_attachment_import_into_edm_response->pki_attachment_id_new) {
    if(cJSON_AddNumberToObject(item, "pkiAttachmentIDNew", custom_attachment_import_into_edm_response->pki_attachment_id_new) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_import_into_edm_response->e_attachment_status
    if(custom_attachment_import_into_edm_response->e_attachment_status != ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "eAttachmentStatus", custom_attachment_import_into_edm_response_e_attachment_status_ToString(custom_attachment_import_into_edm_response->e_attachment_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // custom_attachment_import_into_edm_response->b_allow_overwrite
    if(custom_attachment_import_into_edm_response->b_allow_overwrite) {
    if(cJSON_AddBoolToObject(item, "bAllowOverwrite", custom_attachment_import_into_edm_response->b_allow_overwrite) == NULL) {
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

custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_parseFromJSON(cJSON *custom_attachment_import_into_edm_responseJSON){

    custom_attachment_import_into_edm_response_t *custom_attachment_import_into_edm_response_local_var = NULL;

    // custom_attachment_import_into_edm_response->pki_attachment_id_source
    cJSON *pki_attachment_id_source = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_responseJSON, "pkiAttachmentIDSource");
    if (cJSON_IsNull(pki_attachment_id_source)) {
        pki_attachment_id_source = NULL;
    }
    if (pki_attachment_id_source) { 
    if(!cJSON_IsNumber(pki_attachment_id_source))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_import_into_edm_response->pki_attachment_id_new
    cJSON *pki_attachment_id_new = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_responseJSON, "pkiAttachmentIDNew");
    if (cJSON_IsNull(pki_attachment_id_new)) {
        pki_attachment_id_new = NULL;
    }
    if (pki_attachment_id_new) { 
    if(!cJSON_IsNumber(pki_attachment_id_new))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_import_into_edm_response->e_attachment_status
    cJSON *e_attachment_status = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_responseJSON, "eAttachmentStatus");
    if (cJSON_IsNull(e_attachment_status)) {
        e_attachment_status = NULL;
    }
    ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_e e_attachment_statusVariable;
    if (e_attachment_status) { 
    if(!cJSON_IsString(e_attachment_status))
    {
    goto end; //Enum
    }
    e_attachment_statusVariable = custom_attachment_import_into_edm_response_e_attachment_status_FromString(e_attachment_status->valuestring);
    }

    // custom_attachment_import_into_edm_response->b_allow_overwrite
    cJSON *b_allow_overwrite = cJSON_GetObjectItemCaseSensitive(custom_attachment_import_into_edm_responseJSON, "bAllowOverwrite");
    if (cJSON_IsNull(b_allow_overwrite)) {
        b_allow_overwrite = NULL;
    }
    if (b_allow_overwrite) { 
    if(!cJSON_IsBool(b_allow_overwrite))
    {
    goto end; //Bool
    }
    }


    custom_attachment_import_into_edm_response_local_var = custom_attachment_import_into_edm_response_create_internal (
        pki_attachment_id_source ? pki_attachment_id_source->valuedouble : 0,
        pki_attachment_id_new ? pki_attachment_id_new->valuedouble : 0,
        e_attachment_status ? e_attachment_statusVariable : ezmax_api_definition__full_custom_attachment_import_into_edm_response_EATTACHMENTSTATUS_NULL,
        b_allow_overwrite ? b_allow_overwrite->valueint : 0
        );

    return custom_attachment_import_into_edm_response_local_var;
end:
    return NULL;

}
