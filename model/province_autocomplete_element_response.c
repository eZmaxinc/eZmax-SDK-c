#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "province_autocomplete_element_response.h"



static province_autocomplete_element_response_t *province_autocomplete_element_response_create_internal(
    int *pki_province_id,
    int *fki_country_id,
    char *s_province_name_x,
    char *s_province_shortname,
    int *b_province_isactive
    ) {
    province_autocomplete_element_response_t *province_autocomplete_element_response_local_var = malloc(sizeof(province_autocomplete_element_response_t));
    if (!province_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(province_autocomplete_element_response_local_var, 0, sizeof(province_autocomplete_element_response_t));
    province_autocomplete_element_response_local_var->_library_owned = 1;
    province_autocomplete_element_response_local_var->pki_province_id = pki_province_id;
    province_autocomplete_element_response_local_var->fki_country_id = fki_country_id;
    province_autocomplete_element_response_local_var->s_province_name_x = s_province_name_x;
    province_autocomplete_element_response_local_var->s_province_shortname = s_province_shortname;
    province_autocomplete_element_response_local_var->b_province_isactive = b_province_isactive;
    return province_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) province_autocomplete_element_response_t *province_autocomplete_element_response_create(
    int *pki_province_id,
    int *fki_country_id,
    char *s_province_name_x,
    char *s_province_shortname,
    int *b_province_isactive
    ) {
    int *pki_province_id_copy = NULL;
    if (pki_province_id) {
        pki_province_id_copy = malloc(sizeof(int));
        if (pki_province_id_copy) *pki_province_id_copy = *pki_province_id;
    }
    int *fki_country_id_copy = NULL;
    if (fki_country_id) {
        fki_country_id_copy = malloc(sizeof(int));
        if (fki_country_id_copy) *fki_country_id_copy = *fki_country_id;
    }
    int *b_province_isactive_copy = NULL;
    if (b_province_isactive) {
        b_province_isactive_copy = malloc(sizeof(int));
        if (b_province_isactive_copy) *b_province_isactive_copy = *b_province_isactive;
    }
    province_autocomplete_element_response_t *result = province_autocomplete_element_response_create_internal (
        pki_province_id_copy,
        fki_country_id_copy,
        s_province_name_x,
        s_province_shortname,
        b_province_isactive_copy
        );
    if (!result) {
        free(pki_province_id_copy);
        free(fki_country_id_copy);
        free(b_province_isactive_copy);
    }
    return result;
}

void province_autocomplete_element_response_free(province_autocomplete_element_response_t *province_autocomplete_element_response) {
    if(NULL == province_autocomplete_element_response){
        return ;
    }
    if(province_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "province_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (province_autocomplete_element_response->pki_province_id) {
        free(province_autocomplete_element_response->pki_province_id);
        province_autocomplete_element_response->pki_province_id = NULL;
    }
    if (province_autocomplete_element_response->fki_country_id) {
        free(province_autocomplete_element_response->fki_country_id);
        province_autocomplete_element_response->fki_country_id = NULL;
    }
    if (province_autocomplete_element_response->s_province_name_x) {
        free(province_autocomplete_element_response->s_province_name_x);
        province_autocomplete_element_response->s_province_name_x = NULL;
    }
    if (province_autocomplete_element_response->s_province_shortname) {
        free(province_autocomplete_element_response->s_province_shortname);
        province_autocomplete_element_response->s_province_shortname = NULL;
    }
    if (province_autocomplete_element_response->b_province_isactive) {
        free(province_autocomplete_element_response->b_province_isactive);
        province_autocomplete_element_response->b_province_isactive = NULL;
    }
    free(province_autocomplete_element_response);
}

cJSON *province_autocomplete_element_response_convertToJSON(province_autocomplete_element_response_t *province_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // province_autocomplete_element_response->pki_province_id
    if (!province_autocomplete_element_response->pki_province_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiProvinceID", *province_autocomplete_element_response->pki_province_id) == NULL) {
    goto fail; //Numeric
    }


    // province_autocomplete_element_response->fki_country_id
    if (!province_autocomplete_element_response->fki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *province_autocomplete_element_response->fki_country_id) == NULL) {
    goto fail; //Numeric
    }


    // province_autocomplete_element_response->s_province_name_x
    if (!province_autocomplete_element_response->s_province_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sProvinceNameX", province_autocomplete_element_response->s_province_name_x) == NULL) {
    goto fail; //String
    }


    // province_autocomplete_element_response->s_province_shortname
    if (!province_autocomplete_element_response->s_province_shortname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sProvinceShortname", province_autocomplete_element_response->s_province_shortname) == NULL) {
    goto fail; //String
    }


    // province_autocomplete_element_response->b_province_isactive
    if (!province_autocomplete_element_response->b_province_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bProvinceIsactive", *province_autocomplete_element_response->b_province_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

province_autocomplete_element_response_t *province_autocomplete_element_response_parseFromJSON(cJSON *province_autocomplete_element_responseJSON){

    province_autocomplete_element_response_t *province_autocomplete_element_response_local_var = NULL;

    // define the local variable for province_autocomplete_element_response->pki_province_id
    int *pki_province_id_local_var = NULL;

    // define the local variable for province_autocomplete_element_response->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    char *s_province_shortname_local_str = NULL;

    // define the local variable for province_autocomplete_element_response->b_province_isactive
    int *b_province_isactive_local_var = NULL;

    // province_autocomplete_element_response->pki_province_id
    cJSON *pki_province_id = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "pkiProvinceID");
    if (cJSON_IsNull(pki_province_id)) {
        pki_province_id = NULL;
    }
    if (!pki_province_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_province_id))
    {
    goto end; //Numeric
    }
    pki_province_id_local_var = malloc(sizeof(int));
    if(!pki_province_id_local_var)
    {
        goto end;
    }
    *pki_province_id_local_var = pki_province_id->valuedouble;

    // province_autocomplete_element_response->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "fkiCountryID");
    if (cJSON_IsNull(fki_country_id)) {
        fki_country_id = NULL;
    }
    if (!fki_country_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_country_id))
    {
    goto end; //Numeric
    }
    fki_country_id_local_var = malloc(sizeof(int));
    if(!fki_country_id_local_var)
    {
        goto end;
    }
    *fki_country_id_local_var = fki_country_id->valuedouble;

    // province_autocomplete_element_response->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (!s_province_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_name_x))
    {
    goto end; //String
    }

    // province_autocomplete_element_response->s_province_shortname
    cJSON *s_province_shortname = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "sProvinceShortname");
    if (cJSON_IsNull(s_province_shortname)) {
        s_province_shortname = NULL;
    }
    if (!s_province_shortname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_shortname))
    {
    goto end; //String
    }

    // province_autocomplete_element_response->b_province_isactive
    cJSON *b_province_isactive = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "bProvinceIsactive");
    if (cJSON_IsNull(b_province_isactive)) {
        b_province_isactive = NULL;
    }
    if (!b_province_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_province_isactive))
    {
    goto end; //Bool
    }
    b_province_isactive_local_var = malloc(sizeof(int));
    if(!b_province_isactive_local_var)
    {
        goto end;
    }
    *b_province_isactive_local_var = b_province_isactive->valueint;


    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_province_shortname && !cJSON_IsNull(s_province_shortname)) s_province_shortname_local_str = strdup(s_province_shortname->valuestring);

    province_autocomplete_element_response_local_var = province_autocomplete_element_response_create_internal (
        pki_province_id_local_var,
        fki_country_id_local_var,
        s_province_name_x_local_str,
        s_province_shortname_local_str,
        b_province_isactive_local_var
        );

    if (!province_autocomplete_element_response_local_var) {
        goto end;
    }

    return province_autocomplete_element_response_local_var;
end:
    if (pki_province_id_local_var) {
        free(pki_province_id_local_var);
        pki_province_id_local_var = NULL;
    }
    if (fki_country_id_local_var) {
        free(fki_country_id_local_var);
        fki_country_id_local_var = NULL;
    }
    if (s_province_name_x_local_str) {
        free(s_province_name_x_local_str);
        s_province_name_x_local_str = NULL;
    }
    if (s_province_shortname_local_str) {
        free(s_province_shortname_local_str);
        s_province_shortname_local_str = NULL;
    }
    if (b_province_isactive_local_var) {
        free(b_province_isactive_local_var);
        b_province_isactive_local_var = NULL;
    }
    return NULL;

}
