#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_list_element.h"



static ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_create_internal(
    int *pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    char *dt_created_date,
    char *dt_modified_date,
    int *i_total_ezsignimportdocument,
    int *i_total_ezsignimportdocument_not_imported,
    ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e e_ezsignimportfolder_status
    ) {
    ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_local_var = malloc(sizeof(ezsignimportfolder_list_element_t));
    if (!ezsignimportfolder_list_element_local_var) {
        return NULL;
    }
    memset(ezsignimportfolder_list_element_local_var, 0, sizeof(ezsignimportfolder_list_element_t));
    ezsignimportfolder_list_element_local_var->_library_owned = 1;
    ezsignimportfolder_list_element_local_var->pki_ezsignimportfolder_id = pki_ezsignimportfolder_id;
    ezsignimportfolder_list_element_local_var->s_ezsignimportfolder_name = s_ezsignimportfolder_name;
    ezsignimportfolder_list_element_local_var->dt_created_date = dt_created_date;
    ezsignimportfolder_list_element_local_var->dt_modified_date = dt_modified_date;
    ezsignimportfolder_list_element_local_var->i_total_ezsignimportdocument = i_total_ezsignimportdocument;
    ezsignimportfolder_list_element_local_var->i_total_ezsignimportdocument_not_imported = i_total_ezsignimportdocument_not_imported;
    ezsignimportfolder_list_element_local_var->e_ezsignimportfolder_status = e_ezsignimportfolder_status;
    return ezsignimportfolder_list_element_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_create(
    int *pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    char *dt_created_date,
    char *dt_modified_date,
    int *i_total_ezsignimportdocument,
    int *i_total_ezsignimportdocument_not_imported,
    ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e e_ezsignimportfolder_status
    ) {
    int *pki_ezsignimportfolder_id_copy = NULL;
    if (pki_ezsignimportfolder_id) {
        pki_ezsignimportfolder_id_copy = malloc(sizeof(int));
        if (pki_ezsignimportfolder_id_copy) *pki_ezsignimportfolder_id_copy = *pki_ezsignimportfolder_id;
    }
    int *i_total_ezsignimportdocument_copy = NULL;
    if (i_total_ezsignimportdocument) {
        i_total_ezsignimportdocument_copy = malloc(sizeof(int));
        if (i_total_ezsignimportdocument_copy) *i_total_ezsignimportdocument_copy = *i_total_ezsignimportdocument;
    }
    int *i_total_ezsignimportdocument_not_imported_copy = NULL;
    if (i_total_ezsignimportdocument_not_imported) {
        i_total_ezsignimportdocument_not_imported_copy = malloc(sizeof(int));
        if (i_total_ezsignimportdocument_not_imported_copy) *i_total_ezsignimportdocument_not_imported_copy = *i_total_ezsignimportdocument_not_imported;
    }
    ezsignimportfolder_list_element_t *result = ezsignimportfolder_list_element_create_internal (
        pki_ezsignimportfolder_id_copy,
        s_ezsignimportfolder_name,
        dt_created_date,
        dt_modified_date,
        i_total_ezsignimportdocument_copy,
        i_total_ezsignimportdocument_not_imported_copy,
        e_ezsignimportfolder_status
        );
    if (!result) {
        free(pki_ezsignimportfolder_id_copy);
        free(i_total_ezsignimportdocument_copy);
        free(i_total_ezsignimportdocument_not_imported_copy);
    }
    return result;
}

void ezsignimportfolder_list_element_free(ezsignimportfolder_list_element_t *ezsignimportfolder_list_element) {
    if(NULL == ezsignimportfolder_list_element){
        return ;
    }
    if(ezsignimportfolder_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignimportfolder_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignimportfolder_list_element->pki_ezsignimportfolder_id) {
        free(ezsignimportfolder_list_element->pki_ezsignimportfolder_id);
        ezsignimportfolder_list_element->pki_ezsignimportfolder_id = NULL;
    }
    if (ezsignimportfolder_list_element->s_ezsignimportfolder_name) {
        free(ezsignimportfolder_list_element->s_ezsignimportfolder_name);
        ezsignimportfolder_list_element->s_ezsignimportfolder_name = NULL;
    }
    if (ezsignimportfolder_list_element->dt_created_date) {
        free(ezsignimportfolder_list_element->dt_created_date);
        ezsignimportfolder_list_element->dt_created_date = NULL;
    }
    if (ezsignimportfolder_list_element->dt_modified_date) {
        free(ezsignimportfolder_list_element->dt_modified_date);
        ezsignimportfolder_list_element->dt_modified_date = NULL;
    }
    if (ezsignimportfolder_list_element->i_total_ezsignimportdocument) {
        free(ezsignimportfolder_list_element->i_total_ezsignimportdocument);
        ezsignimportfolder_list_element->i_total_ezsignimportdocument = NULL;
    }
    if (ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported) {
        free(ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported);
        ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported = NULL;
    }
    free(ezsignimportfolder_list_element);
}

cJSON *ezsignimportfolder_list_element_convertToJSON(ezsignimportfolder_list_element_t *ezsignimportfolder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignimportfolder_list_element->pki_ezsignimportfolder_id
    if (!ezsignimportfolder_list_element->pki_ezsignimportfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportfolderID", *ezsignimportfolder_list_element->pki_ezsignimportfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignimportfolder_list_element->s_ezsignimportfolder_name
    if (!ezsignimportfolder_list_element->s_ezsignimportfolder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignimportfolderName", ezsignimportfolder_list_element->s_ezsignimportfolder_name) == NULL) {
    goto fail; //String
    }


    // ezsignimportfolder_list_element->dt_created_date
    if(ezsignimportfolder_list_element->dt_created_date) {
    if(cJSON_AddStringToObject(item, "dtCreatedDate", ezsignimportfolder_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }
    }


    // ezsignimportfolder_list_element->dt_modified_date
    if(ezsignimportfolder_list_element->dt_modified_date) {
    if(cJSON_AddStringToObject(item, "dtModifiedDate", ezsignimportfolder_list_element->dt_modified_date) == NULL) {
    goto fail; //String
    }
    }


    // ezsignimportfolder_list_element->i_total_ezsignimportdocument
    if(ezsignimportfolder_list_element->i_total_ezsignimportdocument) {
    if(cJSON_AddNumberToObject(item, "iTotalEzsignimportdocument", *ezsignimportfolder_list_element->i_total_ezsignimportdocument) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported
    if(ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported) {
    if(cJSON_AddNumberToObject(item, "iTotalEzsignimportdocumentNotImported", *ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignimportfolder_list_element->e_ezsignimportfolder_status
    if(ezsignimportfolder_list_element->e_ezsignimportfolder_status != ezmax_api_definition__full_computed_e_ezsignimportfolder_status__NULL) {
    cJSON *e_ezsignimportfolder_status_local_JSON = computed_e_ezsignimportfolder_status_convertToJSON(ezsignimportfolder_list_element->e_ezsignimportfolder_status);
    if(e_ezsignimportfolder_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignimportfolderStatus", e_ezsignimportfolder_status_local_JSON);
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

ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_parseFromJSON(cJSON *ezsignimportfolder_list_elementJSON){

    ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_local_var = NULL;

    // define the local variable for ezsignimportfolder_list_element->pki_ezsignimportfolder_id
    int *pki_ezsignimportfolder_id_local_var = NULL;

    char *s_ezsignimportfolder_name_local_str = NULL;

    char *dt_created_date_local_str = NULL;

    char *dt_modified_date_local_str = NULL;

    // define the local variable for ezsignimportfolder_list_element->i_total_ezsignimportdocument
    int *i_total_ezsignimportdocument_local_var = NULL;

    // define the local variable for ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported
    int *i_total_ezsignimportdocument_not_imported_local_var = NULL;

    // define the local variable for ezsignimportfolder_list_element->e_ezsignimportfolder_status
    ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e e_ezsignimportfolder_status_local_nonprim = 0;

    // ezsignimportfolder_list_element->pki_ezsignimportfolder_id
    cJSON *pki_ezsignimportfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "pkiEzsignimportfolderID");
    if (cJSON_IsNull(pki_ezsignimportfolder_id)) {
        pki_ezsignimportfolder_id = NULL;
    }
    if (!pki_ezsignimportfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignimportfolder_id))
    {
    goto end; //Numeric
    }
    pki_ezsignimportfolder_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignimportfolder_id_local_var)
    {
        goto end;
    }
    *pki_ezsignimportfolder_id_local_var = pki_ezsignimportfolder_id->valuedouble;

    // ezsignimportfolder_list_element->s_ezsignimportfolder_name
    cJSON *s_ezsignimportfolder_name = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "sEzsignimportfolderName");
    if (cJSON_IsNull(s_ezsignimportfolder_name)) {
        s_ezsignimportfolder_name = NULL;
    }
    if (!s_ezsignimportfolder_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignimportfolder_name))
    {
    goto end; //String
    }

    // ezsignimportfolder_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (dt_created_date) { 
    if(!cJSON_IsString(dt_created_date) && !cJSON_IsNull(dt_created_date))
    {
    goto end; //String
    }
    }

    // ezsignimportfolder_list_element->dt_modified_date
    cJSON *dt_modified_date = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "dtModifiedDate");
    if (cJSON_IsNull(dt_modified_date)) {
        dt_modified_date = NULL;
    }
    if (dt_modified_date) { 
    if(!cJSON_IsString(dt_modified_date) && !cJSON_IsNull(dt_modified_date))
    {
    goto end; //String
    }
    }

    // ezsignimportfolder_list_element->i_total_ezsignimportdocument
    cJSON *i_total_ezsignimportdocument = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "iTotalEzsignimportdocument");
    if (cJSON_IsNull(i_total_ezsignimportdocument)) {
        i_total_ezsignimportdocument = NULL;
    }
    if (i_total_ezsignimportdocument) { 
    if(!cJSON_IsNumber(i_total_ezsignimportdocument))
    {
    goto end; //Numeric
    }
    i_total_ezsignimportdocument_local_var = malloc(sizeof(int));
    if(!i_total_ezsignimportdocument_local_var)
    {
        goto end;
    }
    *i_total_ezsignimportdocument_local_var = i_total_ezsignimportdocument->valuedouble;
    }

    // ezsignimportfolder_list_element->i_total_ezsignimportdocument_not_imported
    cJSON *i_total_ezsignimportdocument_not_imported = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "iTotalEzsignimportdocumentNotImported");
    if (cJSON_IsNull(i_total_ezsignimportdocument_not_imported)) {
        i_total_ezsignimportdocument_not_imported = NULL;
    }
    if (i_total_ezsignimportdocument_not_imported) { 
    if(!cJSON_IsNumber(i_total_ezsignimportdocument_not_imported))
    {
    goto end; //Numeric
    }
    i_total_ezsignimportdocument_not_imported_local_var = malloc(sizeof(int));
    if(!i_total_ezsignimportdocument_not_imported_local_var)
    {
        goto end;
    }
    *i_total_ezsignimportdocument_not_imported_local_var = i_total_ezsignimportdocument_not_imported->valuedouble;
    }

    // ezsignimportfolder_list_element->e_ezsignimportfolder_status
    cJSON *e_ezsignimportfolder_status = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_list_elementJSON, "eEzsignimportfolderStatus");
    if (cJSON_IsNull(e_ezsignimportfolder_status)) {
        e_ezsignimportfolder_status = NULL;
    }
    if (e_ezsignimportfolder_status) { 
    e_ezsignimportfolder_status_local_nonprim = computed_e_ezsignimportfolder_status_parseFromJSON(e_ezsignimportfolder_status); //custom
    }


    if (s_ezsignimportfolder_name && !cJSON_IsNull(s_ezsignimportfolder_name)) s_ezsignimportfolder_name_local_str = strdup(s_ezsignimportfolder_name->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (dt_modified_date && !cJSON_IsNull(dt_modified_date)) dt_modified_date_local_str = strdup(dt_modified_date->valuestring);

    ezsignimportfolder_list_element_local_var = ezsignimportfolder_list_element_create_internal (
        pki_ezsignimportfolder_id_local_var,
        s_ezsignimportfolder_name_local_str,
        dt_created_date_local_str,
        dt_modified_date_local_str,
        i_total_ezsignimportdocument_local_var,
        i_total_ezsignimportdocument_not_imported_local_var,
        e_ezsignimportfolder_status ? e_ezsignimportfolder_status_local_nonprim : 0
        );

    if (!ezsignimportfolder_list_element_local_var) {
        goto end;
    }

    return ezsignimportfolder_list_element_local_var;
end:
    if (pki_ezsignimportfolder_id_local_var) {
        free(pki_ezsignimportfolder_id_local_var);
        pki_ezsignimportfolder_id_local_var = NULL;
    }
    if (s_ezsignimportfolder_name_local_str) {
        free(s_ezsignimportfolder_name_local_str);
        s_ezsignimportfolder_name_local_str = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (dt_modified_date_local_str) {
        free(dt_modified_date_local_str);
        dt_modified_date_local_str = NULL;
    }
    if (i_total_ezsignimportdocument_local_var) {
        free(i_total_ezsignimportdocument_local_var);
        i_total_ezsignimportdocument_local_var = NULL;
    }
    if (i_total_ezsignimportdocument_not_imported_local_var) {
        free(i_total_ezsignimportdocument_not_imported_local_var);
        i_total_ezsignimportdocument_not_imported_local_var = NULL;
    }
    if (e_ezsignimportfolder_status_local_nonprim) {
        e_ezsignimportfolder_status_local_nonprim = 0;
    }
    return NULL;

}
