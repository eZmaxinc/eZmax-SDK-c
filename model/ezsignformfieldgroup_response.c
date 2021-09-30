#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response.h"



ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_create(
    char *s_ezsignformfieldgroup_label
    ) {
    ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_local_var = malloc(sizeof(ezsignformfieldgroup_response_t));
    if (!ezsignformfieldgroup_response_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;

    return ezsignformfieldgroup_response_local_var;
}


void ezsignformfieldgroup_response_free(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response) {
    if(NULL == ezsignformfieldgroup_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_response->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_response->s_ezsignformfieldgroup_label = NULL;
    }
    free(ezsignformfieldgroup_response);
}

cJSON *ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_parseFromJSON(cJSON *ezsignformfieldgroup_responseJSON){

    ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_local_var = NULL;

    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }


    ezsignformfieldgroup_response_local_var = ezsignformfieldgroup_response_create (
        strdup(s_ezsignformfieldgroup_label->valuestring)
        );

    return ezsignformfieldgroup_response_local_var;
end:
    return NULL;

}
