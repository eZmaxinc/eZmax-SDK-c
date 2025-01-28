#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturecustomdate_request_compound_v2.h"



static ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_create_internal(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_local_var = malloc(sizeof(ezsignsignaturecustomdate_request_compound_v2_t));
    if (!ezsignsignaturecustomdate_request_compound_v2_local_var) {
        return NULL;
    }
    ezsignsignaturecustomdate_request_compound_v2_local_var->pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    ezsignsignaturecustomdate_request_compound_v2_local_var->i_ezsignsignaturecustomdate_offsetx = i_ezsignsignaturecustomdate_offsetx;
    ezsignsignaturecustomdate_request_compound_v2_local_var->i_ezsignsignaturecustomdate_offsety = i_ezsignsignaturecustomdate_offsety;
    ezsignsignaturecustomdate_request_compound_v2_local_var->s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;

    ezsignsignaturecustomdate_request_compound_v2_local_var->_library_owned = 1;
    return ezsignsignaturecustomdate_request_compound_v2_local_var;
}

__attribute__((deprecated)) ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
    ) {
    return ezsignsignaturecustomdate_request_compound_v2_create_internal (
        pki_ezsignsignaturecustomdate_id,
        i_ezsignsignaturecustomdate_offsetx,
        i_ezsignsignaturecustomdate_offsety,
        s_ezsignsignaturecustomdate_format
        );
}

void ezsignsignaturecustomdate_request_compound_v2_free(ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2) {
    if(NULL == ezsignsignaturecustomdate_request_compound_v2){
        return ;
    }
    if(ezsignsignaturecustomdate_request_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignaturecustomdate_request_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format) {
        free(ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format);
        ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format = NULL;
    }
    free(ezsignsignaturecustomdate_request_compound_v2);
}

cJSON *ezsignsignaturecustomdate_request_compound_v2_convertToJSON(ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignaturecustomdate_request_compound_v2->pki_ezsignsignaturecustomdate_id
    if(ezsignsignaturecustomdate_request_compound_v2->pki_ezsignsignaturecustomdate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturecustomdateID", ezsignsignaturecustomdate_request_compound_v2->pki_ezsignsignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsetx
    if (!ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsetx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsetx", ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsety
    if (!ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsety) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateOffsety", ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format
    if (!ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsignaturecustomdateFormat", ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_parseFromJSON(cJSON *ezsignsignaturecustomdate_request_compound_v2JSON){

    ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_local_var = NULL;

    // ezsignsignaturecustomdate_request_compound_v2->pki_ezsignsignaturecustomdate_id
    cJSON *pki_ezsignsignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compound_v2JSON, "pkiEzsignsignaturecustomdateID");
    if (cJSON_IsNull(pki_ezsignsignaturecustomdate_id)) {
        pki_ezsignsignaturecustomdate_id = NULL;
    }
    if (pki_ezsignsignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsetx
    cJSON *i_ezsignsignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compound_v2JSON, "iEzsignsignaturecustomdateOffsetx");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsetx)) {
        i_ezsignsignaturecustomdate_offsetx = NULL;
    }
    if (!i_ezsignsignaturecustomdate_offsetx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_request_compound_v2->i_ezsignsignaturecustomdate_offsety
    cJSON *i_ezsignsignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compound_v2JSON, "iEzsignsignaturecustomdateOffsety");
    if (cJSON_IsNull(i_ezsignsignaturecustomdate_offsety)) {
        i_ezsignsignaturecustomdate_offsety = NULL;
    }
    if (!i_ezsignsignaturecustomdate_offsety) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_request_compound_v2->s_ezsignsignaturecustomdate_format
    cJSON *s_ezsignsignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compound_v2JSON, "sEzsignsignaturecustomdateFormat");
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


    ezsignsignaturecustomdate_request_compound_v2_local_var = ezsignsignaturecustomdate_request_compound_v2_create_internal (
        pki_ezsignsignaturecustomdate_id ? pki_ezsignsignaturecustomdate_id->valuedouble : 0,
        i_ezsignsignaturecustomdate_offsetx->valuedouble,
        i_ezsignsignaturecustomdate_offsety->valuedouble,
        strdup(s_ezsignsignaturecustomdate_format->valuestring)
        );

    return ezsignsignaturecustomdate_request_compound_v2_local_var;
end:
    return NULL;

}
