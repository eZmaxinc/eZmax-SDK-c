#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_response.h"


char* branding_response_e_branding_logo_ToString(ezmax_api_definition__full_branding_response__e e_branding_logo) {
    char* e_branding_logoArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    return e_branding_logoArray[e_branding_logo];
}

ezmax_api_definition__full_branding_response__e branding_response_e_branding_logo_FromString(char* e_branding_logo){
    int stringToReturn = 0;
    char *e_branding_logoArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    size_t sizeofArray = sizeof(e_branding_logoArray) / sizeof(e_branding_logoArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_branding_logo, e_branding_logoArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* branding_response_e_branding_logointerface_ToString(ezmax_api_definition__full_branding_response__e e_branding_logointerface) {
    char* e_branding_logointerfaceArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    return e_branding_logointerfaceArray[e_branding_logointerface];
}

ezmax_api_definition__full_branding_response__e branding_response_e_branding_logointerface_FromString(char* e_branding_logointerface){
    int stringToReturn = 0;
    char *e_branding_logointerfaceArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    size_t sizeofArray = sizeof(e_branding_logointerfaceArray) / sizeof(e_branding_logointerfaceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_branding_logointerface, e_branding_logointerfaceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

branding_response_t *branding_response_create(
    int pki_branding_id,
    int fki_email_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    char *s_branding_name,
    char *s_email_address,
    field_e_branding_logo_t *e_branding_logo,
    field_e_branding_logointerface_t *e_branding_logointerface,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int i_branding_interfacecolor,
    int b_branding_isactive
    ) {
    branding_response_t *branding_response_local_var = malloc(sizeof(branding_response_t));
    if (!branding_response_local_var) {
        return NULL;
    }
    branding_response_local_var->pki_branding_id = pki_branding_id;
    branding_response_local_var->fki_email_id = fki_email_id;
    branding_response_local_var->obj_branding_description = obj_branding_description;
    branding_response_local_var->s_branding_description_x = s_branding_description_x;
    branding_response_local_var->s_branding_name = s_branding_name;
    branding_response_local_var->s_email_address = s_email_address;
    branding_response_local_var->e_branding_logo = e_branding_logo;
    branding_response_local_var->e_branding_logointerface = e_branding_logointerface;
    branding_response_local_var->i_branding_colortext = i_branding_colortext;
    branding_response_local_var->i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    branding_response_local_var->i_branding_colortextbutton = i_branding_colortextbutton;
    branding_response_local_var->i_branding_colorbackground = i_branding_colorbackground;
    branding_response_local_var->i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    branding_response_local_var->i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    branding_response_local_var->i_branding_interfacecolor = i_branding_interfacecolor;
    branding_response_local_var->b_branding_isactive = b_branding_isactive;

    return branding_response_local_var;
}


void branding_response_free(branding_response_t *branding_response) {
    if(NULL == branding_response){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_response->obj_branding_description) {
        multilingual_branding_description_free(branding_response->obj_branding_description);
        branding_response->obj_branding_description = NULL;
    }
    if (branding_response->s_branding_description_x) {
        free(branding_response->s_branding_description_x);
        branding_response->s_branding_description_x = NULL;
    }
    if (branding_response->s_branding_name) {
        free(branding_response->s_branding_name);
        branding_response->s_branding_name = NULL;
    }
    if (branding_response->s_email_address) {
        free(branding_response->s_email_address);
        branding_response->s_email_address = NULL;
    }
    if (branding_response->e_branding_logo) {
        field_e_branding_logo_free(branding_response->e_branding_logo);
        branding_response->e_branding_logo = NULL;
    }
    if (branding_response->e_branding_logointerface) {
        field_e_branding_logointerface_free(branding_response->e_branding_logointerface);
        branding_response->e_branding_logointerface = NULL;
    }
    free(branding_response);
}

cJSON *branding_response_convertToJSON(branding_response_t *branding_response) {
    cJSON *item = cJSON_CreateObject();

    // branding_response->pki_branding_id
    if (!branding_response->pki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrandingID", branding_response->pki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->fki_email_id
    if(branding_response->fki_email_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmailID", branding_response->fki_email_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branding_response->obj_branding_description
    if (!branding_response->obj_branding_description) {
        goto fail;
    }
    cJSON *obj_branding_description_local_JSON = multilingual_branding_description_convertToJSON(branding_response->obj_branding_description);
    if(obj_branding_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBrandingDescription", obj_branding_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branding_response->s_branding_description_x
    if (!branding_response->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", branding_response->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // branding_response->s_branding_name
    if(branding_response->s_branding_name) {
    if(cJSON_AddStringToObject(item, "sBrandingName", branding_response->s_branding_name) == NULL) {
    goto fail; //String
    }
    }


    // branding_response->s_email_address
    if(branding_response->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", branding_response->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // branding_response->e_branding_logo
    if (ezmax_api_definition__full_branding_response__NULL == branding_response->e_branding_logo) {
        goto fail;
    }
    cJSON *e_branding_logo_local_JSON = field_e_branding_logo_convertToJSON(branding_response->e_branding_logo);
    if(e_branding_logo_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBrandingLogo", e_branding_logo_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // branding_response->e_branding_logointerface
    if(branding_response->e_branding_logointerface != ezmax_api_definition__full_branding_response__NULL) {
    cJSON *e_branding_logointerface_local_JSON = field_e_branding_logointerface_convertToJSON(branding_response->e_branding_logointerface);
    if(e_branding_logointerface_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBrandingLogointerface", e_branding_logointerface_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // branding_response->i_branding_colortext
    if (!branding_response->i_branding_colortext) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortext", branding_response->i_branding_colortext) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_colortextlinkbox
    if (!branding_response->i_branding_colortextlinkbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextlinkbox", branding_response->i_branding_colortextlinkbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_colortextbutton
    if (!branding_response->i_branding_colortextbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColortextbutton", branding_response->i_branding_colortextbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_colorbackground
    if (!branding_response->i_branding_colorbackground) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackground", branding_response->i_branding_colorbackground) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_colorbackgroundbutton
    if (!branding_response->i_branding_colorbackgroundbutton) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundbutton", branding_response->i_branding_colorbackgroundbutton) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_colorbackgroundsmallbox
    if (!branding_response->i_branding_colorbackgroundsmallbox) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColorbackgroundsmallbox", branding_response->i_branding_colorbackgroundsmallbox) == NULL) {
    goto fail; //Numeric
    }


    // branding_response->i_branding_interfacecolor
    if(branding_response->i_branding_interfacecolor) {
    if(cJSON_AddNumberToObject(item, "iBrandingInterfacecolor", branding_response->i_branding_interfacecolor) == NULL) {
    goto fail; //Numeric
    }
    }


    // branding_response->b_branding_isactive
    if (!branding_response->b_branding_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrandingIsactive", branding_response->b_branding_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_response_t *branding_response_parseFromJSON(cJSON *branding_responseJSON){

    branding_response_t *branding_response_local_var = NULL;

    // define the local variable for branding_response->obj_branding_description
    multilingual_branding_description_t *obj_branding_description_local_nonprim = NULL;

    // define the local variable for branding_response->e_branding_logo
    field_e_branding_logo_t *e_branding_logo_local_nonprim = NULL;

    // define the local variable for branding_response->e_branding_logointerface
    field_e_branding_logointerface_t *e_branding_logointerface_local_nonprim = NULL;

    // branding_response->pki_branding_id
    cJSON *pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "pkiBrandingID");
    if (!pki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_branding_id))
    {
    goto end; //Numeric
    }

    // branding_response->fki_email_id
    cJSON *fki_email_id = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "fkiEmailID");
    if (fki_email_id) { 
    if(!cJSON_IsNumber(fki_email_id))
    {
    goto end; //Numeric
    }
    }

    // branding_response->obj_branding_description
    cJSON *obj_branding_description = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "objBrandingDescription");
    if (!obj_branding_description) {
        goto end;
    }

    
    obj_branding_description_local_nonprim = multilingual_branding_description_parseFromJSON(obj_branding_description); //nonprimitive

    // branding_response->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "sBrandingDescriptionX");
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // branding_response->s_branding_name
    cJSON *s_branding_name = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "sBrandingName");
    if (s_branding_name) { 
    if(!cJSON_IsString(s_branding_name) && !cJSON_IsNull(s_branding_name))
    {
    goto end; //String
    }
    }

    // branding_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // branding_response->e_branding_logo
    cJSON *e_branding_logo = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "eBrandingLogo");
    if (!e_branding_logo) {
        goto end;
    }

    
    e_branding_logo_local_nonprim = field_e_branding_logo_parseFromJSON(e_branding_logo); //custom

    // branding_response->e_branding_logointerface
    cJSON *e_branding_logointerface = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "eBrandingLogointerface");
    if (e_branding_logointerface) { 
    e_branding_logointerface_local_nonprim = field_e_branding_logointerface_parseFromJSON(e_branding_logointerface); //custom
    }

    // branding_response->i_branding_colortext
    cJSON *i_branding_colortext = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColortext");
    if (!i_branding_colortext) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortext))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_colortextlinkbox
    cJSON *i_branding_colortextlinkbox = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColortextlinkbox");
    if (!i_branding_colortextlinkbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextlinkbox))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_colortextbutton
    cJSON *i_branding_colortextbutton = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColortextbutton");
    if (!i_branding_colortextbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colortextbutton))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_colorbackground
    cJSON *i_branding_colorbackground = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColorbackground");
    if (!i_branding_colorbackground) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackground))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_colorbackgroundbutton
    cJSON *i_branding_colorbackgroundbutton = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColorbackgroundbutton");
    if (!i_branding_colorbackgroundbutton) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundbutton))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_colorbackgroundsmallbox
    cJSON *i_branding_colorbackgroundsmallbox = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingColorbackgroundsmallbox");
    if (!i_branding_colorbackgroundsmallbox) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_branding_colorbackgroundsmallbox))
    {
    goto end; //Numeric
    }

    // branding_response->i_branding_interfacecolor
    cJSON *i_branding_interfacecolor = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "iBrandingInterfacecolor");
    if (i_branding_interfacecolor) { 
    if(!cJSON_IsNumber(i_branding_interfacecolor))
    {
    goto end; //Numeric
    }
    }

    // branding_response->b_branding_isactive
    cJSON *b_branding_isactive = cJSON_GetObjectItemCaseSensitive(branding_responseJSON, "bBrandingIsactive");
    if (!b_branding_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_branding_isactive))
    {
    goto end; //Bool
    }


    branding_response_local_var = branding_response_create (
        pki_branding_id->valuedouble,
        fki_email_id ? fki_email_id->valuedouble : 0,
        obj_branding_description_local_nonprim,
        strdup(s_branding_description_x->valuestring),
        s_branding_name && !cJSON_IsNull(s_branding_name) ? strdup(s_branding_name->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        e_branding_logo_local_nonprim,
        e_branding_logointerface ? e_branding_logointerface_local_nonprim : NULL,
        i_branding_colortext->valuedouble,
        i_branding_colortextlinkbox->valuedouble,
        i_branding_colortextbutton->valuedouble,
        i_branding_colorbackground->valuedouble,
        i_branding_colorbackgroundbutton->valuedouble,
        i_branding_colorbackgroundsmallbox->valuedouble,
        i_branding_interfacecolor ? i_branding_interfacecolor->valuedouble : 0,
        b_branding_isactive->valueint
        );

    return branding_response_local_var;
end:
    if (obj_branding_description_local_nonprim) {
        multilingual_branding_description_free(obj_branding_description_local_nonprim);
        obj_branding_description_local_nonprim = NULL;
    }
    if (e_branding_logo_local_nonprim) {
        field_e_branding_logo_free(e_branding_logo_local_nonprim);
        e_branding_logo_local_nonprim = NULL;
    }
    if (e_branding_logointerface_local_nonprim) {
        field_e_branding_logointerface_free(e_branding_logointerface_local_nonprim);
        e_branding_logointerface_local_nonprim = NULL;
    }
    return NULL;

}
