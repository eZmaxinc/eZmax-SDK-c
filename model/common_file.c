#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_file.h"


char* e_file_sourcecommon_file_ToString(ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_source) {
    char* e_file_sourceArray[] =  { "NULL", "Base64", "Url" };
	return e_file_sourceArray[e_file_source];
}

ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_sourcecommon_file_FromString(char* e_file_source){
    int stringToReturn = 0;
    char *e_file_sourceArray[] =  { "NULL", "Base64", "Url" };
    size_t sizeofArray = sizeof(e_file_sourceArray) / sizeof(e_file_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_file_source, e_file_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

common_file_t *common_file_create(
    char *s_file_name,
    char *s_file_url,
    char *s_file_base64,
    ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_source
    ) {
    common_file_t *common_file_local_var = malloc(sizeof(common_file_t));
    if (!common_file_local_var) {
        return NULL;
    }
    common_file_local_var->s_file_name = s_file_name;
    common_file_local_var->s_file_url = s_file_url;
    common_file_local_var->s_file_base64 = s_file_base64;
    common_file_local_var->e_file_source = e_file_source;

    return common_file_local_var;
}


void common_file_free(common_file_t *common_file) {
    if(NULL == common_file){
        return ;
    }
    listEntry_t *listEntry;
    if (common_file->s_file_name) {
        free(common_file->s_file_name);
        common_file->s_file_name = NULL;
    }
    if (common_file->s_file_url) {
        free(common_file->s_file_url);
        common_file->s_file_url = NULL;
    }
    if (common_file->s_file_base64) {
        free(common_file->s_file_base64);
        common_file->s_file_base64 = NULL;
    }
    free(common_file);
}

cJSON *common_file_convertToJSON(common_file_t *common_file) {
    cJSON *item = cJSON_CreateObject();

    // common_file->s_file_name
    if (!common_file->s_file_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFileName", common_file->s_file_name) == NULL) {
    goto fail; //String
    }


    // common_file->s_file_url
    if(common_file->s_file_url) {
    if(cJSON_AddStringToObject(item, "sFileUrl", common_file->s_file_url) == NULL) {
    goto fail; //String
    }
    }


    // common_file->s_file_base64
    if(common_file->s_file_base64) {
    if(cJSON_AddStringToObject(item, "sFileBase64", common_file->s_file_base64) == NULL) {
    goto fail; //ByteArray
    }
    }


    // common_file->e_file_source
    if (ezmax_api_definition__full_common_file_EFILESOURCE_NULL == common_file->e_file_source) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eFileSource", e_file_sourcecommon_file_ToString(common_file->e_file_source)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_file_t *common_file_parseFromJSON(cJSON *common_fileJSON){

    common_file_t *common_file_local_var = NULL;

    // common_file->s_file_name
    cJSON *s_file_name = cJSON_GetObjectItemCaseSensitive(common_fileJSON, "sFileName");
    if (!s_file_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_file_name))
    {
    goto end; //String
    }

    // common_file->s_file_url
    cJSON *s_file_url = cJSON_GetObjectItemCaseSensitive(common_fileJSON, "sFileUrl");
    if (s_file_url) { 
    if(!cJSON_IsString(s_file_url) && !cJSON_IsNull(s_file_url))
    {
    goto end; //String
    }
    }

    // common_file->s_file_base64
    cJSON *s_file_base64 = cJSON_GetObjectItemCaseSensitive(common_fileJSON, "sFileBase64");
    if (s_file_base64) { 
    if(!cJSON_IsString(s_file_base64))
    {
    goto end; //ByteArray
    }
    }

    // common_file->e_file_source
    cJSON *e_file_source = cJSON_GetObjectItemCaseSensitive(common_fileJSON, "eFileSource");
    if (!e_file_source) {
        goto end;
    }

    ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_sourceVariable;
    
    if(!cJSON_IsString(e_file_source))
    {
    goto end; //Enum
    }
    e_file_sourceVariable = e_file_sourcecommon_file_FromString(e_file_source->valuestring);


    common_file_local_var = common_file_create (
        strdup(s_file_name->valuestring),
        s_file_url && !cJSON_IsNull(s_file_url) ? strdup(s_file_url->valuestring) : NULL,
        s_file_base64 ? strdup(s_file_base64->valuestring) : NULL,
        e_file_sourceVariable
        );

    return common_file_local_var;
end:
    return NULL;

}
