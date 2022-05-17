#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_response.h"



ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_response_t));
    if (!ezsigntemplatesignaturecustomdate_response_local_var) {
        return NULL;
    }
    ezsigntemplatesignaturecustomdate_response_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_response_local_var->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    ezsigntemplatesignaturecustomdate_response_local_var->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    ezsigntemplatesignaturecustomdate_response_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;

    return ezsigntemplatesignaturecustomdate_response_local_var;
}


void ezsigntemplatesignaturecustomdate_response_free(ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response) {
    if(NULL == ezsigntemplatesignaturecustomdate_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format) {
        free(ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format);
        ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format = NULL;
    }
    free(ezsigntemplatesignaturecustomdate_response);
}

cJSON *ezsigntemplatesignaturecustomdate_response_convertToJSON(ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturecustomdate_response->pki_ezsigntemplatesignaturecustomdate_id
    if (!ezsigntemplatesignaturecustomdate_response->pki_ezsigntemplatesignaturecustomdate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturecustomdateID", ezsigntemplatesignaturecustomdate_response->pki_ezsigntemplatesignaturecustomdate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_x
    if (!ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateX", ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_y
    if (!ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateY", ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format
    if (!ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturecustomdateFormat", ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_responseJSON){

    ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_local_var = NULL;

    // ezsigntemplatesignaturecustomdate_response->pki_ezsigntemplatesignaturecustomdate_id
    cJSON *pki_ezsigntemplatesignaturecustomdate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_responseJSON, "pkiEzsigntemplatesignaturecustomdateID");
    if (!pki_ezsigntemplatesignaturecustomdate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_x
    cJSON *i_ezsigntemplatesignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_responseJSON, "iEzsigntemplatesignaturecustomdateX");
    if (!i_ezsigntemplatesignaturecustomdate_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response->i_ezsigntemplatesignaturecustomdate_y
    cJSON *i_ezsigntemplatesignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_responseJSON, "iEzsigntemplatesignaturecustomdateY");
    if (!i_ezsigntemplatesignaturecustomdate_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_response->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_responseJSON, "sEzsigntemplatesignaturecustomdateFormat");
    if (!s_ezsigntemplatesignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesignaturecustomdate_format))
    {
    goto end; //String
    }


    ezsigntemplatesignaturecustomdate_response_local_var = ezsigntemplatesignaturecustomdate_response_create (
        pki_ezsigntemplatesignaturecustomdate_id->valuedouble,
        i_ezsigntemplatesignaturecustomdate_x->valuedouble,
        i_ezsigntemplatesignaturecustomdate_y->valuedouble,
        strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring)
        );

    return ezsigntemplatesignaturecustomdate_response_local_var;
end:
    return NULL;

}
