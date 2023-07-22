#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_response.h"



ezsignsignergroup_response_t *ezsignsignergroup_response_create(
    int pki_ezsignsignergroup_id
    ) {
    ezsignsignergroup_response_t *ezsignsignergroup_response_local_var = malloc(sizeof(ezsignsignergroup_response_t));
    if (!ezsignsignergroup_response_local_var) {
        return NULL;
    }
    ezsignsignergroup_response_local_var->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;

    return ezsignsignergroup_response_local_var;
}


void ezsignsignergroup_response_free(ezsignsignergroup_response_t *ezsignsignergroup_response) {
    if(NULL == ezsignsignergroup_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignsignergroup_response);
}

cJSON *ezsignsignergroup_response_convertToJSON(ezsignsignergroup_response_t *ezsignsignergroup_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_response->pki_ezsignsignergroup_id
    if (!ezsignsignergroup_response->pki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupID", ezsignsignergroup_response->pki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroup_response_t *ezsignsignergroup_response_parseFromJSON(cJSON *ezsignsignergroup_responseJSON){

    ezsignsignergroup_response_t *ezsignsignergroup_response_local_var = NULL;

    // ezsignsignergroup_response->pki_ezsignsignergroup_id
    cJSON *pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_responseJSON, "pkiEzsignsignergroupID");
    if (!pki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }


    ezsignsignergroup_response_local_var = ezsignsignergroup_response_create (
        pki_ezsignsignergroup_id->valuedouble
        );

    return ezsignsignergroup_response_local_var;
end:
    return NULL;

}
