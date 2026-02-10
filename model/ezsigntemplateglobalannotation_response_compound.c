#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobalannotation_response_compound.h"



static ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_create_internal(
    int pki_ezsigntemplateglobalannotation_id,
    int fki_ezsigntemplateglobaldocumentpage_id,
    int fki_textstylestatic_id,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int i_ezsigntemplateglobalannotation_x,
    int i_ezsigntemplateglobalannotation_y,
    int i_ezsigntemplateglobalannotation_width,
    int i_ezsigntemplateglobalannotation_height,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
    ) {
    ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_local_var = malloc(sizeof(ezsigntemplateglobalannotation_response_compound_t));
    if (!ezsigntemplateglobalannotation_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplateglobalannotation_response_compound_local_var->pki_ezsigntemplateglobalannotation_id = pki_ezsigntemplateglobalannotation_id;
    ezsigntemplateglobalannotation_response_compound_local_var->fki_ezsigntemplateglobaldocumentpage_id = fki_ezsigntemplateglobaldocumentpage_id;
    ezsigntemplateglobalannotation_response_compound_local_var->fki_textstylestatic_id = fki_textstylestatic_id;
    ezsigntemplateglobalannotation_response_compound_local_var->e_ezsigntemplateglobalannotation_horizontalalignment = e_ezsigntemplateglobalannotation_horizontalalignment;
    ezsigntemplateglobalannotation_response_compound_local_var->e_ezsigntemplateglobalannotation_verticalalignment = e_ezsigntemplateglobalannotation_verticalalignment;
    ezsigntemplateglobalannotation_response_compound_local_var->e_ezsigntemplateglobalannotation_type = e_ezsigntemplateglobalannotation_type;
    ezsigntemplateglobalannotation_response_compound_local_var->i_ezsigntemplateglobalannotation_x = i_ezsigntemplateglobalannotation_x;
    ezsigntemplateglobalannotation_response_compound_local_var->i_ezsigntemplateglobalannotation_y = i_ezsigntemplateglobalannotation_y;
    ezsigntemplateglobalannotation_response_compound_local_var->i_ezsigntemplateglobalannotation_width = i_ezsigntemplateglobalannotation_width;
    ezsigntemplateglobalannotation_response_compound_local_var->i_ezsigntemplateglobalannotation_height = i_ezsigntemplateglobalannotation_height;
    ezsigntemplateglobalannotation_response_compound_local_var->s_ezsigntemplateglobalannotation_description = s_ezsigntemplateglobalannotation_description;
    ezsigntemplateglobalannotation_response_compound_local_var->s_ezsigntemplateglobalannotation_defaulttext = s_ezsigntemplateglobalannotation_defaulttext;
    ezsigntemplateglobalannotation_response_compound_local_var->s_ezsigntemplateglobalannotation_dropdownvalues = s_ezsigntemplateglobalannotation_dropdownvalues;

    ezsigntemplateglobalannotation_response_compound_local_var->_library_owned = 1;
    return ezsigntemplateglobalannotation_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_create(
    int pki_ezsigntemplateglobalannotation_id,
    int fki_ezsigntemplateglobaldocumentpage_id,
    int fki_textstylestatic_id,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int i_ezsigntemplateglobalannotation_x,
    int i_ezsigntemplateglobalannotation_y,
    int i_ezsigntemplateglobalannotation_width,
    int i_ezsigntemplateglobalannotation_height,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
    ) {
    return ezsigntemplateglobalannotation_response_compound_create_internal (
        pki_ezsigntemplateglobalannotation_id,
        fki_ezsigntemplateglobaldocumentpage_id,
        fki_textstylestatic_id,
        e_ezsigntemplateglobalannotation_horizontalalignment,
        e_ezsigntemplateglobalannotation_verticalalignment,
        e_ezsigntemplateglobalannotation_type,
        i_ezsigntemplateglobalannotation_x,
        i_ezsigntemplateglobalannotation_y,
        i_ezsigntemplateglobalannotation_width,
        i_ezsigntemplateglobalannotation_height,
        s_ezsigntemplateglobalannotation_description,
        s_ezsigntemplateglobalannotation_defaulttext,
        s_ezsigntemplateglobalannotation_dropdownvalues
        );
}

void ezsigntemplateglobalannotation_response_compound_free(ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound) {
    if(NULL == ezsigntemplateglobalannotation_response_compound){
        return ;
    }
    if(ezsigntemplateglobalannotation_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobalannotation_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description) {
        free(ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description);
        ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description = NULL;
    }
    if (ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext) {
        free(ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext);
        ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext = NULL;
    }
    if (ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues) {
        free(ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues);
        ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues = NULL;
    }
    free(ezsigntemplateglobalannotation_response_compound);
}

cJSON *ezsigntemplateglobalannotation_response_compound_convertToJSON(ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobalannotation_response_compound->pki_ezsigntemplateglobalannotation_id
    if (!ezsigntemplateglobalannotation_response_compound->pki_ezsigntemplateglobalannotation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalannotationID", ezsigntemplateglobalannotation_response_compound->pki_ezsigntemplateglobalannotation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->fki_ezsigntemplateglobaldocumentpage_id
    if (!ezsigntemplateglobalannotation_response_compound->fki_ezsigntemplateglobaldocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobaldocumentpageID", ezsigntemplateglobalannotation_response_compound->fki_ezsigntemplateglobaldocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->fki_textstylestatic_id
    if (!ezsigntemplateglobalannotation_response_compound->fki_textstylestatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTextstylestaticID", ezsigntemplateglobalannotation_response_compound->fki_textstylestatic_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_horizontalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__NULL == ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_horizontalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON = field_e_ezsigntemplateglobalannotation_horizontalalignment_convertToJSON(ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_horizontalalignment);
    if(e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationHorizontalalignment", e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_verticalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__NULL == ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_verticalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_verticalalignment_local_JSON = field_e_ezsigntemplateglobalannotation_verticalalignment_convertToJSON(ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_verticalalignment);
    if(e_ezsigntemplateglobalannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationVerticalalignment", e_ezsigntemplateglobalannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_type
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__NULL == ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_type_local_JSON = field_e_ezsigntemplateglobalannotation_type_convertToJSON(ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_type);
    if(e_ezsigntemplateglobalannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationType", e_ezsigntemplateglobalannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_x
    if (!ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationX", ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_y
    if (!ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationY", ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_width
    if (!ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationWidth", ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_height
    if (!ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationHeight", ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description
    if (!ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDescription", ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext
    if (!ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDefaulttext", ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues
    if (!ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDropdownvalues", ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_parseFromJSON(cJSON *ezsigntemplateglobalannotation_response_compoundJSON){

    ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_horizontalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_verticalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_type
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type_local_nonprim = 0;

    // ezsigntemplateglobalannotation_response_compound->pki_ezsigntemplateglobalannotation_id
    cJSON *pki_ezsigntemplateglobalannotation_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "pkiEzsigntemplateglobalannotationID");
    if (cJSON_IsNull(pki_ezsigntemplateglobalannotation_id)) {
        pki_ezsigntemplateglobalannotation_id = NULL;
    }
    if (!pki_ezsigntemplateglobalannotation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobalannotation_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->fki_ezsigntemplateglobaldocumentpage_id
    cJSON *fki_ezsigntemplateglobaldocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "fkiEzsigntemplateglobaldocumentpageID");
    if (cJSON_IsNull(fki_ezsigntemplateglobaldocumentpage_id)) {
        fki_ezsigntemplateglobaldocumentpage_id = NULL;
    }
    if (!fki_ezsigntemplateglobaldocumentpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobaldocumentpage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->fki_textstylestatic_id
    cJSON *fki_textstylestatic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "fkiTextstylestaticID");
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

    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_horizontalalignment
    cJSON *e_ezsigntemplateglobalannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "eEzsigntemplateglobalannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_horizontalalignment)) {
        e_ezsigntemplateglobalannotation_horizontalalignment = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_horizontalalignment) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = field_e_ezsigntemplateglobalannotation_horizontalalignment_parseFromJSON(e_ezsigntemplateglobalannotation_horizontalalignment); //custom

    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_verticalalignment
    cJSON *e_ezsigntemplateglobalannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "eEzsigntemplateglobalannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_verticalalignment)) {
        e_ezsigntemplateglobalannotation_verticalalignment = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_verticalalignment) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = field_e_ezsigntemplateglobalannotation_verticalalignment_parseFromJSON(e_ezsigntemplateglobalannotation_verticalalignment); //custom

    // ezsigntemplateglobalannotation_response_compound->e_ezsigntemplateglobalannotation_type
    cJSON *e_ezsigntemplateglobalannotation_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "eEzsigntemplateglobalannotationType");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_type)) {
        e_ezsigntemplateglobalannotation_type = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_type) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_type_local_nonprim = field_e_ezsigntemplateglobalannotation_type_parseFromJSON(e_ezsigntemplateglobalannotation_type); //custom

    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_x
    cJSON *i_ezsigntemplateglobalannotation_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "iEzsigntemplateglobalannotationX");
    if (cJSON_IsNull(i_ezsigntemplateglobalannotation_x)) {
        i_ezsigntemplateglobalannotation_x = NULL;
    }
    if (!i_ezsigntemplateglobalannotation_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobalannotation_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_y
    cJSON *i_ezsigntemplateglobalannotation_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "iEzsigntemplateglobalannotationY");
    if (cJSON_IsNull(i_ezsigntemplateglobalannotation_y)) {
        i_ezsigntemplateglobalannotation_y = NULL;
    }
    if (!i_ezsigntemplateglobalannotation_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobalannotation_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_width
    cJSON *i_ezsigntemplateglobalannotation_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "iEzsigntemplateglobalannotationWidth");
    if (cJSON_IsNull(i_ezsigntemplateglobalannotation_width)) {
        i_ezsigntemplateglobalannotation_width = NULL;
    }
    if (!i_ezsigntemplateglobalannotation_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobalannotation_width))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->i_ezsigntemplateglobalannotation_height
    cJSON *i_ezsigntemplateglobalannotation_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "iEzsigntemplateglobalannotationHeight");
    if (cJSON_IsNull(i_ezsigntemplateglobalannotation_height)) {
        i_ezsigntemplateglobalannotation_height = NULL;
    }
    if (!i_ezsigntemplateglobalannotation_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobalannotation_height))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_description
    cJSON *s_ezsigntemplateglobalannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "sEzsigntemplateglobalannotationDescription");
    if (cJSON_IsNull(s_ezsigntemplateglobalannotation_description)) {
        s_ezsigntemplateglobalannotation_description = NULL;
    }
    if (!s_ezsigntemplateglobalannotation_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobalannotation_description))
    {
    goto end; //String
    }

    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_defaulttext
    cJSON *s_ezsigntemplateglobalannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "sEzsigntemplateglobalannotationDefaulttext");
    if (cJSON_IsNull(s_ezsigntemplateglobalannotation_defaulttext)) {
        s_ezsigntemplateglobalannotation_defaulttext = NULL;
    }
    if (!s_ezsigntemplateglobalannotation_defaulttext) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobalannotation_defaulttext))
    {
    goto end; //String
    }

    // ezsigntemplateglobalannotation_response_compound->s_ezsigntemplateglobalannotation_dropdownvalues
    cJSON *s_ezsigntemplateglobalannotation_dropdownvalues = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_response_compoundJSON, "sEzsigntemplateglobalannotationDropdownvalues");
    if (cJSON_IsNull(s_ezsigntemplateglobalannotation_dropdownvalues)) {
        s_ezsigntemplateglobalannotation_dropdownvalues = NULL;
    }
    if (!s_ezsigntemplateglobalannotation_dropdownvalues) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobalannotation_dropdownvalues))
    {
    goto end; //String
    }


    ezsigntemplateglobalannotation_response_compound_local_var = ezsigntemplateglobalannotation_response_compound_create_internal (
        pki_ezsigntemplateglobalannotation_id->valuedouble,
        fki_ezsigntemplateglobaldocumentpage_id->valuedouble,
        fki_textstylestatic_id->valuedouble,
        e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim,
        e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim,
        e_ezsigntemplateglobalannotation_type_local_nonprim,
        i_ezsigntemplateglobalannotation_x->valuedouble,
        i_ezsigntemplateglobalannotation_y->valuedouble,
        i_ezsigntemplateglobalannotation_width->valuedouble,
        i_ezsigntemplateglobalannotation_height->valuedouble,
        strdup(s_ezsigntemplateglobalannotation_description->valuestring),
        strdup(s_ezsigntemplateglobalannotation_defaulttext->valuestring),
        strdup(s_ezsigntemplateglobalannotation_dropdownvalues->valuestring)
        );

    return ezsigntemplateglobalannotation_response_compound_local_var;
end:
    if (e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim) {
        e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim) {
        e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateglobalannotation_type_local_nonprim) {
        e_ezsigntemplateglobalannotation_type_local_nonprim = 0;
    }
    return NULL;

}
