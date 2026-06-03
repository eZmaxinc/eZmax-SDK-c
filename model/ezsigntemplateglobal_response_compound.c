#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_response_compound.h"



static ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_create_internal(
    int *pki_ezsigntemplateglobal_id,
    int *fki_ezsigntemplateglobaldocument_id,
    int *fki_module_id,
    char *s_module_name_x,
    int *fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description,
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument,
    list_t *a_obj_ezsigntemplateglobalsigner,
    list_t *a_obj_ezsigntemplateglobalannotation
    ) {
    ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_local_var = malloc(sizeof(ezsigntemplateglobal_response_compound_t));
    if (!ezsigntemplateglobal_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplateglobal_response_compound_local_var, 0, sizeof(ezsigntemplateglobal_response_compound_t));
    ezsigntemplateglobal_response_compound_local_var->_library_owned = 1;
    ezsigntemplateglobal_response_compound_local_var->pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    ezsigntemplateglobal_response_compound_local_var->fki_ezsigntemplateglobaldocument_id = fki_ezsigntemplateglobaldocument_id;
    ezsigntemplateglobal_response_compound_local_var->fki_module_id = fki_module_id;
    ezsigntemplateglobal_response_compound_local_var->s_module_name_x = s_module_name_x;
    ezsigntemplateglobal_response_compound_local_var->fki_language_id = fki_language_id;
    ezsigntemplateglobal_response_compound_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplateglobal_response_compound_local_var->e_ezsigntemplateglobal_module = e_ezsigntemplateglobal_module;
    ezsigntemplateglobal_response_compound_local_var->e_ezsigntemplateglobal_supplier = e_ezsigntemplateglobal_supplier;
    ezsigntemplateglobal_response_compound_local_var->s_ezsigntemplateglobal_code = s_ezsigntemplateglobal_code;
    ezsigntemplateglobal_response_compound_local_var->s_ezsigntemplateglobal_description = s_ezsigntemplateglobal_description;
    ezsigntemplateglobal_response_compound_local_var->obj_ezsigntemplateglobaldocument = obj_ezsigntemplateglobaldocument;
    ezsigntemplateglobal_response_compound_local_var->a_obj_ezsigntemplateglobalsigner = a_obj_ezsigntemplateglobalsigner;
    ezsigntemplateglobal_response_compound_local_var->a_obj_ezsigntemplateglobalannotation = a_obj_ezsigntemplateglobalannotation;
    return ezsigntemplateglobal_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_create(
    int *pki_ezsigntemplateglobal_id,
    int *fki_ezsigntemplateglobaldocument_id,
    int *fki_module_id,
    char *s_module_name_x,
    int *fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description,
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument,
    list_t *a_obj_ezsigntemplateglobalsigner,
    list_t *a_obj_ezsigntemplateglobalannotation
    ) {
    int *pki_ezsigntemplateglobal_id_copy = NULL;
    if (pki_ezsigntemplateglobal_id) {
        pki_ezsigntemplateglobal_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateglobal_id_copy) *pki_ezsigntemplateglobal_id_copy = *pki_ezsigntemplateglobal_id;
    }
    int *fki_ezsigntemplateglobaldocument_id_copy = NULL;
    if (fki_ezsigntemplateglobaldocument_id) {
        fki_ezsigntemplateglobaldocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateglobaldocument_id_copy) *fki_ezsigntemplateglobaldocument_id_copy = *fki_ezsigntemplateglobaldocument_id;
    }
    int *fki_module_id_copy = NULL;
    if (fki_module_id) {
        fki_module_id_copy = malloc(sizeof(int));
        if (fki_module_id_copy) *fki_module_id_copy = *fki_module_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    ezsigntemplateglobal_response_compound_t *result = ezsigntemplateglobal_response_compound_create_internal (
        pki_ezsigntemplateglobal_id_copy,
        fki_ezsigntemplateglobaldocument_id_copy,
        fki_module_id_copy,
        s_module_name_x,
        fki_language_id_copy,
        s_language_name_x,
        e_ezsigntemplateglobal_module,
        e_ezsigntemplateglobal_supplier,
        s_ezsigntemplateglobal_code,
        s_ezsigntemplateglobal_description,
        obj_ezsigntemplateglobaldocument,
        a_obj_ezsigntemplateglobalsigner,
        a_obj_ezsigntemplateglobalannotation
        );
    if (!result) {
        free(pki_ezsigntemplateglobal_id_copy);
        free(fki_ezsigntemplateglobaldocument_id_copy);
        free(fki_module_id_copy);
        free(fki_language_id_copy);
    }
    return result;
}

void ezsigntemplateglobal_response_compound_free(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound) {
    if(NULL == ezsigntemplateglobal_response_compound){
        return ;
    }
    if(ezsigntemplateglobal_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobal_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id) {
        free(ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id);
        ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id = NULL;
    }
    if (ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id) {
        free(ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id);
        ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id = NULL;
    }
    if (ezsigntemplateglobal_response_compound->fki_module_id) {
        free(ezsigntemplateglobal_response_compound->fki_module_id);
        ezsigntemplateglobal_response_compound->fki_module_id = NULL;
    }
    if (ezsigntemplateglobal_response_compound->s_module_name_x) {
        free(ezsigntemplateglobal_response_compound->s_module_name_x);
        ezsigntemplateglobal_response_compound->s_module_name_x = NULL;
    }
    if (ezsigntemplateglobal_response_compound->fki_language_id) {
        free(ezsigntemplateglobal_response_compound->fki_language_id);
        ezsigntemplateglobal_response_compound->fki_language_id = NULL;
    }
    if (ezsigntemplateglobal_response_compound->s_language_name_x) {
        free(ezsigntemplateglobal_response_compound->s_language_name_x);
        ezsigntemplateglobal_response_compound->s_language_name_x = NULL;
    }
    if (ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code) {
        free(ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code);
        ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code = NULL;
    }
    if (ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description) {
        free(ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description);
        ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description = NULL;
    }
    if (ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument) {
        ezsigntemplateglobaldocument_response_free(ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument);
        ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument = NULL;
    }
    if (ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner) {
        list_ForEach(listEntry, ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner) {
            ezsigntemplateglobalsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner);
        ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner = NULL;
    }
    if (ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation) {
        list_ForEach(listEntry, ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation) {
            ezsigntemplateglobalannotation_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation);
        ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation = NULL;
    }
    free(ezsigntemplateglobal_response_compound);
}

cJSON *ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", *ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id
    if (!ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobaldocumentID", *ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->fki_module_id
    if (!ezsigntemplateglobal_response_compound->fki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModuleID", *ezsigntemplateglobal_response_compound->fki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->s_module_name_x
    if(ezsigntemplateglobal_response_compound->s_module_name_x) {
    if(cJSON_AddStringToObject(item, "sModuleNameX", ezsigntemplateglobal_response_compound->s_module_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateglobal_response_compound->fki_language_id
    if (!ezsigntemplateglobal_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsigntemplateglobal_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->s_language_name_x
    if (!ezsigntemplateglobal_response_compound->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplateglobal_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__NULL == ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobal_module_local_JSON = field_e_ezsigntemplateglobal_module_convertToJSON(ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module);
    if(e_ezsigntemplateglobal_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalModule", e_ezsigntemplateglobal_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__NULL == ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobal_supplier_local_JSON = field_e_ezsigntemplateglobal_supplier_convertToJSON(ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier);
    if(e_ezsigntemplateglobal_supplier_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalSupplier", e_ezsigntemplateglobal_supplier_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code
    if (!ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalCode", ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description
    if (!ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalDescription", ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument
    if(ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument) {
    cJSON *obj_ezsigntemplateglobaldocument_local_JSON = ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument);
    if(obj_ezsigntemplateglobaldocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateglobaldocument", obj_ezsigntemplateglobaldocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner
    if (!ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateglobalsigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplateglobalsigner");
    if(a_obj_ezsigntemplateglobalsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateglobalsignerListEntry;
    if (ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner) {
    list_ForEach(a_obj_ezsigntemplateglobalsignerListEntry, ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner) {
    cJSON *itemLocal = ezsigntemplateglobalsigner_response_compound_convertToJSON(a_obj_ezsigntemplateglobalsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateglobalsigner, itemLocal);
    }
    }


    // ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation
    if(ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation) {
    cJSON *a_obj_ezsigntemplateglobalannotation = cJSON_AddArrayToObject(item, "a_objEzsigntemplateglobalannotation");
    if(a_obj_ezsigntemplateglobalannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateglobalannotationListEntry;
    if (ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation) {
    list_ForEach(a_obj_ezsigntemplateglobalannotationListEntry, ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation) {
    cJSON *itemLocal = ezsigntemplateglobalannotation_response_compound_convertToJSON(a_obj_ezsigntemplateglobalannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateglobalannotation, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_parseFromJSON(cJSON *ezsigntemplateglobal_response_compoundJSON){

    ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id
    int *pki_ezsigntemplateglobal_id_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id
    int *fki_ezsigntemplateglobaldocument_id_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->fki_module_id
    int *fki_module_id_local_var = NULL;

    char *s_module_name_x_local_str = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_language_name_x_local_str = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier_local_nonprim = 0;

    char *s_ezsigntemplateglobal_code_local_str = NULL;

    char *s_ezsigntemplateglobal_description_local_str = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument_local_nonprim = NULL;

    // define the local list for ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner
    list_t *a_obj_ezsigntemplateglobalsignerList = NULL;

    // define the local list for ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation
    list_t *a_obj_ezsigntemplateglobalannotationList = NULL;

    // ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "pkiEzsigntemplateglobalID");
    if (cJSON_IsNull(pki_ezsigntemplateglobal_id)) {
        pki_ezsigntemplateglobal_id = NULL;
    }
    if (!pki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateglobal_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateglobal_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateglobal_id_local_var = pki_ezsigntemplateglobal_id->valuedouble;

    // ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id
    cJSON *fki_ezsigntemplateglobaldocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiEzsigntemplateglobaldocumentID");
    if (cJSON_IsNull(fki_ezsigntemplateglobaldocument_id)) {
        fki_ezsigntemplateglobaldocument_id = NULL;
    }
    if (!fki_ezsigntemplateglobaldocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobaldocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateglobaldocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateglobaldocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateglobaldocument_id_local_var = fki_ezsigntemplateglobaldocument_id->valuedouble;

    // ezsigntemplateglobal_response_compound->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiModuleID");
    if (cJSON_IsNull(fki_module_id)) {
        fki_module_id = NULL;
    }
    if (!fki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }
    fki_module_id_local_var = malloc(sizeof(int));
    if(!fki_module_id_local_var)
    {
        goto end;
    }
    *fki_module_id_local_var = fki_module_id->valuedouble;

    // ezsigntemplateglobal_response_compound->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sModuleNameX");
    if (cJSON_IsNull(s_module_name_x)) {
        s_module_name_x = NULL;
    }
    if (s_module_name_x) { 
    if(!cJSON_IsString(s_module_name_x) && !cJSON_IsNull(s_module_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplateglobal_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // ezsigntemplateglobal_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module
    cJSON *e_ezsigntemplateglobal_module = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "eEzsigntemplateglobalModule");
    if (cJSON_IsNull(e_ezsigntemplateglobal_module)) {
        e_ezsigntemplateglobal_module = NULL;
    }
    if (!e_ezsigntemplateglobal_module) {
        goto end;
    }

    
    e_ezsigntemplateglobal_module_local_nonprim = field_e_ezsigntemplateglobal_module_parseFromJSON(e_ezsigntemplateglobal_module); //custom

    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier
    cJSON *e_ezsigntemplateglobal_supplier = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "eEzsigntemplateglobalSupplier");
    if (cJSON_IsNull(e_ezsigntemplateglobal_supplier)) {
        e_ezsigntemplateglobal_supplier = NULL;
    }
    if (!e_ezsigntemplateglobal_supplier) {
        goto end;
    }

    
    e_ezsigntemplateglobal_supplier_local_nonprim = field_e_ezsigntemplateglobal_supplier_parseFromJSON(e_ezsigntemplateglobal_supplier); //custom

    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code
    cJSON *s_ezsigntemplateglobal_code = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sEzsigntemplateglobalCode");
    if (cJSON_IsNull(s_ezsigntemplateglobal_code)) {
        s_ezsigntemplateglobal_code = NULL;
    }
    if (!s_ezsigntemplateglobal_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_code))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description
    cJSON *s_ezsigntemplateglobal_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sEzsigntemplateglobalDescription");
    if (cJSON_IsNull(s_ezsigntemplateglobal_description)) {
        s_ezsigntemplateglobal_description = NULL;
    }
    if (!s_ezsigntemplateglobal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_description))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument
    cJSON *obj_ezsigntemplateglobaldocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "objEzsigntemplateglobaldocument");
    if (cJSON_IsNull(obj_ezsigntemplateglobaldocument)) {
        obj_ezsigntemplateglobaldocument = NULL;
    }
    if (obj_ezsigntemplateglobaldocument) { 
    obj_ezsigntemplateglobaldocument_local_nonprim = ezsigntemplateglobaldocument_response_parseFromJSON(obj_ezsigntemplateglobaldocument); //nonprimitive
    }

    // ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner
    cJSON *a_obj_ezsigntemplateglobalsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "a_objEzsigntemplateglobalsigner");
    if (cJSON_IsNull(a_obj_ezsigntemplateglobalsigner)) {
        a_obj_ezsigntemplateglobalsigner = NULL;
    }
    if (!a_obj_ezsigntemplateglobalsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateglobalsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateglobalsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateglobalsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateglobalsigner_local_nonprimitive,a_obj_ezsigntemplateglobalsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateglobalsigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateglobalsigner_response_compound_t *a_obj_ezsigntemplateglobalsignerItem = ezsigntemplateglobalsigner_response_compound_parseFromJSON(a_obj_ezsigntemplateglobalsigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateglobalsignerList, a_obj_ezsigntemplateglobalsignerItem);
    }

    // ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalannotation
    cJSON *a_obj_ezsigntemplateglobalannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "a_objEzsigntemplateglobalannotation");
    if (cJSON_IsNull(a_obj_ezsigntemplateglobalannotation)) {
        a_obj_ezsigntemplateglobalannotation = NULL;
    }
    if (a_obj_ezsigntemplateglobalannotation) { 
    cJSON *a_obj_ezsigntemplateglobalannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateglobalannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateglobalannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateglobalannotation_local_nonprimitive,a_obj_ezsigntemplateglobalannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateglobalannotation_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateglobalannotation_response_compound_t *a_obj_ezsigntemplateglobalannotationItem = ezsigntemplateglobalannotation_response_compound_parseFromJSON(a_obj_ezsigntemplateglobalannotation_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateglobalannotationList, a_obj_ezsigntemplateglobalannotationItem);
    }
    }


    if (s_module_name_x && !cJSON_IsNull(s_module_name_x)) s_module_name_x_local_str = strdup(s_module_name_x->valuestring);
    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_ezsigntemplateglobal_code && !cJSON_IsNull(s_ezsigntemplateglobal_code)) s_ezsigntemplateglobal_code_local_str = strdup(s_ezsigntemplateglobal_code->valuestring);
    if (s_ezsigntemplateglobal_description && !cJSON_IsNull(s_ezsigntemplateglobal_description)) s_ezsigntemplateglobal_description_local_str = strdup(s_ezsigntemplateglobal_description->valuestring);

    ezsigntemplateglobal_response_compound_local_var = ezsigntemplateglobal_response_compound_create_internal (
        pki_ezsigntemplateglobal_id_local_var,
        fki_ezsigntemplateglobaldocument_id_local_var,
        fki_module_id_local_var,
        s_module_name_x_local_str,
        fki_language_id_local_var,
        s_language_name_x_local_str,
        e_ezsigntemplateglobal_module_local_nonprim,
        e_ezsigntemplateglobal_supplier_local_nonprim,
        s_ezsigntemplateglobal_code_local_str,
        s_ezsigntemplateglobal_description_local_str,
        obj_ezsigntemplateglobaldocument ? obj_ezsigntemplateglobaldocument_local_nonprim : NULL,
        a_obj_ezsigntemplateglobalsignerList,
        a_obj_ezsigntemplateglobalannotation ? a_obj_ezsigntemplateglobalannotationList : NULL
        );

    if (!ezsigntemplateglobal_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplateglobal_response_compound_local_var;
end:
    if (pki_ezsigntemplateglobal_id_local_var) {
        free(pki_ezsigntemplateglobal_id_local_var);
        pki_ezsigntemplateglobal_id_local_var = NULL;
    }
    if (fki_ezsigntemplateglobaldocument_id_local_var) {
        free(fki_ezsigntemplateglobaldocument_id_local_var);
        fki_ezsigntemplateglobaldocument_id_local_var = NULL;
    }
    if (fki_module_id_local_var) {
        free(fki_module_id_local_var);
        fki_module_id_local_var = NULL;
    }
    if (s_module_name_x_local_str) {
        free(s_module_name_x_local_str);
        s_module_name_x_local_str = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (e_ezsigntemplateglobal_module_local_nonprim) {
        e_ezsigntemplateglobal_module_local_nonprim = 0;
    }
    if (e_ezsigntemplateglobal_supplier_local_nonprim) {
        e_ezsigntemplateglobal_supplier_local_nonprim = 0;
    }
    if (s_ezsigntemplateglobal_code_local_str) {
        free(s_ezsigntemplateglobal_code_local_str);
        s_ezsigntemplateglobal_code_local_str = NULL;
    }
    if (s_ezsigntemplateglobal_description_local_str) {
        free(s_ezsigntemplateglobal_description_local_str);
        s_ezsigntemplateglobal_description_local_str = NULL;
    }
    if (obj_ezsigntemplateglobaldocument_local_nonprim) {
        ezsigntemplateglobaldocument_response_free(obj_ezsigntemplateglobaldocument_local_nonprim);
        obj_ezsigntemplateglobaldocument_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplateglobalsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateglobalsignerList) {
            ezsigntemplateglobalsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateglobalsignerList);
        a_obj_ezsigntemplateglobalsignerList = NULL;
    }
    if (a_obj_ezsigntemplateglobalannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateglobalannotationList) {
            ezsigntemplateglobalannotation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateglobalannotationList);
        a_obj_ezsigntemplateglobalannotationList = NULL;
    }
    return NULL;

}
