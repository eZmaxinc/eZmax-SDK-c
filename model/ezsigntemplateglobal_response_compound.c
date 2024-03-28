#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_response_compound.h"


char* ezsigntemplateglobal_response_compound_e_ezsigntemplateglobal_module_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response_compound__e e_ezsigntemplateglobal_module) {
    char* e_ezsigntemplateglobal_moduleArray[] =  { "NULL", "All", "Inscription" };
    return e_ezsigntemplateglobal_moduleArray[e_ezsigntemplateglobal_module];
}

ezmax_api_definition__full_ezsigntemplateglobal_response_compound__e ezsigntemplateglobal_response_compound_e_ezsigntemplateglobal_module_FromString(char* e_ezsigntemplateglobal_module){
    int stringToReturn = 0;
    char *e_ezsigntemplateglobal_moduleArray[] =  { "NULL", "All", "Inscription" };
    size_t sizeofArray = sizeof(e_ezsigntemplateglobal_moduleArray) / sizeof(e_ezsigntemplateglobal_moduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateglobal_module, e_ezsigntemplateglobal_moduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplateglobal_response_compound_e_ezsigntemplateglobal_supplier_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response_compound__e e_ezsigntemplateglobal_supplier) {
    char* e_ezsigntemplateglobal_supplierArray[] =  { "NULL", "Centris", "Webforms", "GHACQ" };
    return e_ezsigntemplateglobal_supplierArray[e_ezsigntemplateglobal_supplier];
}

ezmax_api_definition__full_ezsigntemplateglobal_response_compound__e ezsigntemplateglobal_response_compound_e_ezsigntemplateglobal_supplier_FromString(char* e_ezsigntemplateglobal_supplier){
    int stringToReturn = 0;
    char *e_ezsigntemplateglobal_supplierArray[] =  { "NULL", "Centris", "Webforms", "GHACQ" };
    size_t sizeofArray = sizeof(e_ezsigntemplateglobal_supplierArray) / sizeof(e_ezsigntemplateglobal_supplierArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateglobal_supplier, e_ezsigntemplateglobal_supplierArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_create(
    int pki_ezsigntemplateglobal_id,
    int fki_ezsigntemplateglobaldocument_id,
    int fki_module_id,
    char *s_module_name_x,
    int fki_language_id,
    char *s_language_name_x,
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module,
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description,
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument,
    list_t *a_obj_ezsigntemplateglobalsigner
    ) {
    ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_local_var = malloc(sizeof(ezsigntemplateglobal_response_compound_t));
    if (!ezsigntemplateglobal_response_compound_local_var) {
        return NULL;
    }
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

    return ezsigntemplateglobal_response_compound_local_var;
}


void ezsigntemplateglobal_response_compound_free(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound) {
    if(NULL == ezsigntemplateglobal_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_response_compound->s_module_name_x) {
        free(ezsigntemplateglobal_response_compound->s_module_name_x);
        ezsigntemplateglobal_response_compound->s_module_name_x = NULL;
    }
    if (ezsigntemplateglobal_response_compound->s_language_name_x) {
        free(ezsigntemplateglobal_response_compound->s_language_name_x);
        ezsigntemplateglobal_response_compound->s_language_name_x = NULL;
    }
    if (ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module) {
        field_e_ezsigntemplateglobal_module_free(ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module);
        ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module = NULL;
    }
    if (ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier) {
        field_e_ezsigntemplateglobal_supplier_free(ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier);
        ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier = NULL;
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
    free(ezsigntemplateglobal_response_compound);
}

cJSON *ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id
    if (!ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobaldocumentID", ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response_compound->fki_module_id
    if (!ezsigntemplateglobal_response_compound->fki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModuleID", ezsigntemplateglobal_response_compound->fki_module_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplateglobal_response_compound->fki_language_id) == NULL) {
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
    if (ezmax_api_definition__full_ezsigntemplateglobal_response_compound__NULL == ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module) {
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
    if (ezmax_api_definition__full_ezsigntemplateglobal_response_compound__NULL == ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier) {
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

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_parseFromJSON(cJSON *ezsigntemplateglobal_response_compoundJSON){

    ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module_local_nonprim = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier_local_nonprim = NULL;

    // define the local variable for ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument_local_nonprim = NULL;

    // define the local list for ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner
    list_t *a_obj_ezsigntemplateglobalsignerList = NULL;

    // ezsigntemplateglobal_response_compound->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "pkiEzsigntemplateglobalID");
    if (!pki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response_compound->fki_ezsigntemplateglobaldocument_id
    cJSON *fki_ezsigntemplateglobaldocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiEzsigntemplateglobaldocumentID");
    if (!fki_ezsigntemplateglobaldocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobaldocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response_compound->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiModuleID");
    if (!fki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response_compound->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sModuleNameX");
    if (s_module_name_x) { 
    if(!cJSON_IsString(s_module_name_x) && !cJSON_IsNull(s_module_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplateglobal_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_module
    cJSON *e_ezsigntemplateglobal_module = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "eEzsigntemplateglobalModule");
    if (!e_ezsigntemplateglobal_module) {
        goto end;
    }

    
    e_ezsigntemplateglobal_module_local_nonprim = field_e_ezsigntemplateglobal_module_parseFromJSON(e_ezsigntemplateglobal_module); //custom

    // ezsigntemplateglobal_response_compound->e_ezsigntemplateglobal_supplier
    cJSON *e_ezsigntemplateglobal_supplier = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "eEzsigntemplateglobalSupplier");
    if (!e_ezsigntemplateglobal_supplier) {
        goto end;
    }

    
    e_ezsigntemplateglobal_supplier_local_nonprim = field_e_ezsigntemplateglobal_supplier_parseFromJSON(e_ezsigntemplateglobal_supplier); //custom

    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_code
    cJSON *s_ezsigntemplateglobal_code = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sEzsigntemplateglobalCode");
    if (!s_ezsigntemplateglobal_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_code))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->s_ezsigntemplateglobal_description
    cJSON *s_ezsigntemplateglobal_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "sEzsigntemplateglobalDescription");
    if (!s_ezsigntemplateglobal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_description))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response_compound->obj_ezsigntemplateglobaldocument
    cJSON *obj_ezsigntemplateglobaldocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "objEzsigntemplateglobaldocument");
    if (obj_ezsigntemplateglobaldocument) { 
    obj_ezsigntemplateglobaldocument_local_nonprim = ezsigntemplateglobaldocument_response_parseFromJSON(obj_ezsigntemplateglobaldocument); //nonprimitive
    }

    // ezsigntemplateglobal_response_compound->a_obj_ezsigntemplateglobalsigner
    cJSON *a_obj_ezsigntemplateglobalsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_response_compoundJSON, "a_objEzsigntemplateglobalsigner");
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


    ezsigntemplateglobal_response_compound_local_var = ezsigntemplateglobal_response_compound_create (
        pki_ezsigntemplateglobal_id->valuedouble,
        fki_ezsigntemplateglobaldocument_id->valuedouble,
        fki_module_id->valuedouble,
        s_module_name_x && !cJSON_IsNull(s_module_name_x) ? strdup(s_module_name_x->valuestring) : NULL,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        e_ezsigntemplateglobal_module_local_nonprim,
        e_ezsigntemplateglobal_supplier_local_nonprim,
        strdup(s_ezsigntemplateglobal_code->valuestring),
        strdup(s_ezsigntemplateglobal_description->valuestring),
        obj_ezsigntemplateglobaldocument ? obj_ezsigntemplateglobaldocument_local_nonprim : NULL,
        a_obj_ezsigntemplateglobalsignerList
        );

    return ezsigntemplateglobal_response_compound_local_var;
end:
    if (e_ezsigntemplateglobal_module_local_nonprim) {
        field_e_ezsigntemplateglobal_module_free(e_ezsigntemplateglobal_module_local_nonprim);
        e_ezsigntemplateglobal_module_local_nonprim = NULL;
    }
    if (e_ezsigntemplateglobal_supplier_local_nonprim) {
        field_e_ezsigntemplateglobal_supplier_free(e_ezsigntemplateglobal_supplier_local_nonprim);
        e_ezsigntemplateglobal_supplier_local_nonprim = NULL;
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
    return NULL;

}
