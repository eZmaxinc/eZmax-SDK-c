#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_request.h"



static ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_create_internal(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    int *b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description
    ) {
    ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_local_var = malloc(sizeof(ezsigntemplatesigner_request_t));
    if (!ezsigntemplatesigner_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesigner_request_local_var, 0, sizeof(ezsigntemplatesigner_request_t));
    ezsigntemplatesigner_request_local_var->_library_owned = 1;
    ezsigntemplatesigner_request_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_request_local_var->fki_user_id = fki_user_id;
    ezsigntemplatesigner_request_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsigntemplatesigner_request_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatesigner_request_local_var->b_ezsigntemplatesigner_receivecopy = b_ezsigntemplatesigner_receivecopy;
    ezsigntemplatesigner_request_local_var->e_ezsigntemplatesigner_mapping = e_ezsigntemplatesigner_mapping;
    ezsigntemplatesigner_request_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;
    return ezsigntemplatesigner_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_create(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    int *b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description
    ) {
    int *pki_ezsigntemplatesigner_id_copy = NULL;
    if (pki_ezsigntemplatesigner_id) {
        pki_ezsigntemplatesigner_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatesigner_id_copy) *pki_ezsigntemplatesigner_id_copy = *pki_ezsigntemplatesigner_id;
    }
    int *fki_ezsigntemplate_id_copy = NULL;
    if (fki_ezsigntemplate_id) {
        fki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplate_id_copy) *fki_ezsigntemplate_id_copy = *fki_ezsigntemplate_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    int *fki_ezdoctemplatedocument_id_copy = NULL;
    if (fki_ezdoctemplatedocument_id) {
        fki_ezdoctemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezdoctemplatedocument_id_copy) *fki_ezdoctemplatedocument_id_copy = *fki_ezdoctemplatedocument_id;
    }
    int *b_ezsigntemplatesigner_receivecopy_copy = NULL;
    if (b_ezsigntemplatesigner_receivecopy) {
        b_ezsigntemplatesigner_receivecopy_copy = malloc(sizeof(int));
        if (b_ezsigntemplatesigner_receivecopy_copy) *b_ezsigntemplatesigner_receivecopy_copy = *b_ezsigntemplatesigner_receivecopy;
    }
    ezsigntemplatesigner_request_t *result = ezsigntemplatesigner_request_create_internal (
        pki_ezsigntemplatesigner_id_copy,
        fki_ezsigntemplate_id_copy,
        fki_user_id_copy,
        fki_usergroup_id_copy,
        fki_ezdoctemplatedocument_id_copy,
        b_ezsigntemplatesigner_receivecopy_copy,
        e_ezsigntemplatesigner_mapping,
        s_ezsigntemplatesigner_description
        );
    if (!result) {
        free(pki_ezsigntemplatesigner_id_copy);
        free(fki_ezsigntemplate_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroup_id_copy);
        free(fki_ezdoctemplatedocument_id_copy);
        free(b_ezsigntemplatesigner_receivecopy_copy);
    }
    return result;
}

void ezsigntemplatesigner_request_free(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request) {
    if(NULL == ezsigntemplatesigner_request){
        return ;
    }
    if(ezsigntemplatesigner_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id) {
        free(ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id);
        ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id = NULL;
    }
    if (ezsigntemplatesigner_request->fki_ezsigntemplate_id) {
        free(ezsigntemplatesigner_request->fki_ezsigntemplate_id);
        ezsigntemplatesigner_request->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplatesigner_request->fki_user_id) {
        free(ezsigntemplatesigner_request->fki_user_id);
        ezsigntemplatesigner_request->fki_user_id = NULL;
    }
    if (ezsigntemplatesigner_request->fki_usergroup_id) {
        free(ezsigntemplatesigner_request->fki_usergroup_id);
        ezsigntemplatesigner_request->fki_usergroup_id = NULL;
    }
    if (ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id) {
        free(ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id);
        ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id = NULL;
    }
    if (ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy) {
        free(ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy);
        ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy = NULL;
    }
    if (ezsigntemplatesigner_request->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_request->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_request->s_ezsigntemplatesigner_description = NULL;
    }
    free(ezsigntemplatesigner_request);
}

cJSON *ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id
    if(ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", *ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_request->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_request->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigntemplatesigner_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_request->fki_user_id
    if(ezsigntemplatesigner_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsigntemplatesigner_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_request->fki_usergroup_id
    if(ezsigntemplatesigner_request->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *ezsigntemplatesigner_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id
    if(ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", *ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy
    if(ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignerReceivecopy", *ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesigner_request->e_ezsigntemplatesigner_mapping
    if(ezsigntemplatesigner_request->e_ezsigntemplatesigner_mapping != ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__NULL) {
    cJSON *e_ezsigntemplatesigner_mapping_local_JSON = field_e_ezsigntemplatesigner_mapping_convertToJSON(ezsigntemplatesigner_request->e_ezsigntemplatesigner_mapping);
    if(e_ezsigntemplatesigner_mapping_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignerMapping", e_ezsigntemplatesigner_mapping_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesigner_request->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_request->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_request->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_parseFromJSON(cJSON *ezsigntemplatesigner_requestJSON){

    ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id
    int *pki_ezsigntemplatesigner_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id
    int *fki_ezdoctemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy
    int *b_ezsigntemplatesigner_receivecopy_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_request->e_ezsigntemplatesigner_mapping
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping_local_nonprim = 0;

    char *s_ezsigntemplatesigner_description_local_str = NULL;

    // ezsigntemplatesigner_request->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "pkiEzsigntemplatesignerID");
    if (cJSON_IsNull(pki_ezsigntemplatesigner_id)) {
        pki_ezsigntemplatesigner_id = NULL;
    }
    if (pki_ezsigntemplatesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatesigner_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatesigner_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatesigner_id_local_var = pki_ezsigntemplatesigner_id->valuedouble;
    }

    // ezsigntemplatesigner_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplate_id_local_var = fki_ezsigntemplate_id->valuedouble;

    // ezsigntemplatesigner_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "fkiUserID");
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

    // ezsigntemplatesigner_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    fki_usergroup_id_local_var = malloc(sizeof(int));
    if(!fki_usergroup_id_local_var)
    {
        goto end;
    }
    *fki_usergroup_id_local_var = fki_usergroup_id->valuedouble;
    }

    // ezsigntemplatesigner_request->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezdoctemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezdoctemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezdoctemplatedocument_id_local_var = fki_ezdoctemplatedocument_id->valuedouble;
    }

    // ezsigntemplatesigner_request->b_ezsigntemplatesigner_receivecopy
    cJSON *b_ezsigntemplatesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "bEzsigntemplatesignerReceivecopy");
    if (cJSON_IsNull(b_ezsigntemplatesigner_receivecopy)) {
        b_ezsigntemplatesigner_receivecopy = NULL;
    }
    if (b_ezsigntemplatesigner_receivecopy) { 
    if(!cJSON_IsBool(b_ezsigntemplatesigner_receivecopy))
    {
    goto end; //Bool
    }
    b_ezsigntemplatesigner_receivecopy_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatesigner_receivecopy_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatesigner_receivecopy_local_var = b_ezsigntemplatesigner_receivecopy->valueint;
    }

    // ezsigntemplatesigner_request->e_ezsigntemplatesigner_mapping
    cJSON *e_ezsigntemplatesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "eEzsigntemplatesignerMapping");
    if (cJSON_IsNull(e_ezsigntemplatesigner_mapping)) {
        e_ezsigntemplatesigner_mapping = NULL;
    }
    if (e_ezsigntemplatesigner_mapping) { 
    e_ezsigntemplatesigner_mapping_local_nonprim = field_e_ezsigntemplatesigner_mapping_parseFromJSON(e_ezsigntemplatesigner_mapping); //custom
    }

    // ezsigntemplatesigner_request->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_requestJSON, "sEzsigntemplatesignerDescription");
    if (cJSON_IsNull(s_ezsigntemplatesigner_description)) {
        s_ezsigntemplatesigner_description = NULL;
    }
    if (!s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesigner_description))
    {
    goto end; //String
    }


    if (s_ezsigntemplatesigner_description && !cJSON_IsNull(s_ezsigntemplatesigner_description)) s_ezsigntemplatesigner_description_local_str = strdup(s_ezsigntemplatesigner_description->valuestring);

    ezsigntemplatesigner_request_local_var = ezsigntemplatesigner_request_create_internal (
        pki_ezsigntemplatesigner_id_local_var,
        fki_ezsigntemplate_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var,
        fki_ezdoctemplatedocument_id_local_var,
        b_ezsigntemplatesigner_receivecopy_local_var,
        e_ezsigntemplatesigner_mapping ? e_ezsigntemplatesigner_mapping_local_nonprim : 0,
        s_ezsigntemplatesigner_description_local_str
        );

    if (!ezsigntemplatesigner_request_local_var) {
        goto end;
    }

    return ezsigntemplatesigner_request_local_var;
end:
    if (pki_ezsigntemplatesigner_id_local_var) {
        free(pki_ezsigntemplatesigner_id_local_var);
        pki_ezsigntemplatesigner_id_local_var = NULL;
    }
    if (fki_ezsigntemplate_id_local_var) {
        free(fki_ezsigntemplate_id_local_var);
        fki_ezsigntemplate_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (fki_ezdoctemplatedocument_id_local_var) {
        free(fki_ezdoctemplatedocument_id_local_var);
        fki_ezdoctemplatedocument_id_local_var = NULL;
    }
    if (b_ezsigntemplatesigner_receivecopy_local_var) {
        free(b_ezsigntemplatesigner_receivecopy_local_var);
        b_ezsigntemplatesigner_receivecopy_local_var = NULL;
    }
    if (e_ezsigntemplatesigner_mapping_local_nonprim) {
        e_ezsigntemplatesigner_mapping_local_nonprim = 0;
    }
    if (s_ezsigntemplatesigner_description_local_str) {
        free(s_ezsigntemplatesigner_description_local_str);
        s_ezsigntemplatesigner_description_local_str = NULL;
    }
    return NULL;

}
