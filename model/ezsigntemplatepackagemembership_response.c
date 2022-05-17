#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_response.h"



ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsigntemplatepackagemembership_order
    ) {
    ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_local_var = malloc(sizeof(ezsigntemplatepackagemembership_response_t));
    if (!ezsigntemplatepackagemembership_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_response_local_var->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagemembership_response_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagemembership_response_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepackagemembership_response_local_var->i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;

    return ezsigntemplatepackagemembership_response_local_var;
}


void ezsigntemplatepackagemembership_response_free(ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response) {
    if(NULL == ezsigntemplatepackagemembership_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagemembership_response);
}

cJSON *ezsigntemplatepackagemembership_response_convertToJSON(ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_response->pki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagemembership_response->pki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagemembership_response->pki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagemembership_response->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagemembership_response->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response->fki_ezsigntemplate_id
    if (!ezsigntemplatepackagemembership_response->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepackagemembership_response->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response->i_ezsigntemplatepackagemembership_order
    if (!ezsigntemplatepackagemembership_response->i_ezsigntemplatepackagemembership_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagemembershipOrder", ezsigntemplatepackagemembership_response->i_ezsigntemplatepackagemembership_order) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_responseJSON){

    ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_local_var = NULL;

    // ezsigntemplatepackagemembership_response->pki_ezsigntemplatepackagemembership_id
    cJSON *pki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_responseJSON, "pkiEzsigntemplatepackagemembershipID");
    if (!pki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_response->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_responseJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_response->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_responseJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_response->i_ezsigntemplatepackagemembership_order
    cJSON *i_ezsigntemplatepackagemembership_order = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_responseJSON, "iEzsigntemplatepackagemembershipOrder");
    if (!i_ezsigntemplatepackagemembership_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepackagemembership_order))
    {
    goto end; //Numeric
    }


    ezsigntemplatepackagemembership_response_local_var = ezsigntemplatepackagemembership_response_create (
        pki_ezsigntemplatepackagemembership_id->valuedouble,
        fki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        i_ezsigntemplatepackagemembership_order->valuedouble
        );

    return ezsigntemplatepackagemembership_response_local_var;
end:
    return NULL;

}
