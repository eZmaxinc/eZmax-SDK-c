#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignimportdocument_response.h"



static custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_create_internal(
    int *pki_ezsignimportdocument_id,
    char *s_ezsignimportdocument_name,
    int *fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobal_description,
    int *fki_ezsignfolder_id,
    char *s_ezsignfolder_description
    ) {
    custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_local_var = malloc(sizeof(custom_ezsignimportdocument_response_t));
    if (!custom_ezsignimportdocument_response_local_var) {
        return NULL;
    }
    memset(custom_ezsignimportdocument_response_local_var, 0, sizeof(custom_ezsignimportdocument_response_t));
    custom_ezsignimportdocument_response_local_var->_library_owned = 1;
    custom_ezsignimportdocument_response_local_var->pki_ezsignimportdocument_id = pki_ezsignimportdocument_id;
    custom_ezsignimportdocument_response_local_var->s_ezsignimportdocument_name = s_ezsignimportdocument_name;
    custom_ezsignimportdocument_response_local_var->fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    custom_ezsignimportdocument_response_local_var->s_ezsigntemplateglobal_description = s_ezsigntemplateglobal_description;
    custom_ezsignimportdocument_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezsignimportdocument_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    return custom_ezsignimportdocument_response_local_var;
}

__attribute__((deprecated)) custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_create(
    int *pki_ezsignimportdocument_id,
    char *s_ezsignimportdocument_name,
    int *fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobal_description,
    int *fki_ezsignfolder_id,
    char *s_ezsignfolder_description
    ) {
    int *pki_ezsignimportdocument_id_copy = NULL;
    if (pki_ezsignimportdocument_id) {
        pki_ezsignimportdocument_id_copy = malloc(sizeof(int));
        if (pki_ezsignimportdocument_id_copy) *pki_ezsignimportdocument_id_copy = *pki_ezsignimportdocument_id;
    }
    int *fki_ezsigntemplateglobal_id_copy = NULL;
    if (fki_ezsigntemplateglobal_id) {
        fki_ezsigntemplateglobal_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateglobal_id_copy) *fki_ezsigntemplateglobal_id_copy = *fki_ezsigntemplateglobal_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    custom_ezsignimportdocument_response_t *result = custom_ezsignimportdocument_response_create_internal (
        pki_ezsignimportdocument_id_copy,
        s_ezsignimportdocument_name,
        fki_ezsigntemplateglobal_id_copy,
        s_ezsigntemplateglobal_description,
        fki_ezsignfolder_id_copy,
        s_ezsignfolder_description
        );
    if (!result) {
        free(pki_ezsignimportdocument_id_copy);
        free(fki_ezsigntemplateglobal_id_copy);
        free(fki_ezsignfolder_id_copy);
    }
    return result;
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
    if (custom_ezsignimportdocument_response->pki_ezsignimportdocument_id) {
        free(custom_ezsignimportdocument_response->pki_ezsignimportdocument_id);
        custom_ezsignimportdocument_response->pki_ezsignimportdocument_id = NULL;
    }
    if (custom_ezsignimportdocument_response->s_ezsignimportdocument_name) {
        free(custom_ezsignimportdocument_response->s_ezsignimportdocument_name);
        custom_ezsignimportdocument_response->s_ezsignimportdocument_name = NULL;
    }
    if (custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id) {
        free(custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id);
        custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id = NULL;
    }
    if (custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description) {
        free(custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description);
        custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description = NULL;
    }
    if (custom_ezsignimportdocument_response->fki_ezsignfolder_id) {
        free(custom_ezsignimportdocument_response->fki_ezsignfolder_id);
        custom_ezsignimportdocument_response->fki_ezsignfolder_id = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportdocumentID", *custom_ezsignimportdocument_response->pki_ezsignimportdocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignimportdocument_response->s_ezsignimportdocument_name
    if (!custom_ezsignimportdocument_response->s_ezsignimportdocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignimportdocumentName", custom_ezsignimportdocument_response->s_ezsignimportdocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id
    if(custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobalID", *custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description
    if(custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalDescription", custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignimportdocument_response->fki_ezsignfolder_id
    if(custom_ezsignimportdocument_response->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *custom_ezsignimportdocument_response->fki_ezsignfolder_id) == NULL) {
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

    // define the local variable for custom_ezsignimportdocument_response->pki_ezsignimportdocument_id
    int *pki_ezsignimportdocument_id_local_var = NULL;

    char *s_ezsignimportdocument_name_local_str = NULL;

    // define the local variable for custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id
    int *fki_ezsigntemplateglobal_id_local_var = NULL;

    char *s_ezsigntemplateglobal_description_local_str = NULL;

    // define the local variable for custom_ezsignimportdocument_response->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    char *s_ezsignfolder_description_local_str = NULL;

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
    pki_ezsignimportdocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignimportdocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsignimportdocument_id_local_var = pki_ezsignimportdocument_id->valuedouble;

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

    // custom_ezsignimportdocument_response->fki_ezsigntemplateglobal_id
    cJSON *fki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "fkiEzsigntemplateglobalID");
    if (cJSON_IsNull(fki_ezsigntemplateglobal_id)) {
        fki_ezsigntemplateglobal_id = NULL;
    }
    if (fki_ezsigntemplateglobal_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateglobal_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateglobal_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateglobal_id_local_var = fki_ezsigntemplateglobal_id->valuedouble;
    }

    // custom_ezsignimportdocument_response->s_ezsigntemplateglobal_description
    cJSON *s_ezsigntemplateglobal_description = cJSON_GetObjectItemCaseSensitive(custom_ezsignimportdocument_responseJSON, "sEzsigntemplateglobalDescription");
    if (cJSON_IsNull(s_ezsigntemplateglobal_description)) {
        s_ezsigntemplateglobal_description = NULL;
    }
    if (s_ezsigntemplateglobal_description) { 
    if(!cJSON_IsString(s_ezsigntemplateglobal_description) && !cJSON_IsNull(s_ezsigntemplateglobal_description))
    {
    goto end; //String
    }
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
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;
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


    if (s_ezsignimportdocument_name && !cJSON_IsNull(s_ezsignimportdocument_name)) s_ezsignimportdocument_name_local_str = strdup(s_ezsignimportdocument_name->valuestring);
    if (s_ezsigntemplateglobal_description && !cJSON_IsNull(s_ezsigntemplateglobal_description)) s_ezsigntemplateglobal_description_local_str = strdup(s_ezsigntemplateglobal_description->valuestring);
    if (s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description)) s_ezsignfolder_description_local_str = strdup(s_ezsignfolder_description->valuestring);

    custom_ezsignimportdocument_response_local_var = custom_ezsignimportdocument_response_create_internal (
        pki_ezsignimportdocument_id_local_var,
        s_ezsignimportdocument_name_local_str,
        fki_ezsigntemplateglobal_id_local_var,
        s_ezsigntemplateglobal_description_local_str,
        fki_ezsignfolder_id_local_var,
        s_ezsignfolder_description_local_str
        );

    if (!custom_ezsignimportdocument_response_local_var) {
        goto end;
    }

    return custom_ezsignimportdocument_response_local_var;
end:
    if (pki_ezsignimportdocument_id_local_var) {
        free(pki_ezsignimportdocument_id_local_var);
        pki_ezsignimportdocument_id_local_var = NULL;
    }
    if (s_ezsignimportdocument_name_local_str) {
        free(s_ezsignimportdocument_name_local_str);
        s_ezsignimportdocument_name_local_str = NULL;
    }
    if (fki_ezsigntemplateglobal_id_local_var) {
        free(fki_ezsigntemplateglobal_id_local_var);
        fki_ezsigntemplateglobal_id_local_var = NULL;
    }
    if (s_ezsigntemplateglobal_description_local_str) {
        free(s_ezsigntemplateglobal_description_local_str);
        s_ezsigntemplateglobal_description_local_str = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (s_ezsignfolder_description_local_str) {
        free(s_ezsignfolder_description_local_str);
        s_ezsignfolder_description_local_str = NULL;
    }
    return NULL;

}
