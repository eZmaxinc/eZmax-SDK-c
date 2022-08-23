#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_get_object_v1_response_m_payload.h"



ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t));
    if (!ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->obj_user = obj_user;
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var->obj_ezsignsigner = obj_ezsignsigner;

    return ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var;
}


void ezsignfoldersignerassociation_get_object_v1_response_m_payload_free(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload) {
    if(NULL == ezsignfoldersignerassociation_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user);
        ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user = NULL;
    }
    if (ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner);
        ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_get_object_v1_response_m_payload);
}

cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_get_object_v1_response_m_payload->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_get_object_v1_response_m_payload->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_get_object_v1_response_m_payload->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_get_object_v1_response_m_payload->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_get_object_v1_response_m_payload->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_get_object_v1_response_m_payload->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message
    if (!ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user
    if(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user) {
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner
    if(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner);
    if(obj_ezsignsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigner", obj_ezsignsigner_local_JSON);
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

ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON){

    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "pkiEzsignfoldersignerassociationID");
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "tEzsignfoldersignerassociationMessage");
    if (!t_ezsignfoldersignerassociation_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "objUser");
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // ezsignfoldersignerassociation_get_object_v1_response_m_payload->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON, "objEzsignsigner");
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var = ezsignfoldersignerassociation_get_object_v1_response_m_payload_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy->valueint,
        strdup(t_ezsignfoldersignerassociation_message->valuestring),
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_get_object_v1_response_m_payload_local_var;
end:
    if (obj_user_local_nonprim) {
        ezsignfoldersignerassociation_response_compound_user_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_response_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
