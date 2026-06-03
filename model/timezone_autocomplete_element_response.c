#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_autocomplete_element_response.h"



static timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_create_internal(
    char *s_timezone_name,
    int *pki_timezone_id,
    int *b_timezone_isactive
    ) {
    timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_local_var = malloc(sizeof(timezone_autocomplete_element_response_t));
    if (!timezone_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(timezone_autocomplete_element_response_local_var, 0, sizeof(timezone_autocomplete_element_response_t));
    timezone_autocomplete_element_response_local_var->_library_owned = 1;
    timezone_autocomplete_element_response_local_var->s_timezone_name = s_timezone_name;
    timezone_autocomplete_element_response_local_var->pki_timezone_id = pki_timezone_id;
    timezone_autocomplete_element_response_local_var->b_timezone_isactive = b_timezone_isactive;
    return timezone_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_create(
    char *s_timezone_name,
    int *pki_timezone_id,
    int *b_timezone_isactive
    ) {
    int *pki_timezone_id_copy = NULL;
    if (pki_timezone_id) {
        pki_timezone_id_copy = malloc(sizeof(int));
        if (pki_timezone_id_copy) *pki_timezone_id_copy = *pki_timezone_id;
    }
    int *b_timezone_isactive_copy = NULL;
    if (b_timezone_isactive) {
        b_timezone_isactive_copy = malloc(sizeof(int));
        if (b_timezone_isactive_copy) *b_timezone_isactive_copy = *b_timezone_isactive;
    }
    timezone_autocomplete_element_response_t *result = timezone_autocomplete_element_response_create_internal (
        s_timezone_name,
        pki_timezone_id_copy,
        b_timezone_isactive_copy
        );
    if (!result) {
        free(pki_timezone_id_copy);
        free(b_timezone_isactive_copy);
    }
    return result;
}

void timezone_autocomplete_element_response_free(timezone_autocomplete_element_response_t *timezone_autocomplete_element_response) {
    if(NULL == timezone_autocomplete_element_response){
        return ;
    }
    if(timezone_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "timezone_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_autocomplete_element_response->s_timezone_name) {
        free(timezone_autocomplete_element_response->s_timezone_name);
        timezone_autocomplete_element_response->s_timezone_name = NULL;
    }
    if (timezone_autocomplete_element_response->pki_timezone_id) {
        free(timezone_autocomplete_element_response->pki_timezone_id);
        timezone_autocomplete_element_response->pki_timezone_id = NULL;
    }
    if (timezone_autocomplete_element_response->b_timezone_isactive) {
        free(timezone_autocomplete_element_response->b_timezone_isactive);
        timezone_autocomplete_element_response->b_timezone_isactive = NULL;
    }
    free(timezone_autocomplete_element_response);
}

cJSON *timezone_autocomplete_element_response_convertToJSON(timezone_autocomplete_element_response_t *timezone_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // timezone_autocomplete_element_response->s_timezone_name
    if (!timezone_autocomplete_element_response->s_timezone_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sTimezoneName", timezone_autocomplete_element_response->s_timezone_name) == NULL) {
    goto fail; //String
    }


    // timezone_autocomplete_element_response->pki_timezone_id
    if (!timezone_autocomplete_element_response->pki_timezone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiTimezoneID", *timezone_autocomplete_element_response->pki_timezone_id) == NULL) {
    goto fail; //Numeric
    }


    // timezone_autocomplete_element_response->b_timezone_isactive
    if (!timezone_autocomplete_element_response->b_timezone_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTimezoneIsactive", *timezone_autocomplete_element_response->b_timezone_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_parseFromJSON(cJSON *timezone_autocomplete_element_responseJSON){

    timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_local_var = NULL;

    char *s_timezone_name_local_str = NULL;

    // define the local variable for timezone_autocomplete_element_response->pki_timezone_id
    int *pki_timezone_id_local_var = NULL;

    // define the local variable for timezone_autocomplete_element_response->b_timezone_isactive
    int *b_timezone_isactive_local_var = NULL;

    // timezone_autocomplete_element_response->s_timezone_name
    cJSON *s_timezone_name = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "sTimezoneName");
    if (cJSON_IsNull(s_timezone_name)) {
        s_timezone_name = NULL;
    }
    if (!s_timezone_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_timezone_name))
    {
    goto end; //String
    }

    // timezone_autocomplete_element_response->pki_timezone_id
    cJSON *pki_timezone_id = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "pkiTimezoneID");
    if (cJSON_IsNull(pki_timezone_id)) {
        pki_timezone_id = NULL;
    }
    if (!pki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_timezone_id))
    {
    goto end; //Numeric
    }
    pki_timezone_id_local_var = malloc(sizeof(int));
    if(!pki_timezone_id_local_var)
    {
        goto end;
    }
    *pki_timezone_id_local_var = pki_timezone_id->valuedouble;

    // timezone_autocomplete_element_response->b_timezone_isactive
    cJSON *b_timezone_isactive = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "bTimezoneIsactive");
    if (cJSON_IsNull(b_timezone_isactive)) {
        b_timezone_isactive = NULL;
    }
    if (!b_timezone_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_timezone_isactive))
    {
    goto end; //Bool
    }
    b_timezone_isactive_local_var = malloc(sizeof(int));
    if(!b_timezone_isactive_local_var)
    {
        goto end;
    }
    *b_timezone_isactive_local_var = b_timezone_isactive->valueint;


    if (s_timezone_name && !cJSON_IsNull(s_timezone_name)) s_timezone_name_local_str = strdup(s_timezone_name->valuestring);

    timezone_autocomplete_element_response_local_var = timezone_autocomplete_element_response_create_internal (
        s_timezone_name_local_str,
        pki_timezone_id_local_var,
        b_timezone_isactive_local_var
        );

    if (!timezone_autocomplete_element_response_local_var) {
        goto end;
    }

    return timezone_autocomplete_element_response_local_var;
end:
    if (s_timezone_name_local_str) {
        free(s_timezone_name_local_str);
        s_timezone_name_local_str = NULL;
    }
    if (pki_timezone_id_local_var) {
        free(pki_timezone_id_local_var);
        pki_timezone_id_local_var = NULL;
    }
    if (b_timezone_isactive_local_var) {
        free(b_timezone_isactive_local_var);
        b_timezone_isactive_local_var = NULL;
    }
    return NULL;

}
