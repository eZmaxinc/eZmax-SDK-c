#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingagent_response_compound_all_of.h"



ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_create(
    custom_contact_name_response_t *obj_contact_name
    ) {
    ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicingagent_response_compound_all_of_t));
    if (!ezmaxinvoicingagent_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicingagent_response_compound_all_of_local_var->obj_contact_name = obj_contact_name;

    return ezmaxinvoicingagent_response_compound_all_of_local_var;
}


void ezmaxinvoicingagent_response_compound_all_of_free(ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of) {
    if(NULL == ezmaxinvoicingagent_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingagent_response_compound_all_of->obj_contact_name) {
        custom_contact_name_response_free(ezmaxinvoicingagent_response_compound_all_of->obj_contact_name);
        ezmaxinvoicingagent_response_compound_all_of->obj_contact_name = NULL;
    }
    free(ezmaxinvoicingagent_response_compound_all_of);
}

cJSON *ezmaxinvoicingagent_response_compound_all_of_convertToJSON(ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingagent_response_compound_all_of->obj_contact_name
    if (!ezmaxinvoicingagent_response_compound_all_of->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezmaxinvoicingagent_response_compound_all_of->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingagent_response_compound_all_ofJSON){

    ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_local_var = NULL;

    // define the local variable for ezmaxinvoicingagent_response_compound_all_of->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // ezmaxinvoicingagent_response_compound_all_of->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compound_all_ofJSON, "objContactName");
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive


    ezmaxinvoicingagent_response_compound_all_of_local_var = ezmaxinvoicingagent_response_compound_all_of_create (
        obj_contact_name_local_nonprim
        );

    return ezmaxinvoicingagent_response_compound_all_of_local_var;
end:
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
