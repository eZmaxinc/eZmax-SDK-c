#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfertransaction_list_element.h"



static electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_create_internal(
    int *pki_electronicfundstransfertransaction_id,
    int *i_electronicfundstransfer_number,
    char *d_electronicfundstransfertransaction_amount,
    char *dt_electronicfundstransfertransaction_date
    ) {
    electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_local_var = malloc(sizeof(electronicfundstransfertransaction_list_element_t));
    if (!electronicfundstransfertransaction_list_element_local_var) {
        return NULL;
    }
    memset(electronicfundstransfertransaction_list_element_local_var, 0, sizeof(electronicfundstransfertransaction_list_element_t));
    electronicfundstransfertransaction_list_element_local_var->_library_owned = 1;
    electronicfundstransfertransaction_list_element_local_var->pki_electronicfundstransfertransaction_id = pki_electronicfundstransfertransaction_id;
    electronicfundstransfertransaction_list_element_local_var->i_electronicfundstransfer_number = i_electronicfundstransfer_number;
    electronicfundstransfertransaction_list_element_local_var->d_electronicfundstransfertransaction_amount = d_electronicfundstransfertransaction_amount;
    electronicfundstransfertransaction_list_element_local_var->dt_electronicfundstransfertransaction_date = dt_electronicfundstransfertransaction_date;
    return electronicfundstransfertransaction_list_element_local_var;
}

__attribute__((deprecated)) electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_create(
    int *pki_electronicfundstransfertransaction_id,
    int *i_electronicfundstransfer_number,
    char *d_electronicfundstransfertransaction_amount,
    char *dt_electronicfundstransfertransaction_date
    ) {
    int *pki_electronicfundstransfertransaction_id_copy = NULL;
    if (pki_electronicfundstransfertransaction_id) {
        pki_electronicfundstransfertransaction_id_copy = malloc(sizeof(int));
        if (pki_electronicfundstransfertransaction_id_copy) *pki_electronicfundstransfertransaction_id_copy = *pki_electronicfundstransfertransaction_id;
    }
    int *i_electronicfundstransfer_number_copy = NULL;
    if (i_electronicfundstransfer_number) {
        i_electronicfundstransfer_number_copy = malloc(sizeof(int));
        if (i_electronicfundstransfer_number_copy) *i_electronicfundstransfer_number_copy = *i_electronicfundstransfer_number;
    }
    electronicfundstransfertransaction_list_element_t *result = electronicfundstransfertransaction_list_element_create_internal (
        pki_electronicfundstransfertransaction_id_copy,
        i_electronicfundstransfer_number_copy,
        d_electronicfundstransfertransaction_amount,
        dt_electronicfundstransfertransaction_date
        );
    if (!result) {
        free(pki_electronicfundstransfertransaction_id_copy);
        free(i_electronicfundstransfer_number_copy);
    }
    return result;
}

void electronicfundstransfertransaction_list_element_free(electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element) {
    if(NULL == electronicfundstransfertransaction_list_element){
        return ;
    }
    if(electronicfundstransfertransaction_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfertransaction_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id) {
        free(electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id);
        electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id = NULL;
    }
    if (electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number) {
        free(electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number);
        electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number = NULL;
    }
    if (electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount) {
        free(electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount);
        electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount = NULL;
    }
    if (electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date) {
        free(electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date);
        electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date = NULL;
    }
    free(electronicfundstransfertransaction_list_element);
}

cJSON *electronicfundstransfertransaction_list_element_convertToJSON(electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id
    if (!electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiElectronicfundstransfertransactionID", *electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number
    if(electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number) {
    if(cJSON_AddNumberToObject(item, "iElectronicfundstransferNumber", *electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount
    if (!electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dElectronicfundstransfertransactionAmount", electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount) == NULL) {
    goto fail; //String
    }


    // electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date
    if (!electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtElectronicfundstransfertransactionDate", electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_parseFromJSON(cJSON *electronicfundstransfertransaction_list_elementJSON){

    electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_local_var = NULL;

    // define the local variable for electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id
    int *pki_electronicfundstransfertransaction_id_local_var = NULL;

    // define the local variable for electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number
    int *i_electronicfundstransfer_number_local_var = NULL;

    char *d_electronicfundstransfertransaction_amount_local_str = NULL;

    char *dt_electronicfundstransfertransaction_date_local_str = NULL;

    // electronicfundstransfertransaction_list_element->pki_electronicfundstransfertransaction_id
    cJSON *pki_electronicfundstransfertransaction_id = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_list_elementJSON, "pkiElectronicfundstransfertransactionID");
    if (cJSON_IsNull(pki_electronicfundstransfertransaction_id)) {
        pki_electronicfundstransfertransaction_id = NULL;
    }
    if (!pki_electronicfundstransfertransaction_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_electronicfundstransfertransaction_id))
    {
    goto end; //Numeric
    }
    pki_electronicfundstransfertransaction_id_local_var = malloc(sizeof(int));
    if(!pki_electronicfundstransfertransaction_id_local_var)
    {
        goto end;
    }
    *pki_electronicfundstransfertransaction_id_local_var = pki_electronicfundstransfertransaction_id->valuedouble;

    // electronicfundstransfertransaction_list_element->i_electronicfundstransfer_number
    cJSON *i_electronicfundstransfer_number = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_list_elementJSON, "iElectronicfundstransferNumber");
    if (cJSON_IsNull(i_electronicfundstransfer_number)) {
        i_electronicfundstransfer_number = NULL;
    }
    if (i_electronicfundstransfer_number) { 
    if(!cJSON_IsNumber(i_electronicfundstransfer_number))
    {
    goto end; //Numeric
    }
    i_electronicfundstransfer_number_local_var = malloc(sizeof(int));
    if(!i_electronicfundstransfer_number_local_var)
    {
        goto end;
    }
    *i_electronicfundstransfer_number_local_var = i_electronicfundstransfer_number->valuedouble;
    }

    // electronicfundstransfertransaction_list_element->d_electronicfundstransfertransaction_amount
    cJSON *d_electronicfundstransfertransaction_amount = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_list_elementJSON, "dElectronicfundstransfertransactionAmount");
    if (cJSON_IsNull(d_electronicfundstransfertransaction_amount)) {
        d_electronicfundstransfertransaction_amount = NULL;
    }
    if (!d_electronicfundstransfertransaction_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_electronicfundstransfertransaction_amount))
    {
    goto end; //String
    }

    // electronicfundstransfertransaction_list_element->dt_electronicfundstransfertransaction_date
    cJSON *dt_electronicfundstransfertransaction_date = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_list_elementJSON, "dtElectronicfundstransfertransactionDate");
    if (cJSON_IsNull(dt_electronicfundstransfertransaction_date)) {
        dt_electronicfundstransfertransaction_date = NULL;
    }
    if (!dt_electronicfundstransfertransaction_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_electronicfundstransfertransaction_date))
    {
    goto end; //String
    }


    if (d_electronicfundstransfertransaction_amount && !cJSON_IsNull(d_electronicfundstransfertransaction_amount)) d_electronicfundstransfertransaction_amount_local_str = strdup(d_electronicfundstransfertransaction_amount->valuestring);
    if (dt_electronicfundstransfertransaction_date && !cJSON_IsNull(dt_electronicfundstransfertransaction_date)) dt_electronicfundstransfertransaction_date_local_str = strdup(dt_electronicfundstransfertransaction_date->valuestring);

    electronicfundstransfertransaction_list_element_local_var = electronicfundstransfertransaction_list_element_create_internal (
        pki_electronicfundstransfertransaction_id_local_var,
        i_electronicfundstransfer_number_local_var,
        d_electronicfundstransfertransaction_amount_local_str,
        dt_electronicfundstransfertransaction_date_local_str
        );

    if (!electronicfundstransfertransaction_list_element_local_var) {
        goto end;
    }

    return electronicfundstransfertransaction_list_element_local_var;
end:
    if (pki_electronicfundstransfertransaction_id_local_var) {
        free(pki_electronicfundstransfertransaction_id_local_var);
        pki_electronicfundstransfertransaction_id_local_var = NULL;
    }
    if (i_electronicfundstransfer_number_local_var) {
        free(i_electronicfundstransfer_number_local_var);
        i_electronicfundstransfer_number_local_var = NULL;
    }
    if (d_electronicfundstransfertransaction_amount_local_str) {
        free(d_electronicfundstransfertransaction_amount_local_str);
        d_electronicfundstransfertransaction_amount_local_str = NULL;
    }
    if (dt_electronicfundstransfertransaction_date_local_str) {
        free(dt_electronicfundstransfertransaction_date_local_str);
        dt_electronicfundstransfertransaction_date_local_str = NULL;
    }
    return NULL;

}
