#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound_v3.h"



static ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3_create_internal(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_v3_t));
    if (!ezsignfoldersignerassociation_response_compound_v3_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_response_compound_v3_local_var, 0, sizeof(ezsignfoldersignerassociation_response_compound_v3_t));
    ezsignfoldersignerassociation_response_compound_v3_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_response_compound_v3_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_compound_v3_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_compound_v3_local_var->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    ezsignfoldersignerassociation_response_compound_v3_local_var->e_ezsignfoldersignerassociation_role = e_ezsignfoldersignerassociation_role;
    ezsignfoldersignerassociation_response_compound_v3_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_response_compound_v3_local_var->b_ezsignfoldersignerassociation_allowsigninginperson = b_ezsignfoldersignerassociation_allowsigninginperson;
    ezsignfoldersignerassociation_response_compound_v3_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;
    ezsignfoldersignerassociation_response_compound_v3_local_var->obj_user = obj_user;
    ezsignfoldersignerassociation_response_compound_v3_local_var->obj_ezsignsigner = obj_ezsignsigner;
    return ezsignfoldersignerassociation_response_compound_v3_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    int *pki_ezsignfoldersignerassociation_id_copy = NULL;
    if (pki_ezsignfoldersignerassociation_id) {
        pki_ezsignfoldersignerassociation_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldersignerassociation_id_copy) *pki_ezsignfoldersignerassociation_id_copy = *pki_ezsignfoldersignerassociation_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    int *b_ezsignfoldersignerassociation_delayedsend_copy = NULL;
    if (b_ezsignfoldersignerassociation_delayedsend) {
        b_ezsignfoldersignerassociation_delayedsend_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_delayedsend_copy) *b_ezsignfoldersignerassociation_delayedsend_copy = *b_ezsignfoldersignerassociation_delayedsend;
    }
    int *b_ezsignfoldersignerassociation_allowsigninginperson_copy = NULL;
    if (b_ezsignfoldersignerassociation_allowsigninginperson) {
        b_ezsignfoldersignerassociation_allowsigninginperson_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_allowsigninginperson_copy) *b_ezsignfoldersignerassociation_allowsigninginperson_copy = *b_ezsignfoldersignerassociation_allowsigninginperson;
    }
    ezsignfoldersignerassociation_response_compound_v3_t *result = ezsignfoldersignerassociation_response_compound_v3_create_internal (
        pki_ezsignfoldersignerassociation_id_copy,
        fki_ezsignfolder_id_copy,
        b_ezsignfoldersignerassociation_delayedsend_copy,
        e_ezsignfoldersignerassociation_role,
        t_ezsignfoldersignerassociation_message,
        b_ezsignfoldersignerassociation_allowsigninginperson_copy,
        obj_ezsignsignergroup,
        obj_user,
        obj_ezsignsigner
        );
    if (!result) {
        free(pki_ezsignfoldersignerassociation_id_copy);
        free(fki_ezsignfolder_id_copy);
        free(b_ezsignfoldersignerassociation_delayedsend_copy);
        free(b_ezsignfoldersignerassociation_allowsigninginperson_copy);
    }
    return result;
}

void ezsignfoldersignerassociation_response_compound_v3_free(ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3) {
    if(NULL == ezsignfoldersignerassociation_response_compound_v3){
        return ;
    }
    if(ezsignfoldersignerassociation_response_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_response_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id) {
        free(ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id);
        ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id) {
        free(ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id);
        ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend) {
        free(ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend);
        ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson) {
        free(ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson);
        ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup) {
        ezsignsignergroup_response_compound_free(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup);
        ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound_v3->obj_user);
        ezsignfoldersignerassociation_response_compound_v3->obj_user = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner);
        ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_response_compound_v3);
}

cJSON *ezsignfoldersignerassociation_response_compound_v3_convertToJSON(ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", *ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend
    if (!ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationDelayedsend", *ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response_compound_v3->e_ezsignfoldersignerassociation_role
    if (ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__NULL == ezsignfoldersignerassociation_response_compound_v3->e_ezsignfoldersignerassociation_role) {
        goto fail;
    }
    cJSON *e_ezsignfoldersignerassociation_role_local_JSON = field_e_ezsignfoldersignerassociation_role_convertToJSON(ezsignfoldersignerassociation_response_compound_v3->e_ezsignfoldersignerassociation_role);
    if(e_ezsignfoldersignerassociation_role_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldersignerassociationRole", e_ezsignfoldersignerassociation_role_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message
    if (!ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson
    if (!ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationAllowsigninginperson", *ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup
    if(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup) {
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_response_compound_v3->obj_user
    if(ezsignfoldersignerassociation_response_compound_v3->obj_user) {
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_v3->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner
    if(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner);
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

ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compound_v3JSON){

    ezsignfoldersignerassociation_response_compound_v3_t *ezsignfoldersignerassociation_response_compound_v3_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id
    int *pki_ezsignfoldersignerassociation_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend
    int *b_ezsignfoldersignerassociation_delayedsend_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->e_ezsignfoldersignerassociation_role
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role_local_nonprim = 0;

    char *t_ezsignfoldersignerassociation_message_local_str = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson
    int *b_ezsignfoldersignerassociation_allowsigninginperson_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_response_compound_v3->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "pkiEzsignfoldersignerassociationID");
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
    pki_ezsignfoldersignerassociation_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfoldersignerassociation_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfoldersignerassociation_id_local_var = pki_ezsignfoldersignerassociation_id->valuedouble;

    // ezsignfoldersignerassociation_response_compound_v3->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "fkiEzsignfolderID");
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
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;

    // ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_delayedsend
    cJSON *b_ezsignfoldersignerassociation_delayedsend = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "bEzsignfoldersignerassociationDelayedsend");
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
    b_ezsignfoldersignerassociation_delayedsend_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_delayedsend_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_delayedsend_local_var = b_ezsignfoldersignerassociation_delayedsend->valueint;

    // ezsignfoldersignerassociation_response_compound_v3->e_ezsignfoldersignerassociation_role
    cJSON *e_ezsignfoldersignerassociation_role = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "eEzsignfoldersignerassociationRole");
    if (cJSON_IsNull(e_ezsignfoldersignerassociation_role)) {
        e_ezsignfoldersignerassociation_role = NULL;
    }
    if (!e_ezsignfoldersignerassociation_role) {
        goto end;
    }

    
    e_ezsignfoldersignerassociation_role_local_nonprim = field_e_ezsignfoldersignerassociation_role_parseFromJSON(e_ezsignfoldersignerassociation_role); //custom

    // ezsignfoldersignerassociation_response_compound_v3->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "tEzsignfoldersignerassociationMessage");
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

    // ezsignfoldersignerassociation_response_compound_v3->b_ezsignfoldersignerassociation_allowsigninginperson
    cJSON *b_ezsignfoldersignerassociation_allowsigninginperson = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "bEzsignfoldersignerassociationAllowsigninginperson");
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
    b_ezsignfoldersignerassociation_allowsigninginperson_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_allowsigninginperson_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_allowsigninginperson_local_var = b_ezsignfoldersignerassociation_allowsigninginperson->valueint;

    // ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "objEzsignsignergroup");
    if (cJSON_IsNull(obj_ezsignsignergroup)) {
        obj_ezsignsignergroup = NULL;
    }
    if (obj_ezsignsignergroup) { 
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_response_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_v3->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "objUser");
    if (cJSON_IsNull(obj_user)) {
        obj_user = NULL;
    }
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_v3->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_v3JSON, "objEzsignsigner");
    if (cJSON_IsNull(obj_ezsignsigner)) {
        obj_ezsignsigner = NULL;
    }
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    if (t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message)) t_ezsignfoldersignerassociation_message_local_str = strdup(t_ezsignfoldersignerassociation_message->valuestring);

    ezsignfoldersignerassociation_response_compound_v3_local_var = ezsignfoldersignerassociation_response_compound_v3_create_internal (
        pki_ezsignfoldersignerassociation_id_local_var,
        fki_ezsignfolder_id_local_var,
        b_ezsignfoldersignerassociation_delayedsend_local_var,
        e_ezsignfoldersignerassociation_role_local_nonprim,
        t_ezsignfoldersignerassociation_message_local_str,
        b_ezsignfoldersignerassociation_allowsigninginperson_local_var,
        obj_ezsignsignergroup ? obj_ezsignsignergroup_local_nonprim : NULL,
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    if (!ezsignfoldersignerassociation_response_compound_v3_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_response_compound_v3_local_var;
end:
    if (pki_ezsignfoldersignerassociation_id_local_var) {
        free(pki_ezsignfoldersignerassociation_id_local_var);
        pki_ezsignfoldersignerassociation_id_local_var = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (b_ezsignfoldersignerassociation_delayedsend_local_var) {
        free(b_ezsignfoldersignerassociation_delayedsend_local_var);
        b_ezsignfoldersignerassociation_delayedsend_local_var = NULL;
    }
    if (e_ezsignfoldersignerassociation_role_local_nonprim) {
        e_ezsignfoldersignerassociation_role_local_nonprim = 0;
    }
    if (t_ezsignfoldersignerassociation_message_local_str) {
        free(t_ezsignfoldersignerassociation_message_local_str);
        t_ezsignfoldersignerassociation_message_local_str = NULL;
    }
    if (b_ezsignfoldersignerassociation_allowsigninginperson_local_var) {
        free(b_ezsignfoldersignerassociation_allowsigninginperson_local_var);
        b_ezsignfoldersignerassociation_allowsigninginperson_local_var = NULL;
    }
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
