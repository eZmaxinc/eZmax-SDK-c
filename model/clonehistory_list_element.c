#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "clonehistory_list_element.h"



static clonehistory_list_element_t *clonehistory_list_element_create_internal(
    int *pki_clonehistory_id,
    int *fki_user_id_cloning,
    int *fki_user_id_cloned,
    char *dt_clonehistory_firsthit,
    char *dt_clonehistory_lasthit,
    char *s_user_loginname_cloning,
    char *s_user_firstname_cloning,
    char *s_user_lastname_cloning,
    char *s_user_loginname_cloned,
    char *s_user_firstname_cloned,
    char *s_user_lastname_cloned
    ) {
    clonehistory_list_element_t *clonehistory_list_element_local_var = malloc(sizeof(clonehistory_list_element_t));
    if (!clonehistory_list_element_local_var) {
        return NULL;
    }
    memset(clonehistory_list_element_local_var, 0, sizeof(clonehistory_list_element_t));
    clonehistory_list_element_local_var->_library_owned = 1;
    clonehistory_list_element_local_var->pki_clonehistory_id = pki_clonehistory_id;
    clonehistory_list_element_local_var->fki_user_id_cloning = fki_user_id_cloning;
    clonehistory_list_element_local_var->fki_user_id_cloned = fki_user_id_cloned;
    clonehistory_list_element_local_var->dt_clonehistory_firsthit = dt_clonehistory_firsthit;
    clonehistory_list_element_local_var->dt_clonehistory_lasthit = dt_clonehistory_lasthit;
    clonehistory_list_element_local_var->s_user_loginname_cloning = s_user_loginname_cloning;
    clonehistory_list_element_local_var->s_user_firstname_cloning = s_user_firstname_cloning;
    clonehistory_list_element_local_var->s_user_lastname_cloning = s_user_lastname_cloning;
    clonehistory_list_element_local_var->s_user_loginname_cloned = s_user_loginname_cloned;
    clonehistory_list_element_local_var->s_user_firstname_cloned = s_user_firstname_cloned;
    clonehistory_list_element_local_var->s_user_lastname_cloned = s_user_lastname_cloned;
    return clonehistory_list_element_local_var;
}

__attribute__((deprecated)) clonehistory_list_element_t *clonehistory_list_element_create(
    int *pki_clonehistory_id,
    int *fki_user_id_cloning,
    int *fki_user_id_cloned,
    char *dt_clonehistory_firsthit,
    char *dt_clonehistory_lasthit,
    char *s_user_loginname_cloning,
    char *s_user_firstname_cloning,
    char *s_user_lastname_cloning,
    char *s_user_loginname_cloned,
    char *s_user_firstname_cloned,
    char *s_user_lastname_cloned
    ) {
    int *pki_clonehistory_id_copy = NULL;
    if (pki_clonehistory_id) {
        pki_clonehistory_id_copy = malloc(sizeof(int));
        if (pki_clonehistory_id_copy) *pki_clonehistory_id_copy = *pki_clonehistory_id;
    }
    int *fki_user_id_cloning_copy = NULL;
    if (fki_user_id_cloning) {
        fki_user_id_cloning_copy = malloc(sizeof(int));
        if (fki_user_id_cloning_copy) *fki_user_id_cloning_copy = *fki_user_id_cloning;
    }
    int *fki_user_id_cloned_copy = NULL;
    if (fki_user_id_cloned) {
        fki_user_id_cloned_copy = malloc(sizeof(int));
        if (fki_user_id_cloned_copy) *fki_user_id_cloned_copy = *fki_user_id_cloned;
    }
    clonehistory_list_element_t *result = clonehistory_list_element_create_internal (
        pki_clonehistory_id_copy,
        fki_user_id_cloning_copy,
        fki_user_id_cloned_copy,
        dt_clonehistory_firsthit,
        dt_clonehistory_lasthit,
        s_user_loginname_cloning,
        s_user_firstname_cloning,
        s_user_lastname_cloning,
        s_user_loginname_cloned,
        s_user_firstname_cloned,
        s_user_lastname_cloned
        );
    if (!result) {
        free(pki_clonehistory_id_copy);
        free(fki_user_id_cloning_copy);
        free(fki_user_id_cloned_copy);
    }
    return result;
}

void clonehistory_list_element_free(clonehistory_list_element_t *clonehistory_list_element) {
    if(NULL == clonehistory_list_element){
        return ;
    }
    if(clonehistory_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "clonehistory_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (clonehistory_list_element->pki_clonehistory_id) {
        free(clonehistory_list_element->pki_clonehistory_id);
        clonehistory_list_element->pki_clonehistory_id = NULL;
    }
    if (clonehistory_list_element->fki_user_id_cloning) {
        free(clonehistory_list_element->fki_user_id_cloning);
        clonehistory_list_element->fki_user_id_cloning = NULL;
    }
    if (clonehistory_list_element->fki_user_id_cloned) {
        free(clonehistory_list_element->fki_user_id_cloned);
        clonehistory_list_element->fki_user_id_cloned = NULL;
    }
    if (clonehistory_list_element->dt_clonehistory_firsthit) {
        free(clonehistory_list_element->dt_clonehistory_firsthit);
        clonehistory_list_element->dt_clonehistory_firsthit = NULL;
    }
    if (clonehistory_list_element->dt_clonehistory_lasthit) {
        free(clonehistory_list_element->dt_clonehistory_lasthit);
        clonehistory_list_element->dt_clonehistory_lasthit = NULL;
    }
    if (clonehistory_list_element->s_user_loginname_cloning) {
        free(clonehistory_list_element->s_user_loginname_cloning);
        clonehistory_list_element->s_user_loginname_cloning = NULL;
    }
    if (clonehistory_list_element->s_user_firstname_cloning) {
        free(clonehistory_list_element->s_user_firstname_cloning);
        clonehistory_list_element->s_user_firstname_cloning = NULL;
    }
    if (clonehistory_list_element->s_user_lastname_cloning) {
        free(clonehistory_list_element->s_user_lastname_cloning);
        clonehistory_list_element->s_user_lastname_cloning = NULL;
    }
    if (clonehistory_list_element->s_user_loginname_cloned) {
        free(clonehistory_list_element->s_user_loginname_cloned);
        clonehistory_list_element->s_user_loginname_cloned = NULL;
    }
    if (clonehistory_list_element->s_user_firstname_cloned) {
        free(clonehistory_list_element->s_user_firstname_cloned);
        clonehistory_list_element->s_user_firstname_cloned = NULL;
    }
    if (clonehistory_list_element->s_user_lastname_cloned) {
        free(clonehistory_list_element->s_user_lastname_cloned);
        clonehistory_list_element->s_user_lastname_cloned = NULL;
    }
    free(clonehistory_list_element);
}

cJSON *clonehistory_list_element_convertToJSON(clonehistory_list_element_t *clonehistory_list_element) {
    cJSON *item = cJSON_CreateObject();

    // clonehistory_list_element->pki_clonehistory_id
    if (!clonehistory_list_element->pki_clonehistory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiClonehistoryID", *clonehistory_list_element->pki_clonehistory_id) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_list_element->fki_user_id_cloning
    if (!clonehistory_list_element->fki_user_id_cloning) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDCloning", *clonehistory_list_element->fki_user_id_cloning) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_list_element->fki_user_id_cloned
    if (!clonehistory_list_element->fki_user_id_cloned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDCloned", *clonehistory_list_element->fki_user_id_cloned) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_list_element->dt_clonehistory_firsthit
    if (!clonehistory_list_element->dt_clonehistory_firsthit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtClonehistoryFirsthit", clonehistory_list_element->dt_clonehistory_firsthit) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->dt_clonehistory_lasthit
    if(clonehistory_list_element->dt_clonehistory_lasthit) {
    if(cJSON_AddStringToObject(item, "dtClonehistoryLasthit", clonehistory_list_element->dt_clonehistory_lasthit) == NULL) {
    goto fail; //String
    }
    }


    // clonehistory_list_element->s_user_loginname_cloning
    if (!clonehistory_list_element->s_user_loginname_cloning) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginnameCloning", clonehistory_list_element->s_user_loginname_cloning) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->s_user_firstname_cloning
    if (!clonehistory_list_element->s_user_firstname_cloning) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstnameCloning", clonehistory_list_element->s_user_firstname_cloning) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->s_user_lastname_cloning
    if (!clonehistory_list_element->s_user_lastname_cloning) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastnameCloning", clonehistory_list_element->s_user_lastname_cloning) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->s_user_loginname_cloned
    if (!clonehistory_list_element->s_user_loginname_cloned) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginnameCloned", clonehistory_list_element->s_user_loginname_cloned) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->s_user_firstname_cloned
    if (!clonehistory_list_element->s_user_firstname_cloned) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstnameCloned", clonehistory_list_element->s_user_firstname_cloned) == NULL) {
    goto fail; //String
    }


    // clonehistory_list_element->s_user_lastname_cloned
    if (!clonehistory_list_element->s_user_lastname_cloned) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastnameCloned", clonehistory_list_element->s_user_lastname_cloned) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

clonehistory_list_element_t *clonehistory_list_element_parseFromJSON(cJSON *clonehistory_list_elementJSON){

    clonehistory_list_element_t *clonehistory_list_element_local_var = NULL;

    // define the local variable for clonehistory_list_element->pki_clonehistory_id
    int *pki_clonehistory_id_local_var = NULL;

    // define the local variable for clonehistory_list_element->fki_user_id_cloning
    int *fki_user_id_cloning_local_var = NULL;

    // define the local variable for clonehistory_list_element->fki_user_id_cloned
    int *fki_user_id_cloned_local_var = NULL;

    char *dt_clonehistory_firsthit_local_str = NULL;

    char *dt_clonehistory_lasthit_local_str = NULL;

    char *s_user_loginname_cloning_local_str = NULL;

    char *s_user_firstname_cloning_local_str = NULL;

    char *s_user_lastname_cloning_local_str = NULL;

    char *s_user_loginname_cloned_local_str = NULL;

    char *s_user_firstname_cloned_local_str = NULL;

    char *s_user_lastname_cloned_local_str = NULL;

    // clonehistory_list_element->pki_clonehistory_id
    cJSON *pki_clonehistory_id = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "pkiClonehistoryID");
    if (cJSON_IsNull(pki_clonehistory_id)) {
        pki_clonehistory_id = NULL;
    }
    if (!pki_clonehistory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_clonehistory_id))
    {
    goto end; //Numeric
    }
    pki_clonehistory_id_local_var = malloc(sizeof(int));
    if(!pki_clonehistory_id_local_var)
    {
        goto end;
    }
    *pki_clonehistory_id_local_var = pki_clonehistory_id->valuedouble;

    // clonehistory_list_element->fki_user_id_cloning
    cJSON *fki_user_id_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "fkiUserIDCloning");
    if (cJSON_IsNull(fki_user_id_cloning)) {
        fki_user_id_cloning = NULL;
    }
    if (!fki_user_id_cloning) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_cloning))
    {
    goto end; //Numeric
    }
    fki_user_id_cloning_local_var = malloc(sizeof(int));
    if(!fki_user_id_cloning_local_var)
    {
        goto end;
    }
    *fki_user_id_cloning_local_var = fki_user_id_cloning->valuedouble;

    // clonehistory_list_element->fki_user_id_cloned
    cJSON *fki_user_id_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "fkiUserIDCloned");
    if (cJSON_IsNull(fki_user_id_cloned)) {
        fki_user_id_cloned = NULL;
    }
    if (!fki_user_id_cloned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_cloned))
    {
    goto end; //Numeric
    }
    fki_user_id_cloned_local_var = malloc(sizeof(int));
    if(!fki_user_id_cloned_local_var)
    {
        goto end;
    }
    *fki_user_id_cloned_local_var = fki_user_id_cloned->valuedouble;

    // clonehistory_list_element->dt_clonehistory_firsthit
    cJSON *dt_clonehistory_firsthit = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "dtClonehistoryFirsthit");
    if (cJSON_IsNull(dt_clonehistory_firsthit)) {
        dt_clonehistory_firsthit = NULL;
    }
    if (!dt_clonehistory_firsthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_clonehistory_firsthit))
    {
    goto end; //String
    }

    // clonehistory_list_element->dt_clonehistory_lasthit
    cJSON *dt_clonehistory_lasthit = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "dtClonehistoryLasthit");
    if (cJSON_IsNull(dt_clonehistory_lasthit)) {
        dt_clonehistory_lasthit = NULL;
    }
    if (dt_clonehistory_lasthit) { 
    if(!cJSON_IsString(dt_clonehistory_lasthit) && !cJSON_IsNull(dt_clonehistory_lasthit))
    {
    goto end; //String
    }
    }

    // clonehistory_list_element->s_user_loginname_cloning
    cJSON *s_user_loginname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLoginnameCloning");
    if (cJSON_IsNull(s_user_loginname_cloning)) {
        s_user_loginname_cloning = NULL;
    }
    if (!s_user_loginname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_firstname_cloning
    cJSON *s_user_firstname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserFirstnameCloning");
    if (cJSON_IsNull(s_user_firstname_cloning)) {
        s_user_firstname_cloning = NULL;
    }
    if (!s_user_firstname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_lastname_cloning
    cJSON *s_user_lastname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLastnameCloning");
    if (cJSON_IsNull(s_user_lastname_cloning)) {
        s_user_lastname_cloning = NULL;
    }
    if (!s_user_lastname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_loginname_cloned
    cJSON *s_user_loginname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLoginnameCloned");
    if (cJSON_IsNull(s_user_loginname_cloned)) {
        s_user_loginname_cloned = NULL;
    }
    if (!s_user_loginname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname_cloned))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_firstname_cloned
    cJSON *s_user_firstname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserFirstnameCloned");
    if (cJSON_IsNull(s_user_firstname_cloned)) {
        s_user_firstname_cloned = NULL;
    }
    if (!s_user_firstname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname_cloned))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_lastname_cloned
    cJSON *s_user_lastname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLastnameCloned");
    if (cJSON_IsNull(s_user_lastname_cloned)) {
        s_user_lastname_cloned = NULL;
    }
    if (!s_user_lastname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname_cloned))
    {
    goto end; //String
    }


    if (dt_clonehistory_firsthit && !cJSON_IsNull(dt_clonehistory_firsthit)) dt_clonehistory_firsthit_local_str = strdup(dt_clonehistory_firsthit->valuestring);
    if (dt_clonehistory_lasthit && !cJSON_IsNull(dt_clonehistory_lasthit)) dt_clonehistory_lasthit_local_str = strdup(dt_clonehistory_lasthit->valuestring);
    if (s_user_loginname_cloning && !cJSON_IsNull(s_user_loginname_cloning)) s_user_loginname_cloning_local_str = strdup(s_user_loginname_cloning->valuestring);
    if (s_user_firstname_cloning && !cJSON_IsNull(s_user_firstname_cloning)) s_user_firstname_cloning_local_str = strdup(s_user_firstname_cloning->valuestring);
    if (s_user_lastname_cloning && !cJSON_IsNull(s_user_lastname_cloning)) s_user_lastname_cloning_local_str = strdup(s_user_lastname_cloning->valuestring);
    if (s_user_loginname_cloned && !cJSON_IsNull(s_user_loginname_cloned)) s_user_loginname_cloned_local_str = strdup(s_user_loginname_cloned->valuestring);
    if (s_user_firstname_cloned && !cJSON_IsNull(s_user_firstname_cloned)) s_user_firstname_cloned_local_str = strdup(s_user_firstname_cloned->valuestring);
    if (s_user_lastname_cloned && !cJSON_IsNull(s_user_lastname_cloned)) s_user_lastname_cloned_local_str = strdup(s_user_lastname_cloned->valuestring);

    clonehistory_list_element_local_var = clonehistory_list_element_create_internal (
        pki_clonehistory_id_local_var,
        fki_user_id_cloning_local_var,
        fki_user_id_cloned_local_var,
        dt_clonehistory_firsthit_local_str,
        dt_clonehistory_lasthit_local_str,
        s_user_loginname_cloning_local_str,
        s_user_firstname_cloning_local_str,
        s_user_lastname_cloning_local_str,
        s_user_loginname_cloned_local_str,
        s_user_firstname_cloned_local_str,
        s_user_lastname_cloned_local_str
        );

    if (!clonehistory_list_element_local_var) {
        goto end;
    }

    return clonehistory_list_element_local_var;
end:
    if (pki_clonehistory_id_local_var) {
        free(pki_clonehistory_id_local_var);
        pki_clonehistory_id_local_var = NULL;
    }
    if (fki_user_id_cloning_local_var) {
        free(fki_user_id_cloning_local_var);
        fki_user_id_cloning_local_var = NULL;
    }
    if (fki_user_id_cloned_local_var) {
        free(fki_user_id_cloned_local_var);
        fki_user_id_cloned_local_var = NULL;
    }
    if (dt_clonehistory_firsthit_local_str) {
        free(dt_clonehistory_firsthit_local_str);
        dt_clonehistory_firsthit_local_str = NULL;
    }
    if (dt_clonehistory_lasthit_local_str) {
        free(dt_clonehistory_lasthit_local_str);
        dt_clonehistory_lasthit_local_str = NULL;
    }
    if (s_user_loginname_cloning_local_str) {
        free(s_user_loginname_cloning_local_str);
        s_user_loginname_cloning_local_str = NULL;
    }
    if (s_user_firstname_cloning_local_str) {
        free(s_user_firstname_cloning_local_str);
        s_user_firstname_cloning_local_str = NULL;
    }
    if (s_user_lastname_cloning_local_str) {
        free(s_user_lastname_cloning_local_str);
        s_user_lastname_cloning_local_str = NULL;
    }
    if (s_user_loginname_cloned_local_str) {
        free(s_user_loginname_cloned_local_str);
        s_user_loginname_cloned_local_str = NULL;
    }
    if (s_user_firstname_cloned_local_str) {
        free(s_user_firstname_cloned_local_str);
        s_user_firstname_cloned_local_str = NULL;
    }
    if (s_user_lastname_cloned_local_str) {
        free(s_user_lastname_cloned_local_str);
        s_user_lastname_cloned_local_str = NULL;
    }
    return NULL;

}
