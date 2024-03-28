#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "province_autocomplete_element_response.h"



province_autocomplete_element_response_t *province_autocomplete_element_response_create(
    int pki_province_id,
    int fki_country_id,
    char *s_province_name_x,
    char *s_province_shortname,
    int b_province_isactive
    ) {
    province_autocomplete_element_response_t *province_autocomplete_element_response_local_var = malloc(sizeof(province_autocomplete_element_response_t));
    if (!province_autocomplete_element_response_local_var) {
        return NULL;
    }
    province_autocomplete_element_response_local_var->pki_province_id = pki_province_id;
    province_autocomplete_element_response_local_var->fki_country_id = fki_country_id;
    province_autocomplete_element_response_local_var->s_province_name_x = s_province_name_x;
    province_autocomplete_element_response_local_var->s_province_shortname = s_province_shortname;
    province_autocomplete_element_response_local_var->b_province_isactive = b_province_isactive;

    return province_autocomplete_element_response_local_var;
}


void province_autocomplete_element_response_free(province_autocomplete_element_response_t *province_autocomplete_element_response) {
    if(NULL == province_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (province_autocomplete_element_response->s_province_name_x) {
        free(province_autocomplete_element_response->s_province_name_x);
        province_autocomplete_element_response->s_province_name_x = NULL;
    }
    if (province_autocomplete_element_response->s_province_shortname) {
        free(province_autocomplete_element_response->s_province_shortname);
        province_autocomplete_element_response->s_province_shortname = NULL;
    }
    free(province_autocomplete_element_response);
}

cJSON *province_autocomplete_element_response_convertToJSON(province_autocomplete_element_response_t *province_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // province_autocomplete_element_response->pki_province_id
    if (!province_autocomplete_element_response->pki_province_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiProvinceID", province_autocomplete_element_response->pki_province_id) == NULL) {
    goto fail; //Numeric
    }


    // province_autocomplete_element_response->fki_country_id
    if (!province_autocomplete_element_response->fki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCountryID", province_autocomplete_element_response->fki_country_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bProvinceIsactive", province_autocomplete_element_response->b_province_isactive) == NULL) {
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

    // province_autocomplete_element_response->pki_province_id
    cJSON *pki_province_id = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "pkiProvinceID");
    if (!pki_province_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_province_id))
    {
    goto end; //Numeric
    }

    // province_autocomplete_element_response->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "fkiCountryID");
    if (!fki_country_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_country_id))
    {
    goto end; //Numeric
    }

    // province_autocomplete_element_response->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "sProvinceNameX");
    if (!s_province_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_name_x))
    {
    goto end; //String
    }

    // province_autocomplete_element_response->s_province_shortname
    cJSON *s_province_shortname = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "sProvinceShortname");
    if (!s_province_shortname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_shortname))
    {
    goto end; //String
    }

    // province_autocomplete_element_response->b_province_isactive
    cJSON *b_province_isactive = cJSON_GetObjectItemCaseSensitive(province_autocomplete_element_responseJSON, "bProvinceIsactive");
    if (!b_province_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_province_isactive))
    {
    goto end; //Bool
    }


    province_autocomplete_element_response_local_var = province_autocomplete_element_response_create (
        pki_province_id->valuedouble,
        fki_country_id->valuedouble,
        strdup(s_province_name_x->valuestring),
        strdup(s_province_shortname->valuestring),
        b_province_isactive->valueint
        );

    return province_autocomplete_element_response_local_var;
end:
    return NULL;

}
