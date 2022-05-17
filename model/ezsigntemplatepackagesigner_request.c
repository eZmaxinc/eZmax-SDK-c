#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_request.h"



ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_local_var = malloc(sizeof(ezsigntemplatepackagesigner_request_t));
    if (!ezsigntemplatepackagesigner_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_request_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_request_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return ezsigntemplatepackagesigner_request_local_var;
}


void ezsigntemplatepackagesigner_request_free(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request) {
    if(NULL == ezsigntemplatepackagesigner_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_request);
}

cJSON *ezsigntemplatepackagesigner_request_convertToJSON(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id
    if(ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_requestJSON){

    ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_local_var = NULL;

    // ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "pkiEzsigntemplatepackagesignerID");
    if (pki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "sEzsigntemplatepackagesignerDescription");
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_request_local_var = ezsigntemplatepackagesigner_request_create (
        pki_ezsigntemplatepackagesigner_id ? pki_ezsigntemplatepackagesigner_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id->valuedouble,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_request_local_var;
end:
    return NULL;

}
