#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingcommission_response_compound_all_of.h"



ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_create(
    custom_contact_name_response_t *obj_contact_name
    ) {
    ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicingcommission_response_compound_all_of_t));
    if (!ezmaxinvoicingcommission_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicingcommission_response_compound_all_of_local_var->obj_contact_name = obj_contact_name;

    return ezmaxinvoicingcommission_response_compound_all_of_local_var;
}


void ezmaxinvoicingcommission_response_compound_all_of_free(ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of) {
    if(NULL == ezmaxinvoicingcommission_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name) {
        custom_contact_name_response_free(ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name);
        ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name = NULL;
    }
    free(ezmaxinvoicingcommission_response_compound_all_of);
}

cJSON *ezmaxinvoicingcommission_response_compound_all_of_convertToJSON(ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name
    if(ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name) {
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingcommission_response_compound_all_ofJSON){

    ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_local_var = NULL;

    // define the local variable for ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // ezmaxinvoicingcommission_response_compound_all_of->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcommission_response_compound_all_ofJSON, "objContactName");
    if (obj_contact_name) { 
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive
    }


    ezmaxinvoicingcommission_response_compound_all_of_local_var = ezmaxinvoicingcommission_response_compound_all_of_create (
        obj_contact_name ? obj_contact_name_local_nonprim : NULL
        );

    return ezmaxinvoicingcommission_response_compound_all_of_local_var;
end:
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
