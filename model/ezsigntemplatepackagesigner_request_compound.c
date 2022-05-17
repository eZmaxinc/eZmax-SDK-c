#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_request_compound.h"



ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_local_var = malloc(sizeof(ezsigntemplatepackagesigner_request_compound_t));
    if (!ezsigntemplatepackagesigner_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_request_compound_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_request_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_request_compound_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return ezsigntemplatepackagesigner_request_compound_local_var;
}


void ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound) {
    if(NULL == ezsigntemplatepackagesigner_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_request_compound);
}

cJSON *ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id
    if(ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_compoundJSON){

    ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_local_var = NULL;

    // ezsigntemplatepackagesigner_request_compound->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "pkiEzsigntemplatepackagesignerID");
    if (pki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_request_compound->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_request_compoundJSON, "sEzsigntemplatepackagesignerDescription");
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_request_compound_local_var = ezsigntemplatepackagesigner_request_compound_create (
        pki_ezsigntemplatepackagesigner_id ? pki_ezsigntemplatepackagesigner_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id->valuedouble,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_request_compound_local_var;
end:
    return NULL;

}
