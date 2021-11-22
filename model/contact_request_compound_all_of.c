#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_request_compound_all_of.h"



contact_request_compound_all_of_t *contact_request_compound_all_of_create(
    contactinformations_request_compound_t *obj_contactinformations
    ) {
    contact_request_compound_all_of_t *contact_request_compound_all_of_local_var = malloc(sizeof(contact_request_compound_all_of_t));
    if (!contact_request_compound_all_of_local_var) {
        return NULL;
    }
    contact_request_compound_all_of_local_var->obj_contactinformations = obj_contactinformations;

    return contact_request_compound_all_of_local_var;
}


void contact_request_compound_all_of_free(contact_request_compound_all_of_t *contact_request_compound_all_of) {
    if(NULL == contact_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_request_compound_all_of->obj_contactinformations) {
        contactinformations_request_compound_free(contact_request_compound_all_of->obj_contactinformations);
        contact_request_compound_all_of->obj_contactinformations = NULL;
    }
    free(contact_request_compound_all_of);
}

cJSON *contact_request_compound_all_of_convertToJSON(contact_request_compound_all_of_t *contact_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // contact_request_compound_all_of->obj_contactinformations
    if (!contact_request_compound_all_of->obj_contactinformations) {
        goto fail;
    }
    
    cJSON *obj_contactinformations_local_JSON = contactinformations_request_compound_convertToJSON(contact_request_compound_all_of->obj_contactinformations);
    if(obj_contactinformations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactinformations", obj_contactinformations_local_JSON);
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

contact_request_compound_all_of_t *contact_request_compound_all_of_parseFromJSON(cJSON *contact_request_compound_all_ofJSON){

    contact_request_compound_all_of_t *contact_request_compound_all_of_local_var = NULL;

    // define the local variable for contact_request_compound_all_of->obj_contactinformations
    contactinformations_request_compound_t *obj_contactinformations_local_nonprim = NULL;

    // contact_request_compound_all_of->obj_contactinformations
    cJSON *obj_contactinformations = cJSON_GetObjectItemCaseSensitive(contact_request_compound_all_ofJSON, "objContactinformations");
    if (!obj_contactinformations) {
        goto end;
    }

    
    obj_contactinformations_local_nonprim = contactinformations_request_compound_parseFromJSON(obj_contactinformations); //nonprimitive


    contact_request_compound_all_of_local_var = contact_request_compound_all_of_create (
        obj_contactinformations_local_nonprim
        );

    return contact_request_compound_all_of_local_var;
end:
    if (obj_contactinformations_local_nonprim) {
        contactinformations_request_compound_free(obj_contactinformations_local_nonprim);
        obj_contactinformations_local_nonprim = NULL;
    }
    return NULL;

}
