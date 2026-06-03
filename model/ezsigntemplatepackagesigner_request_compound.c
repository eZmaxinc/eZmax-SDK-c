#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_request_compound.h"



static ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create_internal(
    int *pki_ezsigntemplatepackagesigner_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezdoctemplatedocument_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_local_var = malloc(sizeof(ezsigntemplatepackagesigner_request_compound_t));
    if (!ezsigntemplatepackagesigner_request_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepackagesigner_request_compound_local_var, 0, sizeof(ezsigntemplatepackagesigner_request_compound_t));
    ezsigntemplatepackagesigner_request_compound_local_var->_library_owned = 1;
    ezsigntemplatepackagesigner_request_compound_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_request_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_request_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackagesigner_request_compound_local_var->fki_user_id = fki_user_id;
    ezsigntemplatepackagesigner_request_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsigntemplatepackagesigner_request_compound_local_var->b_ezsigntemplatepackagesigner_receivecopy = b_ezsigntemplatepackagesigner_receivecopy;
    ezsigntemplatepackagesigner_request_compound_local_var->e_ezsigntemplatepackagesigner_mapping = e_ezsigntemplatepackagesigner_mapping;
    ezsigntemplatepackagesigner_request_compound_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    return ezsigntemplatepackagesigner_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create(
    int *pki_ezsigntemplatepackagesigner_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezdoctemplatedocument_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    int *pki_ezsigntemplatepackagesigner_id_copy = NULL;
    if (pki_ezsigntemplatepackagesigner_id) {
        pki_ezsigntemplatepackagesigner_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatepackagesigner_id_copy) *pki_ezsigntemplatepackagesigner_id_copy = *pki_ezsigntemplatepackagesigner_id;
    }
    int *fki_ezsigntemplatepackage_id_copy = NULL;
    if (fki_ezsigntemplatepackage_id) {
        fki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepackage_id_copy) *fki_ezsigntemplatepackage_id_copy = *fki_ezsigntemplatepackage_id;
    }
    int *fki_ezdoctemplatedocument_id_copy = NULL;
    if (fki_ezdoctemplatedocument_id) {
        fki_ezdoctemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezdoctemplatedocument_id_copy) *fki_ezdoctemplatedocument_id_copy = *fki_ezdoctemplatedocument_id;
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
    int *b_ezsigntemplatepackagesigner_receivecopy_copy = NULL;
    if (b_ezsigntemplatepackagesigner_receivecopy) {
        b_ezsigntemplatepackagesigner_receivecopy_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackagesigner_receivecopy_copy) *b_ezsigntemplatepackagesigner_receivecopy_copy = *b_ezsigntemplatepackagesigner_receivecopy;
    }
    ezsigntemplatepackagesigner_request_compound_t *result = ezsigntemplatepackagesigner_request_compound_create_internal (
        pki_ezsigntemplatepackagesigner_id_copy,
        fki_ezsigntemplatepackage_id_copy,
        fki_ezdoctemplatedocument_id_copy,
        fki_user_id_copy,
        fki_usergroup_id_copy,
        b_ezsigntemplatepackagesigner_receivecopy_copy,
        e_ezsigntemplatepackagesigner_mapping,
        s_ezsigntemplatepackagesigner_description
        );
    if (!result) {
        free(pki_ezsigntemplatepackagesigner_id_copy);
        free(fki_ezsigntemplatepackage_id_copy);
        free(fki_ezdoctemplatedocument_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroup_id_copy);
        free(b_ezsigntemplatepackagesigner_receivecopy_copy);
    }
    return result;
}

void ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound) {
    if(NULL == ezsigntemplatepackagesigner_request_compound){
        return ;
    }
    if(ezsigntemplatepackagesigner_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id) {
        free(ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id);
        ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id);
        ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id) {
        free(ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id);
        ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->fki_user_id) {
        free(ezsigntemplatepackagesigner_request_compound->fki_user_id);
        ezsigntemplatepackagesigner_request_compound->fki_user_id = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->fki_usergroup_id) {
        free(ezsigntemplatepackagesigner_request_compound->fki_usergroup_id);
        ezsigntemplatepackagesigner_request_compound->fki_usergroup_id = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy) {
        free(ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy);
        ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy = NULL;
    }
    if (ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_request_compound);
}

cJSON *ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id
    if(ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", *ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", *ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request_compound->fki_user_id
    if(ezsigntemplatepackagesigner_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsigntemplatepackagesigner_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request_compound->fki_usergroup_id
    if(ezsigntemplatepackagesigner_request_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *ezsigntemplatepackagesigner_request_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy
    if(ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackagesignerReceivecopy", *ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatepackagesigner_request_compound->e_ezsigntemplatepackagesigner_mapping
    if(ezsigntemplatepackagesigner_request_compound->e_ezsigntemplatepackagesigner_mapping != ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__NULL) {
    cJSON *e_ezsigntemplatepackagesigner_mapping_local_JSON = field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(ezsigntemplatepackagesigner_request_compound->e_ezsigntemplatepackagesigner_mapping);
    if(e_ezsigntemplatepackagesigner_mapping_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepackagesignerMapping", e_ezsigntemplatepackagesigner_mapping_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_compoundJSON){

    ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id
    int *pki_ezsigntemplatepackagesigner_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id
    int *fki_ezdoctemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy
    int *b_ezsigntemplatepackagesigner_receivecopy_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request_compound->e_ezsigntemplatepackagesigner_mapping
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping_local_nonprim = 0;

    char *s_ezsigntemplatepackagesigner_description_local_str = NULL;

    // ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "pkiEzsigntemplatepackagesignerID");
    if (cJSON_IsNull(pki_ezsigntemplatepackagesigner_id)) {
        pki_ezsigntemplatepackagesigner_id = NULL;
    }
    if (pki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatepackagesigner_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatepackagesigner_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatepackagesigner_id_local_var = pki_ezsigntemplatepackagesigner_id->valuedouble;
    }

    // ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatepackage_id_local_var = fki_ezsigntemplatepackage_id->valuedouble;

    // ezsigntemplatepackagesigner_request_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "fkiEzdoctemplatedocumentID");
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

    // ezsigntemplatepackagesigner_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "fkiUserID");
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

    // ezsigntemplatepackagesigner_request_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "fkiUsergroupID");
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

    // ezsigntemplatepackagesigner_request_compound->b_ezsigntemplatepackagesigner_receivecopy
    cJSON *b_ezsigntemplatepackagesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "bEzsigntemplatepackagesignerReceivecopy");
    if (cJSON_IsNull(b_ezsigntemplatepackagesigner_receivecopy)) {
        b_ezsigntemplatepackagesigner_receivecopy = NULL;
    }
    if (b_ezsigntemplatepackagesigner_receivecopy) { 
    if(!cJSON_IsBool(b_ezsigntemplatepackagesigner_receivecopy))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackagesigner_receivecopy_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackagesigner_receivecopy_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackagesigner_receivecopy_local_var = b_ezsigntemplatepackagesigner_receivecopy->valueint;
    }

    // ezsigntemplatepackagesigner_request_compound->e_ezsigntemplatepackagesigner_mapping
    cJSON *e_ezsigntemplatepackagesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "eEzsigntemplatepackagesignerMapping");
    if (cJSON_IsNull(e_ezsigntemplatepackagesigner_mapping)) {
        e_ezsigntemplatepackagesigner_mapping = NULL;
    }
    if (e_ezsigntemplatepackagesigner_mapping) { 
    e_ezsigntemplatepackagesigner_mapping_local_nonprim = field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(e_ezsigntemplatepackagesigner_mapping); //custom
    }

    // ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "sEzsigntemplatepackagesignerDescription");
    if (cJSON_IsNull(s_ezsigntemplatepackagesigner_description)) {
        s_ezsigntemplatepackagesigner_description = NULL;
    }
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    if (s_ezsigntemplatepackagesigner_description && !cJSON_IsNull(s_ezsigntemplatepackagesigner_description)) s_ezsigntemplatepackagesigner_description_local_str = strdup(s_ezsigntemplatepackagesigner_description->valuestring);

    ezsigntemplatepackagesigner_request_compound_local_var = ezsigntemplatepackagesigner_request_compound_create_internal (
        pki_ezsigntemplatepackagesigner_id_local_var,
        fki_ezsigntemplatepackage_id_local_var,
        fki_ezdoctemplatedocument_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var,
        b_ezsigntemplatepackagesigner_receivecopy_local_var,
        e_ezsigntemplatepackagesigner_mapping ? e_ezsigntemplatepackagesigner_mapping_local_nonprim : 0,
        s_ezsigntemplatepackagesigner_description_local_str
        );

    if (!ezsigntemplatepackagesigner_request_compound_local_var) {
        goto end;
    }

    return ezsigntemplatepackagesigner_request_compound_local_var;
end:
    if (pki_ezsigntemplatepackagesigner_id_local_var) {
        free(pki_ezsigntemplatepackagesigner_id_local_var);
        pki_ezsigntemplatepackagesigner_id_local_var = NULL;
    }
    if (fki_ezsigntemplatepackage_id_local_var) {
        free(fki_ezsigntemplatepackage_id_local_var);
        fki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (fki_ezdoctemplatedocument_id_local_var) {
        free(fki_ezdoctemplatedocument_id_local_var);
        fki_ezdoctemplatedocument_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (b_ezsigntemplatepackagesigner_receivecopy_local_var) {
        free(b_ezsigntemplatepackagesigner_receivecopy_local_var);
        b_ezsigntemplatepackagesigner_receivecopy_local_var = NULL;
    }
    if (e_ezsigntemplatepackagesigner_mapping_local_nonprim) {
        e_ezsigntemplatepackagesigner_mapping_local_nonprim = 0;
    }
    if (s_ezsigntemplatepackagesigner_description_local_str) {
        free(s_ezsigntemplatepackagesigner_description_local_str);
        s_ezsigntemplatepackagesigner_description_local_str = NULL;
    }
    return NULL;

}
