#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignuser_request_compound.h"



ezsignuser_request_compound_t *ezsignuser_request_compound_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_request_compound_v2_t *obj_contact
    ) {
    ezsignuser_request_compound_t *ezsignuser_request_compound_local_var = malloc(sizeof(ezsignuser_request_compound_t));
    if (!ezsignuser_request_compound_local_var) {
        return NULL;
    }
    ezsignuser_request_compound_local_var->pki_ezsignuser_id = pki_ezsignuser_id;
    ezsignuser_request_compound_local_var->fki_contact_id = fki_contact_id;
    ezsignuser_request_compound_local_var->obj_contact = obj_contact;

    return ezsignuser_request_compound_local_var;
}


void ezsignuser_request_compound_free(ezsignuser_request_compound_t *ezsignuser_request_compound) {
    if(NULL == ezsignuser_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignuser_request_compound->obj_contact) {
        contact_request_compound_v2_free(ezsignuser_request_compound->obj_contact);
        ezsignuser_request_compound->obj_contact = NULL;
    }
    free(ezsignuser_request_compound);
}

cJSON *ezsignuser_request_compound_convertToJSON(ezsignuser_request_compound_t *ezsignuser_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignuser_request_compound->pki_ezsignuser_id
    if(ezsignuser_request_compound->pki_ezsignuser_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignuserID", ezsignuser_request_compound->pki_ezsignuser_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignuser_request_compound->fki_contact_id
    if (!ezsignuser_request_compound->fki_contact_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactID", ezsignuser_request_compound->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignuser_request_compound->obj_contact
    if (!ezsignuser_request_compound->obj_contact) {
        goto fail;
    }
    cJSON *obj_contact_local_JSON = contact_request_compound_v2_convertToJSON(ezsignuser_request_compound->obj_contact);
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

ezsignuser_request_compound_t *ezsignuser_request_compound_parseFromJSON(cJSON *ezsignuser_request_compoundJSON){

    ezsignuser_request_compound_t *ezsignuser_request_compound_local_var = NULL;

    // define the local variable for ezsignuser_request_compound->obj_contact
    contact_request_compound_v2_t *obj_contact_local_nonprim = NULL;

    // ezsignuser_request_compound->pki_ezsignuser_id
    cJSON *pki_ezsignuser_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_request_compoundJSON, "pkiEzsignuserID");
    if (pki_ezsignuser_id) { 
    if(!cJSON_IsNumber(pki_ezsignuser_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignuser_request_compound->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_request_compoundJSON, "fkiContactID");
    if (!fki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }

    // ezsignuser_request_compound->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignuser_request_compoundJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = contact_request_compound_v2_parseFromJSON(obj_contact); //nonprimitive


    ezsignuser_request_compound_local_var = ezsignuser_request_compound_create (
        pki_ezsignuser_id ? pki_ezsignuser_id->valuedouble : 0,
        fki_contact_id->valuedouble,
        obj_contact_local_nonprim
        );

    return ezsignuser_request_compound_local_var;
end:
    if (obj_contact_local_nonprim) {
        contact_request_compound_v2_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
