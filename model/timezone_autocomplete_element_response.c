#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_autocomplete_element_response.h"



timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_create(
    char *s_timezone_name,
    int pki_timezone_id,
    int b_timezone_isactive
    ) {
    timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_local_var = malloc(sizeof(timezone_autocomplete_element_response_t));
    if (!timezone_autocomplete_element_response_local_var) {
        return NULL;
    }
    timezone_autocomplete_element_response_local_var->s_timezone_name = s_timezone_name;
    timezone_autocomplete_element_response_local_var->pki_timezone_id = pki_timezone_id;
    timezone_autocomplete_element_response_local_var->b_timezone_isactive = b_timezone_isactive;

    return timezone_autocomplete_element_response_local_var;
}


void timezone_autocomplete_element_response_free(timezone_autocomplete_element_response_t *timezone_autocomplete_element_response) {
    if(NULL == timezone_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_autocomplete_element_response->s_timezone_name) {
        free(timezone_autocomplete_element_response->s_timezone_name);
        timezone_autocomplete_element_response->s_timezone_name = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiTimezoneID", timezone_autocomplete_element_response->pki_timezone_id) == NULL) {
    goto fail; //Numeric
    }


    // timezone_autocomplete_element_response->b_timezone_isactive
    if (!timezone_autocomplete_element_response->b_timezone_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTimezoneIsactive", timezone_autocomplete_element_response->b_timezone_isactive) == NULL) {
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

    // timezone_autocomplete_element_response->s_timezone_name
    cJSON *s_timezone_name = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "sTimezoneName");
    if (!s_timezone_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_timezone_name))
    {
    goto end; //String
    }

    // timezone_autocomplete_element_response->pki_timezone_id
    cJSON *pki_timezone_id = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "pkiTimezoneID");
    if (!pki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_timezone_id))
    {
    goto end; //Numeric
    }

    // timezone_autocomplete_element_response->b_timezone_isactive
    cJSON *b_timezone_isactive = cJSON_GetObjectItemCaseSensitive(timezone_autocomplete_element_responseJSON, "bTimezoneIsactive");
    if (!b_timezone_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_timezone_isactive))
    {
    goto end; //Bool
    }


    timezone_autocomplete_element_response_local_var = timezone_autocomplete_element_response_create (
        strdup(s_timezone_name->valuestring),
        pki_timezone_id->valuedouble,
        b_timezone_isactive->valueint
        );

    return timezone_autocomplete_element_response_local_var;
end:
    return NULL;

}
