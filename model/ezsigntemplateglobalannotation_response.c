#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobalannotation_response.h"



static ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_create_internal(
    int *pki_ezsigntemplateglobalannotation_id,
    int *fki_textstylestatic_id,
    textstylestatic_request_compound_t *obj_textstylestatic,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int *i_ezsigntemplateglobalannotation_x,
    int *i_ezsigntemplateglobalannotation_y,
    int *i_ezsigntemplateglobalannotation_width,
    int *i_ezsigntemplateglobalannotation_height,
    int *i_ezsigntemplateglobaldocumentpage_pagenumber,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
    ) {
    ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_local_var = malloc(sizeof(ezsigntemplateglobalannotation_response_t));
    if (!ezsigntemplateglobalannotation_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplateglobalannotation_response_local_var, 0, sizeof(ezsigntemplateglobalannotation_response_t));
    ezsigntemplateglobalannotation_response_local_var->_library_owned = 1;
    ezsigntemplateglobalannotation_response_local_var->pki_ezsigntemplateglobalannotation_id = pki_ezsigntemplateglobalannotation_id;
    ezsigntemplateglobalannotation_response_local_var->fki_textstylestatic_id = fki_textstylestatic_id;
    ezsigntemplateglobalannotation_response_local_var->obj_textstylestatic = obj_textstylestatic;
    ezsigntemplateglobalannotation_response_local_var->e_ezsigntemplateglobalannotation_horizontalalignment = e_ezsigntemplateglobalannotation_horizontalalignment;
    ezsigntemplateglobalannotation_response_local_var->e_ezsigntemplateglobalannotation_verticalalignment = e_ezsigntemplateglobalannotation_verticalalignment;
    ezsigntemplateglobalannotation_response_local_var->e_ezsigntemplateglobalannotation_type = e_ezsigntemplateglobalannotation_type;
    ezsigntemplateglobalannotation_response_local_var->i_ezsigntemplateglobalannotation_x = i_ezsigntemplateglobalannotation_x;
    ezsigntemplateglobalannotation_response_local_var->i_ezsigntemplateglobalannotation_y = i_ezsigntemplateglobalannotation_y;
    ezsigntemplateglobalannotation_response_local_var->i_ezsigntemplateglobalannotation_width = i_ezsigntemplateglobalannotation_width;
    ezsigntemplateglobalannotation_response_local_var->i_ezsigntemplateglobalannotation_height = i_ezsigntemplateglobalannotation_height;
    ezsigntemplateglobalannotation_response_local_var->i_ezsigntemplateglobaldocumentpage_pagenumber = i_ezsigntemplateglobaldocumentpage_pagenumber;
    ezsigntemplateglobalannotation_response_local_var->s_ezsigntemplateglobalannotation_description = s_ezsigntemplateglobalannotation_description;
    ezsigntemplateglobalannotation_response_local_var->s_ezsigntemplateglobalannotation_defaulttext = s_ezsigntemplateglobalannotation_defaulttext;
    ezsigntemplateglobalannotation_response_local_var->s_ezsigntemplateglobalannotation_dropdownvalues = s_ezsigntemplateglobalannotation_dropdownvalues;
    return ezsigntemplateglobalannotation_response_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_create(
    int *pki_ezsigntemplateglobalannotation_id,
    int *fki_textstylestatic_id,
    textstylestatic_request_compound_t *obj_textstylestatic,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int *i_ezsigntemplateglobalannotation_x,
    int *i_ezsigntemplateglobalannotation_y,
    int *i_ezsigntemplateglobalannotation_width,
    int *i_ezsigntemplateglobalannotation_height,
    int *i_ezsigntemplateglobaldocumentpage_pagenumber,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
    ) {
    int *pki_ezsigntemplateglobalannotation_id_copy = NULL;
    if (pki_ezsigntemplateglobalannotation_id) {
        pki_ezsigntemplateglobalannotation_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateglobalannotation_id_copy) *pki_ezsigntemplateglobalannotation_id_copy = *pki_ezsigntemplateglobalannotation_id;
    }
    int *fki_textstylestatic_id_copy = NULL;
    if (fki_textstylestatic_id) {
        fki_textstylestatic_id_copy = malloc(sizeof(int));
        if (fki_textstylestatic_id_copy) *fki_textstylestatic_id_copy = *fki_textstylestatic_id;
    }
    int *i_ezsigntemplateglobalannotation_x_copy = NULL;
    if (i_ezsigntemplateglobalannotation_x) {
        i_ezsigntemplateglobalannotation_x_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobalannotation_x_copy) *i_ezsigntemplateglobalannotation_x_copy = *i_ezsigntemplateglobalannotation_x;
    }
    int *i_ezsigntemplateglobalannotation_y_copy = NULL;
    if (i_ezsigntemplateglobalannotation_y) {
        i_ezsigntemplateglobalannotation_y_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobalannotation_y_copy) *i_ezsigntemplateglobalannotation_y_copy = *i_ezsigntemplateglobalannotation_y;
    }
    int *i_ezsigntemplateglobalannotation_width_copy = NULL;
    if (i_ezsigntemplateglobalannotation_width) {
        i_ezsigntemplateglobalannotation_width_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobalannotation_width_copy) *i_ezsigntemplateglobalannotation_width_copy = *i_ezsigntemplateglobalannotation_width;
    }
    int *i_ezsigntemplateglobalannotation_height_copy = NULL;
    if (i_ezsigntemplateglobalannotation_height) {
        i_ezsigntemplateglobalannotation_height_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobalannotation_height_copy) *i_ezsigntemplateglobalannotation_height_copy = *i_ezsigntemplateglobalannotation_height;
    }
    int *i_ezsigntemplateglobaldocumentpage_pagenumber_copy = NULL;
    if (i_ezsigntemplateglobaldocumentpage_pagenumber) {
        i_ezsigntemplateglobaldocumentpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobaldocumentpage_pagenumber_copy) *i_ezsigntemplateglobaldocumentpage_pagenumber_copy = *i_ezsigntemplateglobaldocumentpage_pagenumber;
    }
    ezsigntemplateglobalannotation_response_t *result = ezsigntemplateglobalannotation_response_create_internal (
        pki_ezsigntemplateglobalannotation_id_copy,
        fki_textstylestatic_id_copy,
        obj_textstylestatic,
        e_ezsigntemplateglobalannotation_horizontalalignment,
        e_ezsigntemplateglobalannotation_verticalalignment,
        e_ezsigntemplateglobalannotation_type,
        i_ezsigntemplateglobalannotation_x_copy,
        i_ezsigntemplateglobalannotation_y_copy,
        i_ezsigntemplateglobalannotation_width_copy,
        i_ezsigntemplateglobalannotation_height_copy,
        i_ezsigntemplateglobaldocumentpage_pagenumber_copy,
        s_ezsigntemplateglobalannotation_description,
        s_ezsigntemplateglobalannotation_defaulttext,
        s_ezsigntemplateglobalannotation_dropdownvalues
        );
    if (!result) {
        free(pki_ezsigntemplateglobalannotation_id_copy);
        free(fki_textstylestatic_id_copy);
        free(i_ezsigntemplateglobalannotation_x_copy);
        free(i_ezsigntemplateglobalannotation_y_copy);
        free(i_ezsigntemplateglobalannotation_width_copy);
        free(i_ezsigntemplateglobalannotation_height_copy);
        free(i_ezsigntemplateglobaldocumentpage_pagenumber_copy);
    }
    return result;
}

void ezsigntemplateglobalannotation_response_free(ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response) {
    if(NULL == ezsigntemplateglobalannotation_response){
        return ;
    }
    if(ezsigntemplateglobalannotation_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobalannotation_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id) {
        free(ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id);
        ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id = NULL;
    }
    if (ezsigntemplateglobalannotation_response->fki_textstylestatic_id) {
        free(ezsigntemplateglobalannotation_response->fki_textstylestatic_id);
        ezsigntemplateglobalannotation_response->fki_textstylestatic_id = NULL;
    }
    if (ezsigntemplateglobalannotation_response->obj_textstylestatic) {
        textstylestatic_request_compound_free(ezsigntemplateglobalannotation_response->obj_textstylestatic);
        ezsigntemplateglobalannotation_response->obj_textstylestatic = NULL;
    }
    if (ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x) {
        free(ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x);
        ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x = NULL;
    }
    if (ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y) {
        free(ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y);
        ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y = NULL;
    }
    if (ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width) {
        free(ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width);
        ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width = NULL;
    }
    if (ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height) {
        free(ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height);
        ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height = NULL;
    }
    if (ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber) {
        free(ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber);
        ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber = NULL;
    }
    if (ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description) {
        free(ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description);
        ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description = NULL;
    }
    if (ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext) {
        free(ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext);
        ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext = NULL;
    }
    if (ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues) {
        free(ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues);
        ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues = NULL;
    }
    free(ezsigntemplateglobalannotation_response);
}

cJSON *ezsigntemplateglobalannotation_response_convertToJSON(ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id
    if (!ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalannotationID", *ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->fki_textstylestatic_id
    if(ezsigntemplateglobalannotation_response->fki_textstylestatic_id) {
    if(cJSON_AddNumberToObject(item, "fkiTextstylestaticID", *ezsigntemplateglobalannotation_response->fki_textstylestatic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateglobalannotation_response->obj_textstylestatic
    if(ezsigntemplateglobalannotation_response->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_request_compound_convertToJSON(ezsigntemplateglobalannotation_response->obj_textstylestatic);
    if(obj_textstylestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTextstylestatic", obj_textstylestatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_horizontalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__NULL == ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_horizontalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON = field_e_ezsigntemplateglobalannotation_horizontalalignment_convertToJSON(ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_horizontalalignment);
    if(e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationHorizontalalignment", e_ezsigntemplateglobalannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_verticalalignment
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__NULL == ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_verticalalignment) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_verticalalignment_local_JSON = field_e_ezsigntemplateglobalannotation_verticalalignment_convertToJSON(ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_verticalalignment);
    if(e_ezsigntemplateglobalannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationVerticalalignment", e_ezsigntemplateglobalannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_type
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__NULL == ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobalannotation_type_local_JSON = field_e_ezsigntemplateglobalannotation_type_convertToJSON(ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_type);
    if(e_ezsigntemplateglobalannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalannotationType", e_ezsigntemplateglobalannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x
    if (!ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationX", *ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y
    if (!ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationY", *ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width
    if (!ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationWidth", *ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height
    if (!ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobalannotationHeight", *ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber
    if (!ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobaldocumentpagePagenumber", *ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description
    if (!ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDescription", ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext
    if (!ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDefaulttext", ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues
    if (!ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalannotationDropdownvalues", ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_parseFromJSON(cJSON *ezsigntemplateglobalannotation_responseJSON){

    ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id
    int *pki_ezsigntemplateglobalannotation_id_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->fki_textstylestatic_id
    int *fki_textstylestatic_id_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->obj_textstylestatic
    textstylestatic_request_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_horizontalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_verticalalignment
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_type
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x
    int *i_ezsigntemplateglobalannotation_x_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y
    int *i_ezsigntemplateglobalannotation_y_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width
    int *i_ezsigntemplateglobalannotation_width_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height
    int *i_ezsigntemplateglobalannotation_height_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber
    int *i_ezsigntemplateglobaldocumentpage_pagenumber_local_var = NULL;

    char *s_ezsigntemplateglobalannotation_description_local_str = NULL;

    char *s_ezsigntemplateglobalannotation_defaulttext_local_str = NULL;

    char *s_ezsigntemplateglobalannotation_dropdownvalues_local_str = NULL;

    // ezsigntemplateglobalannotation_response->pki_ezsigntemplateglobalannotation_id
    cJSON *pki_ezsigntemplateglobalannotation_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "pkiEzsigntemplateglobalannotationID");
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
    pki_ezsigntemplateglobalannotation_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateglobalannotation_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateglobalannotation_id_local_var = pki_ezsigntemplateglobalannotation_id->valuedouble;

    // ezsigntemplateglobalannotation_response->fki_textstylestatic_id
    cJSON *fki_textstylestatic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "fkiTextstylestaticID");
    if (cJSON_IsNull(fki_textstylestatic_id)) {
        fki_textstylestatic_id = NULL;
    }
    if (fki_textstylestatic_id) { 
    if(!cJSON_IsNumber(fki_textstylestatic_id))
    {
    goto end; //Numeric
    }
    fki_textstylestatic_id_local_var = malloc(sizeof(int));
    if(!fki_textstylestatic_id_local_var)
    {
        goto end;
    }
    *fki_textstylestatic_id_local_var = fki_textstylestatic_id->valuedouble;
    }

    // ezsigntemplateglobalannotation_response->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "objTextstylestatic");
    if (cJSON_IsNull(obj_textstylestatic)) {
        obj_textstylestatic = NULL;
    }
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_request_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }

    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_horizontalalignment
    cJSON *e_ezsigntemplateglobalannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "eEzsigntemplateglobalannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_horizontalalignment)) {
        e_ezsigntemplateglobalannotation_horizontalalignment = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_horizontalalignment) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = field_e_ezsigntemplateglobalannotation_horizontalalignment_parseFromJSON(e_ezsigntemplateglobalannotation_horizontalalignment); //custom

    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_verticalalignment
    cJSON *e_ezsigntemplateglobalannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "eEzsigntemplateglobalannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_verticalalignment)) {
        e_ezsigntemplateglobalannotation_verticalalignment = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_verticalalignment) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = field_e_ezsigntemplateglobalannotation_verticalalignment_parseFromJSON(e_ezsigntemplateglobalannotation_verticalalignment); //custom

    // ezsigntemplateglobalannotation_response->e_ezsigntemplateglobalannotation_type
    cJSON *e_ezsigntemplateglobalannotation_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "eEzsigntemplateglobalannotationType");
    if (cJSON_IsNull(e_ezsigntemplateglobalannotation_type)) {
        e_ezsigntemplateglobalannotation_type = NULL;
    }
    if (!e_ezsigntemplateglobalannotation_type) {
        goto end;
    }

    
    e_ezsigntemplateglobalannotation_type_local_nonprim = field_e_ezsigntemplateglobalannotation_type_parseFromJSON(e_ezsigntemplateglobalannotation_type); //custom

    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_x
    cJSON *i_ezsigntemplateglobalannotation_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "iEzsigntemplateglobalannotationX");
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
    i_ezsigntemplateglobalannotation_x_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobalannotation_x_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobalannotation_x_local_var = i_ezsigntemplateglobalannotation_x->valuedouble;

    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_y
    cJSON *i_ezsigntemplateglobalannotation_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "iEzsigntemplateglobalannotationY");
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
    i_ezsigntemplateglobalannotation_y_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobalannotation_y_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobalannotation_y_local_var = i_ezsigntemplateglobalannotation_y->valuedouble;

    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_width
    cJSON *i_ezsigntemplateglobalannotation_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "iEzsigntemplateglobalannotationWidth");
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
    i_ezsigntemplateglobalannotation_width_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobalannotation_width_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobalannotation_width_local_var = i_ezsigntemplateglobalannotation_width->valuedouble;

    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobalannotation_height
    cJSON *i_ezsigntemplateglobalannotation_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "iEzsigntemplateglobalannotationHeight");
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
    i_ezsigntemplateglobalannotation_height_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobalannotation_height_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobalannotation_height_local_var = i_ezsigntemplateglobalannotation_height->valuedouble;

    // ezsigntemplateglobalannotation_response->i_ezsigntemplateglobaldocumentpage_pagenumber
    cJSON *i_ezsigntemplateglobaldocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "iEzsigntemplateglobaldocumentpagePagenumber");
    if (cJSON_IsNull(i_ezsigntemplateglobaldocumentpage_pagenumber)) {
        i_ezsigntemplateglobaldocumentpage_pagenumber = NULL;
    }
    if (!i_ezsigntemplateglobaldocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobaldocumentpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateglobaldocumentpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobaldocumentpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobaldocumentpage_pagenumber_local_var = i_ezsigntemplateglobaldocumentpage_pagenumber->valuedouble;

    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_description
    cJSON *s_ezsigntemplateglobalannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "sEzsigntemplateglobalannotationDescription");
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

    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_defaulttext
    cJSON *s_ezsigntemplateglobalannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "sEzsigntemplateglobalannotationDefaulttext");
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

    // ezsigntemplateglobalannotation_response->s_ezsigntemplateglobalannotation_dropdownvalues
    cJSON *s_ezsigntemplateglobalannotation_dropdownvalues = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_responseJSON, "sEzsigntemplateglobalannotationDropdownvalues");
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


    if (s_ezsigntemplateglobalannotation_description && !cJSON_IsNull(s_ezsigntemplateglobalannotation_description)) s_ezsigntemplateglobalannotation_description_local_str = strdup(s_ezsigntemplateglobalannotation_description->valuestring);
    if (s_ezsigntemplateglobalannotation_defaulttext && !cJSON_IsNull(s_ezsigntemplateglobalannotation_defaulttext)) s_ezsigntemplateglobalannotation_defaulttext_local_str = strdup(s_ezsigntemplateglobalannotation_defaulttext->valuestring);
    if (s_ezsigntemplateglobalannotation_dropdownvalues && !cJSON_IsNull(s_ezsigntemplateglobalannotation_dropdownvalues)) s_ezsigntemplateglobalannotation_dropdownvalues_local_str = strdup(s_ezsigntemplateglobalannotation_dropdownvalues->valuestring);

    ezsigntemplateglobalannotation_response_local_var = ezsigntemplateglobalannotation_response_create_internal (
        pki_ezsigntemplateglobalannotation_id_local_var,
        fki_textstylestatic_id_local_var,
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL,
        e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim,
        e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim,
        e_ezsigntemplateglobalannotation_type_local_nonprim,
        i_ezsigntemplateglobalannotation_x_local_var,
        i_ezsigntemplateglobalannotation_y_local_var,
        i_ezsigntemplateglobalannotation_width_local_var,
        i_ezsigntemplateglobalannotation_height_local_var,
        i_ezsigntemplateglobaldocumentpage_pagenumber_local_var,
        s_ezsigntemplateglobalannotation_description_local_str,
        s_ezsigntemplateglobalannotation_defaulttext_local_str,
        s_ezsigntemplateglobalannotation_dropdownvalues_local_str
        );

    if (!ezsigntemplateglobalannotation_response_local_var) {
        goto end;
    }

    return ezsigntemplateglobalannotation_response_local_var;
end:
    if (pki_ezsigntemplateglobalannotation_id_local_var) {
        free(pki_ezsigntemplateglobalannotation_id_local_var);
        pki_ezsigntemplateglobalannotation_id_local_var = NULL;
    }
    if (fki_textstylestatic_id_local_var) {
        free(fki_textstylestatic_id_local_var);
        fki_textstylestatic_id_local_var = NULL;
    }
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_request_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    if (e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim) {
        e_ezsigntemplateglobalannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim) {
        e_ezsigntemplateglobalannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsigntemplateglobalannotation_type_local_nonprim) {
        e_ezsigntemplateglobalannotation_type_local_nonprim = 0;
    }
    if (i_ezsigntemplateglobalannotation_x_local_var) {
        free(i_ezsigntemplateglobalannotation_x_local_var);
        i_ezsigntemplateglobalannotation_x_local_var = NULL;
    }
    if (i_ezsigntemplateglobalannotation_y_local_var) {
        free(i_ezsigntemplateglobalannotation_y_local_var);
        i_ezsigntemplateglobalannotation_y_local_var = NULL;
    }
    if (i_ezsigntemplateglobalannotation_width_local_var) {
        free(i_ezsigntemplateglobalannotation_width_local_var);
        i_ezsigntemplateglobalannotation_width_local_var = NULL;
    }
    if (i_ezsigntemplateglobalannotation_height_local_var) {
        free(i_ezsigntemplateglobalannotation_height_local_var);
        i_ezsigntemplateglobalannotation_height_local_var = NULL;
    }
    if (i_ezsigntemplateglobaldocumentpage_pagenumber_local_var) {
        free(i_ezsigntemplateglobaldocumentpage_pagenumber_local_var);
        i_ezsigntemplateglobaldocumentpage_pagenumber_local_var = NULL;
    }
    if (s_ezsigntemplateglobalannotation_description_local_str) {
        free(s_ezsigntemplateglobalannotation_description_local_str);
        s_ezsigntemplateglobalannotation_description_local_str = NULL;
    }
    if (s_ezsigntemplateglobalannotation_defaulttext_local_str) {
        free(s_ezsigntemplateglobalannotation_defaulttext_local_str);
        s_ezsigntemplateglobalannotation_defaulttext_local_str = NULL;
    }
    if (s_ezsigntemplateglobalannotation_dropdownvalues_local_str) {
        free(s_ezsigntemplateglobalannotation_dropdownvalues_local_str);
        s_ezsigntemplateglobalannotation_dropdownvalues_local_str = NULL;
    }
    return NULL;

}
