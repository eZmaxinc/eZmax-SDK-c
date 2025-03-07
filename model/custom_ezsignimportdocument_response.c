#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignimportdocument_response.h"



static custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_create_internal(
    int pki_ezsignimportdocument_id,
    char *s_ezsignimportdocument_name,
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description
    ) {
    custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_local_var = malloc(sizeof(custom_ezsignimportdocument_response_t));
    if (!custom_ezsignimportdocument_response_local_var) {
        return NULL;
    }
    custom_ezsignimportdocument_response_local_var->pki_ezsignimportdocument_id = pki_ezsignimportdocument_id;
    custom_ezsignimportdocument_response_local_var->s_ezsignimportdocument_name = s_ezsignimportdocument_name;
    custom_ezsignimportdocument_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezsignimportdocument_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;

    custom_ezsignimportdocument_response_local_var->_library_owned = 1;
    return custom_ezsignimportdocument_response_local_var;
}

__attribute__((deprecated)) custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_create(
    int pki_ezsignimportdocument_id,
    char *s_ezsignimportdocument_name,
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description
    ) {
    return custom_ezsignimportdocument_response_create_internal (
        pki_ezsignimportdocument_id,
        s_ezsignimportdocument_name,
        fki_ezsignfolder_id,
        s_ezsignfolder_description
        );
}

void custom_ezsignimportdocument_response_free(custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response) {
    if(NULL == custom_ezsignimportdocument_response){
        return ;
    }
    if(custom_ezsignimportdocument_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignimportdocument_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignimportdocument_response->s_ezsignimportdocument_name) {
        free(custom_ezsignimportdocument_response->s_ezsignimportdocument_name);
        custom_ezsignimportdocument_response->s_ezsignimportdocument_name = NULL;
    }
    if (custom_ezsignimportdocument_response->s_ezsignfolder_description) {
        free(custom_ezsignimportdocument_response->s_ezsignfolder_description);
        custom_ezsignimportdocument_response->s_ezsignfolder_description = NULL;
    }
    free(custom_ezsignimportdocument_response);
}

cJSON *custom_ezsignimportdocument_response_convertToJSON(custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignimportdocument_response->pki_ezsignimportdocument_id
    if (!custom_ezsignimportdocument_response->pki_ezsignimportdocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportdocumentID", custom_ezsignimportdocument_response->pki_ezsignimportdocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignimportdocument_response->s_ezsignimportdocument_name
    if (!custom_ezsignimportdocument_response->s_ezsignimportdocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignimportdocumentName", custom_ezsignimportdocument_response->s_ezsignimportdocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsignimportdocument_response->fki_ezsignfolder_id
    if(custom_ezsignimportdocument_response->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_ezsignimportdocument_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignimportdocument_response->s_ezsignfolder_description
    if(custom_ezsignimportdocument_response->s_ezsignfolder_description) {
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezsignimportdocument_response->s_ezsignfolder_description) == NULL) {
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

custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_parseFromJSON(cJSON *custom_ezsignimportdocument_responseJSON){

    custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_local_var = NULL;

    // custom_ezsignimportdocument_response->pki_ezsignimportdocument_id
    cJSON *pki_ezsignimportdocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "pkiEzsignimportdocumentID");
    if (cJSON_IsNull(pki_ezsignimportdocument_id)) {
        pki_ezsignimportdocument_id = NULL;
    }
    if (!pki_ezsignimportdocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignimportdocument_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignimportdocument_response->s_ezsignimportdocument_name
    cJSON *s_ezsignimportdocument_name = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "sEzsignimportdocumentName");
    if (cJSON_IsNull(s_ezsignimportdocument_name)) {
        s_ezsignimportdocument_name = NULL;
    }
    if (!s_ezsignimportdocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignimportdocument_name))
    {
    goto end; //String
    }

    // custom_ezsignimportdocument_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (fki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignimportdocument_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (s_ezsignfolder_description) { 
    if(!cJSON_IsString(s_ezsignfolder_description) && !cJSON_IsNull(s_ezsignfolder_description))
    {
    goto end; //String
    }
    }


    custom_ezsignimportdocument_response_local_var = custom_ezsignimportdocument_response_create_internal (
        pki_ezsignimportdocument_id->valuedouble,
        strdup(s_ezsignimportdocument_name->valuestring),
        fki_ezsignfolder_id ? fki_ezsignfolder_id->valuedouble : 0,
        s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description) ? strdup(s_ezsignfolder_description->valuestring) : NULL
        );

    return custom_ezsignimportdocument_response_local_var;
end:
    return NULL;

}
