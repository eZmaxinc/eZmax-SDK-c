#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_response_compound.h"



static ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_create_internal(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_response_compound_t));
    if (!ezsigntemplatesignaturecustomdate_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatesignaturecustomdate_response_compound_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_response_compound_local_var->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    ezsigntemplatesignaturecustomdate_response_compound_local_var->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    ezsigntemplatesignaturecustomdate_response_compound_local_var->i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    ezsigntemplatesignaturecustomdate_response_compound_local_var->i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    ezsigntemplatesignaturecustomdate_response_compound_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;

    ezsigntemplatesignaturecustomdate_response_compound_local_var->_library_owned = 1;
    return ezsigntemplatesignaturecustomdate_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    return ezsigntemplatesignaturecustomdate_response_compound_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id,
        i_ezsigntemplatesignaturecustomdate_x,
        i_ezsigntemplatesignaturecustomdate_y,
        i_ezsigntemplatesignaturecustomdate_offsetx,
        i_ezsigntemplatesignaturecustomdate_offsety,
        s_ezsigntemplatesignaturecustomdate_format
        );
}

void ezsigntemplatesignaturecustomdate_response_compound_free(ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound) {
    if(NULL == ezsigntemplatesignaturecustomdate_response_compound){
        return ;
    }
    if(ezsigntemplatesignaturecustomdate_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignaturecustomdate_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format) {
        free(ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format);
        ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    free(ezsigntemplatesignaturecustomdate_response_compound);
}

cJSON *ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturecustomdate_response_compound->pki_ezsigntemplatesignaturecustomdate_id
    if (!ezsigntemplatesignaturecustomdate_response_compound->pki_ezsigntemplatesignaturecustomdate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturecustomdateID", ezsigntemplatesignaturecustomdate_response_compound->pki_ezsigntemplatesignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_x
    if(ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateX", ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_y
    if(ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateY", ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsetx
    if(ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsetx", ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsety
    if(ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsety) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsety", ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format
    if (!ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturecustomdateFormat", ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_response_compoundJSON){

    ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_local_var = NULL;

    // ezsigntemplatesignaturecustomdate_response_compound->pki_ezsigntemplatesignaturecustomdate_id
    cJSON *pki_ezsigntemplatesignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "pkiEzsigntemplatesignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsigntemplatesignaturecustomdate_id)) {
        pki_ezsigntemplatesignaturecustomdate_id = NULL;
    }
    if (!pki_ezsigntemplatesignaturecustomdate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_x
    cJSON *i_ezsigntemplatesignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "iEzsigntemplatesignaturecustomdateX");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_x)) {
        i_ezsigntemplatesignaturecustomdate_x = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_y
    cJSON *i_ezsigntemplatesignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "iEzsigntemplatesignaturecustomdateY");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_y)) {
        i_ezsigntemplatesignaturecustomdate_y = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsetx
    cJSON *i_ezsigntemplatesignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "iEzsigntemplatesignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsetx)) {
        i_ezsigntemplatesignaturecustomdate_offsetx = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_response_compound->i_ezsigntemplatesignaturecustomdate_offsety
    cJSON *i_ezsigntemplatesignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "iEzsigntemplatesignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsety)) {
        i_ezsigntemplatesignaturecustomdate_offsety = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_response_compound->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_compoundJSON, "sEzsigntemplatesignaturecustomdateFormat");
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


    ezsigntemplatesignaturecustomdate_response_compound_local_var = ezsigntemplatesignaturecustomdate_response_compound_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id->valuedouble,
        i_ezsigntemplatesignaturecustomdate_x ? i_ezsigntemplatesignaturecustomdate_x->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_y ? i_ezsigntemplatesignaturecustomdate_y->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_offsetx ? i_ezsigntemplatesignaturecustomdate_offsetx->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_offsety ? i_ezsigntemplatesignaturecustomdate_offsety->valuedouble : 0,
        strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring)
        );

    return ezsigntemplatesignaturecustomdate_response_compound_local_var;
end:
    return NULL;

}
