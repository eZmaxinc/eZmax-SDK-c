#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_branding_response.h"



static custom_branding_response_t *custom_branding_response_create_internal(
    int *i_branding_color,
    char *s_branding_logointerfaceurl
    ) {
    custom_branding_response_t *custom_branding_response_local_var = malloc(sizeof(custom_branding_response_t));
    if (!custom_branding_response_local_var) {
        return NULL;
    }
    memset(custom_branding_response_local_var, 0, sizeof(custom_branding_response_t));
    custom_branding_response_local_var->_library_owned = 1;
    custom_branding_response_local_var->i_branding_color = i_branding_color;
    custom_branding_response_local_var->s_branding_logointerfaceurl = s_branding_logointerfaceurl;
    return custom_branding_response_local_var;
}

__attribute__((deprecated)) custom_branding_response_t *custom_branding_response_create(
    int *i_branding_color,
    char *s_branding_logointerfaceurl
    ) {
    int *i_branding_color_copy = NULL;
    if (i_branding_color) {
        i_branding_color_copy = malloc(sizeof(int));
        if (i_branding_color_copy) *i_branding_color_copy = *i_branding_color;
    }
    custom_branding_response_t *result = custom_branding_response_create_internal (
        i_branding_color_copy,
        s_branding_logointerfaceurl
        );
    if (!result) {
        free(i_branding_color_copy);
    }
    return result;
}

void custom_branding_response_free(custom_branding_response_t *custom_branding_response) {
    if(NULL == custom_branding_response){
        return ;
    }
    if(custom_branding_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_branding_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_branding_response->i_branding_color) {
        free(custom_branding_response->i_branding_color);
        custom_branding_response->i_branding_color = NULL;
    }
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
    if(cJSON_AddNumberToObject(item, "iBrandingColor", *custom_branding_response->i_branding_color) == NULL) {
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

    // define the local variable for custom_branding_response->i_branding_color
    int *i_branding_color_local_var = NULL;

    char *s_branding_logointerfaceurl_local_str = NULL;

    // custom_branding_response->i_branding_color
    cJSON *i_branding_color = cJSON_GetObjectItemCaseSensitive(custom_branding_responseJSON, "iBrandingColor");
    if (cJSON_IsNull(i_branding_color)) {
        i_branding_color = NULL;
    }
    if (!i_branding_color) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_color))
    {
    goto end; //Numeric
    }
    i_branding_color_local_var = malloc(sizeof(int));
    if(!i_branding_color_local_var)
    {
        goto end;
    }
    *i_branding_color_local_var = i_branding_color->valuedouble;

    // custom_branding_response->s_branding_logointerfaceurl
    cJSON *s_branding_logointerfaceurl = cJSON_GetObjectItemCaseSensitive(custom_branding_responseJSON, "sBrandingLogointerfaceurl");
    if (cJSON_IsNull(s_branding_logointerfaceurl)) {
        s_branding_logointerfaceurl = NULL;
    }
    if (!s_branding_logointerfaceurl) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_logointerfaceurl))
    {
    goto end; //String
    }


    if (s_branding_logointerfaceurl && !cJSON_IsNull(s_branding_logointerfaceurl)) s_branding_logointerfaceurl_local_str = strdup(s_branding_logointerfaceurl->valuestring);

    custom_branding_response_local_var = custom_branding_response_create_internal (
        i_branding_color_local_var,
        s_branding_logointerfaceurl_local_str
        );

    if (!custom_branding_response_local_var) {
        goto end;
    }

    return custom_branding_response_local_var;
end:
    if (i_branding_color_local_var) {
        free(i_branding_color_local_var);
        i_branding_color_local_var = NULL;
    }
    if (s_branding_logointerfaceurl_local_str) {
        free(s_branding_logointerfaceurl_local_str);
        s_branding_logointerfaceurl_local_str = NULL;
    }
    return NULL;

}
