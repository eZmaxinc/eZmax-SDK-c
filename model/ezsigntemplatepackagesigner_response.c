#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_response.h"



ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_local_var = malloc(sizeof(ezsigntemplatepackagesigner_response_t));
    if (!ezsigntemplatepackagesigner_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_response_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_response_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_response_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return ezsigntemplatepackagesigner_response_local_var;
}


void ezsigntemplatepackagesigner_response_free(ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response) {
    if(NULL == ezsigntemplatepackagesigner_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_response);
}

cJSON *ezsigntemplatepackagesigner_response_convertToJSON(ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_response->pki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesigner_response->pki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesigner_response->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_response->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_response->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagesigner_response->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_responseJSON){

    ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_local_var = NULL;

    // ezsigntemplatepackagesigner_response->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_responseJSON, "pkiEzsigntemplatepackagesignerID");
    if (!pki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_response->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_responseJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_response->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_responseJSON, "sEzsigntemplatepackagesignerDescription");
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_response_local_var = ezsigntemplatepackagesigner_response_create (
        pki_ezsigntemplatepackagesigner_id->valuedouble,
        fki_ezsigntemplatepackage_id->valuedouble,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_response_local_var;
end:
    return NULL;

}
