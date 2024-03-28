#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_autocomplete_element_response.h"



country_autocomplete_element_response_t *country_autocomplete_element_response_create(
    int pki_country_id,
    char *s_country_name_x,
    char *s_country_shortname,
    int b_country_isactive
    ) {
    country_autocomplete_element_response_t *country_autocomplete_element_response_local_var = malloc(sizeof(country_autocomplete_element_response_t));
    if (!country_autocomplete_element_response_local_var) {
        return NULL;
    }
    country_autocomplete_element_response_local_var->pki_country_id = pki_country_id;
    country_autocomplete_element_response_local_var->s_country_name_x = s_country_name_x;
    country_autocomplete_element_response_local_var->s_country_shortname = s_country_shortname;
    country_autocomplete_element_response_local_var->b_country_isactive = b_country_isactive;

    return country_autocomplete_element_response_local_var;
}


void country_autocomplete_element_response_free(country_autocomplete_element_response_t *country_autocomplete_element_response) {
    if(NULL == country_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (country_autocomplete_element_response->s_country_name_x) {
        free(country_autocomplete_element_response->s_country_name_x);
        country_autocomplete_element_response->s_country_name_x = NULL;
    }
    if (country_autocomplete_element_response->s_country_shortname) {
        free(country_autocomplete_element_response->s_country_shortname);
        country_autocomplete_element_response->s_country_shortname = NULL;
    }
    free(country_autocomplete_element_response);
}

cJSON *country_autocomplete_element_response_convertToJSON(country_autocomplete_element_response_t *country_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // country_autocomplete_element_response->pki_country_id
    if (!country_autocomplete_element_response->pki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCountryID", country_autocomplete_element_response->pki_country_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bCountryIsactive", country_autocomplete_element_response->b_country_isactive) == NULL) {
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

    // country_autocomplete_element_response->pki_country_id
    cJSON *pki_country_id = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "pkiCountryID");
    if (!pki_country_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_country_id))
    {
    goto end; //Numeric
    }

    // country_autocomplete_element_response->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "sCountryNameX");
    if (!s_country_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_country_name_x))
    {
    goto end; //String
    }

    // country_autocomplete_element_response->s_country_shortname
    cJSON *s_country_shortname = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "sCountryShortname");
    if (!s_country_shortname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_country_shortname))
    {
    goto end; //String
    }

    // country_autocomplete_element_response->b_country_isactive
    cJSON *b_country_isactive = cJSON_GetObjectItemCaseSensitive(country_autocomplete_element_responseJSON, "bCountryIsactive");
    if (!b_country_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_country_isactive))
    {
    goto end; //Bool
    }


    country_autocomplete_element_response_local_var = country_autocomplete_element_response_create (
        pki_country_id->valuedouble,
        strdup(s_country_name_x->valuestring),
        strdup(s_country_shortname->valuestring),
        b_country_isactive->valueint
        );

    return country_autocomplete_element_response_local_var;
end:
    return NULL;

}
