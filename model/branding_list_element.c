#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_list_element.h"



branding_list_element_t *branding_list_element_create(
    int pki_branding_id,
    char *s_branding_description_x,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int b_branding_isactive
    ) {
    branding_list_element_t *branding_list_element_local_var = malloc(sizeof(branding_list_element_t));
    if (!branding_list_element_local_var) {
        return NULL;
    }
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


void branding_list_element_free(branding_list_element_t *branding_list_element) {
    if(NULL == branding_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_list_element->s_branding_description_x) {
        free(branding_list_element->s_branding_description_x);
        branding_list_element->s_branding_description_x = NULL;
    }
    free(branding_list_element);
}

cJSON *branding_list_element_convertToJSON(branding_list_element_t *branding_list_element) {
    cJSON *item = cJSON_CreateObject();

    // branding_list_element->pki_branding_id
    if (!branding_list_element->pki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrandingID", branding_list_element->pki_branding_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iBrandingColortext", branding_list_element->i_branding_colortext) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colortextlinkbox
    if (!branding_list_element->i_branding_colortextlinkbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextlinkbox", branding_list_element->i_branding_colortextlinkbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colortextbutton
    if (!branding_list_element->i_branding_colortextbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextbutton", branding_list_element->i_branding_colortextbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackground
    if (!branding_list_element->i_branding_colorbackground) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackground", branding_list_element->i_branding_colorbackground) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackgroundbutton
    if (!branding_list_element->i_branding_colorbackgroundbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundbutton", branding_list_element->i_branding_colorbackgroundbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->i_branding_colorbackgroundsmallbox
    if (!branding_list_element->i_branding_colorbackgroundsmallbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundsmallbox", branding_list_element->i_branding_colorbackgroundsmallbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_list_element->b_branding_isactive
    if (!branding_list_element->b_branding_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrandingIsactive", branding_list_element->b_branding_isactive) == NULL) {
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

    // branding_list_element->pki_branding_id
    cJSON *pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "pkiBrandingID");
    if (!pki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_branding_id))
    {
    goto end; //Numeric
    }

    // branding_list_element->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "sBrandingDescriptionX");
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // branding_list_element->i_branding_colortext
    cJSON *i_branding_colortext = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortext");
    if (!i_branding_colortext) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortext))
    {
    goto end; //Numeric
    }

    // branding_list_element->i_branding_colortextlinkbox
    cJSON *i_branding_colortextlinkbox = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortextlinkbox");
    if (!i_branding_colortextlinkbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextlinkbox))
    {
    goto end; //Numeric
    }

    // branding_list_element->i_branding_colortextbutton
    cJSON *i_branding_colortextbutton = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColortextbutton");
    if (!i_branding_colortextbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextbutton))
    {
    goto end; //Numeric
    }

    // branding_list_element->i_branding_colorbackground
    cJSON *i_branding_colorbackground = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackground");
    if (!i_branding_colorbackground) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackground))
    {
    goto end; //Numeric
    }

    // branding_list_element->i_branding_colorbackgroundbutton
    cJSON *i_branding_colorbackgroundbutton = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackgroundbutton");
    if (!i_branding_colorbackgroundbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundbutton))
    {
    goto end; //Numeric
    }

    // branding_list_element->i_branding_colorbackgroundsmallbox
    cJSON *i_branding_colorbackgroundsmallbox = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "iBrandingColorbackgroundsmallbox");
    if (!i_branding_colorbackgroundsmallbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundsmallbox))
    {
    goto end; //Numeric
    }

    // branding_list_element->b_branding_isactive
    cJSON *b_branding_isactive = cJSON_GetObjectItemCaseSensitive(branding_list_elementJSON, "bBrandingIsactive");
    if (!b_branding_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_branding_isactive))
    {
    goto end; //Bool
    }


    branding_list_element_local_var = branding_list_element_create (
        pki_branding_id->valuedouble,
        strdup(s_branding_description_x->valuestring),
        i_branding_colortext->valuedouble,
        i_branding_colortextlinkbox->valuedouble,
        i_branding_colortextbutton->valuedouble,
        i_branding_colorbackground->valuedouble,
        i_branding_colorbackgroundbutton->valuedouble,
        i_branding_colorbackgroundsmallbox->valuedouble,
        b_branding_isactive->valueint
        );

    return branding_list_element_local_var;
end:
    return NULL;

}
