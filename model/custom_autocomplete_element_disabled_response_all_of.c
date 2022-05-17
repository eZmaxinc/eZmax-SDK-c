#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_autocomplete_element_disabled_response_all_of.h"



custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_create(
    int b_disabled
    ) {
    custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_local_var = malloc(sizeof(custom_autocomplete_element_disabled_response_all_of_t));
    if (!custom_autocomplete_element_disabled_response_all_of_local_var) {
        return NULL;
    }
    custom_autocomplete_element_disabled_response_all_of_local_var->b_disabled = b_disabled;

    return custom_autocomplete_element_disabled_response_all_of_local_var;
}


void custom_autocomplete_element_disabled_response_all_of_free(custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of) {
    if(NULL == custom_autocomplete_element_disabled_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    free(custom_autocomplete_element_disabled_response_all_of);
}

cJSON *custom_autocomplete_element_disabled_response_all_of_convertToJSON(custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_autocomplete_element_disabled_response_all_of->b_disabled
    if (!custom_autocomplete_element_disabled_response_all_of->b_disabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDisabled", custom_autocomplete_element_disabled_response_all_of->b_disabled) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_parseFromJSON(cJSON *custom_autocomplete_element_disabled_response_all_ofJSON){

    custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_local_var = NULL;

    // custom_autocomplete_element_disabled_response_all_of->b_disabled
    cJSON *b_disabled = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_disabled_response_all_ofJSON, "bDisabled");
    if (!b_disabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_disabled))
    {
    goto end; //Bool
    }


    custom_autocomplete_element_disabled_response_all_of_local_var = custom_autocomplete_element_disabled_response_all_of_create (
        b_disabled->valueint
        );

    return custom_autocomplete_element_disabled_response_all_of_local_var;
end:
    return NULL;

}
