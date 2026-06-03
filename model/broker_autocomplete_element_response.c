#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_autocomplete_element_response.h"



static broker_autocomplete_element_response_t *broker_autocomplete_element_response_create_internal(
    int *pki_broker_id,
    int *fki_department_id,
    char *s_broker_name,
    int *b_broker_isactive
    ) {
    broker_autocomplete_element_response_t *broker_autocomplete_element_response_local_var = malloc(sizeof(broker_autocomplete_element_response_t));
    if (!broker_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(broker_autocomplete_element_response_local_var, 0, sizeof(broker_autocomplete_element_response_t));
    broker_autocomplete_element_response_local_var->_library_owned = 1;
    broker_autocomplete_element_response_local_var->pki_broker_id = pki_broker_id;
    broker_autocomplete_element_response_local_var->fki_department_id = fki_department_id;
    broker_autocomplete_element_response_local_var->s_broker_name = s_broker_name;
    broker_autocomplete_element_response_local_var->b_broker_isactive = b_broker_isactive;
    return broker_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) broker_autocomplete_element_response_t *broker_autocomplete_element_response_create(
    int *pki_broker_id,
    int *fki_department_id,
    char *s_broker_name,
    int *b_broker_isactive
    ) {
    int *pki_broker_id_copy = NULL;
    if (pki_broker_id) {
        pki_broker_id_copy = malloc(sizeof(int));
        if (pki_broker_id_copy) *pki_broker_id_copy = *pki_broker_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *b_broker_isactive_copy = NULL;
    if (b_broker_isactive) {
        b_broker_isactive_copy = malloc(sizeof(int));
        if (b_broker_isactive_copy) *b_broker_isactive_copy = *b_broker_isactive;
    }
    broker_autocomplete_element_response_t *result = broker_autocomplete_element_response_create_internal (
        pki_broker_id_copy,
        fki_department_id_copy,
        s_broker_name,
        b_broker_isactive_copy
        );
    if (!result) {
        free(pki_broker_id_copy);
        free(fki_department_id_copy);
        free(b_broker_isactive_copy);
    }
    return result;
}

void broker_autocomplete_element_response_free(broker_autocomplete_element_response_t *broker_autocomplete_element_response) {
    if(NULL == broker_autocomplete_element_response){
        return ;
    }
    if(broker_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_autocomplete_element_response->pki_broker_id) {
        free(broker_autocomplete_element_response->pki_broker_id);
        broker_autocomplete_element_response->pki_broker_id = NULL;
    }
    if (broker_autocomplete_element_response->fki_department_id) {
        free(broker_autocomplete_element_response->fki_department_id);
        broker_autocomplete_element_response->fki_department_id = NULL;
    }
    if (broker_autocomplete_element_response->s_broker_name) {
        free(broker_autocomplete_element_response->s_broker_name);
        broker_autocomplete_element_response->s_broker_name = NULL;
    }
    if (broker_autocomplete_element_response->b_broker_isactive) {
        free(broker_autocomplete_element_response->b_broker_isactive);
        broker_autocomplete_element_response->b_broker_isactive = NULL;
    }
    free(broker_autocomplete_element_response);
}

cJSON *broker_autocomplete_element_response_convertToJSON(broker_autocomplete_element_response_t *broker_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // broker_autocomplete_element_response->pki_broker_id
    if (!broker_autocomplete_element_response->pki_broker_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrokerID", *broker_autocomplete_element_response->pki_broker_id) == NULL) {
    goto fail; //Numeric
    }


    // broker_autocomplete_element_response->fki_department_id
    if (!broker_autocomplete_element_response->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *broker_autocomplete_element_response->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // broker_autocomplete_element_response->s_broker_name
    if (!broker_autocomplete_element_response->s_broker_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokerName", broker_autocomplete_element_response->s_broker_name) == NULL) {
    goto fail; //String
    }


    // broker_autocomplete_element_response->b_broker_isactive
    if (!broker_autocomplete_element_response->b_broker_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerIsactive", *broker_autocomplete_element_response->b_broker_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

broker_autocomplete_element_response_t *broker_autocomplete_element_response_parseFromJSON(cJSON *broker_autocomplete_element_responseJSON){

    broker_autocomplete_element_response_t *broker_autocomplete_element_response_local_var = NULL;

    // define the local variable for broker_autocomplete_element_response->pki_broker_id
    int *pki_broker_id_local_var = NULL;

    // define the local variable for broker_autocomplete_element_response->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_broker_name_local_str = NULL;

    // define the local variable for broker_autocomplete_element_response->b_broker_isactive
    int *b_broker_isactive_local_var = NULL;

    // broker_autocomplete_element_response->pki_broker_id
    cJSON *pki_broker_id = cJSON_GetObjectItemCaseSensitive(broker_autocomplete_element_responseJSON, "pkiBrokerID");
    if (cJSON_IsNull(pki_broker_id)) {
        pki_broker_id = NULL;
    }
    if (!pki_broker_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_broker_id))
    {
    goto end; //Numeric
    }
    pki_broker_id_local_var = malloc(sizeof(int));
    if(!pki_broker_id_local_var)
    {
        goto end;
    }
    *pki_broker_id_local_var = pki_broker_id->valuedouble;

    // broker_autocomplete_element_response->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(broker_autocomplete_element_responseJSON, "fkiDepartmentID");
    if (cJSON_IsNull(fki_department_id)) {
        fki_department_id = NULL;
    }
    if (!fki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;

    // broker_autocomplete_element_response->s_broker_name
    cJSON *s_broker_name = cJSON_GetObjectItemCaseSensitive(broker_autocomplete_element_responseJSON, "sBrokerName");
    if (cJSON_IsNull(s_broker_name)) {
        s_broker_name = NULL;
    }
    if (!s_broker_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_broker_name))
    {
    goto end; //String
    }

    // broker_autocomplete_element_response->b_broker_isactive
    cJSON *b_broker_isactive = cJSON_GetObjectItemCaseSensitive(broker_autocomplete_element_responseJSON, "bBrokerIsactive");
    if (cJSON_IsNull(b_broker_isactive)) {
        b_broker_isactive = NULL;
    }
    if (!b_broker_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_isactive))
    {
    goto end; //Bool
    }
    b_broker_isactive_local_var = malloc(sizeof(int));
    if(!b_broker_isactive_local_var)
    {
        goto end;
    }
    *b_broker_isactive_local_var = b_broker_isactive->valueint;


    if (s_broker_name && !cJSON_IsNull(s_broker_name)) s_broker_name_local_str = strdup(s_broker_name->valuestring);

    broker_autocomplete_element_response_local_var = broker_autocomplete_element_response_create_internal (
        pki_broker_id_local_var,
        fki_department_id_local_var,
        s_broker_name_local_str,
        b_broker_isactive_local_var
        );

    if (!broker_autocomplete_element_response_local_var) {
        goto end;
    }

    return broker_autocomplete_element_response_local_var;
end:
    if (pki_broker_id_local_var) {
        free(pki_broker_id_local_var);
        pki_broker_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_broker_name_local_str) {
        free(s_broker_name_local_str);
        s_broker_name_local_str = NULL;
    }
    if (b_broker_isactive_local_var) {
        free(b_broker_isactive_local_var);
        b_broker_isactive_local_var = NULL;
    }
    return NULL;

}
