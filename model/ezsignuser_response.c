#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignuser_response.h"



ezsignuser_response_t *ezsignuser_response_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_response_compound_t *obj_contact,
    common_audit_t *obj_audit
    ) {
    ezsignuser_response_t *ezsignuser_response_local_var = malloc(sizeof(ezsignuser_response_t));
    if (!ezsignuser_response_local_var) {
        return NULL;
    }
    ezsignuser_response_local_var->pki_ezsignuser_id = pki_ezsignuser_id;
    ezsignuser_response_local_var->fki_contact_id = fki_contact_id;
    ezsignuser_response_local_var->obj_contact = obj_contact;
    ezsignuser_response_local_var->obj_audit = obj_audit;

    return ezsignuser_response_local_var;
}


void ezsignuser_response_free(ezsignuser_response_t *ezsignuser_response) {
    if(NULL == ezsignuser_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignuser_response->obj_contact) {
        contact_response_compound_free(ezsignuser_response->obj_contact);
        ezsignuser_response->obj_contact = NULL;
    }
    if (ezsignuser_response->obj_audit) {
        common_audit_free(ezsignuser_response->obj_audit);
        ezsignuser_response->obj_audit = NULL;
    }
    free(ezsignuser_response);
}

cJSON *ezsignuser_response_convertToJSON(ezsignuser_response_t *ezsignuser_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignuser_response->pki_ezsignuser_id
    if (!ezsignuser_response->pki_ezsignuser_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignuserID", ezsignuser_response->pki_ezsignuser_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignuser_response->fki_contact_id
    if (!ezsignuser_response->fki_contact_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactID", ezsignuser_response->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignuser_response->obj_contact
    if (!ezsignuser_response->obj_contact) {
        goto fail;
    }
    cJSON *obj_contact_local_JSON = contact_response_compound_convertToJSON(ezsignuser_response->obj_contact);
    if(obj_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContact", obj_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignuser_response->obj_audit
    if (!ezsignuser_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignuser_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
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

ezsignuser_response_t *ezsignuser_response_parseFromJSON(cJSON *ezsignuser_responseJSON){

    ezsignuser_response_t *ezsignuser_response_local_var = NULL;

    // define the local variable for ezsignuser_response->obj_contact
    contact_response_compound_t *obj_contact_local_nonprim = NULL;

    // define the local variable for ezsignuser_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignuser_response->pki_ezsignuser_id
    cJSON *pki_ezsignuser_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_responseJSON, "pkiEzsignuserID");
    if (!pki_ezsignuser_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignuser_id))
    {
    goto end; //Numeric
    }

    // ezsignuser_response->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(ezsignuser_responseJSON, "fkiContactID");
    if (!fki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }

    // ezsignuser_response->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignuser_responseJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = contact_response_compound_parseFromJSON(obj_contact); //nonprimitive

    // ezsignuser_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignuser_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignuser_response_local_var = ezsignuser_response_create (
        pki_ezsignuser_id->valuedouble,
        fki_contact_id->valuedouble,
        obj_contact_local_nonprim,
        obj_audit_local_nonprim
        );

    return ezsignuser_response_local_var;
end:
    if (obj_contact_local_nonprim) {
        contact_response_compound_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
