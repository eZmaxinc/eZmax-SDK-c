#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_response.h"



static ezsigntemplateannotation_response_t *ezsigntemplateannotation_response_create_internal(
    int pki_ezsigntemplateannotation_id,
    int fki_ezsigntemplatedocumentpage_id,
    int fki_textstylestatic_id,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type,
    int i_ezsigntemplateannotation_x,
    int i_ezsigntemplateannotation_y,
    int i_ezsigntemplateannotation_width,
    int i_ezsigntemplateannotation_height,
    char *s_ezsigntemplateannotation_description,
    char *s_ezsigntemplateannotation_defaulttext,
    char *s_ezsigntemplateannotationn_dropdownvalues
    ) {
    ezsigntemplateannotation_response_t *ezsigntemplateannotation_response_local_var = malloc(sizeof(ezsigntemplateannotation_response_t));
    if (!ezsigntemplateannotation_response_local_var) {
        return NULL;
    }
    ezsigntemplateannotation_response_local_var->pki_ezsigntemplateannotation_id = pki_ezsigntemplateannotation_id;
    ezsigntemplateannotation_response_local_var->fki_ezsigntemplatedocumentpage_id = fki_ezsigntemplatedocumentpage_id;
    ezsigntemplateannotation_response_local_var->fki_textstylestatic_id = fki_textstylestatic_id;
    ezsigntemplateannotation_response_local_var->e_ezsigntemplateannotation_horizontalalignment = e_ezsigntemplateannotation_horizontalalignment;
    ezsigntemplateannotation_response_local_var->e_ezsigntemplateannotation_verticalalignment = e_ezsigntemplateannotation_verticalalignment;
    ezsigntemplateannotation_response_local_var->e_ezsigntemplateannotation_type = e_ezsigntemplateannotation_type;
    ezsigntemplateannotation_response_local_var->i_ezsigntemplateannotation_x = i_ezsigntemplateannotation_x;
    ezsigntemplateannotation_response_local_var->i_ezsigntemplateannotation_y = i_ezsigntemplateannotation_y;
    ezsigntemplateannotation_response_local_var->i_ezsigntemplateannotation_width = i_ezsigntemplateannotation_width;
    ezsigntemplateannotation_response_local_var->i_ezsigntemplateannotation_height = i_ezsigntemplateannotation_height;
    ezsigntemplateannotation_response_local_var->s_ezsigntemplateannotation_description = s_ezsigntemplateannotation_description;
    ezsigntemplateannotation_response_local_var->s_ezsigntemplateannotation_defaulttext = s_ezsigntemplateannotation_defaulttext;
    ezsigntemplateannotation_response_local_var->s_ezsigntemplateannotationn_dropdownvalues = s_ezsigntemplateannotationn_dropdownvalues;

    ezsigntemplateannotation_response_local_var->_library_owned = 1;
    return ezsigntemplateannotation_response_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_response_t *ezsigntemplateannotation_response_create(
    int pki_ezsigntemplateannotation_id,
    int fki_ezsigntemplatedocumentpage_id,
    int fki_textstylestatic_id,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type,
    int i_ezsigntemplateannotation_x,
    int i_ezsigntemplateannotation_y,
    int i_ezsigntemplateannotation_width,
    int i_ezsigntemplateannotation_height,
    char *s_ezsigntemplateannotation_description,
    char *s_ezsigntemplateannotation_defaulttext,
    char *s_ezsigntemplateannotationn_dropdownvalues
    ) {
    return ezsigntemplateannotation_response_create_internal (
        pki_ezsigntemplateannotation_id,
        fki_ezsigntemplatedocumentpage_id,
        fki_textstylestatic_id,
        e_ezsigntemplateannotation_horizontalalignment,
        e_ezsigntemplateannotation_verticalalignment,
        e_ezsigntemplateannotation_type,
        i_ezsigntemplateannotation_x,
        i_ezsigntemplateannotation_y,
        i_ezsigntemplateannotation_width,
        i_ezsigntemplateannotation_height,
        s_ezsigntemplateannotation_description,
        s_ezsigntemplateannotation_defaulttext,
        s_ezsigntemplateannotationn_dropdownvalues
        );
}

void ezsigntemplateannotation_response_free(ezsigntemplateannotation_response_t *ezsigntemplateannotation_response) {
    if(NULL == ezsigntemplateannotation_response){
        return ;
    }
    if(ezsigntemplateannotation_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_response->s_ezsigntemplateannotation_description) {
        free(ezsigntemplateannotation_response->s_ezsigntemplateannotation_description);
        ezsigntemplateannotation_response->s_ezsigntemplateannotation_description = NULL;
    }
    if (ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext) {
        free(ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext);
        ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext = NULL;
    }
    if (ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues) {
        free(ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues);
        ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues = NULL;
    }
    free(ezsigntemplateannotation_response);
}

cJSON *ezsigntemplateannotation_response_convertToJSON(ezsigntemplateannotation_response_t *ezsigntemplateannotation_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_response->pki_ezsigntemplateannotation_id
    if (!ezsigntemplateannotation_response->pki_ezsigntemplateannotation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateannotationID", ezsigntemplateannotation_response->pki_ezsigntemplateannotation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->fki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplateannotation_response->fki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentpageID", ezsigntemplateannotation_response->fki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->fki_textstylestatic_id
    if (!ezsigntemplateannotation_response->fki_textstylestatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTextstylestaticID", ezsigntemplateannotation_response->fki_textstylestatic_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_horizontalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__NULL == ezsigntemplateannotation_response->e_ezsigntemplateannotation_horizontalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_horizontalalignment_local_JSON = field_e_ezsigntemplateannotation_horizontalalignment_convertToJSON(ezsigntemplateannotation_response->e_ezsigntemplateannotation_horizontalalignment);
    if(e_ezsigntemplateannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationHorizontalalignment", e_ezsigntemplateannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_verticalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__NULL == ezsigntemplateannotation_response->e_ezsigntemplateannotation_verticalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_verticalalignment_local_JSON = field_e_ezsigntemplateannotation_verticalalignment_convertToJSON(ezsigntemplateannotation_response->e_ezsigntemplateannotation_verticalalignment);
    if(e_ezsigntemplateannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationVerticalalignment", e_ezsigntemplateannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_type
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__NULL == ezsigntemplateannotation_response->e_ezsigntemplateannotation_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_type_local_JSON = field_e_ezsigntemplateannotation_type_convertToJSON(ezsigntemplateannotation_response->e_ezsigntemplateannotation_type);
    if(e_ezsigntemplateannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationType", e_ezsigntemplateannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_x
    if (!ezsigntemplateannotation_response->i_ezsigntemplateannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationX", ezsigntemplateannotation_response->i_ezsigntemplateannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_y
    if (!ezsigntemplateannotation_response->i_ezsigntemplateannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationY", ezsigntemplateannotation_response->i_ezsigntemplateannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_width
    if (!ezsigntemplateannotation_response->i_ezsigntemplateannotation_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationWidth", ezsigntemplateannotation_response->i_ezsigntemplateannotation_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_height
    if (!ezsigntemplateannotation_response->i_ezsigntemplateannotation_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationHeight", ezsigntemplateannotation_response->i_ezsigntemplateannotation_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_response->s_ezsigntemplateannotation_description
    if (!ezsigntemplateannotation_response->s_ezsigntemplateannotation_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationDescription", ezsigntemplateannotation_response->s_ezsigntemplateannotation_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext
    if (!ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationDefaulttext", ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues
    if (!ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationnDropdownvalues", ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateannotation_response_t *ezsigntemplateannotation_response_parseFromJSON(cJSON *ezsigntemplateannotation_responseJSON){

    ezsigntemplateannotation_response_t *ezsigntemplateannotation_response_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_response->e_ezsigntemplateannotation_horizontalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateannotation_response->e_ezsigntemplateannotation_verticalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateannotation_response->e_ezsigntemplateannotation_type
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type_local_nonprim = 0;

    // ezsigntemplateannotation_response->pki_ezsigntemplateannotation_id
    cJSON *pki_ezsigntemplateannotation_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "pkiEzsigntemplateannotationID");
    if (cJSON_IsNull(pki_ezsigntemplateannotation_id)) {
        pki_ezsigntemplateannotation_id = NULL;
    }
    if (!pki_ezsigntemplateannotation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateannotation_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->fki_ezsigntemplatedocumentpage_id
    cJSON *fki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "fkiEzsigntemplatedocumentpageID");
    if (cJSON_IsNull(fki_ezsigntemplatedocumentpage_id)) {
        fki_ezsigntemplatedocumentpage_id = NULL;
    }
    if (!fki_ezsigntemplatedocumentpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocumentpage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->fki_textstylestatic_id
    cJSON *fki_textstylestatic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "fkiTextstylestaticID");
    if (cJSON_IsNull(fki_textstylestatic_id)) {
        fki_textstylestatic_id = NULL;
    }
    if (!fki_textstylestatic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_textstylestatic_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_horizontalalignment
    cJSON *e_ezsigntemplateannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "eEzsigntemplateannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsigntemplateannotation_horizontalalignment)) {
        e_ezsigntemplateannotation_horizontalalignment = NULL;
    }
    if (!e_ezsigntemplateannotation_horizontalalignment) {
        goto end;
    }

    
    e_ezsigntemplateannotation_horizontalalignment_local_nonprim = field_e_ezsigntemplateannotation_horizontalalignment_parseFromJSON(e_ezsigntemplateannotation_horizontalalignment); //custom

    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_verticalalignment
    cJSON *e_ezsigntemplateannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "eEzsigntemplateannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsigntemplateannotation_verticalalignment)) {
        e_ezsigntemplateannotation_verticalalignment = NULL;
    }
    if (!e_ezsigntemplateannotation_verticalalignment) {
        goto end;
    }

    
    e_ezsigntemplateannotation_verticalalignment_local_nonprim = field_e_ezsigntemplateannotation_verticalalignment_parseFromJSON(e_ezsigntemplateannotation_verticalalignment); //custom

    // ezsigntemplateannotation_response->e_ezsigntemplateannotation_type
    cJSON *e_ezsigntemplateannotation_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "eEzsigntemplateannotationType");
    if (cJSON_IsNull(e_ezsigntemplateannotation_type)) {
        e_ezsigntemplateannotation_type = NULL;
    }
    if (!e_ezsigntemplateannotation_type) {
        goto end;
    }

    
    e_ezsigntemplateannotation_type_local_nonprim = field_e_ezsigntemplateannotation_type_parseFromJSON(e_ezsigntemplateannotation_type); //custom

    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_x
    cJSON *i_ezsigntemplateannotation_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "iEzsigntemplateannotationX");
    if (cJSON_IsNull(i_ezsigntemplateannotation_x)) {
        i_ezsigntemplateannotation_x = NULL;
    }
    if (!i_ezsigntemplateannotation_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateannotation_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_y
    cJSON *i_ezsigntemplateannotation_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "iEzsigntemplateannotationY");
    if (cJSON_IsNull(i_ezsigntemplateannotation_y)) {
        i_ezsigntemplateannotation_y = NULL;
    }
    if (!i_ezsigntemplateannotation_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateannotation_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_width
    cJSON *i_ezsigntemplateannotation_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "iEzsigntemplateannotationWidth");
    if (cJSON_IsNull(i_ezsigntemplateannotation_width)) {
        i_ezsigntemplateannotation_width = NULL;
    }
    if (!i_ezsigntemplateannotation_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateannotation_width))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->i_ezsigntemplateannotation_height
    cJSON *i_ezsigntemplateannotation_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "iEzsigntemplateannotationHeight");
    if (cJSON_IsNull(i_ezsigntemplateannotation_height)) {
        i_ezsigntemplateannotation_height = NULL;
    }
    if (!i_ezsigntemplateannotation_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateannotation_height))
    {
    goto end; //Numeric
    }

    // ezsigntemplateannotation_response->s_ezsigntemplateannotation_description
    cJSON *s_ezsigntemplateannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "sEzsigntemplateannotationDescription");
    if (cJSON_IsNull(s_ezsigntemplateannotation_description)) {
        s_ezsigntemplateannotation_description = NULL;
    }
    if (!s_ezsigntemplateannotation_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateannotation_description))
    {
    goto end; //String
    }

    // ezsigntemplateannotation_response->s_ezsigntemplateannotation_defaulttext
    cJSON *s_ezsigntemplateannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "sEzsigntemplateannotationDefaulttext");
    if (cJSON_IsNull(s_ezsigntemplateannotation_defaulttext)) {
        s_ezsigntemplateannotation_defaulttext = NULL;
    }
    if (!s_ezsigntemplateannotation_defaulttext) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateannotation_defaulttext))
    {
    goto end; //String
    }

    // ezsigntemplateannotation_response->s_ezsigntemplateannotationn_dropdownvalues
    cJSON *s_ezsigntemplateannotationn_dropdownvalues = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_responseJSON, "sEzsigntemplateannotationnDropdownvalues");
    if (cJSON_IsNull(s_ezsigntemplateannotationn_dropdownvalues)) {
        s_ezsigntemplateannotationn_dropdownvalues = NULL;
    }
    if (!s_ezsigntemplateannotationn_dropdownvalues) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateannotationn_dropdownvalues))
    {
    goto end; //String
    }


    ezsigntemplateannotation_response_local_var = ezsigntemplateannotation_response_create_internal (
        pki_ezsigntemplateannotation_id->valuedouble,
        fki_ezsigntemplatedocumentpage_id->valuedouble,
        fki_textstylestatic_id->valuedouble,
        e_ezsigntemplateannotation_horizontalalignment_local_nonprim,
        e_ezsigntemplateannotation_verticalalignment_local_nonprim,
        e_ezsigntemplateannotation_type_local_nonprim,
        i_ezsigntemplateannotation_x->valuedouble,
        i_ezsigntemplateannotation_y->valuedouble,
        i_ezsigntemplateannotation_width->valuedouble,
        i_ezsigntemplateannotation_height->valuedouble,
        strdup(s_ezsigntemplateannotation_description->valuestring),
        strdup(s_ezsigntemplateannotation_defaulttext->valuestring),
        strdup(s_ezsigntemplateannotationn_dropdownvalues->valuestring)
        );

    return ezsigntemplateannotation_response_local_var;
end:
    if (e_ezsigntemplateannotation_horizontalalignment_local_nonprim) {
        e_ezsigntemplateannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateannotation_verticalalignment_local_nonprim) {
        e_ezsigntemplateannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateannotation_type_local_nonprim) {
        e_ezsigntemplateannotation_type_local_nonprim = 0;
    }
    return NULL;

}
