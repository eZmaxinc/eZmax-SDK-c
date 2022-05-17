#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturecustomdate_response.h"



ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    char *s_ezsignsignaturecustomdate_format
    ) {
    ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_local_var = malloc(sizeof(ezsignsignaturecustomdate_response_t));
    if (!ezsignsignaturecustomdate_response_local_var) {
        return NULL;
    }
    ezsignsignaturecustomdate_response_local_var->pki_ezsignsignaturecustomdate_id = pki_ezsignsignaturecustomdate_id;
    ezsignsignaturecustomdate_response_local_var->i_ezsignsignaturecustomdate_x = i_ezsignsignaturecustomdate_x;
    ezsignsignaturecustomdate_response_local_var->i_ezsignsignaturecustomdate_y = i_ezsignsignaturecustomdate_y;
    ezsignsignaturecustomdate_response_local_var->s_ezsignsignaturecustomdate_format = s_ezsignsignaturecustomdate_format;

    return ezsignsignaturecustomdate_response_local_var;
}


void ezsignsignaturecustomdate_response_free(ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response) {
    if(NULL == ezsignsignaturecustomdate_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format) {
        free(ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format);
        ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format = NULL;
    }
    free(ezsignsignaturecustomdate_response);
}

cJSON *ezsignsignaturecustomdate_response_convertToJSON(ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignaturecustomdate_response->pki_ezsignsignaturecustomdate_id
    if (!ezsignsignaturecustomdate_response->pki_ezsignsignaturecustomdate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturecustomdateID", ezsignsignaturecustomdate_response->pki_ezsignsignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_x
    if (!ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateX", ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_y
    if (!ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturecustomdateY", ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format
    if (!ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsignaturecustomdateFormat", ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_parseFromJSON(cJSON *ezsignsignaturecustomdate_responseJSON){

    ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_local_var = NULL;

    // ezsignsignaturecustomdate_response->pki_ezsignsignaturecustomdate_id
    cJSON *pki_ezsignsignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_responseJSON, "pkiEzsignsignaturecustomdateID");
    if (!pki_ezsignsignaturecustomdate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignaturecustomdate_id))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_x
    cJSON *i_ezsignsignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_responseJSON, "iEzsignsignaturecustomdateX");
    if (!i_ezsignsignaturecustomdate_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_x))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_response->i_ezsignsignaturecustomdate_y
    cJSON *i_ezsignsignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_responseJSON, "iEzsignsignaturecustomdateY");
    if (!i_ezsignsignaturecustomdate_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturecustomdate_y))
    {
    goto end; //Numeric
    }

    // ezsignsignaturecustomdate_response->s_ezsignsignaturecustomdate_format
    cJSON *s_ezsignsignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsignsignaturecustomdate_responseJSON, "sEzsignsignaturecustomdateFormat");
    if (!s_ezsignsignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsignaturecustomdate_format))
    {
    goto end; //String
    }


    ezsignsignaturecustomdate_response_local_var = ezsignsignaturecustomdate_response_create (
        pki_ezsignsignaturecustomdate_id->valuedouble,
        i_ezsignsignaturecustomdate_x->valuedouble,
        i_ezsignsignaturecustomdate_y->valuedouble,
        strdup(s_ezsignsignaturecustomdate_format->valuestring)
        );

    return ezsignsignaturecustomdate_response_local_var;
end:
    return NULL;

}
