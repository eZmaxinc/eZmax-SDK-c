#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturecustomdate_request_compound.h"



static ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_create_internal(
    int *pki_ezsignsignaturecustomdate_id,
    int *i_ezsignsignaturecustomdate_x,
    int *i_ezsignsignaturecustomdate_y,
    int *i_ezsignsignaturecustomdate_offsetx,
    int *i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_local_var = malloc(sizeof(ezsignsignaturecustomdate_request_compound_t));
    if (!ezsignsignaturecustomdate_request_compound_local_var) {
        return NULL;
    }
    memset(ezsignsignaturecustomdate_request_compound_local_var, 0, sizeof(ezsignsignaturecustomdate_request_compound_t));
    ezsignsignaturecustomdate_request_compound_local_var->_library_owned = 1;
    ezsignsignaturecustomdate_request_compound_local_var->pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_x = i_ezsignsignaturecustomdate_x;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_y = i_ezsignsignaturecustomdate_y;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_offsetx = i_ezsignsignaturecustomdate_offsetx;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_offsety = i_ezsignsignaturecustomdate_offsety;
    ezsignsignaturecustomdate_request_compound_local_var->s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;
    return ezsignsignaturecustomdate_request_compound_local_var;
}

__attribute__((deprecated)) ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_create(
    int *pki_ezsignsignaturecustomdate_id,
    int *i_ezsignsignaturecustomdate_x,
    int *i_ezsignsignaturecustomdate_y,
    int *i_ezsignsignaturecustomdate_offsetx,
    int *i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    int *pki_ezsignsignaturecustomdate_id_copy = NULL;
    if (pki_ezsignsignaturecustomdate_id) {
        pki_ezsignsignaturecustomdate_id_copy = malloc(sizeof(int));
        if (pki_ezsignsignaturecustomdate_id_copy) *pki_ezsignsignaturecustomdate_id_copy = *pki_ezsignsignaturecustomdate_id;
    }
    int *i_ezsignsignaturecustomdate_x_copy = NULL;
    if (i_ezsignsignaturecustomdate_x) {
        i_ezsignsignaturecustomdate_x_copy = malloc(sizeof(int));
        if (i_ezsignsignaturecustomdate_x_copy) *i_ezsignsignaturecustomdate_x_copy = *i_ezsignsignaturecustomdate_x;
    }
    int *i_ezsignsignaturecustomdate_y_copy = NULL;
    if (i_ezsignsignaturecustomdate_y) {
        i_ezsignsignaturecustomdate_y_copy = malloc(sizeof(int));
        if (i_ezsignsignaturecustomdate_y_copy) *i_ezsignsignaturecustomdate_y_copy = *i_ezsignsignaturecustomdate_y;
    }
    int *i_ezsignsignaturecustomdate_offsetx_copy = NULL;
    if (i_ezsignsignaturecustomdate_offsetx) {
        i_ezsignsignaturecustomdate_offsetx_copy = malloc(sizeof(int));
        if (i_ezsignsignaturecustomdate_offsetx_copy) *i_ezsignsignaturecustomdate_offsetx_copy = *i_ezsignsignaturecustomdate_offsetx;
    }
    int *i_ezsignsignaturecustomdate_offsety_copy = NULL;
    if (i_ezsignsignaturecustomdate_offsety) {
        i_ezsignsignaturecustomdate_offsety_copy = malloc(sizeof(int));
        if (i_ezsignsignaturecustomdate_offsety_copy) *i_ezsignsignaturecustomdate_offsety_copy = *i_ezsignsignaturecustomdate_offsety;
    }
    ezsignsignaturecustomdate_request_compound_t *result = ezsignsignaturecustomdate_request_compound_create_internal (
        pki_ezsignsignaturecustomdate_id_copy,
        i_ezsignsignaturecustomdate_x_copy,
        i_ezsignsignaturecustomdate_y_copy,
        i_ezsignsignaturecustomdate_offsetx_copy,
        i_ezsignsignaturecustomdate_offsety_copy,
        s_ezsignsignaturecustomdate_format
        );
    if (!result) {
        free(pki_ezsignsignaturecustomdate_id_copy);
        free(i_ezsignsignaturecustomdate_x_copy);
        free(i_ezsignsignaturecustomdate_y_copy);
        free(i_ezsignsignaturecustomdate_offsetx_copy);
        free(i_ezsignsignaturecustomdate_offsety_copy);
    }
    return result;
}

void ezsignsignaturecustomdate_request_compound_free(ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound) {
    if(NULL == ezsignsignaturecustomdate_request_compound){
        return ;
    }
    if(ezsignsignaturecustomdate_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignaturecustomdate_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id) {
        free(ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id);
        ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id = NULL;
    }
    if (ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x) {
        free(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x);
        ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x = NULL;
    }
    if (ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y) {
        free(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y);
        ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y = NULL;
    }
    if (ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx) {
        free(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx);
        ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx = NULL;
    }
    if (ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety) {
        free(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety);
        ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety = NULL;
    }
    if (ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format) {
        free(ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format);
        ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format = NULL;
    }
    free(ezsignsignaturecustomdate_request_compound);
}

cJSON *ezsignsignaturecustomdate_request_compound_convertToJSON(ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id
    if(ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturecustomdateID", *ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x
    if(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateX", *ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y
    if(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateY", *ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx
    if(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsetx", *ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety
    if(ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsety", *ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format
    if (!ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsignaturecustomdateFormat", ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_parseFromJSON(cJSON *ezsignsignaturecustomdate_request_compoundJSON){

    ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_local_var = NULL;

    // define the local variable for ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id
    int *pki_ezsignsignaturecustomdate_id_local_var = NULL;

    // define the local variable for ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x
    int *i_ezsignsignaturecustomdate_x_local_var = NULL;

    // define the local variable for ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y
    int *i_ezsignsignaturecustomdate_y_local_var = NULL;

    // define the local variable for ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx
    int *i_ezsignsignaturecustomdate_offsetx_local_var = NULL;

    // define the local variable for ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety
    int *i_ezsignsignaturecustomdate_offsety_local_var = NULL;

    char *s_ezsignsignaturecustomdate_format_local_str = NULL;

    // ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id
    cJSON *pki_ezsignsignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "pkiEzsignsignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsignsignaturecustomdate_id)) {
        pki_ezsignsignaturecustomdate_id = NULL;
    }
    if (pki_ezsignsignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    pki_ezsignsignaturecustomdate_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignsignaturecustomdate_id_local_var)
    {
        goto end;
    }
    *pki_ezsignsignaturecustomdate_id_local_var = pki_ezsignsignaturecustomdate_id->valuedouble;
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x
    cJSON *i_ezsignsignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateX");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_x)) {
        i_ezsignsignaturecustomdate_x = NULL;
    }
    if (i_ezsignsignaturecustomdate_x) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_x))
    {
    goto end; //Numeric
    }
    i_ezsignsignaturecustomdate_x_local_var = malloc(sizeof(int));
    if(!i_ezsignsignaturecustomdate_x_local_var)
    {
        goto end;
    }
    *i_ezsignsignaturecustomdate_x_local_var = i_ezsignsignaturecustomdate_x->valuedouble;
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y
    cJSON *i_ezsignsignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateY");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_y)) {
        i_ezsignsignaturecustomdate_y = NULL;
    }
    if (i_ezsignsignaturecustomdate_y) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_y))
    {
    goto end; //Numeric
    }
    i_ezsignsignaturecustomdate_y_local_var = malloc(sizeof(int));
    if(!i_ezsignsignaturecustomdate_y_local_var)
    {
        goto end;
    }
    *i_ezsignsignaturecustomdate_y_local_var = i_ezsignsignaturecustomdate_y->valuedouble;
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsetx
    cJSON *i_ezsignsignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsetx)) {
        i_ezsignsignaturecustomdate_offsetx = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsetx) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }
    i_ezsignsignaturecustomdate_offsetx_local_var = malloc(sizeof(int));
    if(!i_ezsignsignaturecustomdate_offsetx_local_var)
    {
        goto end;
    }
    *i_ezsignsignaturecustomdate_offsetx_local_var = i_ezsignsignaturecustomdate_offsetx->valuedouble;
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_offsety
    cJSON *i_ezsignsignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsety)) {
        i_ezsignsignaturecustomdate_offsety = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsety) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }
    i_ezsignsignaturecustomdate_offsety_local_var = malloc(sizeof(int));
    if(!i_ezsignsignaturecustomdate_offsety_local_var)
    {
        goto end;
    }
    *i_ezsignsignaturecustomdate_offsety_local_var = i_ezsignsignaturecustomdate_offsety->valuedouble;
    }

    // ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format
    cJSON *s_ezsignsignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "sEzsignsignaturecustomdateFormat");
    if (cJSON_IsNull(s_ezsignsignaturecustomdate_format)) {
        s_ezsignsignaturecustomdate_format = NULL;
    }
    if (!s_ezsignsignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsignaturecustomdate_format))
    {
    goto end; //String
    }


    if (s_ezsignsignaturecustomdate_format && !cJSON_IsNull(s_ezsignsignaturecustomdate_format)) s_ezsignsignaturecustomdate_format_local_str = strdup(s_ezsignsignaturecustomdate_format->valuestring);

    ezsignsignaturecustomdate_request_compound_local_var = ezsignsignaturecustomdate_request_compound_create_internal (
        pki_ezsignsignaturecustomdate_id_local_var,
        i_ezsignsignaturecustomdate_x_local_var,
        i_ezsignsignaturecustomdate_y_local_var,
        i_ezsignsignaturecustomdate_offsetx_local_var,
        i_ezsignsignaturecustomdate_offsety_local_var,
        s_ezsignsignaturecustomdate_format_local_str
        );

    if (!ezsignsignaturecustomdate_request_compound_local_var) {
        goto end;
    }

    return ezsignsignaturecustomdate_request_compound_local_var;
end:
    if (pki_ezsignsignaturecustomdate_id_local_var) {
        free(pki_ezsignsignaturecustomdate_id_local_var);
        pki_ezsignsignaturecustomdate_id_local_var = NULL;
    }
    if (i_ezsignsignaturecustomdate_x_local_var) {
        free(i_ezsignsignaturecustomdate_x_local_var);
        i_ezsignsignaturecustomdate_x_local_var = NULL;
    }
    if (i_ezsignsignaturecustomdate_y_local_var) {
        free(i_ezsignsignaturecustomdate_y_local_var);
        i_ezsignsignaturecustomdate_y_local_var = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsetx_local_var) {
        free(i_ezsignsignaturecustomdate_offsetx_local_var);
        i_ezsignsignaturecustomdate_offsetx_local_var = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsety_local_var) {
        free(i_ezsignsignaturecustomdate_offsety_local_var);
        i_ezsignsignaturecustomdate_offsety_local_var = NULL;
    }
    if (s_ezsignsignaturecustomdate_format_local_str) {
        free(s_ezsignsignaturecustomdate_format_local_str);
        s_ezsignsignaturecustomdate_format_local_str = NULL;
    }
    return NULL;

}
