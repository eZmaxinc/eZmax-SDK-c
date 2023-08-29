#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_request_compound.h"



usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id
    ) {
    usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_local_var = malloc(sizeof(usergroupdelegation_request_compound_t));
    if (!usergroupdelegation_request_compound_local_var) {
        return NULL;
    }
    usergroupdelegation_request_compound_local_var->pki_usergroupdelegation_id = pki_usergroupdelegation_id;
    usergroupdelegation_request_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupdelegation_request_compound_local_var->fki_user_id = fki_user_id;

    return usergroupdelegation_request_compound_local_var;
}


void usergroupdelegation_request_compound_free(usergroupdelegation_request_compound_t *usergroupdelegation_request_compound) {
    if(NULL == usergroupdelegation_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(usergroupdelegation_request_compound);
}

cJSON *usergroupdelegation_request_compound_convertToJSON(usergroupdelegation_request_compound_t *usergroupdelegation_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_request_compound->pki_usergroupdelegation_id
    if(usergroupdelegation_request_compound->pki_usergroupdelegation_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupdelegationID", usergroupdelegation_request_compound->pki_usergroupdelegation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupdelegation_request_compound->fki_usergroup_id
    if (!usergroupdelegation_request_compound->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", usergroupdelegation_request_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupdelegation_request_compound->fki_user_id
    if (!usergroupdelegation_request_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupdelegation_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_parseFromJSON(cJSON *usergroupdelegation_request_compoundJSON){

    usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_local_var = NULL;

    // usergroupdelegation_request_compound->pki_usergroupdelegation_id
    cJSON *pki_usergroupdelegation_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_request_compoundJSON, "pkiUsergroupdelegationID");
    if (pki_usergroupdelegation_id) { 
    if(!cJSON_IsNumber(pki_usergroupdelegation_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupdelegation_request_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_request_compoundJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroupdelegation_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_request_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }


    usergroupdelegation_request_compound_local_var = usergroupdelegation_request_compound_create (
        pki_usergroupdelegation_id ? pki_usergroupdelegation_id->valuedouble : 0,
        fki_usergroup_id->valuedouble,
        fki_user_id->valuedouble
        );

    return usergroupdelegation_request_compound_local_var;
end:
    return NULL;

}
