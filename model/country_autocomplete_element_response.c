#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_autocomplete_element_response.h"



static country_autocomplete_element_response_t *country_autocomplete_element_response_create_internal(
    int *pki_country_id,
    char *s_country_name_x,
    char *s_country_shortname,
    int *b_country_isactive
    ) {
    country_autocomplete_element_response_t *country_autocomplete_element_response_local_var = malloc(sizeof(country_autocomplete_element_response_t));
    if (!country_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(country_autocomplete_element_response_local_var, 0, sizeof(country_autocomplete_element_response_t));
    country_autocomplete_element_response_local_var->_library_owned = 1;
    country_autocomplete_element_response_local_var->pki_country_id = pki_country_id;
    country_autocomplete_element_response_local_var->s_country_name_x = s_country_name_x;
    country_autocomplete_element_response_local_var->s_country_shortname = s_country_shortname;
    country_autocomplete_element_response_local_var->b_country_isactive = b_country_isactive;
    return country_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) country_autocomplete_element_response_t *country_autocomplete_element_response_create(
    int *pki_country_id,
    char *s_country_name_x,
    char *s_country_shortname,
    int *b_country_isactive
    ) {
    int *pki_country_id_copy = NULL;
    if (pki_country_id) {
        pki_country_id_copy = malloc(sizeof(int));
        if (pki_country_id_copy) *pki_country_id_copy = *pki_country_id;
    }
    int *b_country_isactive_copy = NULL;
    if (b_country_isactive) {
        b_country_isactive_copy = malloc(sizeof(int));
        if (b_country_isactive_copy) *b_country_isactive_copy = *b_country_isactive;
    }
    country_autocomplete_element_response_t *result = country_autocomplete_element_response_create_internal (
        pki_country_id_copy,
        s_country_name_x,
        s_country_shortname,
        b_country_isactive_copy
        );
    if (!result) {
        free(pki_country_id_copy);
        free(b_country_isactive_copy);
    }
    return result;
}

void country_autocomplete_element_response_free(country_autocomplete_element_response_t *country_autocomplete_element_response) {
    if(NULL == country_autocomplete_element_response){
        return ;
    }
    if(country_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "country_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (country_autocomplete_element_response->pki_country_id) {
        free(country_autocomplete_element_response->pki_country_id);
        country_autocomplete_element_response->pki_country_id = NULL;
    }
    if (country_autocomplete_element_response->s_country_name_x) {
        free(country_autocomplete_element_response->s_country_name_x);
        country_autocomplete_element_response->s_country_name_x = NULL;
    }
    if (country_autocomplete_element_response->s_country_shortname) {
        free(country_autocomplete_element_response->s_country_shortname);
        country_autocomplete_element_response->s_country_shortname = NULL;
    }
    if (country_autocomplete_element_response->b_country_isactive) {
        free(country_autocomplete_element_response->b_country_isactive);
        country_autocomplete_element_response->b_country_isactive = NULL;
    }
    free(country_autocomplete_element_response);
}

cJSON *country_autocomplete_element_response_convertToJSON(country_autocomplete_element_response_t *country_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // country_autocomplete_element_response->pki_country_id
    if (!country_autocomplete_element_response->pki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCountryID", *country_autocomplete_element_response->pki_country_id) == NULL) {
    goto fail; //Numeric
    }


    // country_autocomplete_element_response->s_country_name_x
    if (!country_autocomplete_element_response->s_country_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCountryNameX", country_autocomplete_element_response->s_country_name_x) == NULL) {
    goto fail; //String
    }


    // country_autocomplete_element_response->s_country_shortname
    if (!country_autocomplete_element_response->s_country_shortname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCountryShortname", country_autocomplete_element_response->s_country_shortname) == NULL) {
    goto fail; //String
    }


    // country_autocomplete_element_response->b_country_isactive
    if (!country_autocomplete_element_response->b_country_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCountryIsactive", *country_autocomplete_element_response->b_country_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

country_autocomplete_element_response_t *country_autocomplete_element_response_parseFromJSON(cJSON *country_autocomplete_element_responseJSON){

    country_autocomplete_element_response_t *country_autocomplete_element_response_local_var = NULL;

    // define the local variable for country_autocomplete_element_response->pki_country_id
    int *pki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

    char *s_country_shortname_local_str = NULL;

    // define the local variable for country_autocomplete_element_response->b_country_isactive
    int *b_country_isactive_local_var = NULL;

    // country_autocomplete_element_response->pki_country_id
    cJSON *pki_country_id = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "pkiCountryID");
    if (cJSON_IsNull(pki_country_id)) {
        pki_country_id = NULL;
    }
    if (!pki_country_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_country_id))
    {
    goto end; //Numeric
    }
    pki_country_id_local_var = malloc(sizeof(int));
    if(!pki_country_id_local_var)
    {
        goto end;
    }
    *pki_country_id_local_var = pki_country_id->valuedouble;

    // country_autocomplete_element_response->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (!s_country_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_country_name_x))
    {
    goto end; //String
    }

    // country_autocomplete_element_response->s_country_shortname
    cJSON *s_country_shortname = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "sCountryShortname");
    if (cJSON_IsNull(s_country_shortname)) {
        s_country_shortname = NULL;
    }
    if (!s_country_shortname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_country_shortname))
    {
    goto end; //String
    }

    // country_autocomplete_element_response->b_country_isactive
    cJSON *b_country_isactive = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "bCountryIsactive");
    if (cJSON_IsNull(b_country_isactive)) {
        b_country_isactive = NULL;
    }
    if (!b_country_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_country_isactive))
    {
    goto end; //Bool
    }
    b_country_isactive_local_var = malloc(sizeof(int));
    if(!b_country_isactive_local_var)
    {
        goto end;
    }
    *b_country_isactive_local_var = b_country_isactive->valueint;


    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);
    if (s_country_shortname && !cJSON_IsNull(s_country_shortname)) s_country_shortname_local_str = strdup(s_country_shortname->valuestring);

    country_autocomplete_element_response_local_var = country_autocomplete_element_response_create_internal (
        pki_country_id_local_var,
        s_country_name_x_local_str,
        s_country_shortname_local_str,
        b_country_isactive_local_var
        );

    if (!country_autocomplete_element_response_local_var) {
        goto end;
    }

    return country_autocomplete_element_response_local_var;
end:
    if (pki_country_id_local_var) {
        free(pki_country_id_local_var);
        pki_country_id_local_var = NULL;
    }
    if (s_country_name_x_local_str) {
        free(s_country_name_x_local_str);
        s_country_name_x_local_str = NULL;
    }
    if (s_country_shortname_local_str) {
        free(s_country_shortname_local_str);
        s_country_shortname_local_str = NULL;
    }
    if (b_country_isactive_local_var) {
        free(b_country_isactive_local_var);
        b_country_isactive_local_var = NULL;
    }
    return NULL;

}
