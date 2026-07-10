#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociation_actionable_element_response_v2.h"



static custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_create_internal(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner,
    int *b_ezsignfoldersignerassociation_hasactionableelements_current,
    int *b_ezsignfoldersignerassociation_hasactionableelements_future
    ) {
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var = malloc(sizeof(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t));
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var) {
        return NULL;
    }
    memset(custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var, 0, sizeof(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t));
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->_library_owned = 1;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->e_ezsignfoldersignerassociation_role = e_ezsignfoldersignerassociation_role;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->b_ezsignfoldersignerassociation_allowsigninginperson = b_ezsignfoldersignerassociation_allowsigninginperson;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->obj_user = obj_user;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->obj_ezsignsigner = obj_ezsignsigner;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->b_ezsignfoldersignerassociation_hasactionableelements_current = b_ezsignfoldersignerassociation_hasactionableelements_current;
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var->b_ezsignfoldersignerassociation_hasactionableelements_future = b_ezsignfoldersignerassociation_hasactionableelements_future;
    return custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var;
}

__attribute__((deprecated)) custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner,
    int *b_ezsignfoldersignerassociation_hasactionableelements_current,
    int *b_ezsignfoldersignerassociation_hasactionableelements_future
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
    int *b_ezsignfoldersignerassociation_hasactionableelements_current_copy = NULL;
    if (b_ezsignfoldersignerassociation_hasactionableelements_current) {
        b_ezsignfoldersignerassociation_hasactionableelements_current_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_hasactionableelements_current_copy) *b_ezsignfoldersignerassociation_hasactionableelements_current_copy = *b_ezsignfoldersignerassociation_hasactionableelements_current;
    }
    int *b_ezsignfoldersignerassociation_hasactionableelements_future_copy = NULL;
    if (b_ezsignfoldersignerassociation_hasactionableelements_future) {
        b_ezsignfoldersignerassociation_hasactionableelements_future_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_hasactionableelements_future_copy) *b_ezsignfoldersignerassociation_hasactionableelements_future_copy = *b_ezsignfoldersignerassociation_hasactionableelements_future;
    }
    custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *result = custom_ezsignfoldersignerassociation_actionable_element_response_v2_create_internal (
        pki_ezsignfoldersignerassociation_id_copy,
        fki_ezsignfolder_id_copy,
        b_ezsignfoldersignerassociation_delayedsend_copy,
        e_ezsignfoldersignerassociation_role,
        t_ezsignfoldersignerassociation_message,
        b_ezsignfoldersignerassociation_allowsigninginperson_copy,
        obj_ezsignsignergroup,
        obj_user,
        obj_ezsignsigner,
        b_ezsignfoldersignerassociation_hasactionableelements_current_copy,
        b_ezsignfoldersignerassociation_hasactionableelements_future_copy
        );
    if (!result) {
        free(pki_ezsignfoldersignerassociation_id_copy);
        free(fki_ezsignfolder_id_copy);
        free(b_ezsignfoldersignerassociation_delayedsend_copy);
        free(b_ezsignfoldersignerassociation_allowsigninginperson_copy);
        free(b_ezsignfoldersignerassociation_hasactionableelements_current_copy);
        free(b_ezsignfoldersignerassociation_hasactionableelements_future_copy);
    }
    return result;
}

void custom_ezsignfoldersignerassociation_actionable_element_response_v2_free(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2) {
    if(NULL == custom_ezsignfoldersignerassociation_actionable_element_response_v2){
        return ;
    }
    if(custom_ezsignfoldersignerassociation_actionable_element_response_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfoldersignerassociation_actionable_element_response_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup) {
        ezsignsignergroup_response_compound_free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future);
        custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future = NULL;
    }
    free(custom_ezsignfoldersignerassociation_actionable_element_response_v2);
}

cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_v2_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationDelayedsend", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->e_ezsignfoldersignerassociation_role
    if (ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__NULL == custom_ezsignfoldersignerassociation_actionable_element_response_v2->e_ezsignfoldersignerassociation_role) {
        goto fail;
    }
    cJSON *e_ezsignfoldersignerassociation_role_local_JSON = field_e_ezsignfoldersignerassociation_role_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2->e_ezsignfoldersignerassociation_role);
    if(e_ezsignfoldersignerassociation_role_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldersignerassociationRole", e_ezsignfoldersignerassociation_role_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationAllowsigninginperson", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup
    if(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup) {
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_response_compound_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user
    if(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user) {
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner
    if(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner);
    if(obj_ezsignsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigner", obj_ezsignsigner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsCurrent", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsFuture", *custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_parseFromJSON(cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON){

    custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id
    int *pki_ezsignfoldersignerassociation_id_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend
    int *b_ezsignfoldersignerassociation_delayedsend_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->e_ezsignfoldersignerassociation_role
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role_local_nonprim = 0;

    char *t_ezsignfoldersignerassociation_message_local_str = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson
    int *b_ezsignfoldersignerassociation_allowsigninginperson_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current
    int *b_ezsignfoldersignerassociation_hasactionableelements_current_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future
    int *b_ezsignfoldersignerassociation_hasactionableelements_future_local_var = NULL;

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "pkiEzsignfoldersignerassociationID");
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

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "fkiEzsignfolderID");
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

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_delayedsend
    cJSON *b_ezsignfoldersignerassociation_delayedsend = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "bEzsignfoldersignerassociationDelayedsend");
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

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->e_ezsignfoldersignerassociation_role
    cJSON *e_ezsignfoldersignerassociation_role = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "eEzsignfoldersignerassociationRole");
    if (cJSON_IsNull(e_ezsignfoldersignerassociation_role)) {
        e_ezsignfoldersignerassociation_role = NULL;
    }
    if (!e_ezsignfoldersignerassociation_role) {
        goto end;
    }

    
    e_ezsignfoldersignerassociation_role_local_nonprim = field_e_ezsignfoldersignerassociation_role_parseFromJSON(e_ezsignfoldersignerassociation_role); //custom

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "tEzsignfoldersignerassociationMessage");
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

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_allowsigninginperson
    cJSON *b_ezsignfoldersignerassociation_allowsigninginperson = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "bEzsignfoldersignerassociationAllowsigninginperson");
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

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "objEzsignsignergroup");
    if (cJSON_IsNull(obj_ezsignsignergroup)) {
        obj_ezsignsignergroup = NULL;
    }
    if (obj_ezsignsignergroup) { 
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_response_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "objUser");
    if (cJSON_IsNull(obj_user)) {
        obj_user = NULL;
    }
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "objEzsignsigner");
    if (cJSON_IsNull(obj_ezsignsigner)) {
        obj_ezsignsigner = NULL;
    }
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_current
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_current = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "bEzsignfoldersignerassociationHasactionableelementsCurrent");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_hasactionableelements_current)) {
        b_ezsignfoldersignerassociation_hasactionableelements_current = NULL;
    }
    if (!b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_current))
    {
    goto end; //Bool
    }
    b_ezsignfoldersignerassociation_hasactionableelements_current_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_hasactionableelements_current_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_hasactionableelements_current_local_var = b_ezsignfoldersignerassociation_hasactionableelements_current->valueint;

    // custom_ezsignfoldersignerassociation_actionable_element_response_v2->b_ezsignfoldersignerassociation_hasactionableelements_future
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_future = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON, "bEzsignfoldersignerassociationHasactionableelementsFuture");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_hasactionableelements_future)) {
        b_ezsignfoldersignerassociation_hasactionableelements_future = NULL;
    }
    if (!b_ezsignfoldersignerassociation_hasactionableelements_future) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_future))
    {
    goto end; //Bool
    }
    b_ezsignfoldersignerassociation_hasactionableelements_future_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_hasactionableelements_future_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_hasactionableelements_future_local_var = b_ezsignfoldersignerassociation_hasactionableelements_future->valueint;


    if (t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message)) t_ezsignfoldersignerassociation_message_local_str = strdup(t_ezsignfoldersignerassociation_message->valuestring);

    custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var = custom_ezsignfoldersignerassociation_actionable_element_response_v2_create_internal (
        pki_ezsignfoldersignerassociation_id_local_var,
        fki_ezsignfolder_id_local_var,
        b_ezsignfoldersignerassociation_delayedsend_local_var,
        e_ezsignfoldersignerassociation_role_local_nonprim,
        t_ezsignfoldersignerassociation_message_local_str,
        b_ezsignfoldersignerassociation_allowsigninginperson_local_var,
        obj_ezsignsignergroup ? obj_ezsignsignergroup_local_nonprim : NULL,
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL,
        b_ezsignfoldersignerassociation_hasactionableelements_current_local_var,
        b_ezsignfoldersignerassociation_hasactionableelements_future_local_var
        );

    if (!custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var) {
        goto end;
    }

    return custom_ezsignfoldersignerassociation_actionable_element_response_v2_local_var;
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
    if (b_ezsignfoldersignerassociation_hasactionableelements_current_local_var) {
        free(b_ezsignfoldersignerassociation_hasactionableelements_current_local_var);
        b_ezsignfoldersignerassociation_hasactionableelements_current_local_var = NULL;
    }
    if (b_ezsignfoldersignerassociation_hasactionableelements_future_local_var) {
        free(b_ezsignfoldersignerassociation_hasactionableelements_future_local_var);
        b_ezsignfoldersignerassociation_hasactionableelements_future_local_var = NULL;
    }
    return NULL;

}
