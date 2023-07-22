#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_response_compound.h"



ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_create(
    int pki_ezsignsignergroup_id
    ) {
    ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_local_var = malloc(sizeof(ezsignsignergroup_response_compound_t));
    if (!ezsignsignergroup_response_compound_local_var) {
        return NULL;
    }
    ezsignsignergroup_response_compound_local_var->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;

    return ezsignsignergroup_response_compound_local_var;
}


void ezsignsignergroup_response_compound_free(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound) {
    if(NULL == ezsignsignergroup_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignsignergroup_response_compound);
}

cJSON *ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_response_compound->pki_ezsignsignergroup_id
    if (!ezsignsignergroup_response_compound->pki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupID", ezsignsignergroup_response_compound->pki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_parseFromJSON(cJSON *ezsignsignergroup_response_compoundJSON){

    ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_local_var = NULL;

    // ezsignsignergroup_response_compound->pki_ezsignsignergroup_id
    cJSON *pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_response_compoundJSON, "pkiEzsignsignergroupID");
    if (!pki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }


    ezsignsignergroup_response_compound_local_var = ezsignsignergroup_response_compound_create (
        pki_ezsignsignergroup_id->valuedouble
        );

    return ezsignsignergroup_response_compound_local_var;
end:
    return NULL;

}
