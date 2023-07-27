#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_request.h"



ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_create(
    int pki_ezsignsignergroupmembership_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_usergroup_id
    ) {
    ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_local_var = malloc(sizeof(ezsignsignergroupmembership_request_t));
    if (!ezsignsignergroupmembership_request_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_request_local_var->pki_ezsignsignergroupmembership_id = pki_ezsignsignergroupmembership_id;
    ezsignsignergroupmembership_request_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignsignergroupmembership_request_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsignsignergroupmembership_request_local_var->fki_user_id = fki_user_id;
    ezsignsignergroupmembership_request_local_var->fki_usergroup_id = fki_usergroup_id;

    return ezsignsignergroupmembership_request_local_var;
}


void ezsignsignergroupmembership_request_free(ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request) {
    if(NULL == ezsignsignergroupmembership_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignsignergroupmembership_request);
}

cJSON *ezsignsignergroupmembership_request_convertToJSON(ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id
    if(ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupmembershipID", ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_request->fki_ezsignsignergroup_id
    if (!ezsignsignergroupmembership_request->fki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", ezsignsignergroupmembership_request->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_request->fki_ezsignsigner_id
    if (!ezsignsignergroupmembership_request->fki_ezsignsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", ezsignsignergroupmembership_request->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_request->fki_user_id
    if (!ezsignsignergroupmembership_request->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignsignergroupmembership_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_request->fki_usergroup_id
    if (!ezsignsignergroupmembership_request->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsignsignergroupmembership_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_parseFromJSON(cJSON *ezsignsignergroupmembership_requestJSON){

    ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_local_var = NULL;

    // ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id
    cJSON *pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "pkiEzsignsignergroupmembershipID");
    if (pki_ezsignsignergroupmembership_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignergroupmembership_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignergroupmembership_request->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiEzsignsignergroupID");
    if (!fki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroupmembership_request->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiEzsignsignerID");
    if (!fki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroupmembership_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroupmembership_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }


    ezsignsignergroupmembership_request_local_var = ezsignsignergroupmembership_request_create (
        pki_ezsignsignergroupmembership_id ? pki_ezsignsignergroupmembership_id->valuedouble : 0,
        fki_ezsignsignergroup_id->valuedouble,
        fki_ezsignsigner_id->valuedouble,
        fki_user_id->valuedouble,
        fki_usergroup_id->valuedouble
        );

    return ezsignsignergroupmembership_request_local_var;
end:
    return NULL;

}
