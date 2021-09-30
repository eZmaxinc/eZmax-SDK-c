#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_response_compound.h"



ezsignformfield_response_compound_t *ezsignformfield_response_compound_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
    ) {
    ezsignformfield_response_compound_t *ezsignformfield_response_compound_local_var = malloc(sizeof(ezsignformfield_response_compound_t));
    if (!ezsignformfield_response_compound_local_var) {
        return NULL;
    }
    ezsignformfield_response_compound_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_response_compound_local_var->s_ezsignformfield_value = s_ezsignformfield_value;

    return ezsignformfield_response_compound_local_var;
}


void ezsignformfield_response_compound_free(ezsignformfield_response_compound_t *ezsignformfield_response_compound) {
    if(NULL == ezsignformfield_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_response_compound->s_ezsignformfield_label) {
        free(ezsignformfield_response_compound->s_ezsignformfield_label);
        ezsignformfield_response_compound->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_response_compound->s_ezsignformfield_value) {
        free(ezsignformfield_response_compound->s_ezsignformfield_value);
        ezsignformfield_response_compound->s_ezsignformfield_value = NULL;
    }
    free(ezsignformfield_response_compound);
}

cJSON *ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_t *ezsignformfield_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_response_compound->s_ezsignformfield_label
    if (!ezsignformfield_response_compound->s_ezsignformfield_label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_response_compound->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_response_compound->s_ezsignformfield_value
    if (!ezsignformfield_response_compound->s_ezsignformfield_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_response_compound->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfield_response_compound_t *ezsignformfield_response_compound_parseFromJSON(cJSON *ezsignformfield_response_compoundJSON){

    ezsignformfield_response_compound_t *ezsignformfield_response_compound_local_var = NULL;

    // ezsignformfield_response_compound->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_response_compound->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "sEzsignformfieldValue");
    if (!s_ezsignformfield_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_value))
    {
    goto end; //String
    }


    ezsignformfield_response_compound_local_var = ezsignformfield_response_compound_create (
        strdup(s_ezsignformfield_label->valuestring),
        strdup(s_ezsignformfield_value->valuestring)
        );

    return ezsignformfield_response_compound_local_var;
end:
    return NULL;

}
