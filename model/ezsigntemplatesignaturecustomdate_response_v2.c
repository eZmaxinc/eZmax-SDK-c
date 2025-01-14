#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_response_v2.h"



ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_response_v2_t));
    if (!ezsigntemplatesignaturecustomdate_response_v2_local_var) {
        return NULL;
    }
    ezsigntemplatesignaturecustomdate_response_v2_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_response_v2_local_var->i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    ezsigntemplatesignaturecustomdate_response_v2_local_var->i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    ezsigntemplatesignaturecustomdate_response_v2_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;

    return ezsigntemplatesignaturecustomdate_response_v2_local_var;
}


void ezsigntemplatesignaturecustomdate_response_v2_free(ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2) {
    if(NULL == ezsigntemplatesignaturecustomdate_response_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format) {
        free(ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format);
        ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    free(ezsigntemplatesignaturecustomdate_response_v2);
}

cJSON *ezsigntemplatesignaturecustomdate_response_v2_convertToJSON(ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturecustomdate_response_v2->pki_ezsigntemplatesignaturecustomdate_id
    if (!ezsigntemplatesignaturecustomdate_response_v2->pki_ezsigntemplatesignaturecustomdate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturecustomdateID", ezsigntemplatesignaturecustomdate_response_v2->pki_ezsigntemplatesignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsetx
    if (!ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsetx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsetx", ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsetx) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsety
    if (!ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsety) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateOffsety", ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsety) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format
    if (!ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturecustomdateFormat", ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_response_v2JSON){

    ezsigntemplatesignaturecustomdate_response_v2_t *ezsigntemplatesignaturecustomdate_response_v2_local_var = NULL;

    // ezsigntemplatesignaturecustomdate_response_v2->pki_ezsigntemplatesignaturecustomdate_id
    cJSON *pki_ezsigntemplatesignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_v2JSON, "pkiEzsigntemplatesignaturecustomdateID");
    if (!pki_ezsigntemplatesignaturecustomdate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsetx
    cJSON *i_ezsigntemplatesignaturecustomdate_offsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_v2JSON, "iEzsigntemplatesignaturecustomdateOffsetx");
    if (!i_ezsigntemplatesignaturecustomdate_offsetx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsetx))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response_v2->i_ezsigntemplatesignaturecustomdate_offsety
    cJSON *i_ezsigntemplatesignaturecustomdate_offsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_v2JSON, "iEzsigntemplatesignaturecustomdateOffsety");
    if (!i_ezsigntemplatesignaturecustomdate_offsety) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_offsety))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response_v2->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_response_v2JSON, "sEzsigntemplatesignaturecustomdateFormat");
    if (!s_ezsigntemplatesignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesignaturecustomdate_format))
    {
    goto end; //String
    }


    ezsigntemplatesignaturecustomdate_response_v2_local_var = ezsigntemplatesignaturecustomdate_response_v2_create (
        pki_ezsigntemplatesignaturecustomdate_id->valuedouble,
        i_ezsigntemplatesignaturecustomdate_offsetx->valuedouble,
        i_ezsigntemplatesignaturecustomdate_offsety->valuedouble,
        strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring)
        );

    return ezsigntemplatesignaturecustomdate_response_v2_local_var;
end:
    return NULL;

}
