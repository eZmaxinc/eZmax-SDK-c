#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_list_element.h"



static lead_list_element_t *lead_list_element_create_internal(
    int *pki_lead_id,
    int *fki_leadsource_id,
    char *s_leadsource_name_x,
    ezmax_api_definition__full_field_e_lead_status__e e_lead_status,
    char *dt_lead_expiration,
    int *b_lead_isactive,
    char *s_lead_code,
    char *s_lead_contacts
    ) {
    lead_list_element_t *lead_list_element_local_var = malloc(sizeof(lead_list_element_t));
    if (!lead_list_element_local_var) {
        return NULL;
    }
    memset(lead_list_element_local_var, 0, sizeof(lead_list_element_t));
    lead_list_element_local_var->_library_owned = 1;
    lead_list_element_local_var->pki_lead_id = pki_lead_id;
    lead_list_element_local_var->fki_leadsource_id = fki_leadsource_id;
    lead_list_element_local_var->s_leadsource_name_x = s_leadsource_name_x;
    lead_list_element_local_var->e_lead_status = e_lead_status;
    lead_list_element_local_var->dt_lead_expiration = dt_lead_expiration;
    lead_list_element_local_var->b_lead_isactive = b_lead_isactive;
    lead_list_element_local_var->s_lead_code = s_lead_code;
    lead_list_element_local_var->s_lead_contacts = s_lead_contacts;
    return lead_list_element_local_var;
}

__attribute__((deprecated)) lead_list_element_t *lead_list_element_create(
    int *pki_lead_id,
    int *fki_leadsource_id,
    char *s_leadsource_name_x,
    ezmax_api_definition__full_field_e_lead_status__e e_lead_status,
    char *dt_lead_expiration,
    int *b_lead_isactive,
    char *s_lead_code,
    char *s_lead_contacts
    ) {
    int *pki_lead_id_copy = NULL;
    if (pki_lead_id) {
        pki_lead_id_copy = malloc(sizeof(int));
        if (pki_lead_id_copy) *pki_lead_id_copy = *pki_lead_id;
    }
    int *fki_leadsource_id_copy = NULL;
    if (fki_leadsource_id) {
        fki_leadsource_id_copy = malloc(sizeof(int));
        if (fki_leadsource_id_copy) *fki_leadsource_id_copy = *fki_leadsource_id;
    }
    int *b_lead_isactive_copy = NULL;
    if (b_lead_isactive) {
        b_lead_isactive_copy = malloc(sizeof(int));
        if (b_lead_isactive_copy) *b_lead_isactive_copy = *b_lead_isactive;
    }
    lead_list_element_t *result = lead_list_element_create_internal (
        pki_lead_id_copy,
        fki_leadsource_id_copy,
        s_leadsource_name_x,
        e_lead_status,
        dt_lead_expiration,
        b_lead_isactive_copy,
        s_lead_code,
        s_lead_contacts
        );
    if (!result) {
        free(pki_lead_id_copy);
        free(fki_leadsource_id_copy);
        free(b_lead_isactive_copy);
    }
    return result;
}

void lead_list_element_free(lead_list_element_t *lead_list_element) {
    if(NULL == lead_list_element){
        return ;
    }
    if(lead_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_list_element->pki_lead_id) {
        free(lead_list_element->pki_lead_id);
        lead_list_element->pki_lead_id = NULL;
    }
    if (lead_list_element->fki_leadsource_id) {
        free(lead_list_element->fki_leadsource_id);
        lead_list_element->fki_leadsource_id = NULL;
    }
    if (lead_list_element->s_leadsource_name_x) {
        free(lead_list_element->s_leadsource_name_x);
        lead_list_element->s_leadsource_name_x = NULL;
    }
    if (lead_list_element->dt_lead_expiration) {
        free(lead_list_element->dt_lead_expiration);
        lead_list_element->dt_lead_expiration = NULL;
    }
    if (lead_list_element->b_lead_isactive) {
        free(lead_list_element->b_lead_isactive);
        lead_list_element->b_lead_isactive = NULL;
    }
    if (lead_list_element->s_lead_code) {
        free(lead_list_element->s_lead_code);
        lead_list_element->s_lead_code = NULL;
    }
    if (lead_list_element->s_lead_contacts) {
        free(lead_list_element->s_lead_contacts);
        lead_list_element->s_lead_contacts = NULL;
    }
    free(lead_list_element);
}

cJSON *lead_list_element_convertToJSON(lead_list_element_t *lead_list_element) {
    cJSON *item = cJSON_CreateObject();

    // lead_list_element->pki_lead_id
    if (!lead_list_element->pki_lead_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiLeadID", *lead_list_element->pki_lead_id) == NULL) {
    goto fail; //Numeric
    }


    // lead_list_element->fki_leadsource_id
    if (!lead_list_element->fki_leadsource_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLeadsourceID", *lead_list_element->fki_leadsource_id) == NULL) {
    goto fail; //Numeric
    }


    // lead_list_element->s_leadsource_name_x
    if (!lead_list_element->s_leadsource_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLeadsourceNameX", lead_list_element->s_leadsource_name_x) == NULL) {
    goto fail; //String
    }


    // lead_list_element->e_lead_status
    if (ezmax_api_definition__full_field_e_lead_status__NULL == lead_list_element->e_lead_status) {
        goto fail;
    }
    cJSON *e_lead_status_local_JSON = field_e_lead_status_convertToJSON(lead_list_element->e_lead_status);
    if(e_lead_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eLeadStatus", e_lead_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // lead_list_element->dt_lead_expiration
    if (!lead_list_element->dt_lead_expiration) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtLeadExpiration", lead_list_element->dt_lead_expiration) == NULL) {
    goto fail; //String
    }


    // lead_list_element->b_lead_isactive
    if (!lead_list_element->b_lead_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bLeadIsactive", *lead_list_element->b_lead_isactive) == NULL) {
    goto fail; //Bool
    }


    // lead_list_element->s_lead_code
    if (!lead_list_element->s_lead_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLeadCode", lead_list_element->s_lead_code) == NULL) {
    goto fail; //String
    }


    // lead_list_element->s_lead_contacts
    if(lead_list_element->s_lead_contacts) {
    if(cJSON_AddStringToObject(item, "sLeadContacts", lead_list_element->s_lead_contacts) == NULL) {
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

lead_list_element_t *lead_list_element_parseFromJSON(cJSON *lead_list_elementJSON){

    lead_list_element_t *lead_list_element_local_var = NULL;

    // define the local variable for lead_list_element->pki_lead_id
    int *pki_lead_id_local_var = NULL;

    // define the local variable for lead_list_element->fki_leadsource_id
    int *fki_leadsource_id_local_var = NULL;

    char *s_leadsource_name_x_local_str = NULL;

    // define the local variable for lead_list_element->e_lead_status
    ezmax_api_definition__full_field_e_lead_status__e e_lead_status_local_nonprim = 0;

    char *dt_lead_expiration_local_str = NULL;

    // define the local variable for lead_list_element->b_lead_isactive
    int *b_lead_isactive_local_var = NULL;

    char *s_lead_code_local_str = NULL;

    char *s_lead_contacts_local_str = NULL;

    // lead_list_element->pki_lead_id
    cJSON *pki_lead_id = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "pkiLeadID");
    if (cJSON_IsNull(pki_lead_id)) {
        pki_lead_id = NULL;
    }
    if (!pki_lead_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_lead_id))
    {
    goto end; //Numeric
    }
    pki_lead_id_local_var = malloc(sizeof(int));
    if(!pki_lead_id_local_var)
    {
        goto end;
    }
    *pki_lead_id_local_var = pki_lead_id->valuedouble;

    // lead_list_element->fki_leadsource_id
    cJSON *fki_leadsource_id = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "fkiLeadsourceID");
    if (cJSON_IsNull(fki_leadsource_id)) {
        fki_leadsource_id = NULL;
    }
    if (!fki_leadsource_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_leadsource_id))
    {
    goto end; //Numeric
    }
    fki_leadsource_id_local_var = malloc(sizeof(int));
    if(!fki_leadsource_id_local_var)
    {
        goto end;
    }
    *fki_leadsource_id_local_var = fki_leadsource_id->valuedouble;

    // lead_list_element->s_leadsource_name_x
    cJSON *s_leadsource_name_x = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "sLeadsourceNameX");
    if (cJSON_IsNull(s_leadsource_name_x)) {
        s_leadsource_name_x = NULL;
    }
    if (!s_leadsource_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_leadsource_name_x))
    {
    goto end; //String
    }

    // lead_list_element->e_lead_status
    cJSON *e_lead_status = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "eLeadStatus");
    if (cJSON_IsNull(e_lead_status)) {
        e_lead_status = NULL;
    }
    if (!e_lead_status) {
        goto end;
    }

    
    e_lead_status_local_nonprim = field_e_lead_status_parseFromJSON(e_lead_status); //custom

    // lead_list_element->dt_lead_expiration
    cJSON *dt_lead_expiration = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "dtLeadExpiration");
    if (cJSON_IsNull(dt_lead_expiration)) {
        dt_lead_expiration = NULL;
    }
    if (!dt_lead_expiration) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_lead_expiration))
    {
    goto end; //String
    }

    // lead_list_element->b_lead_isactive
    cJSON *b_lead_isactive = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "bLeadIsactive");
    if (cJSON_IsNull(b_lead_isactive)) {
        b_lead_isactive = NULL;
    }
    if (!b_lead_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_lead_isactive))
    {
    goto end; //Bool
    }
    b_lead_isactive_local_var = malloc(sizeof(int));
    if(!b_lead_isactive_local_var)
    {
        goto end;
    }
    *b_lead_isactive_local_var = b_lead_isactive->valueint;

    // lead_list_element->s_lead_code
    cJSON *s_lead_code = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "sLeadCode");
    if (cJSON_IsNull(s_lead_code)) {
        s_lead_code = NULL;
    }
    if (!s_lead_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_lead_code))
    {
    goto end; //String
    }

    // lead_list_element->s_lead_contacts
    cJSON *s_lead_contacts = cJSON_GetObjectItemCaseSensitive(lead_list_elementJSON, "sLeadContacts");
    if (cJSON_IsNull(s_lead_contacts)) {
        s_lead_contacts = NULL;
    }
    if (s_lead_contacts) { 
    if(!cJSON_IsString(s_lead_contacts) && !cJSON_IsNull(s_lead_contacts))
    {
    goto end; //String
    }
    }


    if (s_leadsource_name_x && !cJSON_IsNull(s_leadsource_name_x)) s_leadsource_name_x_local_str = strdup(s_leadsource_name_x->valuestring);
    if (dt_lead_expiration && !cJSON_IsNull(dt_lead_expiration)) dt_lead_expiration_local_str = strdup(dt_lead_expiration->valuestring);
    if (s_lead_code && !cJSON_IsNull(s_lead_code)) s_lead_code_local_str = strdup(s_lead_code->valuestring);
    if (s_lead_contacts && !cJSON_IsNull(s_lead_contacts)) s_lead_contacts_local_str = strdup(s_lead_contacts->valuestring);

    lead_list_element_local_var = lead_list_element_create_internal (
        pki_lead_id_local_var,
        fki_leadsource_id_local_var,
        s_leadsource_name_x_local_str,
        e_lead_status_local_nonprim,
        dt_lead_expiration_local_str,
        b_lead_isactive_local_var,
        s_lead_code_local_str,
        s_lead_contacts_local_str
        );

    if (!lead_list_element_local_var) {
        goto end;
    }

    return lead_list_element_local_var;
end:
    if (pki_lead_id_local_var) {
        free(pki_lead_id_local_var);
        pki_lead_id_local_var = NULL;
    }
    if (fki_leadsource_id_local_var) {
        free(fki_leadsource_id_local_var);
        fki_leadsource_id_local_var = NULL;
    }
    if (s_leadsource_name_x_local_str) {
        free(s_leadsource_name_x_local_str);
        s_leadsource_name_x_local_str = NULL;
    }
    if (e_lead_status_local_nonprim) {
        e_lead_status_local_nonprim = 0;
    }
    if (dt_lead_expiration_local_str) {
        free(dt_lead_expiration_local_str);
        dt_lead_expiration_local_str = NULL;
    }
    if (b_lead_isactive_local_var) {
        free(b_lead_isactive_local_var);
        b_lead_isactive_local_var = NULL;
    }
    if (s_lead_code_local_str) {
        free(s_lead_code_local_str);
        s_lead_code_local_str = NULL;
    }
    if (s_lead_contacts_local_str) {
        free(s_lead_contacts_local_str);
        s_lead_contacts_local_str = NULL;
    }
    return NULL;

}
