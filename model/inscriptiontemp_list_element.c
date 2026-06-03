#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_list_element.h"



static inscriptiontemp_list_element_t *inscriptiontemp_list_element_create_internal(
    int *pki_inscriptiontemp_id,
    ezmax_api_definition__full_field_e_inscriptiontemp_status__e e_inscriptiontemp_status,
    char *s_inscriptiontemp_mls,
    char *s_inscriptiontemp_description,
    int *b_inscriptiontemp_isactive,
    char *dt_created_date,
    char *dt_modified_date
    ) {
    inscriptiontemp_list_element_t *inscriptiontemp_list_element_local_var = malloc(sizeof(inscriptiontemp_list_element_t));
    if (!inscriptiontemp_list_element_local_var) {
        return NULL;
    }
    memset(inscriptiontemp_list_element_local_var, 0, sizeof(inscriptiontemp_list_element_t));
    inscriptiontemp_list_element_local_var->_library_owned = 1;
    inscriptiontemp_list_element_local_var->pki_inscriptiontemp_id = pki_inscriptiontemp_id;
    inscriptiontemp_list_element_local_var->e_inscriptiontemp_status = e_inscriptiontemp_status;
    inscriptiontemp_list_element_local_var->s_inscriptiontemp_mls = s_inscriptiontemp_mls;
    inscriptiontemp_list_element_local_var->s_inscriptiontemp_description = s_inscriptiontemp_description;
    inscriptiontemp_list_element_local_var->b_inscriptiontemp_isactive = b_inscriptiontemp_isactive;
    inscriptiontemp_list_element_local_var->dt_created_date = dt_created_date;
    inscriptiontemp_list_element_local_var->dt_modified_date = dt_modified_date;
    return inscriptiontemp_list_element_local_var;
}

__attribute__((deprecated)) inscriptiontemp_list_element_t *inscriptiontemp_list_element_create(
    int *pki_inscriptiontemp_id,
    ezmax_api_definition__full_field_e_inscriptiontemp_status__e e_inscriptiontemp_status,
    char *s_inscriptiontemp_mls,
    char *s_inscriptiontemp_description,
    int *b_inscriptiontemp_isactive,
    char *dt_created_date,
    char *dt_modified_date
    ) {
    int *pki_inscriptiontemp_id_copy = NULL;
    if (pki_inscriptiontemp_id) {
        pki_inscriptiontemp_id_copy = malloc(sizeof(int));
        if (pki_inscriptiontemp_id_copy) *pki_inscriptiontemp_id_copy = *pki_inscriptiontemp_id;
    }
    int *b_inscriptiontemp_isactive_copy = NULL;
    if (b_inscriptiontemp_isactive) {
        b_inscriptiontemp_isactive_copy = malloc(sizeof(int));
        if (b_inscriptiontemp_isactive_copy) *b_inscriptiontemp_isactive_copy = *b_inscriptiontemp_isactive;
    }
    inscriptiontemp_list_element_t *result = inscriptiontemp_list_element_create_internal (
        pki_inscriptiontemp_id_copy,
        e_inscriptiontemp_status,
        s_inscriptiontemp_mls,
        s_inscriptiontemp_description,
        b_inscriptiontemp_isactive_copy,
        dt_created_date,
        dt_modified_date
        );
    if (!result) {
        free(pki_inscriptiontemp_id_copy);
        free(b_inscriptiontemp_isactive_copy);
    }
    return result;
}

void inscriptiontemp_list_element_free(inscriptiontemp_list_element_t *inscriptiontemp_list_element) {
    if(NULL == inscriptiontemp_list_element){
        return ;
    }
    if(inscriptiontemp_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontemp_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_list_element->pki_inscriptiontemp_id) {
        free(inscriptiontemp_list_element->pki_inscriptiontemp_id);
        inscriptiontemp_list_element->pki_inscriptiontemp_id = NULL;
    }
    if (inscriptiontemp_list_element->s_inscriptiontemp_mls) {
        free(inscriptiontemp_list_element->s_inscriptiontemp_mls);
        inscriptiontemp_list_element->s_inscriptiontemp_mls = NULL;
    }
    if (inscriptiontemp_list_element->s_inscriptiontemp_description) {
        free(inscriptiontemp_list_element->s_inscriptiontemp_description);
        inscriptiontemp_list_element->s_inscriptiontemp_description = NULL;
    }
    if (inscriptiontemp_list_element->b_inscriptiontemp_isactive) {
        free(inscriptiontemp_list_element->b_inscriptiontemp_isactive);
        inscriptiontemp_list_element->b_inscriptiontemp_isactive = NULL;
    }
    if (inscriptiontemp_list_element->dt_created_date) {
        free(inscriptiontemp_list_element->dt_created_date);
        inscriptiontemp_list_element->dt_created_date = NULL;
    }
    if (inscriptiontemp_list_element->dt_modified_date) {
        free(inscriptiontemp_list_element->dt_modified_date);
        inscriptiontemp_list_element->dt_modified_date = NULL;
    }
    free(inscriptiontemp_list_element);
}

cJSON *inscriptiontemp_list_element_convertToJSON(inscriptiontemp_list_element_t *inscriptiontemp_list_element) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_list_element->pki_inscriptiontemp_id
    if (!inscriptiontemp_list_element->pki_inscriptiontemp_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptiontempID", *inscriptiontemp_list_element->pki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptiontemp_list_element->e_inscriptiontemp_status
    if (ezmax_api_definition__full_field_e_inscriptiontemp_status__NULL == inscriptiontemp_list_element->e_inscriptiontemp_status) {
        goto fail;
    }
    cJSON *e_inscriptiontemp_status_local_JSON = field_e_inscriptiontemp_status_convertToJSON(inscriptiontemp_list_element->e_inscriptiontemp_status);
    if(e_inscriptiontemp_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptiontempStatus", e_inscriptiontemp_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscriptiontemp_list_element->s_inscriptiontemp_mls
    if(inscriptiontemp_list_element->s_inscriptiontemp_mls) {
    if(cJSON_AddStringToObject(item, "sInscriptiontempMLS", inscriptiontemp_list_element->s_inscriptiontemp_mls) == NULL) {
    goto fail; //String
    }
    }


    // inscriptiontemp_list_element->s_inscriptiontemp_description
    if (!inscriptiontemp_list_element->s_inscriptiontemp_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptiontempDescription", inscriptiontemp_list_element->s_inscriptiontemp_description) == NULL) {
    goto fail; //String
    }


    // inscriptiontemp_list_element->b_inscriptiontemp_isactive
    if (!inscriptiontemp_list_element->b_inscriptiontemp_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptiontempIsactive", *inscriptiontemp_list_element->b_inscriptiontemp_isactive) == NULL) {
    goto fail; //Bool
    }


    // inscriptiontemp_list_element->dt_created_date
    if (!inscriptiontemp_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", inscriptiontemp_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // inscriptiontemp_list_element->dt_modified_date
    if (!inscriptiontemp_list_element->dt_modified_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtModifiedDate", inscriptiontemp_list_element->dt_modified_date) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontemp_list_element_t *inscriptiontemp_list_element_parseFromJSON(cJSON *inscriptiontemp_list_elementJSON){

    inscriptiontemp_list_element_t *inscriptiontemp_list_element_local_var = NULL;

    // define the local variable for inscriptiontemp_list_element->pki_inscriptiontemp_id
    int *pki_inscriptiontemp_id_local_var = NULL;

    // define the local variable for inscriptiontemp_list_element->e_inscriptiontemp_status
    ezmax_api_definition__full_field_e_inscriptiontemp_status__e e_inscriptiontemp_status_local_nonprim = 0;

    char *s_inscriptiontemp_mls_local_str = NULL;

    char *s_inscriptiontemp_description_local_str = NULL;

    // define the local variable for inscriptiontemp_list_element->b_inscriptiontemp_isactive
    int *b_inscriptiontemp_isactive_local_var = NULL;

    char *dt_created_date_local_str = NULL;

    char *dt_modified_date_local_str = NULL;

    // inscriptiontemp_list_element->pki_inscriptiontemp_id
    cJSON *pki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "pkiInscriptiontempID");
    if (cJSON_IsNull(pki_inscriptiontemp_id)) {
        pki_inscriptiontemp_id = NULL;
    }
    if (!pki_inscriptiontemp_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptiontemp_id))
    {
    goto end; //Numeric
    }
    pki_inscriptiontemp_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptiontemp_id_local_var)
    {
        goto end;
    }
    *pki_inscriptiontemp_id_local_var = pki_inscriptiontemp_id->valuedouble;

    // inscriptiontemp_list_element->e_inscriptiontemp_status
    cJSON *e_inscriptiontemp_status = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "eInscriptiontempStatus");
    if (cJSON_IsNull(e_inscriptiontemp_status)) {
        e_inscriptiontemp_status = NULL;
    }
    if (!e_inscriptiontemp_status) {
        goto end;
    }

    
    e_inscriptiontemp_status_local_nonprim = field_e_inscriptiontemp_status_parseFromJSON(e_inscriptiontemp_status); //custom

    // inscriptiontemp_list_element->s_inscriptiontemp_mls
    cJSON *s_inscriptiontemp_mls = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "sInscriptiontempMLS");
    if (cJSON_IsNull(s_inscriptiontemp_mls)) {
        s_inscriptiontemp_mls = NULL;
    }
    if (s_inscriptiontemp_mls) { 
    if(!cJSON_IsString(s_inscriptiontemp_mls) && !cJSON_IsNull(s_inscriptiontemp_mls))
    {
    goto end; //String
    }
    }

    // inscriptiontemp_list_element->s_inscriptiontemp_description
    cJSON *s_inscriptiontemp_description = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "sInscriptiontempDescription");
    if (cJSON_IsNull(s_inscriptiontemp_description)) {
        s_inscriptiontemp_description = NULL;
    }
    if (!s_inscriptiontemp_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptiontemp_description))
    {
    goto end; //String
    }

    // inscriptiontemp_list_element->b_inscriptiontemp_isactive
    cJSON *b_inscriptiontemp_isactive = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "bInscriptiontempIsactive");
    if (cJSON_IsNull(b_inscriptiontemp_isactive)) {
        b_inscriptiontemp_isactive = NULL;
    }
    if (!b_inscriptiontemp_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptiontemp_isactive))
    {
    goto end; //Bool
    }
    b_inscriptiontemp_isactive_local_var = malloc(sizeof(int));
    if(!b_inscriptiontemp_isactive_local_var)
    {
        goto end;
    }
    *b_inscriptiontemp_isactive_local_var = b_inscriptiontemp_isactive->valueint;

    // inscriptiontemp_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // inscriptiontemp_list_element->dt_modified_date
    cJSON *dt_modified_date = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_list_elementJSON, "dtModifiedDate");
    if (cJSON_IsNull(dt_modified_date)) {
        dt_modified_date = NULL;
    }
    if (!dt_modified_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_modified_date))
    {
    goto end; //String
    }


    if (s_inscriptiontemp_mls && !cJSON_IsNull(s_inscriptiontemp_mls)) s_inscriptiontemp_mls_local_str = strdup(s_inscriptiontemp_mls->valuestring);
    if (s_inscriptiontemp_description && !cJSON_IsNull(s_inscriptiontemp_description)) s_inscriptiontemp_description_local_str = strdup(s_inscriptiontemp_description->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (dt_modified_date && !cJSON_IsNull(dt_modified_date)) dt_modified_date_local_str = strdup(dt_modified_date->valuestring);

    inscriptiontemp_list_element_local_var = inscriptiontemp_list_element_create_internal (
        pki_inscriptiontemp_id_local_var,
        e_inscriptiontemp_status_local_nonprim,
        s_inscriptiontemp_mls_local_str,
        s_inscriptiontemp_description_local_str,
        b_inscriptiontemp_isactive_local_var,
        dt_created_date_local_str,
        dt_modified_date_local_str
        );

    if (!inscriptiontemp_list_element_local_var) {
        goto end;
    }

    return inscriptiontemp_list_element_local_var;
end:
    if (pki_inscriptiontemp_id_local_var) {
        free(pki_inscriptiontemp_id_local_var);
        pki_inscriptiontemp_id_local_var = NULL;
    }
    if (e_inscriptiontemp_status_local_nonprim) {
        e_inscriptiontemp_status_local_nonprim = 0;
    }
    if (s_inscriptiontemp_mls_local_str) {
        free(s_inscriptiontemp_mls_local_str);
        s_inscriptiontemp_mls_local_str = NULL;
    }
    if (s_inscriptiontemp_description_local_str) {
        free(s_inscriptiontemp_description_local_str);
        s_inscriptiontemp_description_local_str = NULL;
    }
    if (b_inscriptiontemp_isactive_local_var) {
        free(b_inscriptiontemp_isactive_local_var);
        b_inscriptiontemp_isactive_local_var = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (dt_modified_date_local_str) {
        free(dt_modified_date_local_str);
        dt_modified_date_local_str = NULL;
    }
    return NULL;

}
