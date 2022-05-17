#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_sign_v1_request.h"



ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_create(
    char *s_value,
    int b_is_automatic
    ) {
    ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_local_var = malloc(sizeof(ezsignsignature_sign_v1_request_t));
    if (!ezsignsignature_sign_v1_request_local_var) {
        return NULL;
    }
    ezsignsignature_sign_v1_request_local_var->s_value = s_value;
    ezsignsignature_sign_v1_request_local_var->b_is_automatic = b_is_automatic;

    return ezsignsignature_sign_v1_request_local_var;
}


void ezsignsignature_sign_v1_request_free(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request) {
    if(NULL == ezsignsignature_sign_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_sign_v1_request->s_value) {
        free(ezsignsignature_sign_v1_request->s_value);
        ezsignsignature_sign_v1_request->s_value = NULL;
    }
    free(ezsignsignature_sign_v1_request);
}

cJSON *ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_sign_v1_request->s_value
    if(ezsignsignature_sign_v1_request->s_value) {
    if(cJSON_AddStringToObject(item, "sValue", ezsignsignature_sign_v1_request->s_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_sign_v1_request->b_is_automatic
    if (!ezsignsignature_sign_v1_request->b_is_automatic) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bIsAutomatic", ezsignsignature_sign_v1_request->b_is_automatic) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_parseFromJSON(cJSON *ezsignsignature_sign_v1_requestJSON){

    ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_local_var = NULL;

    // ezsignsignature_sign_v1_request->s_value
    cJSON *s_value = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "sValue");
    if (s_value) { 
    if(!cJSON_IsString(s_value))
    {
    goto end; //String
    }
    }

    // ezsignsignature_sign_v1_request->b_is_automatic
    cJSON *b_is_automatic = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "bIsAutomatic");
    if (!b_is_automatic) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_is_automatic))
    {
    goto end; //Bool
    }


    ezsignsignature_sign_v1_request_local_var = ezsignsignature_sign_v1_request_create (
        s_value ? strdup(s_value->valuestring) : NULL,
        b_is_automatic->valueint
        );

    return ezsignsignature_sign_v1_request_local_var;
end:
    return NULL;

}
