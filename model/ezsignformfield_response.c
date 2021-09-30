#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_response.h"



ezsignformfield_response_t *ezsignformfield_response_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
    ) {
    ezsignformfield_response_t *ezsignformfield_response_local_var = malloc(sizeof(ezsignformfield_response_t));
    if (!ezsignformfield_response_local_var) {
        return NULL;
    }
    ezsignformfield_response_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_response_local_var->s_ezsignformfield_value = s_ezsignformfield_value;

    return ezsignformfield_response_local_var;
}


void ezsignformfield_response_free(ezsignformfield_response_t *ezsignformfield_response) {
    if(NULL == ezsignformfield_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_response->s_ezsignformfield_label) {
        free(ezsignformfield_response->s_ezsignformfield_label);
        ezsignformfield_response->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_response->s_ezsignformfield_value) {
        free(ezsignformfield_response->s_ezsignformfield_value);
        ezsignformfield_response->s_ezsignformfield_value = NULL;
    }
    free(ezsignformfield_response);
}

cJSON *ezsignformfield_response_convertToJSON(ezsignformfield_response_t *ezsignformfield_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_response->s_ezsignformfield_label
    if (!ezsignformfield_response->s_ezsignformfield_label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_response->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_response->s_ezsignformfield_value
    if (!ezsignformfield_response->s_ezsignformfield_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_response->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfield_response_t *ezsignformfield_response_parseFromJSON(cJSON *ezsignformfield_responseJSON){

    ezsignformfield_response_t *ezsignformfield_response_local_var = NULL;

    // ezsignformfield_response->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_response->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "sEzsignformfieldValue");
    if (!s_ezsignformfield_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_value))
    {
    goto end; //String
    }


    ezsignformfield_response_local_var = ezsignformfield_response_create (
        strdup(s_ezsignformfield_label->valuestring),
        strdup(s_ezsignformfield_value->valuestring)
        );

    return ezsignformfield_response_local_var;
end:
    return NULL;

}
