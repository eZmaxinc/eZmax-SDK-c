#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturecustomdate_request_compound.h"



ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    char *s_ezsignsignaturecustomdate_format
    ) {
    ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound_local_var = malloc(sizeof(ezsignsignaturecustomdate_request_compound_t));
    if (!ezsignsignaturecustomdate_request_compound_local_var) {
        return NULL;
    }
    ezsignsignaturecustomdate_request_compound_local_var->pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_x = i_ezsignsignaturecustomdate_x;
    ezsignsignaturecustomdate_request_compound_local_var->i_ezsignsignaturecustomdate_y = i_ezsignsignaturecustomdate_y;
    ezsignsignaturecustomdate_request_compound_local_var->s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;

    return ezsignsignaturecustomdate_request_compound_local_var;
}


void ezsignsignaturecustomdate_request_compound_free(ezsignsignaturecustomdate_request_compound_t *ezsignsignaturecustomdate_request_compound) {
    if(NULL == ezsignsignaturecustomdate_request_compound){
        return ;
    }
    listEntry_t *listEntry;
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
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturecustomdateID", ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x
    if (!ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateX", ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y
    if (!ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateY", ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
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

    // ezsignsignaturecustomdate_request_compound->pki_ezsignsignaturecustomdate_id
    cJSON *pki_ezsignsignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "pkiEzsignsignaturecustomdateID");
    if (pki_ezsignsignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_x
    cJSON *i_ezsignsignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateX");
    if (!i_ezsignsignaturecustomdate_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_x))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_request_compound->i_ezsignsignaturecustomdate_y
    cJSON *i_ezsignsignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "iEzsignsignaturecustomdateY");
    if (!i_ezsignsignaturecustomdate_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_y))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_request_compound->s_ezsignsignaturecustomdate_format
    cJSON *s_ezsignsignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_request_compoundJSON, "sEzsignsignaturecustomdateFormat");
    if (!s_ezsignsignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsignaturecustomdate_format))
    {
    goto end; //String
    }


    ezsignsignaturecustomdate_request_compound_local_var = ezsignsignaturecustomdate_request_compound_create (
        pki_ezsignsignaturecustomdate_id ? pki_ezsignsignaturecustomdate_id->valuedouble : 0,
        i_ezsignsignaturecustomdate_x->valuedouble,
        i_ezsignsignaturecustomdate_y->valuedouble,
        strdup(s_ezsignsignaturecustomdate_format->valuestring)
        );

    return ezsignsignaturecustomdate_request_compound_local_var;
end:
    return NULL;

}
