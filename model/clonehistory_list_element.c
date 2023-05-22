#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "clonehistory_list_element.h"



clonehistory_list_element_t *clonehistory_list_element_create(
    int pki_clonehistory_id,
    int fki_user_id_cloning,
    int fki_user_id_cloned,
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


void clonehistory_list_element_free(clonehistory_list_element_t *clonehistory_list_element) {
    if(NULL == clonehistory_list_element){
        return ;
    }
    listEntry_t *listEntry;
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
    if(cJSON_AddNumberToObject(item, "pkiClonehistoryID", clonehistory_list_element->pki_clonehistory_id) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_list_element->fki_user_id_cloning
    if (!clonehistory_list_element->fki_user_id_cloning) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDCloning", clonehistory_list_element->fki_user_id_cloning) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_list_element->fki_user_id_cloned
    if (!clonehistory_list_element->fki_user_id_cloned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDCloned", clonehistory_list_element->fki_user_id_cloned) == NULL) {
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

    // clonehistory_list_element->pki_clonehistory_id
    cJSON *pki_clonehistory_id = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "pkiClonehistoryID");
    if (!pki_clonehistory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_clonehistory_id))
    {
    goto end; //Numeric
    }

    // clonehistory_list_element->fki_user_id_cloning
    cJSON *fki_user_id_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "fkiUserIDCloning");
    if (!fki_user_id_cloning) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_cloning))
    {
    goto end; //Numeric
    }

    // clonehistory_list_element->fki_user_id_cloned
    cJSON *fki_user_id_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "fkiUserIDCloned");
    if (!fki_user_id_cloned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_cloned))
    {
    goto end; //Numeric
    }

    // clonehistory_list_element->dt_clonehistory_firsthit
    cJSON *dt_clonehistory_firsthit = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "dtClonehistoryFirsthit");
    if (!dt_clonehistory_firsthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_clonehistory_firsthit))
    {
    goto end; //String
    }

    // clonehistory_list_element->dt_clonehistory_lasthit
    cJSON *dt_clonehistory_lasthit = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "dtClonehistoryLasthit");
    if (dt_clonehistory_lasthit) { 
    if(!cJSON_IsString(dt_clonehistory_lasthit) && !cJSON_IsNull(dt_clonehistory_lasthit))
    {
    goto end; //String
    }
    }

    // clonehistory_list_element->s_user_loginname_cloning
    cJSON *s_user_loginname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLoginnameCloning");
    if (!s_user_loginname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_firstname_cloning
    cJSON *s_user_firstname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserFirstnameCloning");
    if (!s_user_firstname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_lastname_cloning
    cJSON *s_user_lastname_cloning = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLastnameCloning");
    if (!s_user_lastname_cloning) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname_cloning))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_loginname_cloned
    cJSON *s_user_loginname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLoginnameCloned");
    if (!s_user_loginname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname_cloned))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_firstname_cloned
    cJSON *s_user_firstname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserFirstnameCloned");
    if (!s_user_firstname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname_cloned))
    {
    goto end; //String
    }

    // clonehistory_list_element->s_user_lastname_cloned
    cJSON *s_user_lastname_cloned = cJSON_GetObjectItemCaseSensitive(clonehistory_list_elementJSON, "sUserLastnameCloned");
    if (!s_user_lastname_cloned) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname_cloned))
    {
    goto end; //String
    }


    clonehistory_list_element_local_var = clonehistory_list_element_create (
        pki_clonehistory_id->valuedouble,
        fki_user_id_cloning->valuedouble,
        fki_user_id_cloned->valuedouble,
        strdup(dt_clonehistory_firsthit->valuestring),
        dt_clonehistory_lasthit && !cJSON_IsNull(dt_clonehistory_lasthit) ? strdup(dt_clonehistory_lasthit->valuestring) : NULL,
        strdup(s_user_loginname_cloning->valuestring),
        strdup(s_user_firstname_cloning->valuestring),
        strdup(s_user_lastname_cloning->valuestring),
        strdup(s_user_loginname_cloned->valuestring),
        strdup(s_user_firstname_cloned->valuestring),
        strdup(s_user_lastname_cloned->valuestring)
        );

    return clonehistory_list_element_local_var;
end:
    return NULL;

}
