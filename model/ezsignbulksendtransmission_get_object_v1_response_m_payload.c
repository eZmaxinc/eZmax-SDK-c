#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendtransmission_get_object_v1_response_m_payload.h"



ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksendtransmission_id,
    int fki_ezsignbulksend_id,
    char *s_ezsignbulksendtransmission_description,
    int i_ezsignbulksendtransmission_errors,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignfoldertransmission
    ) {
    ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksendtransmission_get_object_v1_response_m_payload_t));
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->pki_ezsignbulksendtransmission_id = pki_ezsignbulksendtransmission_id;
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->i_ezsignbulksendtransmission_errors = i_ezsignbulksendtransmission_errors;
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->obj_audit = obj_audit;
    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var->a_obj_ezsignfoldertransmission = a_obj_ezsignfoldertransmission;

    return ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var;
}


void ezsignbulksendtransmission_get_object_v1_response_m_payload_free(ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload) {
    if(NULL == ezsignbulksendtransmission_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description) {
        free(ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description);
        ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit) {
        common_audit_free(ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit);
        ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit = NULL;
    }
    if (ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission) {
        list_ForEach(listEntry, ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission) {
            custom_ezsignfoldertransmission_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission);
        ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission = NULL;
    }
    free(ezsignbulksendtransmission_get_object_v1_response_m_payload);
}

cJSON *ezsignbulksendtransmission_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->pki_ezsignbulksendtransmission_id
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->pki_ezsignbulksendtransmission_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendtransmissionID", ezsignbulksendtransmission_get_object_v1_response_m_payload->pki_ezsignbulksendtransmission_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendtransmission_get_object_v1_response_m_payload->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendtransmissionDescription", ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksendtransmission_get_object_v1_response_m_payload->i_ezsignbulksendtransmission_errors
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->i_ezsignbulksendtransmission_errors) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksendtransmissionErrors", ezsignbulksendtransmission_get_object_v1_response_m_payload->i_ezsignbulksendtransmission_errors) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission
    if (!ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertransmission = cJSON_AddArrayToObject(item, "a_objEzsignfoldertransmission");
    if(a_obj_ezsignfoldertransmission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertransmissionListEntry;
    if (ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission) {
    list_ForEach(a_obj_ezsignfoldertransmissionListEntry, ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission) {
    cJSON *itemLocal = custom_ezsignfoldertransmission_response_convertToJSON(a_obj_ezsignfoldertransmissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertransmission, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON){

    ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission
    list_t *a_obj_ezsignfoldertransmissionList = NULL;

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->pki_ezsignbulksendtransmission_id
    cJSON *pki_ezsignbulksendtransmission_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "pkiEzsignbulksendtransmissionID");
    if (!pki_ezsignbulksendtransmission_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendtransmission_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->s_ezsignbulksendtransmission_description
    cJSON *s_ezsignbulksendtransmission_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "sEzsignbulksendtransmissionDescription");
    if (!s_ezsignbulksendtransmission_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendtransmission_description))
    {
    goto end; //String
    }

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->i_ezsignbulksendtransmission_errors
    cJSON *i_ezsignbulksendtransmission_errors = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "iEzsignbulksendtransmissionErrors");
    if (!i_ezsignbulksendtransmission_errors) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksendtransmission_errors))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsignbulksendtransmission_get_object_v1_response_m_payload->a_obj_ezsignfoldertransmission
    cJSON *a_obj_ezsignfoldertransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON, "a_objEzsignfoldertransmission");
    if (!a_obj_ezsignfoldertransmission) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldertransmission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldertransmission)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertransmissionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldertransmission_local_nonprimitive,a_obj_ezsignfoldertransmission )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertransmission_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldertransmission_response_t *a_obj_ezsignfoldertransmissionItem = custom_ezsignfoldertransmission_response_parseFromJSON(a_obj_ezsignfoldertransmission_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertransmissionList, a_obj_ezsignfoldertransmissionItem);
    }


    ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var = ezsignbulksendtransmission_get_object_v1_response_m_payload_create (
        pki_ezsignbulksendtransmission_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        strdup(s_ezsignbulksendtransmission_description->valuestring),
        i_ezsignbulksendtransmission_errors->valuedouble,
        obj_audit_local_nonprim,
        a_obj_ezsignfoldertransmissionList
        );

    return ezsignbulksendtransmission_get_object_v1_response_m_payload_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_ezsignfoldertransmissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertransmissionList) {
            custom_ezsignfoldertransmission_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertransmissionList);
        a_obj_ezsignfoldertransmissionList = NULL;
    }
    return NULL;

}
