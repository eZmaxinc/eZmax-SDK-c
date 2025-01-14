#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignuser_request.h"



ezsignuser_request_t *ezsignuser_request_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_request_compound_v2_t *obj_contact
    ) {
    ezsignuser_request_t *ezsignuser_request_local_var = malloc(sizeof(ezsignuser_request_t));
    if (!ezsignuser_request_local_var) {
        return NULL;
    }
    ezsignuser_request_local_var->pki_ezsignuser_id = pki_ezsignuser_id;
    ezsignuser_request_local_var->fki_contact_id = fki_contact_id;
    ezsignuser_request_local_var->obj_contact = obj_contact;

    return ezsignuser_request_local_var;
}


void ezsignuser_request_free(ezsignuser_request_t *ezsignuser_request) {
    if(NULL == ezsignuser_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignuser_request->obj_contact) {
        contact_request_compound_v2_free(ezsignuser_request->obj_contact);
        ezsignuser_request->obj_contact = NULL;
    }
    free(ezsignuser_request);
}

cJSON *ezsignuser_request_convertToJSON(ezsignuser_request_t *ezsignuser_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignuser_request->pki_ezsignuser_id
    if(ezsignuser_request->pki_ezsignuser_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignuserID", ezsignuser_request->pki_ezsignuser_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignuser_request->fki_contact_id
    if (!ezsignuser_request->fki_contact_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactID", ezsignuser_request->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignuser_request->obj_contact
    if (!ezsignuser_request->obj_contact) {
        goto fail;
    }
    cJSON *obj_contact_local_JSON = contact_request_compound_v2_convertToJSON(ezsignuser_request->obj_contact);
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

ezsignuser_request_t *ezsignuser_request_parseFromJSON(cJSON *ezsignuser_requestJSON){

    ezsignuser_request_t *ezsignuser_request_local_var = NULL;

    // define the local variable for ezsignuser_request->obj_contact
    contact_request_compound_v2_t *obj_contact_local_nonprim = NULL;

    // ezsignuser_request->pki_ezsignuser_id
    cJSON *pki_ezsignuser_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_requestJSON, "pkiEzsignuserID");
    if (pki_ezsignuser_id) { 
    if(!cJSON_IsNumber(pki_ezsignuser_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignuser_request->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_requestJSON, "fkiContactID");
    if (!fki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }

    // ezsignuser_request->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignuser_requestJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = contact_request_compound_v2_parseFromJSON(obj_contact); //nonprimitive


    ezsignuser_request_local_var = ezsignuser_request_create (
        pki_ezsignuser_id ? pki_ezsignuser_id->valuedouble : 0,
        fki_contact_id->valuedouble,
        obj_contact_local_nonprim
        );

    return ezsignuser_request_local_var;
end:
    if (obj_contact_local_nonprim) {
        contact_request_compound_v2_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
