#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturecustomdate_request.h"



ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    char *s_ezsigntemplatesignaturecustomdate_format
    ) {
    ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_local_var = malloc(sizeof(ezsigntemplatesignaturecustomdate_request_t));
    if (!ezsigntemplatesignaturecustomdate_request_local_var) {
        return NULL;
    }
    ezsigntemplatesignaturecustomdate_request_local_var->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    ezsigntemplatesignaturecustomdate_request_local_var->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    ezsigntemplatesignaturecustomdate_request_local_var->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;

    return ezsigntemplatesignaturecustomdate_request_local_var;
}


void ezsigntemplatesignaturecustomdate_request_free(ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request) {
    if(NULL == ezsigntemplatesignaturecustomdate_request){
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
    if (!ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateX", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y
    if (!ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturecustomdateY", ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y) == NULL) {
    goto fail; //Numeric
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
    if (pki_ezsigntemplatesignaturecustomdate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturecustomdate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_x
    cJSON *i_ezsigntemplatesignaturecustomdate_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateX");
    if (!i_ezsigntemplatesignaturecustomdate_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_request->i_ezsigntemplatesignaturecustomdate_y
    cJSON *i_ezsigntemplatesignaturecustomdate_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "iEzsigntemplatesignaturecustomdateY");
    if (!i_ezsigntemplatesignaturecustomdate_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignaturecustomdate_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignaturecustomdate_request->s_ezsigntemplatesignaturecustomdate_format
    cJSON *s_ezsigntemplatesignaturecustomdate_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturecustomdate_requestJSON, "sEzsigntemplatesignaturecustomdateFormat");
    if (!s_ezsigntemplatesignaturecustomdate_format) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesignaturecustomdate_format))
    {
    goto end; //String
    }


    ezsigntemplatesignaturecustomdate_request_local_var = ezsigntemplatesignaturecustomdate_request_create (
        pki_ezsigntemplatesignaturecustomdate_id ? pki_ezsigntemplatesignaturecustomdate_id->valuedouble : 0,
        i_ezsigntemplatesignaturecustomdate_x->valuedouble,
        i_ezsigntemplatesignaturecustomdate_y->valuedouble,
        strdup(s_ezsigntemplatesignaturecustomdate_format->valuestring)
        );

    return ezsigntemplatesignaturecustomdate_request_local_var;
end:
    return NULL;

}
