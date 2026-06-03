#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsigndocument_duplicate_request.h"


char* custom_ezsigndocument_duplicate_request_e_ezsigndocument_version_ToString(ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_e e_ezsigndocument_version) {
    char* e_ezsigndocument_versionArray[] =  { "NULL", "Initial", "Signed" };
    return e_ezsigndocument_versionArray[e_ezsigndocument_version];
}

ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_e custom_ezsigndocument_duplicate_request_e_ezsigndocument_version_FromString(char* e_ezsigndocument_version){
    int stringToReturn = 0;
    char *e_ezsigndocument_versionArray[] =  { "NULL", "Initial", "Signed" };
    size_t sizeofArray = sizeof(e_ezsigndocument_versionArray) / sizeof(e_ezsigndocument_versionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_version, e_ezsigndocument_versionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request_create_internal(
    int *pki_ezsigndocument_id,
    ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_e e_ezsigndocument_version
    ) {
    custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request_local_var = malloc(sizeof(custom_ezsigndocument_duplicate_request_t));
    if (!custom_ezsigndocument_duplicate_request_local_var) {
        return NULL;
    }
    memset(custom_ezsigndocument_duplicate_request_local_var, 0, sizeof(custom_ezsigndocument_duplicate_request_t));
    custom_ezsigndocument_duplicate_request_local_var->_library_owned = 1;
    custom_ezsigndocument_duplicate_request_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_ezsigndocument_duplicate_request_local_var->e_ezsigndocument_version = e_ezsigndocument_version;
    return custom_ezsigndocument_duplicate_request_local_var;
}

__attribute__((deprecated)) custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request_create(
    int *pki_ezsigndocument_id,
    ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_e e_ezsigndocument_version
    ) {
    int *pki_ezsigndocument_id_copy = NULL;
    if (pki_ezsigndocument_id) {
        pki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (pki_ezsigndocument_id_copy) *pki_ezsigndocument_id_copy = *pki_ezsigndocument_id;
    }
    custom_ezsigndocument_duplicate_request_t *result = custom_ezsigndocument_duplicate_request_create_internal (
        pki_ezsigndocument_id_copy,
        e_ezsigndocument_version
        );
    if (!result) {
        free(pki_ezsigndocument_id_copy);
    }
    return result;
}

void custom_ezsigndocument_duplicate_request_free(custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request) {
    if(NULL == custom_ezsigndocument_duplicate_request){
        return ;
    }
    if(custom_ezsigndocument_duplicate_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsigndocument_duplicate_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id) {
        free(custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id);
        custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id = NULL;
    }
    free(custom_ezsigndocument_duplicate_request);
}

cJSON *custom_ezsigndocument_duplicate_request_convertToJSON(custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id
    if (!custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", *custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsigndocument_duplicate_request->e_ezsigndocument_version
    if (ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_NULL == custom_ezsigndocument_duplicate_request->e_ezsigndocument_version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eEzsigndocumentVersion", custom_ezsigndocument_duplicate_request_e_ezsigndocument_version_ToString(custom_ezsigndocument_duplicate_request->e_ezsigndocument_version)) == NULL)
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

custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request_parseFromJSON(cJSON *custom_ezsigndocument_duplicate_requestJSON){

    custom_ezsigndocument_duplicate_request_t *custom_ezsigndocument_duplicate_request_local_var = NULL;

    // define the local variable for custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id
    int *pki_ezsigndocument_id_local_var = NULL;

    // custom_ezsigndocument_duplicate_request->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_duplicate_requestJSON, "pkiEzsigndocumentID");
    if (cJSON_IsNull(pki_ezsigndocument_id)) {
        pki_ezsigndocument_id = NULL;
    }
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    pki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsigndocument_id_local_var = pki_ezsigndocument_id->valuedouble;

    // custom_ezsigndocument_duplicate_request->e_ezsigndocument_version
    cJSON *e_ezsigndocument_version = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_duplicate_requestJSON, "eEzsigndocumentVersion");
    if (cJSON_IsNull(e_ezsigndocument_version)) {
        e_ezsigndocument_version = NULL;
    }
    if (!e_ezsigndocument_version) {
        goto end;
    }

    ezmax_api_definition__full_custom_ezsigndocument_duplicate_request_EEZSIGNDOCUMENTVERSION_e e_ezsigndocument_versionVariable;
    
    if(!cJSON_IsString(e_ezsigndocument_version))
    {
    goto end; //Enum
    }
    e_ezsigndocument_versionVariable = custom_ezsigndocument_duplicate_request_e_ezsigndocument_version_FromString(e_ezsigndocument_version->valuestring);



    custom_ezsigndocument_duplicate_request_local_var = custom_ezsigndocument_duplicate_request_create_internal (
        pki_ezsigndocument_id_local_var,
        e_ezsigndocument_versionVariable
        );

    if (!custom_ezsigndocument_duplicate_request_local_var) {
        goto end;
    }

    return custom_ezsigndocument_duplicate_request_local_var;
end:
    if (pki_ezsigndocument_id_local_var) {
        free(pki_ezsigndocument_id_local_var);
        pki_ezsigndocument_id_local_var = NULL;
    }
    return NULL;

}
