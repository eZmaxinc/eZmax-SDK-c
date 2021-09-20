#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_request_compound_all_of.h"



ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of_create(
    ezsignsigner_request_compound_contact_t *obj_contact
    ) {
    ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of_local_var = malloc(sizeof(ezsignsigner_request_compound_all_of_t));
    if (!ezsignsigner_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignsigner_request_compound_all_of_local_var->obj_contact = obj_contact;

    return ezsignsigner_request_compound_all_of_local_var;
}


void ezsignsigner_request_compound_all_of_free(ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of) {
    if(NULL == ezsignsigner_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_request_compound_all_of->obj_contact) {
        ezsignsigner_request_compound_contact_free(ezsignsigner_request_compound_all_of->obj_contact);
        ezsignsigner_request_compound_all_of->obj_contact = NULL;
    }
    free(ezsignsigner_request_compound_all_of);
}

cJSON *ezsignsigner_request_compound_all_of_convertToJSON(ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_request_compound_all_of->obj_contact
    if (!ezsignsigner_request_compound_all_of->obj_contact) {
        goto fail;
    }
    
    cJSON *obj_contact_local_JSON = ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound_all_of->obj_contact);
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

ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of_parseFromJSON(cJSON *ezsignsigner_request_compound_all_ofJSON){

    ezsignsigner_request_compound_all_of_t *ezsignsigner_request_compound_all_of_local_var = NULL;

    // ezsignsigner_request_compound_all_of->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_all_ofJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    ezsignsigner_request_compound_contact_t *obj_contact_local_nonprim = NULL;
    
    obj_contact_local_nonprim = ezsignsigner_request_compound_contact_parseFromJSON(obj_contact); //nonprimitive


    ezsignsigner_request_compound_all_of_local_var = ezsignsigner_request_compound_all_of_create (
        obj_contact_local_nonprim
        );

    return ezsignsigner_request_compound_all_of_local_var;
end:
    if (obj_contact_local_nonprim) {
        ezsignsigner_request_compound_contact_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
