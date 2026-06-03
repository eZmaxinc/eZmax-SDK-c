#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_list_element.h"



static branding_list_element_t *branding_list_element_create_internal(
    int *pki_branding_id,
    char *s_branding_description_x,
    int *i_branding_colortext,
    int *i_branding_colortextlinkbox,
    int *i_branding_colortextbutton,
    int *i_branding_colorbackground,
    int *i_branding_colorbackgroundbutton,
    int *i_branding_colorbackgroundsmallbox,
    int *b_branding_isactive
    ) {
    branding_list_element_t *branding_list_element_local_var = malloc(sizeof(branding_list_element_t));
    if (!branding_list_element_local_var) {
        return NULL;
    }
    memset(branding_list_element_local_var, 0, sizeof(branding_list_element_t));
    branding_list_element_local_var->_library_owned = 1;
    branding_list_element_local_var->pki_branding_id = pki_branding_id;
    branding_list_element_local_var->s_branding_description_x = s_branding_description_x;
    branding_list_element_local_var->i_branding_colortext = i_branding_colortext;
    branding_list_element_local_var->i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    branding_list_element_local_var->i_branding_colortextbutton = i_branding_colortextbutton;
    branding_list_element_local_var->i_branding_colorbackground = i_branding_colorbackground;
    branding_list_element_local_var->i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    branding_list_element_local_var->i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    branding_list_element_local_var->b_branding_isactive = b_branding_isactive;
    return branding_list_element_local_var;
}

__attribute__((deprecated)) branding_list_element_t *branding_list_element_create(
    int *pki_branding_id,
    char *s_branding_description_x,
    int *i_branding_colortext,
    int *i_branding_colortextlinkbox,
    int *i_branding_colortextbutton,
    int *i_branding_colorbackground,
    int *i_branding_colorbackgroundbutton,
    int *i_branding_colorbackgroundsmallbox,
    int *b_branding_isactive
    ) {
    int *pki_branding_id_copy = NULL;
    if (pki_branding_id) {
        pki_branding_id_copy = malloc(sizeof(int));
        if (pki_branding_id_copy) *pki_branding_id_copy = *pki_branding_id;
    }
    int *i_branding_colortext_copy = NULL;
    if (i_branding_colortext) {
        i_branding_colortext_copy = malloc(sizeof(int));
        if (i_branding_colortext_copy) *i_branding_colortext_copy = *i_branding_colortext;
    }
    int *i_branding_colortextlinkbox_copy = NULL;
    if (i_branding_colortextlinkbox) {
        i_branding_colortextlinkbox_copy = malloc(sizeof(int));
        if (i_branding_colortextlinkbox_copy) *i_branding_colortextlinkbox_copy = *i_branding_colortextlinkbox;
    }
    int *i_branding_colortextbutton_copy = NULL;
    if (i_branding_colortextbutton) {
        i_branding_colortextbutton_copy = malloc(sizeof(int));
        if (i_branding_colortextbutton_copy) *i_branding_colortextbutton_copy = *i_branding_colortextbutton;
    }
    int *i_branding_colorbackground_copy = NULL;
    if (i_branding_colorbackground) {
        i_branding_colorbackground_copy = malloc(sizeof(int));
        if (i_branding_colorbackground_copy) *i_branding_colorbackground_copy = *i_branding_colorbackground;
    }
    int *i_branding_colorbackgroundbutton_copy = NULL;
    if (i_branding_colorbackgroundbutton) {
        i_branding_colorbackgroundbutton_copy = malloc(sizeof(int));
        if (i_branding_colorbackgroundbutton_copy) *i_branding_colorbackgroundbutton_copy = *i_branding_colorbackgroundbutton;
    }
    int *i_branding_colorbackgroundsmallbox_copy = NULL;
    if (i_branding_colorbackgroundsmallbox) {
        i_branding_colorbackgroundsmallbox_copy = malloc(sizeof(int));
        if (i_branding_colorbackgroundsmallbox_copy) *i_branding_colorbackgroundsmallbox_copy = *i_branding_colorbackgroundsmallbox;
    }
    int *b_branding_isactive_copy = NULL;
    if (b_branding_isactive) {
        b_branding_isactive_copy = malloc(sizeof(int));
        if (b_branding_isactive_copy) *b_branding_isactive_copy = *b_branding_isactive;
    }
    branding_list_element_t *result = branding_list_element_create_internal (
        pki_branding_id_copy,
        s_branding_description_x,
        i_branding_colortext_copy,
        i_branding_colortextlinkbox_copy,
        i_branding_colortextbutton_copy,
        i_branding_colorbackground_copy,
        i_branding_colorbackgroundbutton_copy,
        i_branding_colorbackgroundsmallbox_copy,
        b_branding_isactive_copy
        );
    if (!result) {
        free(pki_branding_id_copy);
        free(i_branding_colortext_copy);
        free(i_branding_colortextlinkbox_copy);
        free(i_branding_colortextbutton_copy);
        free(i_branding_colorbackground_copy);
        free(i_branding_colorbackgroundbutton_copy);
        free(i_branding_colorbackgroundsmallbox_copy);
        free(b_branding_isactive_copy);
    }
    return result;
}

void branding_list_element_free(branding_list_element_t *branding_list_element) {
    if(NULL == branding_list_element){
        return ;
    }
    if(branding_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_list_element->pki_branding_id) {
        free(branding_list_element->pki_branding_id);
        branding_list_element->pki_branding_id = NULL;
    }
    if (branding_list_element->s_branding_description_x) {
        free(branding_list_element->s_branding_description_x);
        branding_list_element->s_branding_description_x = NULL;
    }
    if (branding_list_element->i_branding_colortext) {
        free(branding_list_element->i_branding_colortext);
        branding_list_element->i_branding_colortext = NULL;
    }
    if (branding_list_element->i_branding_colortextlinkbox) {
        free(branding_list_element->i_branding_colortextlinkbox);
        branding_list_element->i_branding_colortextlinkbox = NULL;
    }
    if (branding_list_element->i_branding_colortextbutton) {
        free(branding_list_element->i_branding_colortextbutton);
        branding_list_element->i_branding_colortextbutton = NULL;
    }
    if (branding_list_element->i_branding_colorbackground) {
        free(branding_list_element->i_branding_colorbackground);
        branding_list_element->i_branding_colorbackground = NULL;
    }
    if (branding_list_element->i_branding_colorbackgroundbutton) {
        free(branding_list_element->i_branding_colorbackgroundbutton);
        branding_list_element->i_branding_colorbackgroundbutton = NULL;
    }
    if (branding_list_element->i_branding_colorbackgroundsmallbox) {
        free(branding_list_element->i_branding_colorbackgroundsmallbox);
        branding_list_element->i_branding_colorbackgroundsmallbox = NULL;
    }
    if (branding_list_element->b_branding_isactive) {
        free(branding_list_element->b_branding_isactive);
        branding_list_element->b_branding_isactive = NULL;
    }
    free(branding_list_element);
}

cJSON *branding_list_element_convertToJSON(branding_list_element_t *branding_list_element) {
    cJSON *item = cJSON_CreateObject();

    // branding_list_element->pki_branding_id
    if (!branding_list_element->pki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrandingID", *branding_list_element->pki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->s_branding_description_x
    if (!branding_list_element->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", branding_list_element->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // branding_list_element->i_branding_colortext
    if (!branding_list_element->i_branding_colortext) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortext", *branding_list_element->i_branding_colortext) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colortextlinkbox
    if (!branding_list_element->i_branding_colortextlinkbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextlinkbox", *branding_list_element->i_branding_colortextlinkbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colortextbutton
    if (!branding_list_element->i_branding_colortextbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextbutton", *branding_list_element->i_branding_colortextbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackground
    if (!branding_list_element->i_branding_colorbackground) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackground", *branding_list_element->i_branding_colorbackground) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackgroundbutton
    if (!branding_list_element->i_branding_colorbackgroundbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundbutton", *branding_list_element->i_branding_colorbackgroundbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackgroundsmallbox
    if (!branding_list_element->i_branding_colorbackgroundsmallbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundsmallbox", *branding_list_element->i_branding_colorbackgroundsmallbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->b_branding_isactive
    if (!branding_list_element->b_branding_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrandingIsactive", *branding_list_element->b_branding_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_list_element_t *branding_list_element_parseFromJSON(cJSON *branding_list_elementJSON){

    branding_list_element_t *branding_list_element_local_var = NULL;

    // define the local variable for branding_list_element->pki_branding_id
    int *pki_branding_id_local_var = NULL;

    char *s_branding_description_x_local_str = NULL;

    // define the local variable for branding_list_element->i_branding_colortext
    int *i_branding_colortext_local_var = NULL;

    // define the local variable for branding_list_element->i_branding_colortextlinkbox
    int *i_branding_colortextlinkbox_local_var = NULL;

    // define the local variable for branding_list_element->i_branding_colortextbutton
    int *i_branding_colortextbutton_local_var = NULL;

    // define the local variable for branding_list_element->i_branding_colorbackground
    int *i_branding_colorbackground_local_var = NULL;

    // define the local variable for branding_list_element->i_branding_colorbackgroundbutton
    int *i_branding_colorbackgroundbutton_local_var = NULL;

    // define the local variable for branding_list_element->i_branding_colorbackgroundsmallbox
    int *i_branding_colorbackgroundsmallbox_local_var = NULL;

    // define the local variable for branding_list_element->b_branding_isactive
    int *b_branding_isactive_local_var = NULL;

    // branding_list_element->pki_branding_id
    cJSON *pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "pkiBrandingID");
    if (cJSON_IsNull(pki_branding_id)) {
        pki_branding_id = NULL;
    }
    if (!pki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_branding_id))
    {
    goto end; //Numeric
    }
    pki_branding_id_local_var = malloc(sizeof(int));
    if(!pki_branding_id_local_var)
    {
        goto end;
    }
    *pki_branding_id_local_var = pki_branding_id->valuedouble;

    // branding_list_element->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "sBrandingDescriptionX");
    if (cJSON_IsNull(s_branding_description_x)) {
        s_branding_description_x = NULL;
    }
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // branding_list_element->i_branding_colortext
    cJSON *i_branding_colortext = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortext");
    if (cJSON_IsNull(i_branding_colortext)) {
        i_branding_colortext = NULL;
    }
    if (!i_branding_colortext) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortext))
    {
    goto end; //Numeric
    }
    i_branding_colortext_local_var = malloc(sizeof(int));
    if(!i_branding_colortext_local_var)
    {
        goto end;
    }
    *i_branding_colortext_local_var = i_branding_colortext->valuedouble;

    // branding_list_element->i_branding_colortextlinkbox
    cJSON *i_branding_colortextlinkbox = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortextlinkbox");
    if (cJSON_IsNull(i_branding_colortextlinkbox)) {
        i_branding_colortextlinkbox = NULL;
    }
    if (!i_branding_colortextlinkbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextlinkbox))
    {
    goto end; //Numeric
    }
    i_branding_colortextlinkbox_local_var = malloc(sizeof(int));
    if(!i_branding_colortextlinkbox_local_var)
    {
        goto end;
    }
    *i_branding_colortextlinkbox_local_var = i_branding_colortextlinkbox->valuedouble;

    // branding_list_element->i_branding_colortextbutton
    cJSON *i_branding_colortextbutton = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortextbutton");
    if (cJSON_IsNull(i_branding_colortextbutton)) {
        i_branding_colortextbutton = NULL;
    }
    if (!i_branding_colortextbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextbutton))
    {
    goto end; //Numeric
    }
    i_branding_colortextbutton_local_var = malloc(sizeof(int));
    if(!i_branding_colortextbutton_local_var)
    {
        goto end;
    }
    *i_branding_colortextbutton_local_var = i_branding_colortextbutton->valuedouble;

    // branding_list_element->i_branding_colorbackground
    cJSON *i_branding_colorbackground = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackground");
    if (cJSON_IsNull(i_branding_colorbackground)) {
        i_branding_colorbackground = NULL;
    }
    if (!i_branding_colorbackground) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackground))
    {
    goto end; //Numeric
    }
    i_branding_colorbackground_local_var = malloc(sizeof(int));
    if(!i_branding_colorbackground_local_var)
    {
        goto end;
    }
    *i_branding_colorbackground_local_var = i_branding_colorbackground->valuedouble;

    // branding_list_element->i_branding_colorbackgroundbutton
    cJSON *i_branding_colorbackgroundbutton = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackgroundbutton");
    if (cJSON_IsNull(i_branding_colorbackgroundbutton)) {
        i_branding_colorbackgroundbutton = NULL;
    }
    if (!i_branding_colorbackgroundbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundbutton))
    {
    goto end; //Numeric
    }
    i_branding_colorbackgroundbutton_local_var = malloc(sizeof(int));
    if(!i_branding_colorbackgroundbutton_local_var)
    {
        goto end;
    }
    *i_branding_colorbackgroundbutton_local_var = i_branding_colorbackgroundbutton->valuedouble;

    // branding_list_element->i_branding_colorbackgroundsmallbox
    cJSON *i_branding_colorbackgroundsmallbox = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackgroundsmallbox");
    if (cJSON_IsNull(i_branding_colorbackgroundsmallbox)) {
        i_branding_colorbackgroundsmallbox = NULL;
    }
    if (!i_branding_colorbackgroundsmallbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundsmallbox))
    {
    goto end; //Numeric
    }
    i_branding_colorbackgroundsmallbox_local_var = malloc(sizeof(int));
    if(!i_branding_colorbackgroundsmallbox_local_var)
    {
        goto end;
    }
    *i_branding_colorbackgroundsmallbox_local_var = i_branding_colorbackgroundsmallbox->valuedouble;

    // branding_list_element->b_branding_isactive
    cJSON *b_branding_isactive = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "bBrandingIsactive");
    if (cJSON_IsNull(b_branding_isactive)) {
        b_branding_isactive = NULL;
    }
    if (!b_branding_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_branding_isactive))
    {
    goto end; //Bool
    }
    b_branding_isactive_local_var = malloc(sizeof(int));
    if(!b_branding_isactive_local_var)
    {
        goto end;
    }
    *b_branding_isactive_local_var = b_branding_isactive->valueint;


    if (s_branding_description_x && !cJSON_IsNull(s_branding_description_x)) s_branding_description_x_local_str = strdup(s_branding_description_x->valuestring);

    branding_list_element_local_var = branding_list_element_create_internal (
        pki_branding_id_local_var,
        s_branding_description_x_local_str,
        i_branding_colortext_local_var,
        i_branding_colortextlinkbox_local_var,
        i_branding_colortextbutton_local_var,
        i_branding_colorbackground_local_var,
        i_branding_colorbackgroundbutton_local_var,
        i_branding_colorbackgroundsmallbox_local_var,
        b_branding_isactive_local_var
        );

    if (!branding_list_element_local_var) {
        goto end;
    }

    return branding_list_element_local_var;
end:
    if (pki_branding_id_local_var) {
        free(pki_branding_id_local_var);
        pki_branding_id_local_var = NULL;
    }
    if (s_branding_description_x_local_str) {
        free(s_branding_description_x_local_str);
        s_branding_description_x_local_str = NULL;
    }
    if (i_branding_colortext_local_var) {
        free(i_branding_colortext_local_var);
        i_branding_colortext_local_var = NULL;
    }
    if (i_branding_colortextlinkbox_local_var) {
        free(i_branding_colortextlinkbox_local_var);
        i_branding_colortextlinkbox_local_var = NULL;
    }
    if (i_branding_colortextbutton_local_var) {
        free(i_branding_colortextbutton_local_var);
        i_branding_colortextbutton_local_var = NULL;
    }
    if (i_branding_colorbackground_local_var) {
        free(i_branding_colorbackground_local_var);
        i_branding_colorbackground_local_var = NULL;
    }
    if (i_branding_colorbackgroundbutton_local_var) {
        free(i_branding_colorbackgroundbutton_local_var);
        i_branding_colorbackgroundbutton_local_var = NULL;
    }
    if (i_branding_colorbackgroundsmallbox_local_var) {
        free(i_branding_colorbackgroundsmallbox_local_var);
        i_branding_colorbackgroundsmallbox_local_var = NULL;
    }
    if (b_branding_isactive_local_var) {
        free(b_branding_isactive_local_var);
        b_branding_isactive_local_var = NULL;
    }
    return NULL;

}
