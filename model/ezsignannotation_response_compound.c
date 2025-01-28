#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_response_compound.h"



static ezsignannotation_response_compound_t *ezsignannotation_response_compound_create_internal(
    int pki_ezsignannotation_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type,
    int i_ezsignannotation_x,
    int i_ezsignannotation_y,
    int i_ezsignannotation_width,
    int i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int i_ezsignpage_pagenumber,
    textstylestatic_response_compound_t *obj_textstylestatic
    ) {
    ezsignannotation_response_compound_t *ezsignannotation_response_compound_local_var = malloc(sizeof(ezsignannotation_response_compound_t));
    if (!ezsignannotation_response_compound_local_var) {
        return NULL;
    }
    ezsignannotation_response_compound_local_var->pki_ezsignannotation_id = pki_ezsignannotation_id;
    ezsignannotation_response_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignannotation_response_compound_local_var->e_ezsignannotation_horizontalalignment = e_ezsignannotation_horizontalalignment;
    ezsignannotation_response_compound_local_var->e_ezsignannotation_verticalalignment = e_ezsignannotation_verticalalignment;
    ezsignannotation_response_compound_local_var->e_ezsignannotation_type = e_ezsignannotation_type;
    ezsignannotation_response_compound_local_var->i_ezsignannotation_x = i_ezsignannotation_x;
    ezsignannotation_response_compound_local_var->i_ezsignannotation_y = i_ezsignannotation_y;
    ezsignannotation_response_compound_local_var->i_ezsignannotation_width = i_ezsignannotation_width;
    ezsignannotation_response_compound_local_var->i_ezsignannotation_height = i_ezsignannotation_height;
    ezsignannotation_response_compound_local_var->s_ezsignannotation_text = s_ezsignannotation_text;
    ezsignannotation_response_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignannotation_response_compound_local_var->obj_textstylestatic = obj_textstylestatic;

    ezsignannotation_response_compound_local_var->_library_owned = 1;
    return ezsignannotation_response_compound_local_var;
}

__attribute__((deprecated)) ezsignannotation_response_compound_t *ezsignannotation_response_compound_create(
    int pki_ezsignannotation_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type,
    int i_ezsignannotation_x,
    int i_ezsignannotation_y,
    int i_ezsignannotation_width,
    int i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int i_ezsignpage_pagenumber,
    textstylestatic_response_compound_t *obj_textstylestatic
    ) {
    return ezsignannotation_response_compound_create_internal (
        pki_ezsignannotation_id,
        fki_ezsigndocument_id,
        e_ezsignannotation_horizontalalignment,
        e_ezsignannotation_verticalalignment,
        e_ezsignannotation_type,
        i_ezsignannotation_x,
        i_ezsignannotation_y,
        i_ezsignannotation_width,
        i_ezsignannotation_height,
        s_ezsignannotation_text,
        i_ezsignpage_pagenumber,
        obj_textstylestatic
        );
}

void ezsignannotation_response_compound_free(ezsignannotation_response_compound_t *ezsignannotation_response_compound) {
    if(NULL == ezsignannotation_response_compound){
        return ;
    }
    if(ezsignannotation_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignannotation_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_response_compound->s_ezsignannotation_text) {
        free(ezsignannotation_response_compound->s_ezsignannotation_text);
        ezsignannotation_response_compound->s_ezsignannotation_text = NULL;
    }
    if (ezsignannotation_response_compound->obj_textstylestatic) {
        textstylestatic_response_compound_free(ezsignannotation_response_compound->obj_textstylestatic);
        ezsignannotation_response_compound->obj_textstylestatic = NULL;
    }
    free(ezsignannotation_response_compound);
}

cJSON *ezsignannotation_response_compound_convertToJSON(ezsignannotation_response_compound_t *ezsignannotation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_response_compound->pki_ezsignannotation_id
    if (!ezsignannotation_response_compound->pki_ezsignannotation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignannotationID", ezsignannotation_response_compound->pki_ezsignannotation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_response_compound->fki_ezsigndocument_id
    if (!ezsignannotation_response_compound->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignannotation_response_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_response_compound->e_ezsignannotation_horizontalalignment
    if(ezsignannotation_response_compound->e_ezsignannotation_horizontalalignment != ezmax_api_definition__full_enum_horizontalalignment__NULL) {
    cJSON *e_ezsignannotation_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(ezsignannotation_response_compound->e_ezsignannotation_horizontalalignment);
    if(e_ezsignannotation_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationHorizontalalignment", e_ezsignannotation_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignannotation_response_compound->e_ezsignannotation_verticalalignment
    if(ezsignannotation_response_compound->e_ezsignannotation_verticalalignment != ezmax_api_definition__full_enum_verticalalignment__NULL) {
    cJSON *e_ezsignannotation_verticalalignment_local_JSON = enum_verticalalignment_convertToJSON(ezsignannotation_response_compound->e_ezsignannotation_verticalalignment);
    if(e_ezsignannotation_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationVerticalalignment", e_ezsignannotation_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignannotation_response_compound->e_ezsignannotation_type
    if (ezmax_api_definition__full_field_e_ezsignannotation_type__NULL == ezsignannotation_response_compound->e_ezsignannotation_type) {
        goto fail;
    }
    cJSON *e_ezsignannotation_type_local_JSON = field_e_ezsignannotation_type_convertToJSON(ezsignannotation_response_compound->e_ezsignannotation_type);
    if(e_ezsignannotation_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignannotationType", e_ezsignannotation_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignannotation_response_compound->i_ezsignannotation_x
    if (!ezsignannotation_response_compound->i_ezsignannotation_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignannotationX", ezsignannotation_response_compound->i_ezsignannotation_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_response_compound->i_ezsignannotation_y
    if (!ezsignannotation_response_compound->i_ezsignannotation_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignannotationY", ezsignannotation_response_compound->i_ezsignannotation_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_response_compound->i_ezsignannotation_width
    if(ezsignannotation_response_compound->i_ezsignannotation_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignannotationWidth", ezsignannotation_response_compound->i_ezsignannotation_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignannotation_response_compound->i_ezsignannotation_height
    if(ezsignannotation_response_compound->i_ezsignannotation_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignannotationHeight", ezsignannotation_response_compound->i_ezsignannotation_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignannotation_response_compound->s_ezsignannotation_text
    if(ezsignannotation_response_compound->s_ezsignannotation_text) {
    if(cJSON_AddStringToObject(item, "sEzsignannotationText", ezsignannotation_response_compound->s_ezsignannotation_text) == NULL) {
    goto fail; //String
    }
    }


    // ezsignannotation_response_compound->i_ezsignpage_pagenumber
    if (!ezsignannotation_response_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignannotation_response_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignannotation_response_compound->obj_textstylestatic
    if(ezsignannotation_response_compound->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_response_compound_convertToJSON(ezsignannotation_response_compound->obj_textstylestatic);
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

ezsignannotation_response_compound_t *ezsignannotation_response_compound_parseFromJSON(cJSON *ezsignannotation_response_compoundJSON){

    ezsignannotation_response_compound_t *ezsignannotation_response_compound_local_var = NULL;

    // define the local variable for ezsignannotation_response_compound->e_ezsignannotation_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsignannotation_response_compound->e_ezsignannotation_verticalalignment
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment_local_nonprim = 0;

    // define the local variable for ezsignannotation_response_compound->e_ezsignannotation_type
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type_local_nonprim = 0;

    // define the local variable for ezsignannotation_response_compound->obj_textstylestatic
    textstylestatic_response_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // ezsignannotation_response_compound->pki_ezsignannotation_id
    cJSON *pki_ezsignannotation_id = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "pkiEzsignannotationID");
    if (cJSON_IsNull(pki_ezsignannotation_id)) {
        pki_ezsignannotation_id = NULL;
    }
    if (!pki_ezsignannotation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignannotation_id))
    {
    goto end; //Numeric
    }

    // ezsignannotation_response_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "fkiEzsigndocumentID");
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

    // ezsignannotation_response_compound->e_ezsignannotation_horizontalalignment
    cJSON *e_ezsignannotation_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "eEzsignannotationHorizontalalignment");
    if (cJSON_IsNull(e_ezsignannotation_horizontalalignment)) {
        e_ezsignannotation_horizontalalignment = NULL;
    }
    if (e_ezsignannotation_horizontalalignment) { 
    e_ezsignannotation_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_ezsignannotation_horizontalalignment); //custom
    }

    // ezsignannotation_response_compound->e_ezsignannotation_verticalalignment
    cJSON *e_ezsignannotation_verticalalignment = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "eEzsignannotationVerticalalignment");
    if (cJSON_IsNull(e_ezsignannotation_verticalalignment)) {
        e_ezsignannotation_verticalalignment = NULL;
    }
    if (e_ezsignannotation_verticalalignment) { 
    e_ezsignannotation_verticalalignment_local_nonprim = enum_verticalalignment_parseFromJSON(e_ezsignannotation_verticalalignment); //custom
    }

    // ezsignannotation_response_compound->e_ezsignannotation_type
    cJSON *e_ezsignannotation_type = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "eEzsignannotationType");
    if (cJSON_IsNull(e_ezsignannotation_type)) {
        e_ezsignannotation_type = NULL;
    }
    if (!e_ezsignannotation_type) {
        goto end;
    }

    
    e_ezsignannotation_type_local_nonprim = field_e_ezsignannotation_type_parseFromJSON(e_ezsignannotation_type); //custom

    // ezsignannotation_response_compound->i_ezsignannotation_x
    cJSON *i_ezsignannotation_x = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "iEzsignannotationX");
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

    // ezsignannotation_response_compound->i_ezsignannotation_y
    cJSON *i_ezsignannotation_y = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "iEzsignannotationY");
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

    // ezsignannotation_response_compound->i_ezsignannotation_width
    cJSON *i_ezsignannotation_width = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "iEzsignannotationWidth");
    if (cJSON_IsNull(i_ezsignannotation_width)) {
        i_ezsignannotation_width = NULL;
    }
    if (i_ezsignannotation_width) { 
    if(!cJSON_IsNumber(i_ezsignannotation_width))
    {
    goto end; //Numeric
    }
    }

    // ezsignannotation_response_compound->i_ezsignannotation_height
    cJSON *i_ezsignannotation_height = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "iEzsignannotationHeight");
    if (cJSON_IsNull(i_ezsignannotation_height)) {
        i_ezsignannotation_height = NULL;
    }
    if (i_ezsignannotation_height) { 
    if(!cJSON_IsNumber(i_ezsignannotation_height))
    {
    goto end; //Numeric
    }
    }

    // ezsignannotation_response_compound->s_ezsignannotation_text
    cJSON *s_ezsignannotation_text = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "sEzsignannotationText");
    if (cJSON_IsNull(s_ezsignannotation_text)) {
        s_ezsignannotation_text = NULL;
    }
    if (s_ezsignannotation_text) { 
    if(!cJSON_IsString(s_ezsignannotation_text) && !cJSON_IsNull(s_ezsignannotation_text))
    {
    goto end; //String
    }
    }

    // ezsignannotation_response_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "iEzsignpagePagenumber");
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

    // ezsignannotation_response_compound->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compoundJSON, "objTextstylestatic");
    if (cJSON_IsNull(obj_textstylestatic)) {
        obj_textstylestatic = NULL;
    }
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_response_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }


    ezsignannotation_response_compound_local_var = ezsignannotation_response_compound_create_internal (
        pki_ezsignannotation_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        e_ezsignannotation_horizontalalignment ? e_ezsignannotation_horizontalalignment_local_nonprim : 0,
        e_ezsignannotation_verticalalignment ? e_ezsignannotation_verticalalignment_local_nonprim : 0,
        e_ezsignannotation_type_local_nonprim,
        i_ezsignannotation_x->valuedouble,
        i_ezsignannotation_y->valuedouble,
        i_ezsignannotation_width ? i_ezsignannotation_width->valuedouble : 0,
        i_ezsignannotation_height ? i_ezsignannotation_height->valuedouble : 0,
        s_ezsignannotation_text && !cJSON_IsNull(s_ezsignannotation_text) ? strdup(s_ezsignannotation_text->valuestring) : NULL,
        i_ezsignpage_pagenumber->valuedouble,
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL
        );

    return ezsignannotation_response_compound_local_var;
end:
    if (e_ezsignannotation_horizontalalignment_local_nonprim) {
        e_ezsignannotation_horizontalalignment_local_nonprim = 0;
    }
    if (e_ezsignannotation_verticalalignment_local_nonprim) {
        e_ezsignannotation_verticalalignment_local_nonprim = 0;
    }
    if (e_ezsignannotation_type_local_nonprim) {
        e_ezsignannotation_type_local_nonprim = 0;
    }
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_response_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    return NULL;

}
