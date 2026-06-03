#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxcustomer_response.h"



static custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_create_internal(
    char *fks_ezmaxcustomer_code,
    int *fki_systemconfigurationtype_id,
    multilingual_ezmaxcustomer_company_t *obj_ezmaxcustomer_company
    ) {
    custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_local_var = malloc(sizeof(custom_ezmaxcustomer_response_t));
    if (!custom_ezmaxcustomer_response_local_var) {
        return NULL;
    }
    memset(custom_ezmaxcustomer_response_local_var, 0, sizeof(custom_ezmaxcustomer_response_t));
    custom_ezmaxcustomer_response_local_var->_library_owned = 1;
    custom_ezmaxcustomer_response_local_var->fks_ezmaxcustomer_code = fks_ezmaxcustomer_code;
    custom_ezmaxcustomer_response_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    custom_ezmaxcustomer_response_local_var->obj_ezmaxcustomer_company = obj_ezmaxcustomer_company;
    return custom_ezmaxcustomer_response_local_var;
}

__attribute__((deprecated)) custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_create(
    char *fks_ezmaxcustomer_code,
    int *fki_systemconfigurationtype_id,
    multilingual_ezmaxcustomer_company_t *obj_ezmaxcustomer_company
    ) {
    int *fki_systemconfigurationtype_id_copy = NULL;
    if (fki_systemconfigurationtype_id) {
        fki_systemconfigurationtype_id_copy = malloc(sizeof(int));
        if (fki_systemconfigurationtype_id_copy) *fki_systemconfigurationtype_id_copy = *fki_systemconfigurationtype_id;
    }
    custom_ezmaxcustomer_response_t *result = custom_ezmaxcustomer_response_create_internal (
        fks_ezmaxcustomer_code,
        fki_systemconfigurationtype_id_copy,
        obj_ezmaxcustomer_company
        );
    if (!result) {
        free(fki_systemconfigurationtype_id_copy);
    }
    return result;
}

void custom_ezmaxcustomer_response_free(custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response) {
    if(NULL == custom_ezmaxcustomer_response){
        return ;
    }
    if(custom_ezmaxcustomer_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezmaxcustomer_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxcustomer_response->fks_ezmaxcustomer_code) {
        free(custom_ezmaxcustomer_response->fks_ezmaxcustomer_code);
        custom_ezmaxcustomer_response->fks_ezmaxcustomer_code = NULL;
    }
    if (custom_ezmaxcustomer_response->fki_systemconfigurationtype_id) {
        free(custom_ezmaxcustomer_response->fki_systemconfigurationtype_id);
        custom_ezmaxcustomer_response->fki_systemconfigurationtype_id = NULL;
    }
    if (custom_ezmaxcustomer_response->obj_ezmaxcustomer_company) {
        multilingual_ezmaxcustomer_company_free(custom_ezmaxcustomer_response->obj_ezmaxcustomer_company);
        custom_ezmaxcustomer_response->obj_ezmaxcustomer_company = NULL;
    }
    free(custom_ezmaxcustomer_response);
}

cJSON *custom_ezmaxcustomer_response_convertToJSON(custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxcustomer_response->fks_ezmaxcustomer_code
    if (!custom_ezmaxcustomer_response->fks_ezmaxcustomer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fksEzmaxcustomerCode", custom_ezmaxcustomer_response->fks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxcustomer_response->fki_systemconfigurationtype_id
    if (!custom_ezmaxcustomer_response->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", *custom_ezmaxcustomer_response->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxcustomer_response->obj_ezmaxcustomer_company
    if (!custom_ezmaxcustomer_response->obj_ezmaxcustomer_company) {
        goto fail;
    }
    cJSON *obj_ezmaxcustomer_company_local_JSON = multilingual_ezmaxcustomer_company_convertToJSON(custom_ezmaxcustomer_response->obj_ezmaxcustomer_company);
    if(obj_ezmaxcustomer_company_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomerCompany", obj_ezmaxcustomer_company_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_parseFromJSON(cJSON *custom_ezmaxcustomer_responseJSON){

    custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_local_var = NULL;

    char *fks_ezmaxcustomer_code_local_str = NULL;

    // define the local variable for custom_ezmaxcustomer_response->fki_systemconfigurationtype_id
    int *fki_systemconfigurationtype_id_local_var = NULL;

    // define the local variable for custom_ezmaxcustomer_response->obj_ezmaxcustomer_company
    multilingual_ezmaxcustomer_company_t *obj_ezmaxcustomer_company_local_nonprim = NULL;

    // custom_ezmaxcustomer_response->fks_ezmaxcustomer_code
    cJSON *fks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomer_responseJSON, "fksEzmaxcustomerCode");
    if (cJSON_IsNull(fks_ezmaxcustomer_code)) {
        fks_ezmaxcustomer_code = NULL;
    }
    if (!fks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(fks_ezmaxcustomer_code))
    {
    goto end; //String
    }

    // custom_ezmaxcustomer_response->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomer_responseJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }
    fki_systemconfigurationtype_id_local_var = malloc(sizeof(int));
    if(!fki_systemconfigurationtype_id_local_var)
    {
        goto end;
    }
    *fki_systemconfigurationtype_id_local_var = fki_systemconfigurationtype_id->valuedouble;

    // custom_ezmaxcustomer_response->obj_ezmaxcustomer_company
    cJSON *obj_ezmaxcustomer_company = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomer_responseJSON, "objEzmaxcustomerCompany");
    if (cJSON_IsNull(obj_ezmaxcustomer_company)) {
        obj_ezmaxcustomer_company = NULL;
    }
    if (!obj_ezmaxcustomer_company) {
        goto end;
    }

    
    obj_ezmaxcustomer_company_local_nonprim = multilingual_ezmaxcustomer_company_parseFromJSON(obj_ezmaxcustomer_company); //nonprimitive


    if (fks_ezmaxcustomer_code && !cJSON_IsNull(fks_ezmaxcustomer_code)) fks_ezmaxcustomer_code_local_str = strdup(fks_ezmaxcustomer_code->valuestring);

    custom_ezmaxcustomer_response_local_var = custom_ezmaxcustomer_response_create_internal (
        fks_ezmaxcustomer_code_local_str,
        fki_systemconfigurationtype_id_local_var,
        obj_ezmaxcustomer_company_local_nonprim
        );

    if (!custom_ezmaxcustomer_response_local_var) {
        goto end;
    }

    return custom_ezmaxcustomer_response_local_var;
end:
    if (fks_ezmaxcustomer_code_local_str) {
        free(fks_ezmaxcustomer_code_local_str);
        fks_ezmaxcustomer_code_local_str = NULL;
    }
    if (fki_systemconfigurationtype_id_local_var) {
        free(fki_systemconfigurationtype_id_local_var);
        fki_systemconfigurationtype_id_local_var = NULL;
    }
    if (obj_ezmaxcustomer_company_local_nonprim) {
        multilingual_ezmaxcustomer_company_free(obj_ezmaxcustomer_company_local_nonprim);
        obj_ezmaxcustomer_company_local_nonprim = NULL;
    }
    return NULL;

}
