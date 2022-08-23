#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociation_actionable_element_response_all_of.h"



custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of_create(
    int b_ezsignfoldersignerassociation_hasactionableelements_current,
    int b_ezsignfoldersignerassociation_hasactionableelements_future
    ) {
    custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var = malloc(sizeof(custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t));
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var->b_ezsignfoldersignerassociation_hasactionableelements_current = b_ezsignfoldersignerassociation_hasactionableelements_current;
    custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var->b_ezsignfoldersignerassociation_hasactionableelements_future = b_ezsignfoldersignerassociation_hasactionableelements_future;

    return custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var;
}


void custom_ezsignfoldersignerassociation_actionable_element_response_all_of_free(custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of) {
    if(NULL == custom_ezsignfoldersignerassociation_actionable_element_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    free(custom_ezsignfoldersignerassociation_actionable_element_response_all_of);
}

cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_all_of_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_current
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsCurrent", custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_current) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_future
    if(custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_future) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsFuture", custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_future) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of_parseFromJSON(cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_all_ofJSON){

    custom_ezsignfoldersignerassociation_actionable_element_response_all_of_t *custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var = NULL;

    // custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_current
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_current = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_all_ofJSON, "bEzsignfoldersignerassociationHasactionableelementsCurrent");
    if (!b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_current))
    {
    goto end; //Bool
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response_all_of->b_ezsignfoldersignerassociation_hasactionableelements_future
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_future = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_all_ofJSON, "bEzsignfoldersignerassociationHasactionableelementsFuture");
    if (b_ezsignfoldersignerassociation_hasactionableelements_future) { 
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_future))
    {
    goto end; //Bool
    }
    }


    custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var = custom_ezsignfoldersignerassociation_actionable_element_response_all_of_create (
        b_ezsignfoldersignerassociation_hasactionableelements_current->valueint,
        b_ezsignfoldersignerassociation_hasactionableelements_future ? b_ezsignfoldersignerassociation_hasactionableelements_future->valueint : 0
        );

    return custom_ezsignfoldersignerassociation_actionable_element_response_all_of_local_var;
end:
    return NULL;

}
