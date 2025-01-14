#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_branding_response.h"



custom_branding_response_t *custom_branding_response_create(
    int i_branding_color,
    char *s_branding_logointerfaceurl
    ) {
    custom_branding_response_t *custom_branding_response_local_var = malloc(sizeof(custom_branding_response_t));
    if (!custom_branding_response_local_var) {
        return NULL;
    }
    custom_branding_response_local_var->i_branding_color = i_branding_color;
    custom_branding_response_local_var->s_branding_logointerfaceurl = s_branding_logointerfaceurl;

    return custom_branding_response_local_var;
}


void custom_branding_response_free(custom_branding_response_t *custom_branding_response) {
    if(NULL == custom_branding_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_branding_response->s_branding_logointerfaceurl) {
        free(custom_branding_response->s_branding_logointerfaceurl);
        custom_branding_response->s_branding_logointerfaceurl = NULL;
    }
    free(custom_branding_response);
}

cJSON *custom_branding_response_convertToJSON(custom_branding_response_t *custom_branding_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_branding_response->i_branding_color
    if (!custom_branding_response->i_branding_color) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColor", custom_branding_response->i_branding_color) == NULL) {
    goto fail; //Numeric
    }


    // custom_branding_response->s_branding_logointerfaceurl
    if (!custom_branding_response->s_branding_logointerfaceurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingLogointerfaceurl", custom_branding_response->s_branding_logointerfaceurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_branding_response_t *custom_branding_response_parseFromJSON(cJSON *custom_branding_responseJSON){

    custom_branding_response_t *custom_branding_response_local_var = NULL;

    // custom_branding_response->i_branding_color
    cJSON *i_branding_color = cJSON_GetObjectItemCaseSensitive(custom_branding_responseJSON, "iBrandingColor");
    if (!i_branding_color) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_color))
    {
    goto end; //Numeric
    }

    // custom_branding_response->s_branding_logointerfaceurl
    cJSON *s_branding_logointerfaceurl = cJSON_GetObjectItemCaseSensitive(custom_branding_responseJSON, "sBrandingLogointerfaceurl");
    if (!s_branding_logointerfaceurl) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_logointerfaceurl))
    {
    goto end; //String
    }


    custom_branding_response_local_var = custom_branding_response_create (
        i_branding_color->valuedouble,
        strdup(s_branding_logointerfaceurl->valuestring)
        );

    return custom_branding_response_local_var;
end:
    return NULL;

}
