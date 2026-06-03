#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_autocomplete_element_response.h"



static agent_autocomplete_element_response_t *agent_autocomplete_element_response_create_internal(
    int *pki_agent_id,
    int *fki_department_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int *b_agent_isactive
    ) {
    agent_autocomplete_element_response_t *agent_autocomplete_element_response_local_var = malloc(sizeof(agent_autocomplete_element_response_t));
    if (!agent_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(agent_autocomplete_element_response_local_var, 0, sizeof(agent_autocomplete_element_response_t));
    agent_autocomplete_element_response_local_var->_library_owned = 1;
    agent_autocomplete_element_response_local_var->pki_agent_id = pki_agent_id;
    agent_autocomplete_element_response_local_var->fki_department_id = fki_department_id;
    agent_autocomplete_element_response_local_var->s_contact_firstname = s_contact_firstname;
    agent_autocomplete_element_response_local_var->s_contact_lastname = s_contact_lastname;
    agent_autocomplete_element_response_local_var->b_agent_isactive = b_agent_isactive;
    return agent_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) agent_autocomplete_element_response_t *agent_autocomplete_element_response_create(
    int *pki_agent_id,
    int *fki_department_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int *b_agent_isactive
    ) {
    int *pki_agent_id_copy = NULL;
    if (pki_agent_id) {
        pki_agent_id_copy = malloc(sizeof(int));
        if (pki_agent_id_copy) *pki_agent_id_copy = *pki_agent_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *b_agent_isactive_copy = NULL;
    if (b_agent_isactive) {
        b_agent_isactive_copy = malloc(sizeof(int));
        if (b_agent_isactive_copy) *b_agent_isactive_copy = *b_agent_isactive;
    }
    agent_autocomplete_element_response_t *result = agent_autocomplete_element_response_create_internal (
        pki_agent_id_copy,
        fki_department_id_copy,
        s_contact_firstname,
        s_contact_lastname,
        b_agent_isactive_copy
        );
    if (!result) {
        free(pki_agent_id_copy);
        free(fki_department_id_copy);
        free(b_agent_isactive_copy);
    }
    return result;
}

void agent_autocomplete_element_response_free(agent_autocomplete_element_response_t *agent_autocomplete_element_response) {
    if(NULL == agent_autocomplete_element_response){
        return ;
    }
    if(agent_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_autocomplete_element_response->pki_agent_id) {
        free(agent_autocomplete_element_response->pki_agent_id);
        agent_autocomplete_element_response->pki_agent_id = NULL;
    }
    if (agent_autocomplete_element_response->fki_department_id) {
        free(agent_autocomplete_element_response->fki_department_id);
        agent_autocomplete_element_response->fki_department_id = NULL;
    }
    if (agent_autocomplete_element_response->s_contact_firstname) {
        free(agent_autocomplete_element_response->s_contact_firstname);
        agent_autocomplete_element_response->s_contact_firstname = NULL;
    }
    if (agent_autocomplete_element_response->s_contact_lastname) {
        free(agent_autocomplete_element_response->s_contact_lastname);
        agent_autocomplete_element_response->s_contact_lastname = NULL;
    }
    if (agent_autocomplete_element_response->b_agent_isactive) {
        free(agent_autocomplete_element_response->b_agent_isactive);
        agent_autocomplete_element_response->b_agent_isactive = NULL;
    }
    free(agent_autocomplete_element_response);
}

cJSON *agent_autocomplete_element_response_convertToJSON(agent_autocomplete_element_response_t *agent_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // agent_autocomplete_element_response->pki_agent_id
    if (!agent_autocomplete_element_response->pki_agent_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAgentID", *agent_autocomplete_element_response->pki_agent_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_autocomplete_element_response->fki_department_id
    if (!agent_autocomplete_element_response->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *agent_autocomplete_element_response->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_autocomplete_element_response->s_contact_firstname
    if (!agent_autocomplete_element_response->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", agent_autocomplete_element_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // agent_autocomplete_element_response->s_contact_lastname
    if (!agent_autocomplete_element_response->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", agent_autocomplete_element_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // agent_autocomplete_element_response->b_agent_isactive
    if (!agent_autocomplete_element_response->b_agent_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentIsactive", *agent_autocomplete_element_response->b_agent_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_autocomplete_element_response_t *agent_autocomplete_element_response_parseFromJSON(cJSON *agent_autocomplete_element_responseJSON){

    agent_autocomplete_element_response_t *agent_autocomplete_element_response_local_var = NULL;

    // define the local variable for agent_autocomplete_element_response->pki_agent_id
    int *pki_agent_id_local_var = NULL;

    // define the local variable for agent_autocomplete_element_response->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    // define the local variable for agent_autocomplete_element_response->b_agent_isactive
    int *b_agent_isactive_local_var = NULL;

    // agent_autocomplete_element_response->pki_agent_id
    cJSON *pki_agent_id = cJSON_GetObjectItemCaseSensitive(agent_autocomplete_element_responseJSON, "pkiAgentID");
    if (cJSON_IsNull(pki_agent_id)) {
        pki_agent_id = NULL;
    }
    if (!pki_agent_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_agent_id))
    {
    goto end; //Numeric
    }
    pki_agent_id_local_var = malloc(sizeof(int));
    if(!pki_agent_id_local_var)
    {
        goto end;
    }
    *pki_agent_id_local_var = pki_agent_id->valuedouble;

    // agent_autocomplete_element_response->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(agent_autocomplete_element_responseJSON, "fkiDepartmentID");
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

    // agent_autocomplete_element_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(agent_autocomplete_element_responseJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // agent_autocomplete_element_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(agent_autocomplete_element_responseJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // agent_autocomplete_element_response->b_agent_isactive
    cJSON *b_agent_isactive = cJSON_GetObjectItemCaseSensitive(agent_autocomplete_element_responseJSON, "bAgentIsactive");
    if (cJSON_IsNull(b_agent_isactive)) {
        b_agent_isactive = NULL;
    }
    if (!b_agent_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_isactive))
    {
    goto end; //Bool
    }
    b_agent_isactive_local_var = malloc(sizeof(int));
    if(!b_agent_isactive_local_var)
    {
        goto end;
    }
    *b_agent_isactive_local_var = b_agent_isactive->valueint;


    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);

    agent_autocomplete_element_response_local_var = agent_autocomplete_element_response_create_internal (
        pki_agent_id_local_var,
        fki_department_id_local_var,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        b_agent_isactive_local_var
        );

    if (!agent_autocomplete_element_response_local_var) {
        goto end;
    }

    return agent_autocomplete_element_response_local_var;
end:
    if (pki_agent_id_local_var) {
        free(pki_agent_id_local_var);
        pki_agent_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (b_agent_isactive_local_var) {
        free(b_agent_isactive_local_var);
        b_agent_isactive_local_var = NULL;
    }
    return NULL;

}
