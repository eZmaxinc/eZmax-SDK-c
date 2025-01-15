#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload.h"



ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_create(
    object_t *obj_branding,
    int fki_userlogintype_id,
    list_t *a_s_ezsigntemplatesigner_description
    ) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var->obj_branding = obj_branding;
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var->a_s_ezsigntemplatesigner_description = a_s_ezsigntemplatesigner_description;

    return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var;
}


void ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding) {
        object_free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding);
        ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding = NULL;
    }
    if (ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description) {
        list_ForEach(listEntry, ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description);
        ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description = NULL;
    }
    free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding
    if(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding) {
    cJSON *obj_branding_local_JSON = object_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding);
    if(obj_branding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBranding", obj_branding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->fki_userlogintype_id
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplatesigner_description = cJSON_AddArrayToObject(item, "a_sEzsigntemplatesignerDescription");
    if(a_s_ezsigntemplatesigner_description == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplatesigner_descriptionListEntry;
    list_ForEach(a_s_ezsigntemplatesigner_descriptionListEntry, ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplatesigner_description, "", (char*)a_s_ezsigntemplatesigner_descriptionListEntry->data) == NULL)
    {
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

ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payloadJSON){

    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding
    object_t *obj_branding_local_nonprim = NULL;

    // define the local list for ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description
    list_t *a_s_ezsigntemplatesigner_descriptionList = NULL;

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->obj_branding
    cJSON *obj_branding = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payloadJSON, "objBranding");
    if (obj_branding) { 
    obj_branding_local_nonprim = object_parseFromJSON(obj_branding); //nonprimitive
    }

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payloadJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload->a_s_ezsigntemplatesigner_description
    cJSON *a_s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payloadJSON, "a_sEzsigntemplatesignerDescription");
    if (!a_s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplatesigner_description_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplatesigner_description)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplatesigner_descriptionList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplatesigner_description_local, a_s_ezsigntemplatesigner_description)
    {
        if(!cJSON_IsString(a_s_ezsigntemplatesigner_description_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplatesigner_descriptionList , strdup(a_s_ezsigntemplatesigner_description_local->valuestring));
    }


    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_create (
        obj_branding ? obj_branding_local_nonprim : NULL,
        fki_userlogintype_id->valuedouble,
        a_s_ezsigntemplatesigner_descriptionList
        );

    return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_local_var;
end:
    if (obj_branding_local_nonprim) {
        object_free(obj_branding_local_nonprim);
        obj_branding_local_nonprim = NULL;
    }
    if (a_s_ezsigntemplatesigner_descriptionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplatesigner_descriptionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplatesigner_descriptionList);
        a_s_ezsigntemplatesigner_descriptionList = NULL;
    }
    return NULL;

}
