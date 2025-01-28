#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_response_v3.h"



static branding_response_v3_t *branding_response_v3_create_internal(
    int pki_branding_id,
    int fki_email_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    char *s_branding_name,
    char *s_email_address,
    ezmax_api_definition__full_field_e_branding_logo__e e_branding_logo,
    ezmax_api_definition__full_field_e_branding_alignlogo__e e_branding_alignlogo,
    int i_branding_color,
    int b_branding_isactive
    ) {
    branding_response_v3_t *branding_response_v3_local_var = malloc(sizeof(branding_response_v3_t));
    if (!branding_response_v3_local_var) {
        return NULL;
    }
    branding_response_v3_local_var->pki_branding_id = pki_branding_id;
    branding_response_v3_local_var->fki_email_id = fki_email_id;
    branding_response_v3_local_var->obj_branding_description = obj_branding_description;
    branding_response_v3_local_var->s_branding_description_x = s_branding_description_x;
    branding_response_v3_local_var->s_branding_name = s_branding_name;
    branding_response_v3_local_var->s_email_address = s_email_address;
    branding_response_v3_local_var->e_branding_logo = e_branding_logo;
    branding_response_v3_local_var->e_branding_alignlogo = e_branding_alignlogo;
    branding_response_v3_local_var->i_branding_color = i_branding_color;
    branding_response_v3_local_var->b_branding_isactive = b_branding_isactive;

    branding_response_v3_local_var->_library_owned = 1;
    return branding_response_v3_local_var;
}

__attribute__((deprecated)) branding_response_v3_t *branding_response_v3_create(
    int pki_branding_id,
    int fki_email_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    char *s_branding_name,
    char *s_email_address,
    ezmax_api_definition__full_field_e_branding_logo__e e_branding_logo,
    ezmax_api_definition__full_field_e_branding_alignlogo__e e_branding_alignlogo,
    int i_branding_color,
    int b_branding_isactive
    ) {
    return branding_response_v3_create_internal (
        pki_branding_id,
        fki_email_id,
        obj_branding_description,
        s_branding_description_x,
        s_branding_name,
        s_email_address,
        e_branding_logo,
        e_branding_alignlogo,
        i_branding_color,
        b_branding_isactive
        );
}

void branding_response_v3_free(branding_response_v3_t *branding_response_v3) {
    if(NULL == branding_response_v3){
        return ;
    }
    if(branding_response_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_response_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_response_v3->obj_branding_description) {
        multilingual_branding_description_free(branding_response_v3->obj_branding_description);
        branding_response_v3->obj_branding_description = NULL;
    }
    if (branding_response_v3->s_branding_description_x) {
        free(branding_response_v3->s_branding_description_x);
        branding_response_v3->s_branding_description_x = NULL;
    }
    if (branding_response_v3->s_branding_name) {
        free(branding_response_v3->s_branding_name);
        branding_response_v3->s_branding_name = NULL;
    }
    if (branding_response_v3->s_email_address) {
        free(branding_response_v3->s_email_address);
        branding_response_v3->s_email_address = NULL;
    }
    free(branding_response_v3);
}

cJSON *branding_response_v3_convertToJSON(branding_response_v3_t *branding_response_v3) {
    cJSON *item = cJSON_CreateObject();

    // branding_response_v3->pki_branding_id
    if (!branding_response_v3->pki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrandingID", branding_response_v3->pki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // branding_response_v3->fki_email_id
    if(branding_response_v3->fki_email_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmailID", branding_response_v3->fki_email_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branding_response_v3->obj_branding_description
    if (!branding_response_v3->obj_branding_description) {
        goto fail;
    }
    cJSON *obj_branding_description_local_JSON = multilingual_branding_description_convertToJSON(branding_response_v3->obj_branding_description);
    if(obj_branding_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBrandingDescription", obj_branding_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branding_response_v3->s_branding_description_x
    if (!branding_response_v3->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", branding_response_v3->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // branding_response_v3->s_branding_name
    if(branding_response_v3->s_branding_name) {
    if(cJSON_AddStringToObject(item, "sBrandingName", branding_response_v3->s_branding_name) == NULL) {
    goto fail; //String
    }
    }


    // branding_response_v3->s_email_address
    if(branding_response_v3->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", branding_response_v3->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // branding_response_v3->e_branding_logo
    if (ezmax_api_definition__full_field_e_branding_logo__NULL == branding_response_v3->e_branding_logo) {
        goto fail;
    }
    cJSON *e_branding_logo_local_JSON = field_e_branding_logo_convertToJSON(branding_response_v3->e_branding_logo);
    if(e_branding_logo_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBrandingLogo", e_branding_logo_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // branding_response_v3->e_branding_alignlogo
    if (ezmax_api_definition__full_field_e_branding_alignlogo__NULL == branding_response_v3->e_branding_alignlogo) {
        goto fail;
    }
    cJSON *e_branding_alignlogo_local_JSON = field_e_branding_alignlogo_convertToJSON(branding_response_v3->e_branding_alignlogo);
    if(e_branding_alignlogo_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBrandingAlignlogo", e_branding_alignlogo_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // branding_response_v3->i_branding_color
    if (!branding_response_v3->i_branding_color) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrandingColor", branding_response_v3->i_branding_color) == NULL) {
    goto fail; //Numeric
    }


    // branding_response_v3->b_branding_isactive
    if (!branding_response_v3->b_branding_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrandingIsactive", branding_response_v3->b_branding_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_response_v3_t *branding_response_v3_parseFromJSON(cJSON *branding_response_v3JSON){

    branding_response_v3_t *branding_response_v3_local_var = NULL;

    // define the local variable for branding_response_v3->obj_branding_description
    multilingual_branding_description_t *obj_branding_description_local_nonprim = NULL;

    // define the local variable for branding_response_v3->e_branding_logo
    ezmax_api_definition__full_field_e_branding_logo__e e_branding_logo_local_nonprim = 0;

    // define the local variable for branding_response_v3->e_branding_alignlogo
    ezmax_api_definition__full_field_e_branding_alignlogo__e e_branding_alignlogo_local_nonprim = 0;

    // branding_response_v3->pki_branding_id
    cJSON *pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "pkiBrandingID");
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

    // branding_response_v3->fki_email_id
    cJSON *fki_email_id = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "fkiEmailID");
    if (cJSON_IsNull(fki_email_id)) {
        fki_email_id = NULL;
    }
    if (fki_email_id) { 
    if(!cJSON_IsNumber(fki_email_id))
    {
    goto end; //Numeric
    }
    }

    // branding_response_v3->obj_branding_description
    cJSON *obj_branding_description = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "objBrandingDescription");
    if (cJSON_IsNull(obj_branding_description)) {
        obj_branding_description = NULL;
    }
    if (!obj_branding_description) {
        goto end;
    }

    
    obj_branding_description_local_nonprim = multilingual_branding_description_parseFromJSON(obj_branding_description); //nonprimitive

    // branding_response_v3->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "sBrandingDescriptionX");
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

    // branding_response_v3->s_branding_name
    cJSON *s_branding_name = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "sBrandingName");
    if (cJSON_IsNull(s_branding_name)) {
        s_branding_name = NULL;
    }
    if (s_branding_name) { 
    if(!cJSON_IsString(s_branding_name) && !cJSON_IsNull(s_branding_name))
    {
    goto end; //String
    }
    }

    // branding_response_v3->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // branding_response_v3->e_branding_logo
    cJSON *e_branding_logo = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "eBrandingLogo");
    if (cJSON_IsNull(e_branding_logo)) {
        e_branding_logo = NULL;
    }
    if (!e_branding_logo) {
        goto end;
    }

    
    e_branding_logo_local_nonprim = field_e_branding_logo_parseFromJSON(e_branding_logo); //custom

    // branding_response_v3->e_branding_alignlogo
    cJSON *e_branding_alignlogo = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "eBrandingAlignlogo");
    if (cJSON_IsNull(e_branding_alignlogo)) {
        e_branding_alignlogo = NULL;
    }
    if (!e_branding_alignlogo) {
        goto end;
    }

    
    e_branding_alignlogo_local_nonprim = field_e_branding_alignlogo_parseFromJSON(e_branding_alignlogo); //custom

    // branding_response_v3->i_branding_color
    cJSON *i_branding_color = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "iBrandingColor");
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

    // branding_response_v3->b_branding_isactive
    cJSON *b_branding_isactive = cJSON_GetObjectItemCaseSensitive(branding_response_v3JSON, "bBrandingIsactive");
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


    branding_response_v3_local_var = branding_response_v3_create_internal (
        pki_branding_id->valuedouble,
        fki_email_id ? fki_email_id->valuedouble : 0,
        obj_branding_description_local_nonprim,
        strdup(s_branding_description_x->valuestring),
        s_branding_name && !cJSON_IsNull(s_branding_name) ? strdup(s_branding_name->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        e_branding_logo_local_nonprim,
        e_branding_alignlogo_local_nonprim,
        i_branding_color->valuedouble,
        b_branding_isactive->valueint
        );

    return branding_response_v3_local_var;
end:
    if (obj_branding_description_local_nonprim) {
        multilingual_branding_description_free(obj_branding_description_local_nonprim);
        obj_branding_description_local_nonprim = NULL;
    }
    if (e_branding_logo_local_nonprim) {
        e_branding_logo_local_nonprim = 0;
    }
    if (e_branding_alignlogo_local_nonprim) {
        e_branding_alignlogo_local_nonprim = 0;
    }
    return NULL;

}
