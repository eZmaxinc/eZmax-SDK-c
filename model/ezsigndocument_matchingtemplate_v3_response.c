#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_matchingtemplate_v3_response.h"



ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_create(
    int pki_ezsigntemplate_id,
    int pki_ezsigntemplateglobal_id
    ) {
    ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_local_var = malloc(sizeof(ezsigndocument_matchingtemplate_v3_response_t));
    if (!ezsigndocument_matchingtemplate_v3_response_local_var) {
        return NULL;
    }
    ezsigndocument_matchingtemplate_v3_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigndocument_matchingtemplate_v3_response_local_var->pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;

    return ezsigndocument_matchingtemplate_v3_response_local_var;
}


void ezsigndocument_matchingtemplate_v3_response_free(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response) {
    if(NULL == ezsigndocument_matchingtemplate_v3_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigndocument_matchingtemplate_v3_response);
}

cJSON *ezsigndocument_matchingtemplate_v3_response_convertToJSON(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id
    if(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id
    if(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id) == NULL) {
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

ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_parseFromJSON(cJSON *ezsigndocument_matchingtemplate_v3_responseJSON){

    ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_local_var = NULL;

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_matchingtemplate_v3_responseJSON, "pkiEzsigntemplateID");
    if (pki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_matchingtemplate_v3_responseJSON, "pkiEzsigntemplateglobalID");
    if (pki_ezsigntemplateglobal_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    }


    ezsigndocument_matchingtemplate_v3_response_local_var = ezsigndocument_matchingtemplate_v3_response_create (
        pki_ezsigntemplate_id ? pki_ezsigntemplate_id->valuedouble : 0,
        pki_ezsigntemplateglobal_id ? pki_ezsigntemplateglobal_id->valuedouble : 0
        );

    return ezsigndocument_matchingtemplate_v3_response_local_var;
end:
    return NULL;

}
