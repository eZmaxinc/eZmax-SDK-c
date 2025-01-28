#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound.h"



static ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_create_internal(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    int b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_t));
    if (!ezsignfoldersignerassociation_response_compound_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_compound_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_compound_local_var->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    ezsignfoldersignerassociation_response_compound_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    ezsignfoldersignerassociation_response_compound_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_response_compound_local_var->b_ezsignfoldersignerassociation_allowsigninginperson = b_ezsignfoldersignerassociation_allowsigninginperson;
    ezsignfoldersignerassociation_response_compound_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;
    ezsignfoldersignerassociation_response_compound_local_var->obj_user = obj_user;
    ezsignfoldersignerassociation_response_compound_local_var->obj_ezsignsigner = obj_ezsignsigner;

    ezsignfoldersignerassociation_response_compound_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_response_compound_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    int b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    return ezsignfoldersignerassociation_response_compound_create_internal (
        pki_ezsignfoldersignerassociation_id,
        fki_ezsignfolder_id,
        b_ezsignfoldersignerassociation_delayedsend,
        b_ezsignfoldersignerassociation_receivecopy,
        t_ezsignfoldersignerassociation_message,
        b_ezsignfoldersignerassociation_allowsigninginperson,
        obj_ezsignsignergroup,
        obj_user,
        obj_ezsignsigner
        );
}

void ezsignfoldersignerassociation_response_compound_free(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound) {
    if(NULL == ezsignfoldersignerassociation_response_compound){
        return ;
    }
    if(ezsignfoldersignerassociation_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup) {
        ezsignsignergroup_response_compound_free(ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup);
        ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound->obj_user);
        ezsignfoldersignerassociation_response_compound->obj_user = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(ezsignfoldersignerassociation_response_compound->obj_ezsignsigner);
        ezsignfoldersignerassociation_response_compound->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_response_compound);
}

cJSON *ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_delayedsend
    if (!ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_delayedsend) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationDelayedsend", ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_delayedsend) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message
    if (!ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_allowsigninginperson
    if (!ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationAllowsigninginperson", ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_allowsigninginperson) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup
    if(ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup) {
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_response_compound->obj_user
    if(ezsignfoldersignerassociation_response_compound->obj_user) {
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_response_compound->obj_ezsignsigner
    if(ezsignfoldersignerassociation_response_compound->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound->obj_ezsignsigner);
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

ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compoundJSON){

    ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "pkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(pki_ezsignfoldersignerassociation_id)) {
        pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "fkiEzsignfolderID");
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

    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_delayedsend
    cJSON *b_ezsignfoldersignerassociation_delayedsend = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "bEzsignfoldersignerassociationDelayedsend");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_delayedsend)) {
        b_ezsignfoldersignerassociation_delayedsend = NULL;
    }
    if (!b_ezsignfoldersignerassociation_delayedsend) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_delayedsend))
    {
    goto end; //Bool
    }

    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_receivecopy)) {
        b_ezsignfoldersignerassociation_receivecopy = NULL;
    }
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }

    // ezsignfoldersignerassociation_response_compound->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "tEzsignfoldersignerassociationMessage");
    if (cJSON_IsNull(t_ezsignfoldersignerassociation_message)) {
        t_ezsignfoldersignerassociation_message = NULL;
    }
    if (!t_ezsignfoldersignerassociation_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }

    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_allowsigninginperson
    cJSON *b_ezsignfoldersignerassociation_allowsigninginperson = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "bEzsignfoldersignerassociationAllowsigninginperson");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_allowsigninginperson)) {
        b_ezsignfoldersignerassociation_allowsigninginperson = NULL;
    }
    if (!b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_allowsigninginperson))
    {
    goto end; //Bool
    }

    // ezsignfoldersignerassociation_response_compound->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "objEzsignsignergroup");
    if (cJSON_IsNull(obj_ezsignsignergroup)) {
        obj_ezsignsignergroup = NULL;
    }
    if (obj_ezsignsignergroup) { 
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_response_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "objUser");
    if (cJSON_IsNull(obj_user)) {
        obj_user = NULL;
    }
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "objEzsignsigner");
    if (cJSON_IsNull(obj_ezsignsigner)) {
        obj_ezsignsigner = NULL;
    }
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_response_compound_local_var = ezsignfoldersignerassociation_response_compound_create_internal (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_delayedsend->valueint,
        b_ezsignfoldersignerassociation_receivecopy->valueint,
        strdup(t_ezsignfoldersignerassociation_message->valuestring),
        b_ezsignfoldersignerassociation_allowsigninginperson->valueint,
        obj_ezsignsignergroup ? obj_ezsignsignergroup_local_nonprim : NULL,
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_response_compound_local_var;
end:
    if (obj_ezsignsignergroup_local_nonprim) {
        ezsignsignergroup_response_compound_free(obj_ezsignsignergroup_local_nonprim);
        obj_ezsignsignergroup_local_nonprim = NULL;
    }
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
