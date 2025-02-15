#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_compound.h"



static ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_create_internal(
    int pki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsigner_request_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_compound_t));
    if (!ezsignfoldersignerassociation_request_compound_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_compound_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_request_compound_local_var->fki_user_id = fki_user_id;
    ezsignfoldersignerassociation_request_compound_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignfoldersignerassociation_request_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_request_compound_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    ezsignfoldersignerassociation_request_compound_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_request_compound_local_var->obj_ezsignsigner = obj_ezsignsigner;

    ezsignfoldersignerassociation_request_compound_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_request_compound_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsigner_request_compound_t *obj_ezsignsigner
    ) {
    return ezsignfoldersignerassociation_request_compound_create_internal (
        pki_ezsignfoldersignerassociation_id,
        fki_user_id,
        fki_ezsignsignergroup_id,
        fki_ezsignfolder_id,
        b_ezsignfoldersignerassociation_receivecopy,
        t_ezsignfoldersignerassociation_message,
        obj_ezsignsigner
        );
}

void ezsignfoldersignerassociation_request_compound_free(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound) {
    if(NULL == ezsignfoldersignerassociation_request_compound){
        return ;
    }
    if(ezsignfoldersignerassociation_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound->obj_ezsignsigner) {
        ezsignsigner_request_compound_free(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner);
        ezsignfoldersignerassociation_request_compound->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_request_compound);
}

cJSON *ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request_compound->pki_ezsignfoldersignerassociation_id
    if(ezsignfoldersignerassociation_request_compound->pki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_request_compound->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound->fki_user_id
    if(ezsignfoldersignerassociation_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignfoldersignerassociation_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound->fki_ezsignsignergroup_id
    if(ezsignfoldersignerassociation_request_compound->fki_ezsignsignergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", ezsignfoldersignerassociation_request_compound->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_request_compound->b_ezsignfoldersignerassociation_receivecopy
    if(ezsignfoldersignerassociation_request_compound->b_ezsignfoldersignerassociation_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_request_compound->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message
    if(ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldersignerassociation_request_compound->obj_ezsignsigner
    if(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner);
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

ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compoundJSON){

    ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound->obj_ezsignsigner
    ezsignsigner_request_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_request_compound->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "pkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(pki_ezsignfoldersignerassociation_id)) {
        pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (pki_ezsignfoldersignerassociation_id) { 
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldersignerassociation_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldersignerassociation_request_compound->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "fkiEzsignsignergroupID");
    if (cJSON_IsNull(fki_ezsignsignergroup_id)) {
        fki_ezsignsignergroup_id = NULL;
    }
    if (fki_ezsignsignergroup_id) { 
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_request_compound->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_receivecopy)) {
        b_ezsignfoldersignerassociation_receivecopy = NULL;
    }
    if (b_ezsignfoldersignerassociation_receivecopy) { 
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldersignerassociation_request_compound->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "tEzsignfoldersignerassociationMessage");
    if (cJSON_IsNull(t_ezsignfoldersignerassociation_message)) {
        t_ezsignfoldersignerassociation_message = NULL;
    }
    if (t_ezsignfoldersignerassociation_message) { 
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message) && !cJSON_IsNull(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_request_compound->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "objEzsignsigner");
    if (cJSON_IsNull(obj_ezsignsigner)) {
        obj_ezsignsigner = NULL;
    }
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_request_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_request_compound_local_var = ezsignfoldersignerassociation_request_compound_create_internal (
        pki_ezsignfoldersignerassociation_id ? pki_ezsignfoldersignerassociation_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_ezsignsignergroup_id ? fki_ezsignsignergroup_id->valuedouble : 0,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy ? b_ezsignfoldersignerassociation_receivecopy->valueint : 0,
        t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message) ? strdup(t_ezsignfoldersignerassociation_message->valuestring) : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_request_compound_local_var;
end:
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_request_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
