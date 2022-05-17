#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_request_compound.h"



ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
    ) {
    ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_local_var = malloc(sizeof(ezsigntemplatesigner_request_compound_t));
    if (!ezsigntemplatesigner_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_request_compound_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_request_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_request_compound_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;

    return ezsigntemplatesigner_request_compound_local_var;
}


void ezsigntemplatesigner_request_compound_free(ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound) {
    if(NULL == ezsigntemplatesigner_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description = NULL;
    }
    free(ezsigntemplatesigner_request_compound);
}

cJSON *ezsigntemplatesigner_request_compound_convertToJSON(ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_request_compound->pki_ezsigntemplatesigner_id
    if(ezsigntemplatesigner_request_compound->pki_ezsigntemplatesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", ezsigntemplatesigner_request_compound->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_request_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_request_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatesigner_request_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatesigner_request_compoundJSON){

    ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_local_var = NULL;

    // ezsigntemplatesigner_request_compound->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_request_compoundJSON, "pkiEzsigntemplatesignerID");
    if (pki_ezsigntemplatesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesigner_request_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_request_compoundJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_request_compound->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_request_compoundJSON, "sEzsigntemplatesignerDescription");
    if (!s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatesigner_request_compound_local_var = ezsigntemplatesigner_request_compound_create (
        pki_ezsigntemplatesigner_id ? pki_ezsigntemplatesigner_id->valuedouble : 0,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatesigner_description->valuestring)
        );

    return ezsigntemplatesigner_request_compound_local_var;
end:
    return NULL;

}
