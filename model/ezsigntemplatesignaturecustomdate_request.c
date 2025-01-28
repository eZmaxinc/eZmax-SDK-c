#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_request.h"



static ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_create_internal(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_request_t));
    if (!ezsigntemplatesignaturecustomdate_request_local_var) {
        return NULL;
    }
    ezsigntemplatesignaturecustomdate_request_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    ezsigntemplatesignaturecustomdate_request_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;

    ezsigntemplatesignaturecustomdate_request_local_var->_library_owned = 1;
    return ezsigntemplatesignaturecustomdate_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    return ezsigntemplatesignaturecustomdate_request_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id,
        i_ezsigntemplatesignaturecustomdate_x,
        i_ezsigntemplatesignaturecustomdate_y,
        i_ezsigntemplatesignaturecustomdate_offsetx,
        i_ezsigntemplatesignaturecustomdate_offsety,
        s_ezsigntemplatesignaturecustomdate_format
        );
}

void ezsigntemplatesignaturecustomdate_request_free(ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request) {
    if(NULL == ezsigntemplatesignaturecustomdate_request){
        return ;
    }
    if(ezsigntemplatesignaturecustomdate_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignaturecustomdate_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format) {
        free(ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format);
        ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    free(ezsigntemplatesignaturecustomdate_request);
}

cJSON *ezsigntemplatesignaturecustomdate_request_convertToJSON(ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturecustomdate_request->pki_ezsigntemplatesignaturecustomdate_id
    if(ezsigntemplatesignaturecustomdate_request->pki_ezsigntemplatesignaturecustomdate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturecustomdateID", ezsigntemplatesignaturecustomdate_request->pki_ezsigntemplatesignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x
    if(ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateX", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y
    if(ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateY", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsetx
    if(ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsetx", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsety
    if(ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsety) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsety", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format
    if (!ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturecustomdateFormat", ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_requestJSON){

    ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_local_var = NULL;

    // ezsigntemplatesignaturecustomdate_request->pki_ezsigntemplatesignaturecustomdate_id
    cJSON *pki_ezsigntemplatesignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "pkiEzsigntemplatesignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsigntemplatesignaturecustomdate_id)) {
        pki_ezsigntemplatesignaturecustomdate_id = NULL;
    }
    if (pki_ezsigntemplatesignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x
    cJSON *i_ezsigntemplatesignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateX");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_x)) {
        i_ezsigntemplatesignaturecustomdate_x = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y
    cJSON *i_ezsigntemplatesignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateY");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_y)) {
        i_ezsigntemplatesignaturecustomdate_y = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsetx
    cJSON *i_ezsigntemplatesignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsetx)) {
        i_ezsigntemplatesignaturecustomdate_offsetx = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_offsety
    cJSON *i_ezsigntemplatesignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsigntemplatesignaturecustomdate_offsety)) {
        i_ezsigntemplatesignaturecustomdate_offsety = NULL;
    }
    if (i_ezsigntemplatesignaturecustomdate_offsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "sEzsigntemplatesignaturecustomdateFormat");
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


    ezsigntemplatesignaturecustomdate_request_local_var = ezsigntemplatesignaturecustomdate_request_create_internal (
        pki_ezsigntemplatesignaturecustomdate_id ? pki_ezsigntemplatesignaturecustomdate_id->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_x ? i_ezsigntemplatesignaturecustomdate_x->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_y ? i_ezsigntemplatesignaturecustomdate_y->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_offsetx ? i_ezsigntemplatesignaturecustomdate_offsetx->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_offsety ? i_ezsigntemplatesignaturecustomdate_offsety->valuedouble : 0,
        strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring)
        );

    return ezsigntemplatesignaturecustomdate_request_local_var;
end:
    return NULL;

}
