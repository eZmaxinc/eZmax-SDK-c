#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_request.h"



usergroupmembership_request_t *usergroupmembership_request_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    int fki_usergroupexternal_id
    ) {
    usergroupmembership_request_t *usergroupmembership_request_local_var = malloc(sizeof(usergroupmembership_request_t));
    if (!usergroupmembership_request_local_var) {
        return NULL;
    }
    usergroupmembership_request_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_request_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_request_local_var->fki_user_id = fki_user_id;
    usergroupmembership_request_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;

    return usergroupmembership_request_local_var;
}


void usergroupmembership_request_free(usergroupmembership_request_t *usergroupmembership_request) {
    if(NULL == usergroupmembership_request){
        return ;
    }
    listEntry_t *listEntry;
    free(usergroupmembership_request);
}

cJSON *usergroupmembership_request_convertToJSON(usergroupmembership_request_t *usergroupmembership_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_request->pki_usergroupmembership_id
    if(usergroupmembership_request->pki_usergroupmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupmembershipID", usergroupmembership_request->pki_usergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_request->fki_usergroup_id
    if (!usergroupmembership_request->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", usergroupmembership_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_request->fki_user_id
    if(usergroupmembership_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupmembership_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_request->fki_usergroupexternal_id
    if(usergroupmembership_request->fki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", usergroupmembership_request->fki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupmembership_request_t *usergroupmembership_request_parseFromJSON(cJSON *usergroupmembership_requestJSON){

    usergroupmembership_request_t *usergroupmembership_request_local_var = NULL;

    // usergroupmembership_request->pki_usergroupmembership_id
    cJSON *pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_requestJSON, "pkiUsergroupmembershipID");
    if (pki_usergroupmembership_id) { 
    if(!cJSON_IsNumber(pki_usergroupmembership_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupmembership_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_requestJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupmembership_request->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_requestJSON, "fkiUsergroupexternalID");
    if (fki_usergroupexternal_id) { 
    if(!cJSON_IsNumber(fki_usergroupexternal_id))
    {
    goto end; //Numeric
    }
    }


    usergroupmembership_request_local_var = usergroupmembership_request_create (
        pki_usergroupmembership_id ? pki_usergroupmembership_id->valuedouble : 0,
        fki_usergroup_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroupexternal_id ? fki_usergroupexternal_id->valuedouble : 0
        );

    return usergroupmembership_request_local_var;
end:
    return NULL;

}
