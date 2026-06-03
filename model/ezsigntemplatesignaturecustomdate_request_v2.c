#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_request_v2.h"



static ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2_create_internal(
    int *pki_ezsigntemplatesignaturecustomdate_id,
    int *i_ezsigntemplatesignaturecustomdate_offsetx,
    int *i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_request_v2_t));
    if (!ezsigntemplatesignaturecustomdate_request_v2_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesignaturecustomdate_request_v2_local_var, 0, sizeof(ezsigntemplatesignaturecustomdate_request_v2_t));
    ezsigntemplatesignaturecustomdate_request_v2_local_var->_library_owned = 1;
    ezsigntemplatesignaturecustomdate_request_v2_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_request_v2_local_var->i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    ezsigntemplatesignaturecustomdate_request_v2_local_var->i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    ezsigntemplatesignaturecustomdate_request_v2_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;
    return ezsigntemplatesignaturecustomdate_request_v2_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2_create(
    int *pki_ezsigntemplatesignaturecustomdate_id,
    int *i_ezsigntemplatesignaturecustomdate_offsetx,
    int *i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    int *pki_ezsigntemplatesignaturecustomdate_id_copy = NULL;
    if (pki_ezsigntemplatesignaturecustomdate_id) {
        pki_ezsigntemplatesignaturecustomdate_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatesignaturecustomdate_id_copy) *pki_ezsigntemplatesignaturecustomdate_id_copy = *pki_ezsigntemplatesignaturecustomdate_id;
    }
    int *i_ezsigntemplatesignaturecustomdate_offsetx_copy = NULL;
    if (i_ezsigntemplatesignaturecustomdate_offsetx) {
        i_ezsigntemplatesignaturecustomdate_offsetx_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignaturecustomdate_offsetx_copy) *i_ezsigntemplatesignaturecustomdate_offsetx_copy = *i_ezsigntemplatesignaturecustomdate_offsetx;
    }
    int *i_ezsigntemplatesignaturecustomdate_offsety_copy = NULL;
    if (i_ezsigntemplatesignaturecustomdate_offsety) {
        i_ezsigntemplatesignaturecustomdate_offsety_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignaturecustomdate_offsety_copy) *i_ezsigntemplatesignaturecustomdate_offsety_copy = *i_ezsigntemplatesignaturecustomdate_offsety;
    }
    ezsigntemplatesignaturecustomdate_request_v2_t *result = ezsigntemplatesignaturecustomdate_request_v2_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id_copy,
        i_ezsigntemplatesignaturecustomdate_offsetx_copy,
        i_ezsigntemplatesignaturecustomdate_offsety_copy,
        s_ezsigntemplatesignaturecustomdate_format
        );
    if (!result) {
        free(pki_ezsigntemplatesignaturecustomdate_id_copy);
        free(i_ezsigntemplatesignaturecustomdate_offsetx_copy);
        free(i_ezsigntemplatesignaturecustomdate_offsety_copy);
    }
    return result;
}

void ezsigntemplatesignaturecustomdate_request_v2_free(ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2) {
    if(NULL == ezsigntemplatesignaturecustomdate_request_v2){
        return ;
    }
    if(ezsigntemplatesignaturecustomdate_request_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignaturecustomdate_request_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id) {
        free(ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id);
        ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id = NULL;
    }
    if (ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx) {
        free(ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx);
        ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx = NULL;
    }
    if (ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety) {
        free(ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety);
        ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety = NULL;
    }
    if (ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format) {
        free(ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format);
        ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    free(ezsigntemplatesignaturecustomdate_request_v2);
}

cJSON *ezsigntemplatesignaturecustomdate_request_v2_convertToJSON(ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id
    if(ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturecustomdateID", *ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx
    if (!ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsetx", *ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety
    if (!ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsety", *ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format
    if (!ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturecustomdateFormat", ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_request_v2JSON){

    ezsigntemplatesignaturecustomdate_request_v2_t *ezsigntemplatesignaturecustomdate_request_v2_local_var = NULL;

    // define the local variable for ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id
    int *pki_ezsigntemplatesignaturecustomdate_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx
    int *i_ezsigntemplatesignaturecustomdate_offsetx_local_var = NULL;

    // define the local variable for ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety
    int *i_ezsigntemplatesignaturecustomdate_offsety_local_var = NULL;

    char *s_ezsigntemplatesignaturecustomdate_format_local_str = NULL;

    // ezsigntemplatesignaturecustomdate_request_v2->pki_ezsigntemplatesignaturecustomdate_id
    cJSON *pki_ezsigntemplatesignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_request_v2JSON, "pkiEzsigntemplatesignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsigntemplatesignaturecustomdate_id)) {
        pki_ezsigntemplatesignaturecustomdate_id = NULL;
    }
    if (pki_ezsigntemplatesignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatesignaturecustomdate_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatesignaturecustomdate_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatesignaturecustomdate_id_local_var = pki_ezsigntemplatesignaturecustomdate_id->valuedouble;
    }

    // ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsetx
    cJSON *i_ezsigntemplatesignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_request_v2JSON, "iEzsigntemplatesignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsetx)) {
        i_ezsigntemplatesignaturecustomdate_offsetx = NULL;
    }
    if (!i_ezsigntemplatesignaturecustomdate_offsetx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignaturecustomdate_offsetx_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignaturecustomdate_offsetx_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignaturecustomdate_offsetx_local_var = i_ezsigntemplatesignaturecustomdate_offsetx->valuedouble;

    // ezsigntemplatesignaturecustomdate_request_v2->i_ezsigntemplatesignaturecustomdate_offsety
    cJSON *i_ezsigntemplatesignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_request_v2JSON, "iEzsigntemplatesignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsety)) {
        i_ezsigntemplatesignaturecustomdate_offsety = NULL;
    }
    if (!i_ezsigntemplatesignaturecustomdate_offsety) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignaturecustomdate_offsety_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignaturecustomdate_offsety_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignaturecustomdate_offsety_local_var = i_ezsigntemplatesignaturecustomdate_offsety->valuedouble;

    // ezsigntemplatesignaturecustomdate_request_v2->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_request_v2JSON, "sEzsigntemplatesignaturecustomdateFormat");
    if (cJSON_IsNull(s_ezsigntemplatesignaturecustomdate_format)) {
        s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    if (!s_ezsigntemplatesignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesignaturecustomdate_format))
    {
    goto end; //String
    }


    if (s_ezsigntemplatesignaturecustomdate_format && !cJSON_IsNull(s_ezsigntemplatesignaturecustomdate_format)) s_ezsigntemplatesignaturecustomdate_format_local_str = strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring);

    ezsigntemplatesignaturecustomdate_request_v2_local_var = ezsigntemplatesignaturecustomdate_request_v2_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id_local_var,
        i_ezsigntemplatesignaturecustomdate_offsetx_local_var,
        i_ezsigntemplatesignaturecustomdate_offsety_local_var,
        s_ezsigntemplatesignaturecustomdate_format_local_str
        );

    if (!ezsigntemplatesignaturecustomdate_request_v2_local_var) {
        goto end;
    }

    return ezsigntemplatesignaturecustomdate_request_v2_local_var;
end:
    if (pki_ezsigntemplatesignaturecustomdate_id_local_var) {
        free(pki_ezsigntemplatesignaturecustomdate_id_local_var);
        pki_ezsigntemplatesignaturecustomdate_id_local_var = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsetx_local_var) {
        free(i_ezsigntemplatesignaturecustomdate_offsetx_local_var);
        i_ezsigntemplatesignaturecustomdate_offsetx_local_var = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsety_local_var) {
        free(i_ezsigntemplatesignaturecustomdate_offsety_local_var);
        i_ezsigntemplatesignaturecustomdate_offsety_local_var = NULL;
    }
    if (s_ezsigntemplatesignaturecustomdate_format_local_str) {
        free(s_ezsigntemplatesignaturecustomdate_format_local_str);
        s_ezsigntemplatesignaturecustomdate_format_local_str = NULL;
    }
    return NULL;

}
