#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_request_patch.h"


char* ezdoctemplatedocument_request_patch_e_ezdoctemplatedocument_format_ToString(ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_e e_ezdoctemplatedocument_format) {
    char* e_ezdoctemplatedocument_formatArray[] =  { "NULL", "Docx", "Html", "Tx" };
    return e_ezdoctemplatedocument_formatArray[e_ezdoctemplatedocument_format];
}

ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_e ezdoctemplatedocument_request_patch_e_ezdoctemplatedocument_format_FromString(char* e_ezdoctemplatedocument_format){
    int stringToReturn = 0;
    char *e_ezdoctemplatedocument_formatArray[] =  { "NULL", "Docx", "Html", "Tx" };
    size_t sizeofArray = sizeof(e_ezdoctemplatedocument_formatArray) / sizeof(e_ezdoctemplatedocument_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezdoctemplatedocument_format, e_ezdoctemplatedocument_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch_create_internal(
    ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_e e_ezdoctemplatedocument_format,
    char *s_ezdoctemplatedocument_fields,
    char *s_ezdoctemplatedocument_base64
    ) {
    ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch_local_var = malloc(sizeof(ezdoctemplatedocument_request_patch_t));
    if (!ezdoctemplatedocument_request_patch_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_request_patch_local_var->e_ezdoctemplatedocument_format = e_ezdoctemplatedocument_format;
    ezdoctemplatedocument_request_patch_local_var->s_ezdoctemplatedocument_fields = s_ezdoctemplatedocument_fields;
    ezdoctemplatedocument_request_patch_local_var->s_ezdoctemplatedocument_base64 = s_ezdoctemplatedocument_base64;

    ezdoctemplatedocument_request_patch_local_var->_library_owned = 1;
    return ezdoctemplatedocument_request_patch_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch_create(
    ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_e e_ezdoctemplatedocument_format,
    char *s_ezdoctemplatedocument_fields,
    char *s_ezdoctemplatedocument_base64
    ) {
    return ezdoctemplatedocument_request_patch_create_internal (
        e_ezdoctemplatedocument_format,
        s_ezdoctemplatedocument_fields,
        s_ezdoctemplatedocument_base64
        );
}

void ezdoctemplatedocument_request_patch_free(ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch) {
    if(NULL == ezdoctemplatedocument_request_patch){
        return ;
    }
    if(ezdoctemplatedocument_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields) {
        free(ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields);
        ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields = NULL;
    }
    if (ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64) {
        free(ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64);
        ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64 = NULL;
    }
    free(ezdoctemplatedocument_request_patch);
}

cJSON *ezdoctemplatedocument_request_patch_convertToJSON(ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_request_patch->e_ezdoctemplatedocument_format
    if(ezdoctemplatedocument_request_patch->e_ezdoctemplatedocument_format != ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "eEzdoctemplatedocumentFormat", ezdoctemplatedocument_request_patch_e_ezdoctemplatedocument_format_ToString(ezdoctemplatedocument_request_patch->e_ezdoctemplatedocument_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields
    if(ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentFields", ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64
    if(ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentBase64", ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64) == NULL) {
    goto fail; //ByteArray
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch_parseFromJSON(cJSON *ezdoctemplatedocument_request_patchJSON){

    ezdoctemplatedocument_request_patch_t *ezdoctemplatedocument_request_patch_local_var = NULL;

    // ezdoctemplatedocument_request_patch->e_ezdoctemplatedocument_format
    cJSON *e_ezdoctemplatedocument_format = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_patchJSON, "eEzdoctemplatedocumentFormat");
    if (cJSON_IsNull(e_ezdoctemplatedocument_format)) {
        e_ezdoctemplatedocument_format = NULL;
    }
    ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_e e_ezdoctemplatedocument_formatVariable;
    if (e_ezdoctemplatedocument_format) { 
    if(!cJSON_IsString(e_ezdoctemplatedocument_format))
    {
    goto end; //Enum
    }
    e_ezdoctemplatedocument_formatVariable = ezdoctemplatedocument_request_patch_e_ezdoctemplatedocument_format_FromString(e_ezdoctemplatedocument_format->valuestring);
    }

    // ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_fields
    cJSON *s_ezdoctemplatedocument_fields = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_patchJSON, "sEzdoctemplatedocumentFields");
    if (cJSON_IsNull(s_ezdoctemplatedocument_fields)) {
        s_ezdoctemplatedocument_fields = NULL;
    }
    if (s_ezdoctemplatedocument_fields) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_fields) && !cJSON_IsNull(s_ezdoctemplatedocument_fields))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_request_patch->s_ezdoctemplatedocument_base64
    cJSON *s_ezdoctemplatedocument_base64 = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_patchJSON, "sEzdoctemplatedocumentBase64");
    if (cJSON_IsNull(s_ezdoctemplatedocument_base64)) {
        s_ezdoctemplatedocument_base64 = NULL;
    }
    if (s_ezdoctemplatedocument_base64) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_base64))
    {
    goto end; //ByteArray
    }
    }


    ezdoctemplatedocument_request_patch_local_var = ezdoctemplatedocument_request_patch_create_internal (
        e_ezdoctemplatedocument_format ? e_ezdoctemplatedocument_formatVariable : ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_NULL,
        s_ezdoctemplatedocument_fields && !cJSON_IsNull(s_ezdoctemplatedocument_fields) ? strdup(s_ezdoctemplatedocument_fields->valuestring) : NULL,
        s_ezdoctemplatedocument_base64 ? strdup(s_ezdoctemplatedocument_base64->valuestring) : NULL
        );

    return ezdoctemplatedocument_request_patch_local_var;
end:
    return NULL;

}
