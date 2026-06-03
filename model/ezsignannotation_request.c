#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_request.h"



static ezsignannotation_request_t *ezsignannotation_request_create_internal(
    int *pki_ezsignannotation_id,
    int *fki_ezsigndocument_id,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type,
    int *i_ezsignannotation_x,
    int *i_ezsignannotation_y,
    int *i_ezsignannotation_width,
    int *i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int *i_ezsignpage_pagenumber
    ) {
    ezsignannotation_request_t *ezsignannotation_request_local_var = malloc(sizeof(ezsignannotation_request_t));
    if (!ezsignannotation_request_local_var) {
        return NULL;
    }
    memset(ezsignannotation_request_local_var, 0, sizeof(ezsignannotation_request_t));
    ezsignannotation_request_local_var->_library_owned = 1;
    ezsignannotation_request_local_var->pki_ezsignannotation_id = pki_ezsignannotation_id;
    ezsignannotation_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignannotation_request_local_var->e_ezsignannotation_horizontalalignment = e_ezsignannotation_horizontalalignment;
    ezsignannotation_request_local_var->e_ezsignannotation_verticalalignment = e_ezsignannotation_verticalalignment;
    ezsignannotation_request_local_var->e_ezsignannotation_type = e_ezsignannotation_type;
    ezsignannotation_request_local_var->i_ezsignannotation_x = i_ezsignannotation_x;
    ezsignannotation_request_local_var->i_ezsignannotation_y = i_ezsignannotation_y;
    ezsignannotation_request_local_var->i_ezsignannotation_width = i_ezsignannotation_width;
    ezsignannotation_request_local_var->i_ezsignannotation_height = i_ezsignannotation_height;
    ezsignannotation_request_local_var->s_ezsignannotation_text = s_ezsignannotation_text;
    ezsignannotation_request_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    return ezsignannotation_request_local_var;
}

__attribute__((deprecated)) ezsignannotation_request_t *ezsignannotation_request_create(
    int *pki_ezsignannotation_id,
    int *fki_ezsigndocument_id,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type,
    int *i_ezsignannotation_x,
    int *i_ezsignannotation_y,
    int *i_ezsignannotation_width,
    int *i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int *i_ezsignpage_pagenumber
    ) {
    int *pki_ezsignannotation_id_copy = NULL;
    if (pki_ezsignannotation_id) {
        pki_ezsignannotation_id_copy = malloc(sizeof(int));
        if (pki_ezsignannotation_id_copy) *pki_ezsignannotation_id_copy = *pki_ezsignannotation_id;
    }
    int *fki_ezsigndocument_id_copy = NULL;
    if (fki_ezsigndocument_id) {
        fki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigndocument_id_copy) *fki_ezsigndocument_id_copy = *fki_ezsigndocument_id;
    }
    int *i_ezsignannotation_x_copy = NULL;
    if (i_ezsignannotation_x) {
        i_ezsignannotation_x_copy = malloc(sizeof(int));
        if (i_ezsignannotation_x_copy) *i_ezsignannotation_x_copy = *i_ezsignannotation_x;
    }
    int *i_ezsignannotation_y_copy = NULL;
    if (i_ezsignannotation_y) {
        i_ezsignannotation_y_copy = malloc(sizeof(int));
        if (i_ezsignannotation_y_copy) *i_ezsignannotation_y_copy = *i_ezsignannotation_y;
    }
    int *i_ezsignannotation_width_copy = NULL;
    if (i_ezsignannotation_width) {
        i_ezsignannotation_width_copy = malloc(sizeof(int));
        if (i_ezsignannotation_width_copy) *i_ezsignannotation_width_copy = *i_ezsignannotation_width;
    }
    int *i_ezsignannotation_height_copy = NULL;
    if (i_ezsignannotation_height) {
        i_ezsignannotation_height_copy = malloc(sizeof(int));
        if (i_ezsignannotation_height_copy) *i_ezsignannotation_height_copy = *i_ezsignannotation_height;
    }
    int *i_ezsignpage_pagenumber_copy = NULL;
    if (i_ezsignpage_pagenumber) {
        i_ezsignpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsignpage_pagenumber_copy) *i_ezsignpage_pagenumber_copy = *i_ezsignpage_pagenumber;
    }
    ezsignannotation_request_t *result = ezsignannotation_request_create_internal (
        pki_ezsignannotation_id_copy,
        fki_ezsigndocument_id_copy,
        e_ezsignannotation_horizontalalignment,
        e_ezsignannotation_verticalalignment,
        e_ezsignannotation_type,
        i_ezsignannotation_x_copy,
        i_ezsignannotation_y_copy,
        i_ezsignannotation_width_copy,
        i_ezsignannotation_height_copy,
        s_ezsignannotation_text,
        i_ezsignpage_pagenumber_copy
        );
    if (!result) {
        free(pki_ezsignannotation_id_copy);
        free(fki_ezsigndocument_id_copy);
        free(i_ezsignannotation_x_copy);
        free(i_ezsignannotation_y_copy);
        free(i_ezsignannotation_width_copy);
        free(i_ezsignannotation_height_copy);
        free(i_ezsignpage_pagenumber_copy);
    }
    return result;
}

void ezsignannotation_request_free(ezsignannotation_request_t *ezsignannotation_request) {
    if(NULL == ezsignannotation_request){
        return ;
    }
    if(ezsignannotation_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignannotation_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_request->pki_ezsignannotation_id) {
        free(ezsignannotation_request->pki_ezsignannotation_id);
        ezsignannotation_request->pki_ezsignannotation_id = NULL;
    }
    if (ezsignannotation_request->fki_ezsigndocument_id) {
        free(ezsignannotation_request->fki_ezsigndocument_id);
        ezsignannotation_request->fki_ezsigndocument_id = NULL;
    }
    if (ezsignannotation_request->i_ezsignannotation_x) {
        free(ezsignannotation_request->i_ezsignannotation_x);
        ezsignannotation_request->i_ezsignannotation_x = NULL;
    }
    if (ezsignannotation_request->i_ezsignannotation_y) {
        free(ezsignannotation_request->i_ezsignannotation_y);
        ezsignannotation_request->i_ezsignannotation_y = NULL;
    }
    if (ezsignannotation_request->i_ezsignannotation_width) {
        free(ezsignannotation_request->i_ezsignannotation_width);
        ezsignannotation_request->i_ezsignannotation_width = NULL;
    }
    if (ezsignannotation_request->i_ezsignannotation_height) {
        free(ezsignannotation_request->i_ezsignannotation_height);
        ezsignannotation_request->i_ezsignannotation_height = NULL;
    }
    if (ezsignannotation_request->s_ezsignannotation_text) {
        free(ezsignannotation_request->s_ezsignannotation_text);
        ezsignannotation_request->s_ezsignannotation_text = NULL;
    }
    if (ezsignannotation_request->i_ezsignpage_pagenumber) {
        free(ezsignannotation_request->i_ezsignpage_pagenumber);
        ezsignannotation_request->i_ezsignpage_pagenumber = NULL;
    }
    free(ezsignannotation_request);
}

cJSON *ezsignannotation_request_convertToJSON(ezsignannotation_request_t *ezsignannotation_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_request->pki_ezsignannotation_id
    if(ezsignannotation_request->pki_ezsignannotation_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignannotationID", *ezsignannotation_request->pki_ezsignannotation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignannotation_request->fki_ezsigndocument_id
    if (!ezsignannotation_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", *ezsignannotation_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_request->e_ezsignannotation_horizontalalignment
    if(ezsignannotation_request->e_ezsignannotation_horizontalalignment != ezmax_api_definition__full_enum_horizontalalignment__NULL) {
    cJSON *e_ezsignannotation_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(ezsignannotation_request->e_ezsignannotation_horizontalalignment);
    if(e_ezsignannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationHorizontalalignment", e_ezsignannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignannotation_request->e_ezsignannotation_verticalalignment
    if(ezsignannotation_request->e_ezsignannotation_verticalalignment != ezmax_api_definition__full_enum_verticalalignment__NULL) {
    cJSON *e_ezsignannotation_verticalalignment_local_JSON = enum_verticalalignment_convertToJSON(ezsignannotation_request->e_ezsignannotation_verticalalignment);
    if(e_ezsignannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationVerticalalignment", e_ezsignannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignannotation_request->e_ezsignannotation_type
    if (ezmax_api_definition__full_field_e_ezsignannotation_type__NULL == ezsignannotation_request->e_ezsignannotation_type) {
        goto fail;
    }
    cJSON *e_ezsignannotation_type_local_JSON = field_e_ezsignannotation_type_convertToJSON(ezsignannotation_request->e_ezsignannotation_type);
    if(e_ezsignannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationType", e_ezsignannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignannotation_request->i_ezsignannotation_x
    if (!ezsignannotation_request->i_ezsignannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignannotationX", *ezsignannotation_request->i_ezsignannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_request->i_ezsignannotation_y
    if (!ezsignannotation_request->i_ezsignannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignannotationY", *ezsignannotation_request->i_ezsignannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_request->i_ezsignannotation_width
    if(ezsignannotation_request->i_ezsignannotation_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignannotationWidth", *ezsignannotation_request->i_ezsignannotation_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignannotation_request->i_ezsignannotation_height
    if(ezsignannotation_request->i_ezsignannotation_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignannotationHeight", *ezsignannotation_request->i_ezsignannotation_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignannotation_request->s_ezsignannotation_text
    if(ezsignannotation_request->s_ezsignannotation_text) {
    if(cJSON_AddStringToObject(item, "sEzsignannotationText", ezsignannotation_request->s_ezsignannotation_text) == NULL) {
    goto fail; //String
    }
    }


    // ezsignannotation_request->i_ezsignpage_pagenumber
    if (!ezsignannotation_request->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", *ezsignannotation_request->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignannotation_request_t *ezsignannotation_request_parseFromJSON(cJSON *ezsignannotation_requestJSON){

    ezsignannotation_request_t *ezsignannotation_request_local_var = NULL;

    // define the local variable for ezsignannotation_request->pki_ezsignannotation_id
    int *pki_ezsignannotation_id_local_var = NULL;

    // define the local variable for ezsignannotation_request->fki_ezsigndocument_id
    int *fki_ezsigndocument_id_local_var = NULL;

    // define the local variable for ezsignannotation_request->e_ezsignannotation_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsignannotation_request->e_ezsignannotation_verticalalignment
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsignannotation_request->e_ezsignannotation_type
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type_local_nonprim = 0;

    // define the local variable for ezsignannotation_request->i_ezsignannotation_x
    int *i_ezsignannotation_x_local_var = NULL;

    // define the local variable for ezsignannotation_request->i_ezsignannotation_y
    int *i_ezsignannotation_y_local_var = NULL;

    // define the local variable for ezsignannotation_request->i_ezsignannotation_width
    int *i_ezsignannotation_width_local_var = NULL;

    // define the local variable for ezsignannotation_request->i_ezsignannotation_height
    int *i_ezsignannotation_height_local_var = NULL;

    char *s_ezsignannotation_text_local_str = NULL;

    // define the local variable for ezsignannotation_request->i_ezsignpage_pagenumber
    int *i_ezsignpage_pagenumber_local_var = NULL;

    // ezsignannotation_request->pki_ezsignannotation_id
    cJSON *pki_ezsignannotation_id = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "pkiEzsignannotationID");
    if (cJSON_IsNull(pki_ezsignannotation_id)) {
        pki_ezsignannotation_id = NULL;
    }
    if (pki_ezsignannotation_id) { 
    if(!cJSON_IsNumber(pki_ezsignannotation_id))
    {
    goto end; //Numeric
    }
    pki_ezsignannotation_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignannotation_id_local_var)
    {
        goto end;
    }
    *pki_ezsignannotation_id_local_var = pki_ezsignannotation_id->valuedouble;
    }

    // ezsignannotation_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigndocument_id_local_var = fki_ezsigndocument_id->valuedouble;

    // ezsignannotation_request->e_ezsignannotation_horizontalalignment
    cJSON *e_ezsignannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "eEzsignannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsignannotation_horizontalalignment)) {
        e_ezsignannotation_horizontalalignment = NULL;
    }
    if (e_ezsignannotation_horizontalalignment) { 
    e_ezsignannotation_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_ezsignannotation_horizontalalignment); //custom
    }

    // ezsignannotation_request->e_ezsignannotation_verticalalignment
    cJSON *e_ezsignannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "eEzsignannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsignannotation_verticalalignment)) {
        e_ezsignannotation_verticalalignment = NULL;
    }
    if (e_ezsignannotation_verticalalignment) { 
    e_ezsignannotation_verticalalignment_local_nonprim = enum_verticalalignment_parseFromJSON(e_ezsignannotation_verticalalignment); //custom
    }

    // ezsignannotation_request->e_ezsignannotation_type
    cJSON *e_ezsignannotation_type = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "eEzsignannotationType");
    if (cJSON_IsNull(e_ezsignannotation_type)) {
        e_ezsignannotation_type = NULL;
    }
    if (!e_ezsignannotation_type) {
        goto end;
    }

    
    e_ezsignannotation_type_local_nonprim = field_e_ezsignannotation_type_parseFromJSON(e_ezsignannotation_type); //custom

    // ezsignannotation_request->i_ezsignannotation_x
    cJSON *i_ezsignannotation_x = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "iEzsignannotationX");
    if (cJSON_IsNull(i_ezsignannotation_x)) {
        i_ezsignannotation_x = NULL;
    }
    if (!i_ezsignannotation_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignannotation_x))
    {
    goto end; //Numeric
    }
    i_ezsignannotation_x_local_var = malloc(sizeof(int));
    if(!i_ezsignannotation_x_local_var)
    {
        goto end;
    }
    *i_ezsignannotation_x_local_var = i_ezsignannotation_x->valuedouble;

    // ezsignannotation_request->i_ezsignannotation_y
    cJSON *i_ezsignannotation_y = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "iEzsignannotationY");
    if (cJSON_IsNull(i_ezsignannotation_y)) {
        i_ezsignannotation_y = NULL;
    }
    if (!i_ezsignannotation_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignannotation_y))
    {
    goto end; //Numeric
    }
    i_ezsignannotation_y_local_var = malloc(sizeof(int));
    if(!i_ezsignannotation_y_local_var)
    {
        goto end;
    }
    *i_ezsignannotation_y_local_var = i_ezsignannotation_y->valuedouble;

    // ezsignannotation_request->i_ezsignannotation_width
    cJSON *i_ezsignannotation_width = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "iEzsignannotationWidth");
    if (cJSON_IsNull(i_ezsignannotation_width)) {
        i_ezsignannotation_width = NULL;
    }
    if (i_ezsignannotation_width) { 
    if(!cJSON_IsNumber(i_ezsignannotation_width))
    {
    goto end; //Numeric
    }
    i_ezsignannotation_width_local_var = malloc(sizeof(int));
    if(!i_ezsignannotation_width_local_var)
    {
        goto end;
    }
    *i_ezsignannotation_width_local_var = i_ezsignannotation_width->valuedouble;
    }

    // ezsignannotation_request->i_ezsignannotation_height
    cJSON *i_ezsignannotation_height = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "iEzsignannotationHeight");
    if (cJSON_IsNull(i_ezsignannotation_height)) {
        i_ezsignannotation_height = NULL;
    }
    if (i_ezsignannotation_height) { 
    if(!cJSON_IsNumber(i_ezsignannotation_height))
    {
    goto end; //Numeric
    }
    i_ezsignannotation_height_local_var = malloc(sizeof(int));
    if(!i_ezsignannotation_height_local_var)
    {
        goto end;
    }
    *i_ezsignannotation_height_local_var = i_ezsignannotation_height->valuedouble;
    }

    // ezsignannotation_request->s_ezsignannotation_text
    cJSON *s_ezsignannotation_text = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "sEzsignannotationText");
    if (cJSON_IsNull(s_ezsignannotation_text)) {
        s_ezsignannotation_text = NULL;
    }
    if (s_ezsignannotation_text) { 
    if(!cJSON_IsString(s_ezsignannotation_text) && !cJSON_IsNull(s_ezsignannotation_text))
    {
    goto end; //String
    }
    }

    // ezsignannotation_request->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignannotation_requestJSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsignpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsignpage_pagenumber_local_var = i_ezsignpage_pagenumber->valuedouble;


    if (s_ezsignannotation_text && !cJSON_IsNull(s_ezsignannotation_text)) s_ezsignannotation_text_local_str = strdup(s_ezsignannotation_text->valuestring);

    ezsignannotation_request_local_var = ezsignannotation_request_create_internal (
        pki_ezsignannotation_id_local_var,
        fki_ezsigndocument_id_local_var,
        e_ezsignannotation_horizontalalignment ? e_ezsignannotation_horizontalalignment_local_nonprim : 0,
        e_ezsignannotation_verticalalignment ? e_ezsignannotation_verticalalignment_local_nonprim : 0,
        e_ezsignannotation_type_local_nonprim,
        i_ezsignannotation_x_local_var,
        i_ezsignannotation_y_local_var,
        i_ezsignannotation_width_local_var,
        i_ezsignannotation_height_local_var,
        s_ezsignannotation_text_local_str,
        i_ezsignpage_pagenumber_local_var
        );

    if (!ezsignannotation_request_local_var) {
        goto end;
    }

    return ezsignannotation_request_local_var;
end:
    if (pki_ezsignannotation_id_local_var) {
        free(pki_ezsignannotation_id_local_var);
        pki_ezsignannotation_id_local_var = NULL;
    }
    if (fki_ezsigndocument_id_local_var) {
        free(fki_ezsigndocument_id_local_var);
        fki_ezsigndocument_id_local_var = NULL;
    }
    if (e_ezsignannotation_horizontalalignment_local_nonprim) {
        e_ezsignannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsignannotation_verticalalignment_local_nonprim) {
        e_ezsignannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsignannotation_type_local_nonprim) {
        e_ezsignannotation_type_local_nonprim = 0;
    }
    if (i_ezsignannotation_x_local_var) {
        free(i_ezsignannotation_x_local_var);
        i_ezsignannotation_x_local_var = NULL;
    }
    if (i_ezsignannotation_y_local_var) {
        free(i_ezsignannotation_y_local_var);
        i_ezsignannotation_y_local_var = NULL;
    }
    if (i_ezsignannotation_width_local_var) {
        free(i_ezsignannotation_width_local_var);
        i_ezsignannotation_width_local_var = NULL;
    }
    if (i_ezsignannotation_height_local_var) {
        free(i_ezsignannotation_height_local_var);
        i_ezsignannotation_height_local_var = NULL;
    }
    if (s_ezsignannotation_text_local_str) {
        free(s_ezsignannotation_text_local_str);
        s_ezsignannotation_text_local_str = NULL;
    }
    if (i_ezsignpage_pagenumber_local_var) {
        free(i_ezsignpage_pagenumber_local_var);
        i_ezsignpage_pagenumber_local_var = NULL;
    }
    return NULL;

}
