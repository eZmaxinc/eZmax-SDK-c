#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_compound_v2.h"



static ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2_create_internal(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_user_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignfolder_id,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsigner_request_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_compound_v2_t));
    if (!ezsignfoldersignerassociation_request_compound_v2_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_request_compound_v2_local_var, 0, sizeof(ezsignfoldersignerassociation_request_compound_v2_t));
    ezsignfoldersignerassociation_request_compound_v2_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_request_compound_v2_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_request_compound_v2_local_var->fki_user_id = fki_user_id;
    ezsignfoldersignerassociation_request_compound_v2_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignfoldersignerassociation_request_compound_v2_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_request_compound_v2_local_var->e_ezsignfoldersignerassociation_role = e_ezsignfoldersignerassociation_role;
    ezsignfoldersignerassociation_request_compound_v2_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_request_compound_v2_local_var->obj_ezsignsigner = obj_ezsignsigner;
    return ezsignfoldersignerassociation_request_compound_v2_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_user_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignfolder_id,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsigner_request_compound_t *obj_ezsignsigner
    ) {
    int *pki_ezsignfoldersignerassociation_id_copy = NULL;
    if (pki_ezsignfoldersignerassociation_id) {
        pki_ezsignfoldersignerassociation_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldersignerassociation_id_copy) *pki_ezsignfoldersignerassociation_id_copy = *pki_ezsignfoldersignerassociation_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_ezsignsignergroup_id_copy = NULL;
    if (fki_ezsignsignergroup_id) {
        fki_ezsignsignergroup_id_copy = malloc(sizeof(int));
        if (fki_ezsignsignergroup_id_copy) *fki_ezsignsignergroup_id_copy = *fki_ezsignsignergroup_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    ezsignfoldersignerassociation_request_compound_v2_t *result = ezsignfoldersignerassociation_request_compound_v2_create_internal (
        pki_ezsignfoldersignerassociation_id_copy,
        fki_user_id_copy,
        fki_ezsignsignergroup_id_copy,
        fki_ezsignfolder_id_copy,
        e_ezsignfoldersignerassociation_role,
        t_ezsignfoldersignerassociation_message,
        obj_ezsignsigner
        );
    if (!result) {
        free(pki_ezsignfoldersignerassociation_id_copy);
        free(fki_user_id_copy);
        free(fki_ezsignsignergroup_id_copy);
        free(fki_ezsignfolder_id_copy);
    }
    return result;
}

void ezsignfoldersignerassociation_request_compound_v2_free(ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2) {
    if(NULL == ezsignfoldersignerassociation_request_compound_v2){
        return ;
    }
    if(ezsignfoldersignerassociation_request_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_request_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id) {
        free(ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id);
        ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound_v2->fki_user_id) {
        free(ezsignfoldersignerassociation_request_compound_v2->fki_user_id);
        ezsignfoldersignerassociation_request_compound_v2->fki_user_id = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id) {
        free(ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id);
        ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id) {
        free(ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id);
        ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner) {
        ezsignsigner_request_compound_free(ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner);
        ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_request_compound_v2);
}

cJSON *ezsignfoldersignerassociation_request_compound_v2_convertToJSON(ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id
    if(ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", *ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound_v2->fki_user_id
    if(ezsignfoldersignerassociation_request_compound_v2->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignfoldersignerassociation_request_compound_v2->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id
    if(ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", *ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_request_compound_v2->e_ezsignfoldersignerassociation_role
    if (ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__NULL == ezsignfoldersignerassociation_request_compound_v2->e_ezsignfoldersignerassociation_role) {
        goto fail;
    }
    cJSON *e_ezsignfoldersignerassociation_role_local_JSON = field_e_ezsignfoldersignerassociation_role_convertToJSON(ezsignfoldersignerassociation_request_compound_v2->e_ezsignfoldersignerassociation_role);
    if(e_ezsignfoldersignerassociation_role_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldersignerassociationRole", e_ezsignfoldersignerassociation_role_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message
    if(ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner
    if(ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner);
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

ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compound_v2JSON){

    ezsignfoldersignerassociation_request_compound_v2_t *ezsignfoldersignerassociation_request_compound_v2_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id
    int *pki_ezsignfoldersignerassociation_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id
    int *fki_ezsignsignergroup_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->e_ezsignfoldersignerassociation_role
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role_local_nonprim = 0;

    char *t_ezsignfoldersignerassociation_message_local_str = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner
    ezsignsigner_request_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_request_compound_v2->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "pkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(pki_ezsignfoldersignerassociation_id)) {
        pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (pki_ezsignfoldersignerassociation_id) { 
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
    }

    // ezsignfoldersignerassociation_request_compound_v2->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // ezsignfoldersignerassociation_request_compound_v2->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "fkiEzsignsignergroupID");
    if (cJSON_IsNull(fki_ezsignsignergroup_id)) {
        fki_ezsignsignergroup_id = NULL;
    }
    if (fki_ezsignsignergroup_id) { 
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    fki_ezsignsignergroup_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignsignergroup_id_local_var)
    {
        goto end;
    }
    *fki_ezsignsignergroup_id_local_var = fki_ezsignsignergroup_id->valuedouble;
    }

    // ezsignfoldersignerassociation_request_compound_v2->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "fkiEzsignfolderID");
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

    // ezsignfoldersignerassociation_request_compound_v2->e_ezsignfoldersignerassociation_role
    cJSON *e_ezsignfoldersignerassociation_role = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "eEzsignfoldersignerassociationRole");
    if (cJSON_IsNull(e_ezsignfoldersignerassociation_role)) {
        e_ezsignfoldersignerassociation_role = NULL;
    }
    if (!e_ezsignfoldersignerassociation_role) {
        goto end;
    }

    
    e_ezsignfoldersignerassociation_role_local_nonprim = field_e_ezsignfoldersignerassociation_role_parseFromJSON(e_ezsignfoldersignerassociation_role); //custom

    // ezsignfoldersignerassociation_request_compound_v2->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "tEzsignfoldersignerassociationMessage");
    if (cJSON_IsNull(t_ezsignfoldersignerassociation_message)) {
        t_ezsignfoldersignerassociation_message = NULL;
    }
    if (t_ezsignfoldersignerassociation_message) { 
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message) && !cJSON_IsNull(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_request_compound_v2->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_v2JSON, "objEzsignsigner");
    if (cJSON_IsNull(obj_ezsignsigner)) {
        obj_ezsignsigner = NULL;
    }
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_request_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    if (t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message)) t_ezsignfoldersignerassociation_message_local_str = strdup(t_ezsignfoldersignerassociation_message->valuestring);

    ezsignfoldersignerassociation_request_compound_v2_local_var = ezsignfoldersignerassociation_request_compound_v2_create_internal (
        pki_ezsignfoldersignerassociation_id_local_var,
        fki_user_id_local_var,
        fki_ezsignsignergroup_id_local_var,
        fki_ezsignfolder_id_local_var,
        e_ezsignfoldersignerassociation_role_local_nonprim,
        t_ezsignfoldersignerassociation_message_local_str,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    if (!ezsignfoldersignerassociation_request_compound_v2_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_request_compound_v2_local_var;
end:
    if (pki_ezsignfoldersignerassociation_id_local_var) {
        free(pki_ezsignfoldersignerassociation_id_local_var);
        pki_ezsignfoldersignerassociation_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_ezsignsignergroup_id_local_var) {
        free(fki_ezsignsignergroup_id_local_var);
        fki_ezsignsignergroup_id_local_var = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (e_ezsignfoldersignerassociation_role_local_nonprim) {
        e_ezsignfoldersignerassociation_role_local_nonprim = 0;
    }
    if (t_ezsignfoldersignerassociation_message_local_str) {
        free(t_ezsignfoldersignerassociation_message_local_str);
        t_ezsignfoldersignerassociation_message_local_str = NULL;
    }
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_request_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
