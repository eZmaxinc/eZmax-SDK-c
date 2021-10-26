#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_error_s_temporary_file_url_all_of.h"



common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_create(
    char *s_temporary_file_url
    ) {
    common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_local_var = malloc(sizeof(common_response_error_s_temporary_file_url_all_of_t));
    if (!common_response_error_s_temporary_file_url_all_of_local_var) {
        return NULL;
    }
    common_response_error_s_temporary_file_url_all_of_local_var->s_temporary_file_url = s_temporary_file_url;

    return common_response_error_s_temporary_file_url_all_of_local_var;
}


void common_response_error_s_temporary_file_url_all_of_free(common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of) {
    if(NULL == common_response_error_s_temporary_file_url_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_error_s_temporary_file_url_all_of->s_temporary_file_url) {
        free(common_response_error_s_temporary_file_url_all_of->s_temporary_file_url);
        common_response_error_s_temporary_file_url_all_of->s_temporary_file_url = NULL;
    }
    free(common_response_error_s_temporary_file_url_all_of);
}

cJSON *common_response_error_s_temporary_file_url_all_of_convertToJSON(common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of) {
    cJSON *item = cJSON_CreateObject();

    // common_response_error_s_temporary_file_url_all_of->s_temporary_file_url
    if(common_response_error_s_temporary_file_url_all_of->s_temporary_file_url) { 
    if(cJSON_AddStringToObject(item, "sTemporaryFileUrl", common_response_error_s_temporary_file_url_all_of->s_temporary_file_url) == NULL) {
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

common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_parseFromJSON(cJSON *common_response_error_s_temporary_file_url_all_ofJSON){

    common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_local_var = NULL;

    // common_response_error_s_temporary_file_url_all_of->s_temporary_file_url
    cJSON *s_temporary_file_url = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_url_all_ofJSON, "sTemporaryFileUrl");
    if (s_temporary_file_url) { 
    if(!cJSON_IsString(s_temporary_file_url))
    {
    goto end; //String
    }
    }


    common_response_error_s_temporary_file_url_all_of_local_var = common_response_error_s_temporary_file_url_all_of_create (
        s_temporary_file_url ? strdup(s_temporary_file_url->valuestring) : NULL
        );

    return common_response_error_s_temporary_file_url_all_of_local_var;
end:
    return NULL;

}
