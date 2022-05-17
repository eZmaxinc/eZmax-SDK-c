#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response_compound_all_of.h"



ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_create(
    ezsignsigner_response_compound_contact_t *obj_contact
    ) {
    ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_local_var = malloc(sizeof(ezsignsigner_response_compound_all_of_t));
    if (!ezsignsigner_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignsigner_response_compound_all_of_local_var->obj_contact = obj_contact;

    return ezsignsigner_response_compound_all_of_local_var;
}


void ezsignsigner_response_compound_all_of_free(ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of) {
    if(NULL == ezsignsigner_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response_compound_all_of->obj_contact) {
        ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound_all_of->obj_contact);
        ezsignsigner_response_compound_all_of->obj_contact = NULL;
    }
    free(ezsignsigner_response_compound_all_of);
}

cJSON *ezsignsigner_response_compound_all_of_convertToJSON(ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_response_compound_all_of->obj_contact
    if (!ezsignsigner_response_compound_all_of->obj_contact) {
        goto fail;
    }
    cJSON *obj_contact_local_JSON = ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_all_of->obj_contact);
    if(obj_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContact", obj_contact_local_JSON);
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

ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_parseFromJSON(cJSON *ezsignsigner_response_compound_all_ofJSON){

    ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsignsigner_response_compound_all_of->obj_contact
    ezsignsigner_response_compound_contact_t *obj_contact_local_nonprim = NULL;

    // ezsignsigner_response_compound_all_of->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_all_ofJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = ezsignsigner_response_compound_contact_parseFromJSON(obj_contact); //nonprimitive


    ezsignsigner_response_compound_all_of_local_var = ezsignsigner_response_compound_all_of_create (
        obj_contact_local_nonprim
        );

    return ezsignsigner_response_compound_all_of_local_var;
end:
    if (obj_contact_local_nonprim) {
        ezsignsigner_response_compound_contact_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
