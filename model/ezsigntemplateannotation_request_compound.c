#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_request_compound.h"



static ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_create_internal(
    int *pki_ezsigntemplateannotation_id,
    int *fki_ezsigntemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type,
    int *i_ezsigntemplateannotation_x,
    int *i_ezsigntemplateannotation_y,
    int *i_ezsigntemplateannotation_width,
    int *i_ezsigntemplateannotation_height,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateannotation_description,
    char *s_ezsigntemplateannotation_defaulttext,
    char *s_ezsigntemplateannotation_dropdownvalues,
    textstylestatic_request_compound_t *obj_textstylestatic
    ) {
    ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_local_var = malloc(sizeof(ezsigntemplateannotation_request_compound_t));
    if (!ezsigntemplateannotation_request_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplateannotation_request_compound_local_var, 0, sizeof(ezsigntemplateannotation_request_compound_t));
    ezsigntemplateannotation_request_compound_local_var->_library_owned = 1;
    ezsigntemplateannotation_request_compound_local_var->pki_ezsigntemplateannotation_id = pki_ezsigntemplateannotation_id;
    ezsigntemplateannotation_request_compound_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplateannotation_request_compound_local_var->e_ezsigntemplateannotation_horizontalalignment = e_ezsigntemplateannotation_horizontalalignment;
    ezsigntemplateannotation_request_compound_local_var->e_ezsigntemplateannotation_verticalalignment = e_ezsigntemplateannotation_verticalalignment;
    ezsigntemplateannotation_request_compound_local_var->e_ezsigntemplateannotation_type = e_ezsigntemplateannotation_type;
    ezsigntemplateannotation_request_compound_local_var->i_ezsigntemplateannotation_x = i_ezsigntemplateannotation_x;
    ezsigntemplateannotation_request_compound_local_var->i_ezsigntemplateannotation_y = i_ezsigntemplateannotation_y;
    ezsigntemplateannotation_request_compound_local_var->i_ezsigntemplateannotation_width = i_ezsigntemplateannotation_width;
    ezsigntemplateannotation_request_compound_local_var->i_ezsigntemplateannotation_height = i_ezsigntemplateannotation_height;
    ezsigntemplateannotation_request_compound_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplateannotation_request_compound_local_var->s_ezsigntemplateannotation_description = s_ezsigntemplateannotation_description;
    ezsigntemplateannotation_request_compound_local_var->s_ezsigntemplateannotation_defaulttext = s_ezsigntemplateannotation_defaulttext;
    ezsigntemplateannotation_request_compound_local_var->s_ezsigntemplateannotation_dropdownvalues = s_ezsigntemplateannotation_dropdownvalues;
    ezsigntemplateannotation_request_compound_local_var->obj_textstylestatic = obj_textstylestatic;
    return ezsigntemplateannotation_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_create(
    int *pki_ezsigntemplateannotation_id,
    int *fki_ezsigntemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type,
    int *i_ezsigntemplateannotation_x,
    int *i_ezsigntemplateannotation_y,
    int *i_ezsigntemplateannotation_width,
    int *i_ezsigntemplateannotation_height,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateannotation_description,
    char *s_ezsigntemplateannotation_defaulttext,
    char *s_ezsigntemplateannotation_dropdownvalues,
    textstylestatic_request_compound_t *obj_textstylestatic
    ) {
    int *pki_ezsigntemplateannotation_id_copy = NULL;
    if (pki_ezsigntemplateannotation_id) {
        pki_ezsigntemplateannotation_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateannotation_id_copy) *pki_ezsigntemplateannotation_id_copy = *pki_ezsigntemplateannotation_id;
    }
    int *fki_ezsigntemplatedocument_id_copy = NULL;
    if (fki_ezsigntemplatedocument_id) {
        fki_ezsigntemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatedocument_id_copy) *fki_ezsigntemplatedocument_id_copy = *fki_ezsigntemplatedocument_id;
    }
    int *i_ezsigntemplateannotation_x_copy = NULL;
    if (i_ezsigntemplateannotation_x) {
        i_ezsigntemplateannotation_x_copy = malloc(sizeof(int));
        if (i_ezsigntemplateannotation_x_copy) *i_ezsigntemplateannotation_x_copy = *i_ezsigntemplateannotation_x;
    }
    int *i_ezsigntemplateannotation_y_copy = NULL;
    if (i_ezsigntemplateannotation_y) {
        i_ezsigntemplateannotation_y_copy = malloc(sizeof(int));
        if (i_ezsigntemplateannotation_y_copy) *i_ezsigntemplateannotation_y_copy = *i_ezsigntemplateannotation_y;
    }
    int *i_ezsigntemplateannotation_width_copy = NULL;
    if (i_ezsigntemplateannotation_width) {
        i_ezsigntemplateannotation_width_copy = malloc(sizeof(int));
        if (i_ezsigntemplateannotation_width_copy) *i_ezsigntemplateannotation_width_copy = *i_ezsigntemplateannotation_width;
    }
    int *i_ezsigntemplateannotation_height_copy = NULL;
    if (i_ezsigntemplateannotation_height) {
        i_ezsigntemplateannotation_height_copy = malloc(sizeof(int));
        if (i_ezsigntemplateannotation_height_copy) *i_ezsigntemplateannotation_height_copy = *i_ezsigntemplateannotation_height;
    }
    int *i_ezsigntemplatedocumentpage_pagenumber_copy = NULL;
    if (i_ezsigntemplatedocumentpage_pagenumber) {
        i_ezsigntemplatedocumentpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_pagenumber_copy) *i_ezsigntemplatedocumentpage_pagenumber_copy = *i_ezsigntemplatedocumentpage_pagenumber;
    }
    ezsigntemplateannotation_request_compound_t *result = ezsigntemplateannotation_request_compound_create_internal (
        pki_ezsigntemplateannotation_id_copy,
        fki_ezsigntemplatedocument_id_copy,
        e_ezsigntemplateannotation_horizontalalignment,
        e_ezsigntemplateannotation_verticalalignment,
        e_ezsigntemplateannotation_type,
        i_ezsigntemplateannotation_x_copy,
        i_ezsigntemplateannotation_y_copy,
        i_ezsigntemplateannotation_width_copy,
        i_ezsigntemplateannotation_height_copy,
        i_ezsigntemplatedocumentpage_pagenumber_copy,
        s_ezsigntemplateannotation_description,
        s_ezsigntemplateannotation_defaulttext,
        s_ezsigntemplateannotation_dropdownvalues,
        obj_textstylestatic
        );
    if (!result) {
        free(pki_ezsigntemplateannotation_id_copy);
        free(fki_ezsigntemplatedocument_id_copy);
        free(i_ezsigntemplateannotation_x_copy);
        free(i_ezsigntemplateannotation_y_copy);
        free(i_ezsigntemplateannotation_width_copy);
        free(i_ezsigntemplateannotation_height_copy);
        free(i_ezsigntemplatedocumentpage_pagenumber_copy);
    }
    return result;
}

void ezsigntemplateannotation_request_compound_free(ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound) {
    if(NULL == ezsigntemplateannotation_request_compound){
        return ;
    }
    if(ezsigntemplateannotation_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id) {
        free(ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id);
        ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id = NULL;
    }
    if (ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id) {
        free(ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id);
        ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id = NULL;
    }
    if (ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x) {
        free(ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x);
        ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x = NULL;
    }
    if (ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y) {
        free(ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y);
        ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y = NULL;
    }
    if (ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width) {
        free(ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width);
        ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width = NULL;
    }
    if (ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height) {
        free(ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height);
        ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height = NULL;
    }
    if (ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber) {
        free(ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber);
        ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description) {
        free(ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description);
        ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description = NULL;
    }
    if (ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext) {
        free(ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext);
        ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext = NULL;
    }
    if (ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues) {
        free(ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues);
        ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues = NULL;
    }
    if (ezsigntemplateannotation_request_compound->obj_textstylestatic) {
        textstylestatic_request_compound_free(ezsigntemplateannotation_request_compound->obj_textstylestatic);
        ezsigntemplateannotation_request_compound->obj_textstylestatic = NULL;
    }
    free(ezsigntemplateannotation_request_compound);
}

cJSON *ezsigntemplateannotation_request_compound_convertToJSON(ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id
    if(ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateannotationID", *ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id
    if (!ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", *ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_horizontalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__NULL == ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_horizontalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_horizontalalignment_local_JSON = field_e_ezsigntemplateannotation_horizontalalignment_convertToJSON(ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_horizontalalignment);
    if(e_ezsigntemplateannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationHorizontalalignment", e_ezsigntemplateannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_verticalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__NULL == ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_verticalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_verticalalignment_local_JSON = field_e_ezsigntemplateannotation_verticalalignment_convertToJSON(ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_verticalalignment);
    if(e_ezsigntemplateannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationVerticalalignment", e_ezsigntemplateannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_type
    if (ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__NULL == ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateannotation_type_local_JSON = field_e_ezsigntemplateannotation_type_convertToJSON(ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_type);
    if(e_ezsigntemplateannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateannotationType", e_ezsigntemplateannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x
    if (!ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationX", *ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y
    if (!ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationY", *ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width
    if (!ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationWidth", *ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height
    if (!ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateannotationHeight", *ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", *ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description
    if (!ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationDescription", ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext
    if (!ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationDefaulttext", ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues
    if (!ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateannotationDropdownvalues", ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateannotation_request_compound->obj_textstylestatic
    if(ezsigntemplateannotation_request_compound->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_request_compound_convertToJSON(ezsigntemplateannotation_request_compound->obj_textstylestatic);
    if(obj_textstylestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTextstylestatic", obj_textstylestatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_parseFromJSON(cJSON *ezsigntemplateannotation_request_compoundJSON){

    ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id
    int *pki_ezsigntemplateannotation_id_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id
    int *fki_ezsigntemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_horizontalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_verticalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_type
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type_local_nonprim = 0;

    // define the local variable for ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x
    int *i_ezsigntemplateannotation_x_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y
    int *i_ezsigntemplateannotation_y_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width
    int *i_ezsigntemplateannotation_width_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height
    int *i_ezsigntemplateannotation_height_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber
    int *i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;

    char *s_ezsigntemplateannotation_description_local_str = NULL;

    char *s_ezsigntemplateannotation_defaulttext_local_str = NULL;

    char *s_ezsigntemplateannotation_dropdownvalues_local_str = NULL;

    // define the local variable for ezsigntemplateannotation_request_compound->obj_textstylestatic
    textstylestatic_request_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // ezsigntemplateannotation_request_compound->pki_ezsigntemplateannotation_id
    cJSON *pki_ezsigntemplateannotation_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "pkiEzsigntemplateannotationID");
    if (cJSON_IsNull(pki_ezsigntemplateannotation_id)) {
        pki_ezsigntemplateannotation_id = NULL;
    }
    if (pki_ezsigntemplateannotation_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateannotation_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateannotation_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateannotation_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateannotation_id_local_var = pki_ezsigntemplateannotation_id->valuedouble;
    }

    // ezsigntemplateannotation_request_compound->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "fkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(fki_ezsigntemplatedocument_id)) {
        fki_ezsigntemplatedocument_id = NULL;
    }
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatedocument_id_local_var = fki_ezsigntemplatedocument_id->valuedouble;

    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_horizontalalignment
    cJSON *e_ezsigntemplateannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "eEzsigntemplateannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsigntemplateannotation_horizontalalignment)) {
        e_ezsigntemplateannotation_horizontalalignment = NULL;
    }
    if (!e_ezsigntemplateannotation_horizontalalignment) {
        goto end;
    }

    
    e_ezsigntemplateannotation_horizontalalignment_local_nonprim = field_e_ezsigntemplateannotation_horizontalalignment_parseFromJSON(e_ezsigntemplateannotation_horizontalalignment); //custom

    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_verticalalignment
    cJSON *e_ezsigntemplateannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "eEzsigntemplateannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsigntemplateannotation_verticalalignment)) {
        e_ezsigntemplateannotation_verticalalignment = NULL;
    }
    if (!e_ezsigntemplateannotation_verticalalignment) {
        goto end;
    }

    
    e_ezsigntemplateannotation_verticalalignment_local_nonprim = field_e_ezsigntemplateannotation_verticalalignment_parseFromJSON(e_ezsigntemplateannotation_verticalalignment); //custom

    // ezsigntemplateannotation_request_compound->e_ezsigntemplateannotation_type
    cJSON *e_ezsigntemplateannotation_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "eEzsigntemplateannotationType");
    if (cJSON_IsNull(e_ezsigntemplateannotation_type)) {
        e_ezsigntemplateannotation_type = NULL;
    }
    if (!e_ezsigntemplateannotation_type) {
        goto end;
    }

    
    e_ezsigntemplateannotation_type_local_nonprim = field_e_ezsigntemplateannotation_type_parseFromJSON(e_ezsigntemplateannotation_type); //custom

    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_x
    cJSON *i_ezsigntemplateannotation_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "iEzsigntemplateannotationX");
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
    i_ezsigntemplateannotation_x_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateannotation_x_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateannotation_x_local_var = i_ezsigntemplateannotation_x->valuedouble;

    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_y
    cJSON *i_ezsigntemplateannotation_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "iEzsigntemplateannotationY");
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
    i_ezsigntemplateannotation_y_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateannotation_y_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateannotation_y_local_var = i_ezsigntemplateannotation_y->valuedouble;

    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_width
    cJSON *i_ezsigntemplateannotation_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "iEzsigntemplateannotationWidth");
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
    i_ezsigntemplateannotation_width_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateannotation_width_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateannotation_width_local_var = i_ezsigntemplateannotation_width->valuedouble;

    // ezsigntemplateannotation_request_compound->i_ezsigntemplateannotation_height
    cJSON *i_ezsigntemplateannotation_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "iEzsigntemplateannotationHeight");
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
    i_ezsigntemplateannotation_height_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateannotation_height_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateannotation_height_local_var = i_ezsigntemplateannotation_height->valuedouble;

    // ezsigntemplateannotation_request_compound->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_pagenumber)) {
        i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_pagenumber_local_var = i_ezsigntemplatedocumentpage_pagenumber->valuedouble;

    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_description
    cJSON *s_ezsigntemplateannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "sEzsigntemplateannotationDescription");
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

    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_defaulttext
    cJSON *s_ezsigntemplateannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "sEzsigntemplateannotationDefaulttext");
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

    // ezsigntemplateannotation_request_compound->s_ezsigntemplateannotation_dropdownvalues
    cJSON *s_ezsigntemplateannotation_dropdownvalues = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "sEzsigntemplateannotationDropdownvalues");
    if (cJSON_IsNull(s_ezsigntemplateannotation_dropdownvalues)) {
        s_ezsigntemplateannotation_dropdownvalues = NULL;
    }
    if (!s_ezsigntemplateannotation_dropdownvalues) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateannotation_dropdownvalues))
    {
    goto end; //String
    }

    // ezsigntemplateannotation_request_compound->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_request_compoundJSON, "objTextstylestatic");
    if (cJSON_IsNull(obj_textstylestatic)) {
        obj_textstylestatic = NULL;
    }
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_request_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }


    if (s_ezsigntemplateannotation_description && !cJSON_IsNull(s_ezsigntemplateannotation_description)) s_ezsigntemplateannotation_description_local_str = strdup(s_ezsigntemplateannotation_description->valuestring);
    if (s_ezsigntemplateannotation_defaulttext && !cJSON_IsNull(s_ezsigntemplateannotation_defaulttext)) s_ezsigntemplateannotation_defaulttext_local_str = strdup(s_ezsigntemplateannotation_defaulttext->valuestring);
    if (s_ezsigntemplateannotation_dropdownvalues && !cJSON_IsNull(s_ezsigntemplateannotation_dropdownvalues)) s_ezsigntemplateannotation_dropdownvalues_local_str = strdup(s_ezsigntemplateannotation_dropdownvalues->valuestring);

    ezsigntemplateannotation_request_compound_local_var = ezsigntemplateannotation_request_compound_create_internal (
        pki_ezsigntemplateannotation_id_local_var,
        fki_ezsigntemplatedocument_id_local_var,
        e_ezsigntemplateannotation_horizontalalignment_local_nonprim,
        e_ezsigntemplateannotation_verticalalignment_local_nonprim,
        e_ezsigntemplateannotation_type_local_nonprim,
        i_ezsigntemplateannotation_x_local_var,
        i_ezsigntemplateannotation_y_local_var,
        i_ezsigntemplateannotation_width_local_var,
        i_ezsigntemplateannotation_height_local_var,
        i_ezsigntemplatedocumentpage_pagenumber_local_var,
        s_ezsigntemplateannotation_description_local_str,
        s_ezsigntemplateannotation_defaulttext_local_str,
        s_ezsigntemplateannotation_dropdownvalues_local_str,
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL
        );

    if (!ezsigntemplateannotation_request_compound_local_var) {
        goto end;
    }

    return ezsigntemplateannotation_request_compound_local_var;
end:
    if (pki_ezsigntemplateannotation_id_local_var) {
        free(pki_ezsigntemplateannotation_id_local_var);
        pki_ezsigntemplateannotation_id_local_var = NULL;
    }
    if (fki_ezsigntemplatedocument_id_local_var) {
        free(fki_ezsigntemplatedocument_id_local_var);
        fki_ezsigntemplatedocument_id_local_var = NULL;
    }
    if (e_ezsigntemplateannotation_horizontalalignment_local_nonprim) {
        e_ezsigntemplateannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateannotation_verticalalignment_local_nonprim) {
        e_ezsigntemplateannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateannotation_type_local_nonprim) {
        e_ezsigntemplateannotation_type_local_nonprim = 0;
    }
    if (i_ezsigntemplateannotation_x_local_var) {
        free(i_ezsigntemplateannotation_x_local_var);
        i_ezsigntemplateannotation_x_local_var = NULL;
    }
    if (i_ezsigntemplateannotation_y_local_var) {
        free(i_ezsigntemplateannotation_y_local_var);
        i_ezsigntemplateannotation_y_local_var = NULL;
    }
    if (i_ezsigntemplateannotation_width_local_var) {
        free(i_ezsigntemplateannotation_width_local_var);
        i_ezsigntemplateannotation_width_local_var = NULL;
    }
    if (i_ezsigntemplateannotation_height_local_var) {
        free(i_ezsigntemplateannotation_height_local_var);
        i_ezsigntemplateannotation_height_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_pagenumber_local_var) {
        free(i_ezsigntemplatedocumentpage_pagenumber_local_var);
        i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;
    }
    if (s_ezsigntemplateannotation_description_local_str) {
        free(s_ezsigntemplateannotation_description_local_str);
        s_ezsigntemplateannotation_description_local_str = NULL;
    }
    if (s_ezsigntemplateannotation_defaulttext_local_str) {
        free(s_ezsigntemplateannotation_defaulttext_local_str);
        s_ezsigntemplateannotation_defaulttext_local_str = NULL;
    }
    if (s_ezsigntemplateannotation_dropdownvalues_local_str) {
        free(s_ezsigntemplateannotation_dropdownvalues_local_str);
        s_ezsigntemplateannotation_dropdownvalues_local_str = NULL;
    }
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_request_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    return NULL;

}
