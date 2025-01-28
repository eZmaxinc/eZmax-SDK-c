#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturecustomdate_response_compound.h"



static ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_create_internal(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_local_var = malloc(sizeof(ezsignsignaturecustomdate_response_compound_t));
    if (!ezsignsignaturecustomdate_response_compound_local_var) {
        return NULL;
    }
    ezsignsignaturecustomdate_response_compound_local_var->pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    ezsignsignaturecustomdate_response_compound_local_var->i_ezsignsignaturecustomdate_x = i_ezsignsignaturecustomdate_x;
    ezsignsignaturecustomdate_response_compound_local_var->i_ezsignsignaturecustomdate_y = i_ezsignsignaturecustomdate_y;
    ezsignsignaturecustomdate_response_compound_local_var->i_ezsignsignaturecustomdate_offsetx = i_ezsignsignaturecustomdate_offsetx;
    ezsignsignaturecustomdate_response_compound_local_var->i_ezsignsignaturecustomdate_offsety = i_ezsignsignaturecustomdate_offsety;
    ezsignsignaturecustomdate_response_compound_local_var->s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;

    ezsignsignaturecustomdate_response_compound_local_var->_library_owned = 1;
    return ezsignsignaturecustomdate_response_compound_local_var;
}

__attribute__((deprecated)) ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    return ezsignsignaturecustomdate_response_compound_create_internal (
        pki_ezsignsignaturecustomdate_id,
        i_ezsignsignaturecustomdate_x,
        i_ezsignsignaturecustomdate_y,
        i_ezsignsignaturecustomdate_offsetx,
        i_ezsignsignaturecustomdate_offsety,
        s_ezsignsignaturecustomdate_format
        );
}

void ezsignsignaturecustomdate_response_compound_free(ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound) {
    if(NULL == ezsignsignaturecustomdate_response_compound){
        return ;
    }
    if(ezsignsignaturecustomdate_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignaturecustomdate_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format) {
        free(ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format);
        ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format = NULL;
    }
    free(ezsignsignaturecustomdate_response_compound);
}

cJSON *ezsignsignaturecustomdate_response_compound_convertToJSON(ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignaturecustomdate_response_compound->pki_ezsignsignaturecustomdate_id
    if (!ezsignsignaturecustomdate_response_compound->pki_ezsignsignaturecustomdate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturecustomdateID", ezsignsignaturecustomdate_response_compound->pki_ezsignsignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_x
    if(ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_x) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateX", ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_y
    if(ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_y) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateY", ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsetx
    if(ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsetx", ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsety
    if(ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsety) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsety", ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format
    if (!ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsignaturecustomdateFormat", ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_parseFromJSON(cJSON *ezsignsignaturecustomdate_response_compoundJSON){

    ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_local_var = NULL;

    // ezsignsignaturecustomdate_response_compound->pki_ezsignsignaturecustomdate_id
    cJSON *pki_ezsignsignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "pkiEzsignsignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsignsignaturecustomdate_id)) {
        pki_ezsignsignaturecustomdate_id = NULL;
    }
    if (!pki_ezsignsignaturecustomdate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignaturecustomdate_id))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_x
    cJSON *i_ezsignsignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "iEzsignsignaturecustomdateX");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_x)) {
        i_ezsignsignaturecustomdate_x = NULL;
    }
    if (i_ezsignsignaturecustomdate_x) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_x))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_y
    cJSON *i_ezsignsignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "iEzsignsignaturecustomdateY");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_y)) {
        i_ezsignsignaturecustomdate_y = NULL;
    }
    if (i_ezsignsignaturecustomdate_y) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_y))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsetx
    cJSON *i_ezsignsignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "iEzsignsignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsetx)) {
        i_ezsignsignaturecustomdate_offsetx = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsetx) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_response_compound->i_ezsignsignaturecustomdate_offsety
    cJSON *i_ezsignsignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "iEzsignsignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsety)) {
        i_ezsignsignaturecustomdate_offsety = NULL;
    }
    if (i_ezsignsignaturecustomdate_offsety) { 
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_response_compound->s_ezsignsignaturecustomdate_format
    cJSON *s_ezsignsignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_response_compoundJSON, "sEzsignsignaturecustomdateFormat");
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


    ezsignsignaturecustomdate_response_compound_local_var = ezsignsignaturecustomdate_response_compound_create_internal (
        pki_ezsignsignaturecustomdate_id->valuedouble,
        i_ezsignsignaturecustomdate_x ? i_ezsignsignaturecustomdate_x->valuedouble : 0,
        i_ezsignsignaturecustomdate_y ? i_ezsignsignaturecustomdate_y->valuedouble : 0,
        i_ezsignsignaturecustomdate_offsetx ? i_ezsignsignaturecustomdate_offsetx->valuedouble : 0,
        i_ezsignsignaturecustomdate_offsety ? i_ezsignsignaturecustomdate_offsety->valuedouble : 0,
        strdup(s_ezsignsignaturecustomdate_format->valuestring)
        );

    return ezsignsignaturecustomdate_response_compound_local_var;
end:
    return NULL;

}
