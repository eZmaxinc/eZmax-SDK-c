#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_list_element.h"



static activesession_list_element_t *activesession_list_element_create_internal(
    int pki_activesession_id,
    int fki_user_id,
    int fki_computer_id,
    int fki_company_id,
    int fki_department_id,
    char *s_company_name_x,
    char *s_department_name_x,
    char *s_activesession_loginname,
    char *s_computer_description,
    char *dt_activesession_firsthit,
    char *dt_activesession_lasthit,
    char *s_activesession_ip
    ) {
    activesession_list_element_t *activesession_list_element_local_var = malloc(sizeof(activesession_list_element_t));
    if (!activesession_list_element_local_var) {
        return NULL;
    }
    activesession_list_element_local_var->pki_activesession_id = pki_activesession_id;
    activesession_list_element_local_var->fki_user_id = fki_user_id;
    activesession_list_element_local_var->fki_computer_id = fki_computer_id;
    activesession_list_element_local_var->fki_company_id = fki_company_id;
    activesession_list_element_local_var->fki_department_id = fki_department_id;
    activesession_list_element_local_var->s_company_name_x = s_company_name_x;
    activesession_list_element_local_var->s_department_name_x = s_department_name_x;
    activesession_list_element_local_var->s_activesession_loginname = s_activesession_loginname;
    activesession_list_element_local_var->s_computer_description = s_computer_description;
    activesession_list_element_local_var->dt_activesession_firsthit = dt_activesession_firsthit;
    activesession_list_element_local_var->dt_activesession_lasthit = dt_activesession_lasthit;
    activesession_list_element_local_var->s_activesession_ip = s_activesession_ip;

    activesession_list_element_local_var->_library_owned = 1;
    return activesession_list_element_local_var;
}

__attribute__((deprecated)) activesession_list_element_t *activesession_list_element_create(
    int pki_activesession_id,
    int fki_user_id,
    int fki_computer_id,
    int fki_company_id,
    int fki_department_id,
    char *s_company_name_x,
    char *s_department_name_x,
    char *s_activesession_loginname,
    char *s_computer_description,
    char *dt_activesession_firsthit,
    char *dt_activesession_lasthit,
    char *s_activesession_ip
    ) {
    return activesession_list_element_create_internal (
        pki_activesession_id,
        fki_user_id,
        fki_computer_id,
        fki_company_id,
        fki_department_id,
        s_company_name_x,
        s_department_name_x,
        s_activesession_loginname,
        s_computer_description,
        dt_activesession_firsthit,
        dt_activesession_lasthit,
        s_activesession_ip
        );
}

void activesession_list_element_free(activesession_list_element_t *activesession_list_element) {
    if(NULL == activesession_list_element){
        return ;
    }
    if(activesession_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_list_element->s_company_name_x) {
        free(activesession_list_element->s_company_name_x);
        activesession_list_element->s_company_name_x = NULL;
    }
    if (activesession_list_element->s_department_name_x) {
        free(activesession_list_element->s_department_name_x);
        activesession_list_element->s_department_name_x = NULL;
    }
    if (activesession_list_element->s_activesession_loginname) {
        free(activesession_list_element->s_activesession_loginname);
        activesession_list_element->s_activesession_loginname = NULL;
    }
    if (activesession_list_element->s_computer_description) {
        free(activesession_list_element->s_computer_description);
        activesession_list_element->s_computer_description = NULL;
    }
    if (activesession_list_element->dt_activesession_firsthit) {
        free(activesession_list_element->dt_activesession_firsthit);
        activesession_list_element->dt_activesession_firsthit = NULL;
    }
    if (activesession_list_element->dt_activesession_lasthit) {
        free(activesession_list_element->dt_activesession_lasthit);
        activesession_list_element->dt_activesession_lasthit = NULL;
    }
    if (activesession_list_element->s_activesession_ip) {
        free(activesession_list_element->s_activesession_ip);
        activesession_list_element->s_activesession_ip = NULL;
    }
    free(activesession_list_element);
}

cJSON *activesession_list_element_convertToJSON(activesession_list_element_t *activesession_list_element) {
    cJSON *item = cJSON_CreateObject();

    // activesession_list_element->pki_activesession_id
    if (!activesession_list_element->pki_activesession_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiActivesessionID", activesession_list_element->pki_activesession_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_list_element->fki_user_id
    if (!activesession_list_element->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", activesession_list_element->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_list_element->fki_computer_id
    if (!activesession_list_element->fki_computer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiComputerID", activesession_list_element->fki_computer_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_list_element->fki_company_id
    if (!activesession_list_element->fki_company_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", activesession_list_element->fki_company_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_list_element->fki_department_id
    if (!activesession_list_element->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", activesession_list_element->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_list_element->s_company_name_x
    if (!activesession_list_element->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_list_element->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->s_department_name_x
    if (!activesession_list_element->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_list_element->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->s_activesession_loginname
    if (!activesession_list_element->s_activesession_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sActivesessionLoginname", activesession_list_element->s_activesession_loginname) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->s_computer_description
    if (!activesession_list_element->s_computer_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sComputerDescription", activesession_list_element->s_computer_description) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->dt_activesession_firsthit
    if (!activesession_list_element->dt_activesession_firsthit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtActivesessionFirsthit", activesession_list_element->dt_activesession_firsthit) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->dt_activesession_lasthit
    if (!activesession_list_element->dt_activesession_lasthit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtActivesessionLasthit", activesession_list_element->dt_activesession_lasthit) == NULL) {
    goto fail; //String
    }


    // activesession_list_element->s_activesession_ip
    if (!activesession_list_element->s_activesession_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sActivesessionIP", activesession_list_element->s_activesession_ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_list_element_t *activesession_list_element_parseFromJSON(cJSON *activesession_list_elementJSON){

    activesession_list_element_t *activesession_list_element_local_var = NULL;

    // activesession_list_element->pki_activesession_id
    cJSON *pki_activesession_id = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "pkiActivesessionID");
    if (cJSON_IsNull(pki_activesession_id)) {
        pki_activesession_id = NULL;
    }
    if (!pki_activesession_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_activesession_id))
    {
    goto end; //Numeric
    }

    // activesession_list_element->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // activesession_list_element->fki_computer_id
    cJSON *fki_computer_id = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "fkiComputerID");
    if (cJSON_IsNull(fki_computer_id)) {
        fki_computer_id = NULL;
    }
    if (!fki_computer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_computer_id))
    {
    goto end; //Numeric
    }

    // activesession_list_element->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "fkiCompanyID");
    if (cJSON_IsNull(fki_company_id)) {
        fki_company_id = NULL;
    }
    if (!fki_company_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }

    // activesession_list_element->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "fkiDepartmentID");
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

    // activesession_list_element->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // activesession_list_element->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // activesession_list_element->s_activesession_loginname
    cJSON *s_activesession_loginname = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "sActivesessionLoginname");
    if (cJSON_IsNull(s_activesession_loginname)) {
        s_activesession_loginname = NULL;
    }
    if (!s_activesession_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_activesession_loginname))
    {
    goto end; //String
    }

    // activesession_list_element->s_computer_description
    cJSON *s_computer_description = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "sComputerDescription");
    if (cJSON_IsNull(s_computer_description)) {
        s_computer_description = NULL;
    }
    if (!s_computer_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_computer_description))
    {
    goto end; //String
    }

    // activesession_list_element->dt_activesession_firsthit
    cJSON *dt_activesession_firsthit = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "dtActivesessionFirsthit");
    if (cJSON_IsNull(dt_activesession_firsthit)) {
        dt_activesession_firsthit = NULL;
    }
    if (!dt_activesession_firsthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_activesession_firsthit))
    {
    goto end; //String
    }

    // activesession_list_element->dt_activesession_lasthit
    cJSON *dt_activesession_lasthit = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "dtActivesessionLasthit");
    if (cJSON_IsNull(dt_activesession_lasthit)) {
        dt_activesession_lasthit = NULL;
    }
    if (!dt_activesession_lasthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_activesession_lasthit))
    {
    goto end; //String
    }

    // activesession_list_element->s_activesession_ip
    cJSON *s_activesession_ip = cJSON_GetObjectItemCaseSensitive(activesession_list_elementJSON, "sActivesessionIP");
    if (cJSON_IsNull(s_activesession_ip)) {
        s_activesession_ip = NULL;
    }
    if (!s_activesession_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_activesession_ip))
    {
    goto end; //String
    }


    activesession_list_element_local_var = activesession_list_element_create_internal (
        pki_activesession_id->valuedouble,
        fki_user_id->valuedouble,
        fki_computer_id->valuedouble,
        fki_company_id->valuedouble,
        fki_department_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        strdup(s_activesession_loginname->valuestring),
        strdup(s_computer_description->valuestring),
        strdup(dt_activesession_firsthit->valuestring),
        strdup(dt_activesession_lasthit->valuestring),
        strdup(s_activesession_ip->valuestring)
        );

    return activesession_list_element_local_var;
end:
    return NULL;

}
