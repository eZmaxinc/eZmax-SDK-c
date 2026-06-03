#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_response_compound.h"



static ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_create_internal(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    int *b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
    ) {
    ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_local_var = malloc(sizeof(ezsigntemplatesigner_response_compound_t));
    if (!ezsigntemplatesigner_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesigner_response_compound_local_var, 0, sizeof(ezsigntemplatesigner_response_compound_t));
    ezsigntemplatesigner_response_compound_local_var->_library_owned = 1;
    ezsigntemplatesigner_response_compound_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_response_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_response_compound_local_var->fki_user_id = fki_user_id;
    ezsigntemplatesigner_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsigntemplatesigner_response_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatesigner_response_compound_local_var->b_ezsigntemplatesigner_receivecopy = b_ezsigntemplatesigner_receivecopy;
    ezsigntemplatesigner_response_compound_local_var->e_ezsigntemplatesigner_mapping = e_ezsigntemplatesigner_mapping;
    ezsigntemplatesigner_response_compound_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;
    ezsigntemplatesigner_response_compound_local_var->s_user_name = s_user_name;
    ezsigntemplatesigner_response_compound_local_var->s_usergroup_name_x = s_usergroup_name_x;
    return ezsigntemplatesigner_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_create(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    int *b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
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
    ezsigntemplatesigner_response_compound_t *result = ezsigntemplatesigner_response_compound_create_internal (
        pki_ezsigntemplatesigner_id_copy,
        fki_ezsigntemplate_id_copy,
        fki_user_id_copy,
        fki_usergroup_id_copy,
        fki_ezdoctemplatedocument_id_copy,
        b_ezsigntemplatesigner_receivecopy_copy,
        e_ezsigntemplatesigner_mapping,
        s_ezsigntemplatesigner_description,
        s_user_name,
        s_usergroup_name_x
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

void ezsigntemplatesigner_response_compound_free(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound) {
    if(NULL == ezsigntemplatesigner_response_compound){
        return ;
    }
    if(ezsigntemplatesigner_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id) {
        free(ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id);
        ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id = NULL;
    }
    if (ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id) {
        free(ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id);
        ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplatesigner_response_compound->fki_user_id) {
        free(ezsigntemplatesigner_response_compound->fki_user_id);
        ezsigntemplatesigner_response_compound->fki_user_id = NULL;
    }
    if (ezsigntemplatesigner_response_compound->fki_usergroup_id) {
        free(ezsigntemplatesigner_response_compound->fki_usergroup_id);
        ezsigntemplatesigner_response_compound->fki_usergroup_id = NULL;
    }
    if (ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id) {
        free(ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id);
        ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id = NULL;
    }
    if (ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy) {
        free(ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy);
        ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_user_name) {
        free(ezsigntemplatesigner_response_compound->s_user_name);
        ezsigntemplatesigner_response_compound->s_user_name = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_usergroup_name_x) {
        free(ezsigntemplatesigner_response_compound->s_usergroup_name_x);
        ezsigntemplatesigner_response_compound->s_usergroup_name_x = NULL;
    }
    free(ezsigntemplatesigner_response_compound);
}

cJSON *ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id
    if (!ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", *ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response_compound->fki_user_id
    if(ezsigntemplatesigner_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsigntemplatesigner_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->fki_usergroup_id
    if(ezsigntemplatesigner_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *ezsigntemplatesigner_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", *ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy
    if(ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignerReceivecopy", *ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    if(ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping != ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__NULL) {
    cJSON *e_ezsigntemplatesigner_mapping_local_JSON = field_e_ezsigntemplatesigner_mapping_convertToJSON(ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping);
    if(e_ezsigntemplatesigner_mapping_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignerMapping", e_ezsigntemplatesigner_mapping_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatesigner_response_compound->s_user_name
    if(ezsigntemplatesigner_response_compound->s_user_name) {
    if(cJSON_AddStringToObject(item, "sUserName", ezsigntemplatesigner_response_compound->s_user_name) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesigner_response_compound->s_usergroup_name_x
    if(ezsigntemplatesigner_response_compound->s_usergroup_name_x) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", ezsigntemplatesigner_response_compound->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatesigner_response_compoundJSON){

    ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id
    int *pki_ezsigntemplatesigner_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id
    int *fki_ezdoctemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy
    int *b_ezsigntemplatesigner_receivecopy_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping_local_nonprim = 0;

    char *s_ezsigntemplatesigner_description_local_str = NULL;

    char *s_user_name_local_str = NULL;

    char *s_usergroup_name_x_local_str = NULL;

    // ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "pkiEzsigntemplatesignerID");
    if (cJSON_IsNull(pki_ezsigntemplatesigner_id)) {
        pki_ezsigntemplatesigner_id = NULL;
    }
    if (!pki_ezsigntemplatesigner_id) {
        goto end;
    }

    
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

    // ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiEzsigntemplateID");
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

    // ezsigntemplatesigner_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiUserID");
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

    // ezsigntemplatesigner_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiUsergroupID");
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

    // ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiEzdoctemplatedocumentID");
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

    // ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy
    cJSON *b_ezsigntemplatesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "bEzsigntemplatesignerReceivecopy");
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

    // ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    cJSON *e_ezsigntemplatesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "eEzsigntemplatesignerMapping");
    if (cJSON_IsNull(e_ezsigntemplatesigner_mapping)) {
        e_ezsigntemplatesigner_mapping = NULL;
    }
    if (e_ezsigntemplatesigner_mapping) { 
    e_ezsigntemplatesigner_mapping_local_nonprim = field_e_ezsigntemplatesigner_mapping_parseFromJSON(e_ezsigntemplatesigner_mapping); //custom
    }

    // ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sEzsigntemplatesignerDescription");
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

    // ezsigntemplatesigner_response_compound->s_user_name
    cJSON *s_user_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sUserName");
    if (cJSON_IsNull(s_user_name)) {
        s_user_name = NULL;
    }
    if (s_user_name) { 
    if(!cJSON_IsString(s_user_name) && !cJSON_IsNull(s_user_name))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesigner_response_compound->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sUsergroupNameX");
    if (cJSON_IsNull(s_usergroup_name_x)) {
        s_usergroup_name_x = NULL;
    }
    if (s_usergroup_name_x) { 
    if(!cJSON_IsString(s_usergroup_name_x) && !cJSON_IsNull(s_usergroup_name_x))
    {
    goto end; //String
    }
    }


    if (s_ezsigntemplatesigner_description && !cJSON_IsNull(s_ezsigntemplatesigner_description)) s_ezsigntemplatesigner_description_local_str = strdup(s_ezsigntemplatesigner_description->valuestring);
    if (s_user_name && !cJSON_IsNull(s_user_name)) s_user_name_local_str = strdup(s_user_name->valuestring);
    if (s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x)) s_usergroup_name_x_local_str = strdup(s_usergroup_name_x->valuestring);

    ezsigntemplatesigner_response_compound_local_var = ezsigntemplatesigner_response_compound_create_internal (
        pki_ezsigntemplatesigner_id_local_var,
        fki_ezsigntemplate_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var,
        fki_ezdoctemplatedocument_id_local_var,
        b_ezsigntemplatesigner_receivecopy_local_var,
        e_ezsigntemplatesigner_mapping ? e_ezsigntemplatesigner_mapping_local_nonprim : 0,
        s_ezsigntemplatesigner_description_local_str,
        s_user_name_local_str,
        s_usergroup_name_x_local_str
        );

    if (!ezsigntemplatesigner_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplatesigner_response_compound_local_var;
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
    if (s_user_name_local_str) {
        free(s_user_name_local_str);
        s_user_name_local_str = NULL;
    }
    if (s_usergroup_name_x_local_str) {
        free(s_usergroup_name_x_local_str);
        s_usergroup_name_x_local_str = NULL;
    }
    return NULL;

}
