#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_response.h"



ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
    ) {
    ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_local_var = malloc(sizeof(ezsigntemplatesigner_response_t));
    if (!ezsigntemplatesigner_response_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_response_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_response_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_response_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;

    return ezsigntemplatesigner_response_local_var;
}


void ezsigntemplatesigner_response_free(ezsigntemplatesigner_response_t *ezsigntemplatesigner_response) {
    if(NULL == ezsigntemplatesigner_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_response->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_response->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_response->s_ezsigntemplatesigner_description = NULL;
    }
    free(ezsigntemplatesigner_response);
}

cJSON *ezsigntemplatesigner_response_convertToJSON(ezsigntemplatesigner_response_t *ezsigntemplatesigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_response->pki_ezsigntemplatesigner_id
    if (!ezsigntemplatesigner_response->pki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", ezsigntemplatesigner_response->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_response->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatesigner_response->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_response->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_response->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_parseFromJSON(cJSON *ezsigntemplatesigner_responseJSON){

    ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_local_var = NULL;

    // ezsigntemplatesigner_response->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_responseJSON, "pkiEzsigntemplatesignerID");
    if (!pki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_response->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_responseJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_response->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_responseJSON, "sEzsigntemplatesignerDescription");
    if (!s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatesigner_response_local_var = ezsigntemplatesigner_response_create (
        pki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatesigner_description->valuestring)
        );

    return ezsigntemplatesigner_response_local_var;
end:
    return NULL;

}
