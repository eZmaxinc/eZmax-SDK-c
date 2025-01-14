#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request.h"



ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_ezsigntemplatepublic_referenceid
    ) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var = malloc(sizeof(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t));
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var->pks_ezmaxcustomer_code = pks_ezmaxcustomer_code;
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var->s_ezsigntemplatepublic_referenceid = s_ezsigntemplatepublic_referenceid;

    return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var;
}


void ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request) {
    if(NULL == ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code) {
        free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code);
        ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code = NULL;
    }
    if (ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid) {
        free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid);
        ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid = NULL;
    }
    free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);
}

cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksEzmaxcustomerCode", ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid
    if (!ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicReferenceid", ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_requestJSON){

    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var = NULL;

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->pks_ezmaxcustomer_code
    cJSON *pks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_requestJSON, "pksEzmaxcustomerCode");
    if (!pks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_ezmaxcustomer_code))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request->s_ezsigntemplatepublic_referenceid
    cJSON *s_ezsigntemplatepublic_referenceid = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_requestJSON, "sEzsigntemplatepublicReferenceid");
    if (!s_ezsigntemplatepublic_referenceid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_referenceid))
    {
    goto end; //String
    }


    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_create (
        strdup(pks_ezmaxcustomer_code->valuestring),
        strdup(s_ezsigntemplatepublic_referenceid->valuestring)
        );

    return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_local_var;
end:
    return NULL;

}
