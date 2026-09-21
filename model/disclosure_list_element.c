#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disclosure_list_element.h"



static disclosure_list_element_t *disclosure_list_element_create_internal(
    int *pki_disclosure_id,
    int *fki_agent_id,
    int *fki_broker_id,
    ezmax_api_definition__full_field_e_disclosure_interesttype__e e_disclosure_interesttype,
    char *s_disclosure_relation,
    char *dt_disclosure_redactiondate,
    char *dt_disclosure_acceptationdate,
    char *dt_disclosure_receptiondate,
    int *b_disclosure_isactive,
    char *s_disclosure_number,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_broker_name
    ) {
    disclosure_list_element_t *disclosure_list_element_local_var = malloc(sizeof(disclosure_list_element_t));
    if (!disclosure_list_element_local_var) {
        return NULL;
    }
    memset(disclosure_list_element_local_var, 0, sizeof(disclosure_list_element_t));
    disclosure_list_element_local_var->_library_owned = 1;
    disclosure_list_element_local_var->pki_disclosure_id = pki_disclosure_id;
    disclosure_list_element_local_var->fki_agent_id = fki_agent_id;
    disclosure_list_element_local_var->fki_broker_id = fki_broker_id;
    disclosure_list_element_local_var->e_disclosure_interesttype = e_disclosure_interesttype;
    disclosure_list_element_local_var->s_disclosure_relation = s_disclosure_relation;
    disclosure_list_element_local_var->dt_disclosure_redactiondate = dt_disclosure_redactiondate;
    disclosure_list_element_local_var->dt_disclosure_acceptationdate = dt_disclosure_acceptationdate;
    disclosure_list_element_local_var->dt_disclosure_receptiondate = dt_disclosure_receptiondate;
    disclosure_list_element_local_var->b_disclosure_isactive = b_disclosure_isactive;
    disclosure_list_element_local_var->s_disclosure_number = s_disclosure_number;
    disclosure_list_element_local_var->s_contact_firstname = s_contact_firstname;
    disclosure_list_element_local_var->s_contact_lastname = s_contact_lastname;
    disclosure_list_element_local_var->s_broker_name = s_broker_name;
    return disclosure_list_element_local_var;
}

__attribute__((deprecated)) disclosure_list_element_t *disclosure_list_element_create(
    int *pki_disclosure_id,
    int *fki_agent_id,
    int *fki_broker_id,
    ezmax_api_definition__full_field_e_disclosure_interesttype__e e_disclosure_interesttype,
    char *s_disclosure_relation,
    char *dt_disclosure_redactiondate,
    char *dt_disclosure_acceptationdate,
    char *dt_disclosure_receptiondate,
    int *b_disclosure_isactive,
    char *s_disclosure_number,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_broker_name
    ) {
    int *pki_disclosure_id_copy = NULL;
    if (pki_disclosure_id) {
        pki_disclosure_id_copy = malloc(sizeof(int));
        if (pki_disclosure_id_copy) *pki_disclosure_id_copy = *pki_disclosure_id;
    }
    int *fki_agent_id_copy = NULL;
    if (fki_agent_id) {
        fki_agent_id_copy = malloc(sizeof(int));
        if (fki_agent_id_copy) *fki_agent_id_copy = *fki_agent_id;
    }
    int *fki_broker_id_copy = NULL;
    if (fki_broker_id) {
        fki_broker_id_copy = malloc(sizeof(int));
        if (fki_broker_id_copy) *fki_broker_id_copy = *fki_broker_id;
    }
    int *b_disclosure_isactive_copy = NULL;
    if (b_disclosure_isactive) {
        b_disclosure_isactive_copy = malloc(sizeof(int));
        if (b_disclosure_isactive_copy) *b_disclosure_isactive_copy = *b_disclosure_isactive;
    }
    disclosure_list_element_t *result = disclosure_list_element_create_internal (
        pki_disclosure_id_copy,
        fki_agent_id_copy,
        fki_broker_id_copy,
        e_disclosure_interesttype,
        s_disclosure_relation,
        dt_disclosure_redactiondate,
        dt_disclosure_acceptationdate,
        dt_disclosure_receptiondate,
        b_disclosure_isactive_copy,
        s_disclosure_number,
        s_contact_firstname,
        s_contact_lastname,
        s_broker_name
        );
    if (!result) {
        free(pki_disclosure_id_copy);
        free(fki_agent_id_copy);
        free(fki_broker_id_copy);
        free(b_disclosure_isactive_copy);
    }
    return result;
}

void disclosure_list_element_free(disclosure_list_element_t *disclosure_list_element) {
    if(NULL == disclosure_list_element){
        return ;
    }
    if(disclosure_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disclosure_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disclosure_list_element->pki_disclosure_id) {
        free(disclosure_list_element->pki_disclosure_id);
        disclosure_list_element->pki_disclosure_id = NULL;
    }
    if (disclosure_list_element->fki_agent_id) {
        free(disclosure_list_element->fki_agent_id);
        disclosure_list_element->fki_agent_id = NULL;
    }
    if (disclosure_list_element->fki_broker_id) {
        free(disclosure_list_element->fki_broker_id);
        disclosure_list_element->fki_broker_id = NULL;
    }
    if (disclosure_list_element->s_disclosure_relation) {
        free(disclosure_list_element->s_disclosure_relation);
        disclosure_list_element->s_disclosure_relation = NULL;
    }
    if (disclosure_list_element->dt_disclosure_redactiondate) {
        free(disclosure_list_element->dt_disclosure_redactiondate);
        disclosure_list_element->dt_disclosure_redactiondate = NULL;
    }
    if (disclosure_list_element->dt_disclosure_acceptationdate) {
        free(disclosure_list_element->dt_disclosure_acceptationdate);
        disclosure_list_element->dt_disclosure_acceptationdate = NULL;
    }
    if (disclosure_list_element->dt_disclosure_receptiondate) {
        free(disclosure_list_element->dt_disclosure_receptiondate);
        disclosure_list_element->dt_disclosure_receptiondate = NULL;
    }
    if (disclosure_list_element->b_disclosure_isactive) {
        free(disclosure_list_element->b_disclosure_isactive);
        disclosure_list_element->b_disclosure_isactive = NULL;
    }
    if (disclosure_list_element->s_disclosure_number) {
        free(disclosure_list_element->s_disclosure_number);
        disclosure_list_element->s_disclosure_number = NULL;
    }
    if (disclosure_list_element->s_contact_firstname) {
        free(disclosure_list_element->s_contact_firstname);
        disclosure_list_element->s_contact_firstname = NULL;
    }
    if (disclosure_list_element->s_contact_lastname) {
        free(disclosure_list_element->s_contact_lastname);
        disclosure_list_element->s_contact_lastname = NULL;
    }
    if (disclosure_list_element->s_broker_name) {
        free(disclosure_list_element->s_broker_name);
        disclosure_list_element->s_broker_name = NULL;
    }
    free(disclosure_list_element);
}

cJSON *disclosure_list_element_convertToJSON(disclosure_list_element_t *disclosure_list_element) {
    cJSON *item = cJSON_CreateObject();

    // disclosure_list_element->pki_disclosure_id
    if (!disclosure_list_element->pki_disclosure_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDisclosureID", *disclosure_list_element->pki_disclosure_id) == NULL) {
    goto fail; //Numeric
    }


    // disclosure_list_element->fki_agent_id
    if(disclosure_list_element->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", *disclosure_list_element->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // disclosure_list_element->fki_broker_id
    if(disclosure_list_element->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", *disclosure_list_element->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // disclosure_list_element->e_disclosure_interesttype
    if (ezmax_api_definition__full_field_e_disclosure_interesttype__NULL == disclosure_list_element->e_disclosure_interesttype) {
        goto fail;
    }
    cJSON *e_disclosure_interesttype_local_JSON = field_e_disclosure_interesttype_convertToJSON(disclosure_list_element->e_disclosure_interesttype);
    if(e_disclosure_interesttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDisclosureInteresttype", e_disclosure_interesttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // disclosure_list_element->s_disclosure_relation
    if (!disclosure_list_element->s_disclosure_relation) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDisclosureRelation", disclosure_list_element->s_disclosure_relation) == NULL) {
    goto fail; //String
    }


    // disclosure_list_element->dt_disclosure_redactiondate
    if (!disclosure_list_element->dt_disclosure_redactiondate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDisclosureRedactiondate", disclosure_list_element->dt_disclosure_redactiondate) == NULL) {
    goto fail; //String
    }


    // disclosure_list_element->dt_disclosure_acceptationdate
    if (!disclosure_list_element->dt_disclosure_acceptationdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDisclosureAcceptationdate", disclosure_list_element->dt_disclosure_acceptationdate) == NULL) {
    goto fail; //String
    }


    // disclosure_list_element->dt_disclosure_receptiondate
    if (!disclosure_list_element->dt_disclosure_receptiondate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDisclosureReceptiondate", disclosure_list_element->dt_disclosure_receptiondate) == NULL) {
    goto fail; //String
    }


    // disclosure_list_element->b_disclosure_isactive
    if (!disclosure_list_element->b_disclosure_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDisclosureIsactive", *disclosure_list_element->b_disclosure_isactive) == NULL) {
    goto fail; //Bool
    }


    // disclosure_list_element->s_disclosure_number
    if(disclosure_list_element->s_disclosure_number) {
    if(cJSON_AddStringToObject(item, "sDisclosureNumber", disclosure_list_element->s_disclosure_number) == NULL) {
    goto fail; //String
    }
    }


    // disclosure_list_element->s_contact_firstname
    if(disclosure_list_element->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", disclosure_list_element->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // disclosure_list_element->s_contact_lastname
    if(disclosure_list_element->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", disclosure_list_element->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // disclosure_list_element->s_broker_name
    if(disclosure_list_element->s_broker_name) {
    if(cJSON_AddStringToObject(item, "sBrokerName", disclosure_list_element->s_broker_name) == NULL) {
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

disclosure_list_element_t *disclosure_list_element_parseFromJSON(cJSON *disclosure_list_elementJSON){

    disclosure_list_element_t *disclosure_list_element_local_var = NULL;

    // define the local variable for disclosure_list_element->pki_disclosure_id
    int *pki_disclosure_id_local_var = NULL;

    // define the local variable for disclosure_list_element->fki_agent_id
    int *fki_agent_id_local_var = NULL;

    // define the local variable for disclosure_list_element->fki_broker_id
    int *fki_broker_id_local_var = NULL;

    // define the local variable for disclosure_list_element->e_disclosure_interesttype
    ezmax_api_definition__full_field_e_disclosure_interesttype__e e_disclosure_interesttype_local_nonprim = 0;

    char *s_disclosure_relation_local_str = NULL;

    char *dt_disclosure_redactiondate_local_str = NULL;

    char *dt_disclosure_acceptationdate_local_str = NULL;

    char *dt_disclosure_receptiondate_local_str = NULL;

    // define the local variable for disclosure_list_element->b_disclosure_isactive
    int *b_disclosure_isactive_local_var = NULL;

    char *s_disclosure_number_local_str = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *s_broker_name_local_str = NULL;

    // disclosure_list_element->pki_disclosure_id
    cJSON *pki_disclosure_id = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "pkiDisclosureID");
    if (cJSON_IsNull(pki_disclosure_id)) {
        pki_disclosure_id = NULL;
    }
    if (!pki_disclosure_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_disclosure_id))
    {
    goto end; //Numeric
    }
    pki_disclosure_id_local_var = malloc(sizeof(int));
    if(!pki_disclosure_id_local_var)
    {
        goto end;
    }
    *pki_disclosure_id_local_var = pki_disclosure_id->valuedouble;

    // disclosure_list_element->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    fki_agent_id_local_var = malloc(sizeof(int));
    if(!fki_agent_id_local_var)
    {
        goto end;
    }
    *fki_agent_id_local_var = fki_agent_id->valuedouble;
    }

    // disclosure_list_element->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    fki_broker_id_local_var = malloc(sizeof(int));
    if(!fki_broker_id_local_var)
    {
        goto end;
    }
    *fki_broker_id_local_var = fki_broker_id->valuedouble;
    }

    // disclosure_list_element->e_disclosure_interesttype
    cJSON *e_disclosure_interesttype = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "eDisclosureInteresttype");
    if (cJSON_IsNull(e_disclosure_interesttype)) {
        e_disclosure_interesttype = NULL;
    }
    if (!e_disclosure_interesttype) {
        goto end;
    }

    
    e_disclosure_interesttype_local_nonprim = field_e_disclosure_interesttype_parseFromJSON(e_disclosure_interesttype); //custom

    // disclosure_list_element->s_disclosure_relation
    cJSON *s_disclosure_relation = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "sDisclosureRelation");
    if (cJSON_IsNull(s_disclosure_relation)) {
        s_disclosure_relation = NULL;
    }
    if (!s_disclosure_relation) {
        goto end;
    }

    
    if(!cJSON_IsString(s_disclosure_relation))
    {
    goto end; //String
    }

    // disclosure_list_element->dt_disclosure_redactiondate
    cJSON *dt_disclosure_redactiondate = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "dtDisclosureRedactiondate");
    if (cJSON_IsNull(dt_disclosure_redactiondate)) {
        dt_disclosure_redactiondate = NULL;
    }
    if (!dt_disclosure_redactiondate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_disclosure_redactiondate))
    {
    goto end; //String
    }

    // disclosure_list_element->dt_disclosure_acceptationdate
    cJSON *dt_disclosure_acceptationdate = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "dtDisclosureAcceptationdate");
    if (cJSON_IsNull(dt_disclosure_acceptationdate)) {
        dt_disclosure_acceptationdate = NULL;
    }
    if (!dt_disclosure_acceptationdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_disclosure_acceptationdate))
    {
    goto end; //String
    }

    // disclosure_list_element->dt_disclosure_receptiondate
    cJSON *dt_disclosure_receptiondate = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "dtDisclosureReceptiondate");
    if (cJSON_IsNull(dt_disclosure_receptiondate)) {
        dt_disclosure_receptiondate = NULL;
    }
    if (!dt_disclosure_receptiondate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_disclosure_receptiondate))
    {
    goto end; //String
    }

    // disclosure_list_element->b_disclosure_isactive
    cJSON *b_disclosure_isactive = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "bDisclosureIsactive");
    if (cJSON_IsNull(b_disclosure_isactive)) {
        b_disclosure_isactive = NULL;
    }
    if (!b_disclosure_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_disclosure_isactive))
    {
    goto end; //Bool
    }
    b_disclosure_isactive_local_var = malloc(sizeof(int));
    if(!b_disclosure_isactive_local_var)
    {
        goto end;
    }
    *b_disclosure_isactive_local_var = b_disclosure_isactive->valueint;

    // disclosure_list_element->s_disclosure_number
    cJSON *s_disclosure_number = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "sDisclosureNumber");
    if (cJSON_IsNull(s_disclosure_number)) {
        s_disclosure_number = NULL;
    }
    if (s_disclosure_number) { 
    if(!cJSON_IsString(s_disclosure_number) && !cJSON_IsNull(s_disclosure_number))
    {
    goto end; //String
    }
    }

    // disclosure_list_element->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // disclosure_list_element->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // disclosure_list_element->s_broker_name
    cJSON *s_broker_name = cJSON_GetObjectItemCaseSensitive(disclosure_list_elementJSON, "sBrokerName");
    if (cJSON_IsNull(s_broker_name)) {
        s_broker_name = NULL;
    }
    if (s_broker_name) { 
    if(!cJSON_IsString(s_broker_name) && !cJSON_IsNull(s_broker_name))
    {
    goto end; //String
    }
    }


    if (s_disclosure_relation && !cJSON_IsNull(s_disclosure_relation)) s_disclosure_relation_local_str = strdup(s_disclosure_relation->valuestring);
    if (dt_disclosure_redactiondate && !cJSON_IsNull(dt_disclosure_redactiondate)) dt_disclosure_redactiondate_local_str = strdup(dt_disclosure_redactiondate->valuestring);
    if (dt_disclosure_acceptationdate && !cJSON_IsNull(dt_disclosure_acceptationdate)) dt_disclosure_acceptationdate_local_str = strdup(dt_disclosure_acceptationdate->valuestring);
    if (dt_disclosure_receptiondate && !cJSON_IsNull(dt_disclosure_receptiondate)) dt_disclosure_receptiondate_local_str = strdup(dt_disclosure_receptiondate->valuestring);
    if (s_disclosure_number && !cJSON_IsNull(s_disclosure_number)) s_disclosure_number_local_str = strdup(s_disclosure_number->valuestring);
    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_broker_name && !cJSON_IsNull(s_broker_name)) s_broker_name_local_str = strdup(s_broker_name->valuestring);

    disclosure_list_element_local_var = disclosure_list_element_create_internal (
        pki_disclosure_id_local_var,
        fki_agent_id_local_var,
        fki_broker_id_local_var,
        e_disclosure_interesttype_local_nonprim,
        s_disclosure_relation_local_str,
        dt_disclosure_redactiondate_local_str,
        dt_disclosure_acceptationdate_local_str,
        dt_disclosure_receptiondate_local_str,
        b_disclosure_isactive_local_var,
        s_disclosure_number_local_str,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        s_broker_name_local_str
        );

    if (!disclosure_list_element_local_var) {
        goto end;
    }

    return disclosure_list_element_local_var;
end:
    if (pki_disclosure_id_local_var) {
        free(pki_disclosure_id_local_var);
        pki_disclosure_id_local_var = NULL;
    }
    if (fki_agent_id_local_var) {
        free(fki_agent_id_local_var);
        fki_agent_id_local_var = NULL;
    }
    if (fki_broker_id_local_var) {
        free(fki_broker_id_local_var);
        fki_broker_id_local_var = NULL;
    }
    if (e_disclosure_interesttype_local_nonprim) {
        e_disclosure_interesttype_local_nonprim = 0;
    }
    if (s_disclosure_relation_local_str) {
        free(s_disclosure_relation_local_str);
        s_disclosure_relation_local_str = NULL;
    }
    if (dt_disclosure_redactiondate_local_str) {
        free(dt_disclosure_redactiondate_local_str);
        dt_disclosure_redactiondate_local_str = NULL;
    }
    if (dt_disclosure_acceptationdate_local_str) {
        free(dt_disclosure_acceptationdate_local_str);
        dt_disclosure_acceptationdate_local_str = NULL;
    }
    if (dt_disclosure_receptiondate_local_str) {
        free(dt_disclosure_receptiondate_local_str);
        dt_disclosure_receptiondate_local_str = NULL;
    }
    if (b_disclosure_isactive_local_var) {
        free(b_disclosure_isactive_local_var);
        b_disclosure_isactive_local_var = NULL;
    }
    if (s_disclosure_number_local_str) {
        free(s_disclosure_number_local_str);
        s_disclosure_number_local_str = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (s_broker_name_local_str) {
        free(s_broker_name_local_str);
        s_broker_name_local_str = NULL;
    }
    return NULL;

}
