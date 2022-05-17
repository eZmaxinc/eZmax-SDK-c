#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_get_object_v1_response_m_payload.h"



ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
    ) {
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->obj_ezsigntemplate = obj_ezsigntemplate;
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;

    return ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagemembership_get_object_v1_response_m_payload_free(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagemembership_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_free(ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate);
        ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate = NULL;
    }
    if (ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership) {
        list_ForEach(listEntry, ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership) {
            ezsigntemplatepackagesignermembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership);
        ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership = NULL;
    }
    free(ezsigntemplatepackagemembership_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagemembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagemembership_order
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagemembership_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagemembershipOrder", ezsigntemplatepackagemembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagemembership_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership
    if (!ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesignermembership");
    if(a_obj_ezsigntemplatepackagesignermembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignermembershipListEntry;
    if (ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership) {
    list_ForEach(a_obj_ezsigntemplatepackagesignermembershipListEntry, ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership) {
    cJSON *itemLocal = ezsigntemplatepackagesignermembership_response_compound_convertToJSON(a_obj_ezsigntemplatepackagesignermembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesignermembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate
    ezsigntemplate_response_compound_t *obj_ezsigntemplate_local_nonprim = NULL;

    // define the local list for ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership
    list_t *a_obj_ezsigntemplatepackagesignermembershipList = NULL;

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagemembership_id
    cJSON *pki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatepackagemembershipID");
    if (!pki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagemembership_order
    cJSON *i_ezsigntemplatepackagemembership_order = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "iEzsigntemplatepackagemembershipOrder");
    if (!i_ezsigntemplatepackagemembership_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepackagemembership_order))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "objEzsigntemplate");
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_parseFromJSON(obj_ezsigntemplate); //nonprimitive

    // ezsigntemplatepackagemembership_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesignermembership
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplatepackagesignermembership");
    if (!a_obj_ezsigntemplatepackagesignermembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesignermembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignermembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive,a_obj_ezsigntemplatepackagesignermembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesignermembership_response_compound_t *a_obj_ezsigntemplatepackagesignermembershipItem = ezsigntemplatepackagesignermembership_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignermembershipList, a_obj_ezsigntemplatepackagesignermembershipItem);
    }


    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatepackagemembership_id->valuedouble,
        fki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        i_ezsigntemplatepackagemembership_order->valuedouble,
        obj_ezsigntemplate_local_nonprim,
        a_obj_ezsigntemplatepackagesignermembershipList
        );

    return ezsigntemplatepackagemembership_get_object_v1_response_m_payload_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatepackagesignermembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignermembershipList) {
            ezsigntemplatepackagesignermembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignermembershipList);
        a_obj_ezsigntemplatepackagesignermembershipList = NULL;
    }
    return NULL;

}
