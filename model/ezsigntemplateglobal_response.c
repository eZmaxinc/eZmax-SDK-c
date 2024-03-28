#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_response.h"


char* ezsigntemplateglobal_response_e_ezsigntemplateglobal_module_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response__e e_ezsigntemplateglobal_module) {
    char* e_ezsigntemplateglobal_moduleArray[] =  { "NULL", "All", "Inscription" };
    return e_ezsigntemplateglobal_moduleArray[e_ezsigntemplateglobal_module];
}

ezmax_api_definition__full_ezsigntemplateglobal_response__e ezsigntemplateglobal_response_e_ezsigntemplateglobal_module_FromString(char* e_ezsigntemplateglobal_module){
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
char* ezsigntemplateglobal_response_e_ezsigntemplateglobal_supplier_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response__e e_ezsigntemplateglobal_supplier) {
    char* e_ezsigntemplateglobal_supplierArray[] =  { "NULL", "Centris", "Webforms", "GHACQ" };
    return e_ezsigntemplateglobal_supplierArray[e_ezsigntemplateglobal_supplier];
}

ezmax_api_definition__full_ezsigntemplateglobal_response__e ezsigntemplateglobal_response_e_ezsigntemplateglobal_supplier_FromString(char* e_ezsigntemplateglobal_supplier){
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

ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_create(
    int pki_ezsigntemplateglobal_id,
    int fki_ezsigntemplateglobaldocument_id,
    int fki_module_id,
    char *s_module_name_x,
    int fki_language_id,
    char *s_language_name_x,
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module,
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description
    ) {
    ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_local_var = malloc(sizeof(ezsigntemplateglobal_response_t));
    if (!ezsigntemplateglobal_response_local_var) {
        return NULL;
    }
    ezsigntemplateglobal_response_local_var->pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    ezsigntemplateglobal_response_local_var->fki_ezsigntemplateglobaldocument_id = fki_ezsigntemplateglobaldocument_id;
    ezsigntemplateglobal_response_local_var->fki_module_id = fki_module_id;
    ezsigntemplateglobal_response_local_var->s_module_name_x = s_module_name_x;
    ezsigntemplateglobal_response_local_var->fki_language_id = fki_language_id;
    ezsigntemplateglobal_response_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplateglobal_response_local_var->e_ezsigntemplateglobal_module = e_ezsigntemplateglobal_module;
    ezsigntemplateglobal_response_local_var->e_ezsigntemplateglobal_supplier = e_ezsigntemplateglobal_supplier;
    ezsigntemplateglobal_response_local_var->s_ezsigntemplateglobal_code = s_ezsigntemplateglobal_code;
    ezsigntemplateglobal_response_local_var->s_ezsigntemplateglobal_description = s_ezsigntemplateglobal_description;

    return ezsigntemplateglobal_response_local_var;
}


void ezsigntemplateglobal_response_free(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response) {
    if(NULL == ezsigntemplateglobal_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_response->s_module_name_x) {
        free(ezsigntemplateglobal_response->s_module_name_x);
        ezsigntemplateglobal_response->s_module_name_x = NULL;
    }
    if (ezsigntemplateglobal_response->s_language_name_x) {
        free(ezsigntemplateglobal_response->s_language_name_x);
        ezsigntemplateglobal_response->s_language_name_x = NULL;
    }
    if (ezsigntemplateglobal_response->e_ezsigntemplateglobal_module) {
        field_e_ezsigntemplateglobal_module_free(ezsigntemplateglobal_response->e_ezsigntemplateglobal_module);
        ezsigntemplateglobal_response->e_ezsigntemplateglobal_module = NULL;
    }
    if (ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier) {
        field_e_ezsigntemplateglobal_supplier_free(ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier);
        ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier = NULL;
    }
    if (ezsigntemplateglobal_response->s_ezsigntemplateglobal_code) {
        free(ezsigntemplateglobal_response->s_ezsigntemplateglobal_code);
        ezsigntemplateglobal_response->s_ezsigntemplateglobal_code = NULL;
    }
    if (ezsigntemplateglobal_response->s_ezsigntemplateglobal_description) {
        free(ezsigntemplateglobal_response->s_ezsigntemplateglobal_description);
        ezsigntemplateglobal_response->s_ezsigntemplateglobal_description = NULL;
    }
    free(ezsigntemplateglobal_response);
}

cJSON *ezsigntemplateglobal_response_convertToJSON(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_response->pki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobal_response->pki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", ezsigntemplateglobal_response->pki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response->fki_ezsigntemplateglobaldocument_id
    if (!ezsigntemplateglobal_response->fki_ezsigntemplateglobaldocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobaldocumentID", ezsigntemplateglobal_response->fki_ezsigntemplateglobaldocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response->fki_module_id
    if (!ezsigntemplateglobal_response->fki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModuleID", ezsigntemplateglobal_response->fki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response->s_module_name_x
    if(ezsigntemplateglobal_response->s_module_name_x) {
    if(cJSON_AddStringToObject(item, "sModuleNameX", ezsigntemplateglobal_response->s_module_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateglobal_response->fki_language_id
    if (!ezsigntemplateglobal_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplateglobal_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_response->s_language_name_x
    if (!ezsigntemplateglobal_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplateglobal_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_response->e_ezsigntemplateglobal_module
    if (ezmax_api_definition__full_ezsigntemplateglobal_response__NULL == ezsigntemplateglobal_response->e_ezsigntemplateglobal_module) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobal_module_local_JSON = field_e_ezsigntemplateglobal_module_convertToJSON(ezsigntemplateglobal_response->e_ezsigntemplateglobal_module);
    if(e_ezsigntemplateglobal_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalModule", e_ezsigntemplateglobal_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier
    if (ezmax_api_definition__full_ezsigntemplateglobal_response__NULL == ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobal_supplier_local_JSON = field_e_ezsigntemplateglobal_supplier_convertToJSON(ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier);
    if(e_ezsigntemplateglobal_supplier_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobalSupplier", e_ezsigntemplateglobal_supplier_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobal_response->s_ezsigntemplateglobal_code
    if (!ezsigntemplateglobal_response->s_ezsigntemplateglobal_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalCode", ezsigntemplateglobal_response->s_ezsigntemplateglobal_code) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_response->s_ezsigntemplateglobal_description
    if (!ezsigntemplateglobal_response->s_ezsigntemplateglobal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalDescription", ezsigntemplateglobal_response->s_ezsigntemplateglobal_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_parseFromJSON(cJSON *ezsigntemplateglobal_responseJSON){

    ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_response->e_ezsigntemplateglobal_module
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module_local_nonprim = NULL;

    // define the local variable for ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier_local_nonprim = NULL;

    // ezsigntemplateglobal_response->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "pkiEzsigntemplateglobalID");
    if (!pki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response->fki_ezsigntemplateglobaldocument_id
    cJSON *fki_ezsigntemplateglobaldocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "fkiEzsigntemplateglobaldocumentID");
    if (!fki_ezsigntemplateglobaldocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobaldocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "fkiModuleID");
    if (!fki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "sModuleNameX");
    if (s_module_name_x) { 
    if(!cJSON_IsString(s_module_name_x) && !cJSON_IsNull(s_module_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplateglobal_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response->e_ezsigntemplateglobal_module
    cJSON *e_ezsigntemplateglobal_module = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "eEzsigntemplateglobalModule");
    if (!e_ezsigntemplateglobal_module) {
        goto end;
    }

    
    e_ezsigntemplateglobal_module_local_nonprim = field_e_ezsigntemplateglobal_module_parseFromJSON(e_ezsigntemplateglobal_module); //custom

    // ezsigntemplateglobal_response->e_ezsigntemplateglobal_supplier
    cJSON *e_ezsigntemplateglobal_supplier = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "eEzsigntemplateglobalSupplier");
    if (!e_ezsigntemplateglobal_supplier) {
        goto end;
    }

    
    e_ezsigntemplateglobal_supplier_local_nonprim = field_e_ezsigntemplateglobal_supplier_parseFromJSON(e_ezsigntemplateglobal_supplier); //custom

    // ezsigntemplateglobal_response->s_ezsigntemplateglobal_code
    cJSON *s_ezsigntemplateglobal_code = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "sEzsigntemplateglobalCode");
    if (!s_ezsigntemplateglobal_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_code))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_response->s_ezsigntemplateglobal_description
    cJSON *s_ezsigntemplateglobal_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_responseJSON, "sEzsigntemplateglobalDescription");
    if (!s_ezsigntemplateglobal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_description))
    {
    goto end; //String
    }


    ezsigntemplateglobal_response_local_var = ezsigntemplateglobal_response_create (
        pki_ezsigntemplateglobal_id->valuedouble,
        fki_ezsigntemplateglobaldocument_id->valuedouble,
        fki_module_id->valuedouble,
        s_module_name_x && !cJSON_IsNull(s_module_name_x) ? strdup(s_module_name_x->valuestring) : NULL,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        e_ezsigntemplateglobal_module_local_nonprim,
        e_ezsigntemplateglobal_supplier_local_nonprim,
        strdup(s_ezsigntemplateglobal_code->valuestring),
        strdup(s_ezsigntemplateglobal_description->valuestring)
        );

    return ezsigntemplateglobal_response_local_var;
end:
    if (e_ezsigntemplateglobal_module_local_nonprim) {
        field_e_ezsigntemplateglobal_module_free(e_ezsigntemplateglobal_module_local_nonprim);
        e_ezsigntemplateglobal_module_local_nonprim = NULL;
    }
    if (e_ezsigntemplateglobal_supplier_local_nonprim) {
        field_e_ezsigntemplateglobal_supplier_free(e_ezsigntemplateglobal_supplier_local_nonprim);
        e_ezsigntemplateglobal_supplier_local_nonprim = NULL;
    }
    return NULL;

}
