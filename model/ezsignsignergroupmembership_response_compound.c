#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_response_compound.h"



ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_create(
    int pki_ezsignsignergroupmembership_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_usergroup_id
    ) {
    ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_local_var = malloc(sizeof(ezsignsignergroupmembership_response_compound_t));
    if (!ezsignsignergroupmembership_response_compound_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_response_compound_local_var->pki_ezsignsignergroupmembership_id = pki_ezsignsignergroupmembership_id;
    ezsignsignergroupmembership_response_compound_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignsignergroupmembership_response_compound_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsignsignergroupmembership_response_compound_local_var->fki_user_id = fki_user_id;
    ezsignsignergroupmembership_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;

    return ezsignsignergroupmembership_response_compound_local_var;
}


void ezsignsignergroupmembership_response_compound_free(ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound) {
    if(NULL == ezsignsignergroupmembership_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignsignergroupmembership_response_compound);
}

cJSON *ezsignsignergroupmembership_response_compound_convertToJSON(ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_response_compound->pki_ezsignsignergroupmembership_id
    if (!ezsignsignergroupmembership_response_compound->pki_ezsignsignergroupmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupmembershipID", ezsignsignergroupmembership_response_compound->pki_ezsignsignergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_response_compound->fki_ezsignsignergroup_id
    if (!ezsignsignergroupmembership_response_compound->fki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", ezsignsignergroupmembership_response_compound->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_response_compound->fki_ezsignsigner_id
    if(ezsignsignergroupmembership_response_compound->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", ezsignsignergroupmembership_response_compound->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_response_compound->fki_user_id
    if(ezsignsignergroupmembership_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignsignergroupmembership_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_response_compound->fki_usergroup_id
    if(ezsignsignergroupmembership_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsignsignergroupmembership_response_compound->fki_usergroup_id) == NULL) {
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

ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_parseFromJSON(cJSON *ezsignsignergroupmembership_response_compoundJSON){

    ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_local_var = NULL;

    // ezsignsignergroupmembership_response_compound->pki_ezsignsignergroupmembership_id
    cJSON *pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_response_compoundJSON, "pkiEzsignsignergroupmembershipID");
    if (!pki_ezsignsignergroupmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroupmembership_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroupmembership_response_compound->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_response_compoundJSON, "fkiEzsignsignergroupID");
    if (!fki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroupmembership_response_compound->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_response_compoundJSON, "fkiEzsignsignerID");
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignergroupmembership_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignergroupmembership_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_response_compoundJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }


    ezsignsignergroupmembership_response_compound_local_var = ezsignsignergroupmembership_response_compound_create (
        pki_ezsignsignergroupmembership_id->valuedouble,
        fki_ezsignsignergroup_id->valuedouble,
        fki_ezsignsigner_id ? fki_ezsignsigner_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0
        );

    return ezsignsignergroupmembership_response_compound_local_var;
end:
    return NULL;

}
