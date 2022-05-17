#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_get_object_v1_response_m_payload.h"



ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsignbulksenddocumentmapping_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
    ) {
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t));
    if (!ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->obj_ezsigntemplate = obj_ezsigntemplate;
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var->obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;

    return ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var;
}


void ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_free(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload) {
    if(NULL == ezsignbulksenddocumentmapping_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_free(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate);
        ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate = NULL;
    }
    if (ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage) {
        ezsigntemplatepackage_response_compound_free(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage);
        ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage = NULL;
    }
    free(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload);
}

cJSON *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->pki_ezsignbulksenddocumentmapping_id
    if (!ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->pki_ezsignbulksenddocumentmapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksenddocumentmappingID", ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->pki_ezsignbulksenddocumentmapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    if (!ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    if(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    if(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->i_ezsignbulksenddocumentmapping_order
    if (!ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->i_ezsignbulksenddocumentmapping_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksenddocumentmappingOrder", ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->i_ezsignbulksenddocumentmapping_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate
    if(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate) {
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage
    if(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage) {
    cJSON *obj_ezsigntemplatepackage_local_JSON = ezsigntemplatepackage_response_compound_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage);
    if(obj_ezsigntemplatepackage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackage", obj_ezsigntemplatepackage_local_JSON);
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

ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON){

    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate
    ezsigntemplate_response_compound_t *obj_ezsigntemplate_local_nonprim = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage_local_nonprim = NULL;

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->pki_ezsignbulksenddocumentmapping_id
    cJSON *pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "pkiEzsignbulksenddocumentmappingID");
    if (!pki_ezsignbulksenddocumentmapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksenddocumentmapping_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatepackageID");
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->i_ezsignbulksenddocumentmapping_order
    cJSON *i_ezsignbulksenddocumentmapping_order = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "iEzsignbulksenddocumentmappingOrder");
    if (!i_ezsignbulksenddocumentmapping_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksenddocumentmapping_order))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "objEzsigntemplate");
    if (obj_ezsigntemplate) { 
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_parseFromJSON(obj_ezsigntemplate); //nonprimitive
    }

    // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload->obj_ezsigntemplatepackage
    cJSON *obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON, "objEzsigntemplatepackage");
    if (obj_ezsigntemplatepackage) { 
    obj_ezsigntemplatepackage_local_nonprim = ezsigntemplatepackage_response_compound_parseFromJSON(obj_ezsigntemplatepackage); //nonprimitive
    }


    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_create (
        pki_ezsignbulksenddocumentmapping_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        i_ezsignbulksenddocumentmapping_order->valuedouble,
        obj_ezsigntemplate ? obj_ezsigntemplate_local_nonprim : NULL,
        obj_ezsigntemplatepackage ? obj_ezsigntemplatepackage_local_nonprim : NULL
        );

    return ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    if (obj_ezsigntemplatepackage_local_nonprim) {
        ezsigntemplatepackage_response_compound_free(obj_ezsigntemplatepackage_local_nonprim);
        obj_ezsigntemplatepackage_local_nonprim = NULL;
    }
    return NULL;

}
