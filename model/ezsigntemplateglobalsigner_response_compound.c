#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobalsigner_response_compound.h"



ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_create(
    int pki_ezsigntemplateglobalsigner_id,
    int fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobalsigner_description
    ) {
    ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_local_var = malloc(sizeof(ezsigntemplateglobalsigner_response_compound_t));
    if (!ezsigntemplateglobalsigner_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplateglobalsigner_response_compound_local_var->pki_ezsigntemplateglobalsigner_id = pki_ezsigntemplateglobalsigner_id;
    ezsigntemplateglobalsigner_response_compound_local_var->fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    ezsigntemplateglobalsigner_response_compound_local_var->s_ezsigntemplateglobalsigner_description = s_ezsigntemplateglobalsigner_description;

    return ezsigntemplateglobalsigner_response_compound_local_var;
}


void ezsigntemplateglobalsigner_response_compound_free(ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound) {
    if(NULL == ezsigntemplateglobalsigner_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description) {
        free(ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description);
        ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description = NULL;
    }
    free(ezsigntemplateglobalsigner_response_compound);
}

cJSON *ezsigntemplateglobalsigner_response_compound_convertToJSON(ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobalsigner_response_compound->pki_ezsigntemplateglobalsigner_id
    if (!ezsigntemplateglobalsigner_response_compound->pki_ezsigntemplateglobalsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalsignerID", ezsigntemplateglobalsigner_response_compound->pki_ezsigntemplateglobalsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalsigner_response_compound->fki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobalsigner_response_compound->fki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobalID", ezsigntemplateglobalsigner_response_compound->fki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description
    if (!ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalsignerDescription", ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_parseFromJSON(cJSON *ezsigntemplateglobalsigner_response_compoundJSON){

    ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_local_var = NULL;

    // ezsigntemplateglobalsigner_response_compound->pki_ezsigntemplateglobalsigner_id
    cJSON *pki_ezsigntemplateglobalsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_response_compoundJSON, "pkiEzsigntemplateglobalsignerID");
    if (!pki_ezsigntemplateglobalsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobalsigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalsigner_response_compound->fki_ezsigntemplateglobal_id
    cJSON *fki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_response_compoundJSON, "fkiEzsigntemplateglobalID");
    if (!fki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobalsigner_response_compound->s_ezsigntemplateglobalsigner_description
    cJSON *s_ezsigntemplateglobalsigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_response_compoundJSON, "sEzsigntemplateglobalsignerDescription");
    if (!s_ezsigntemplateglobalsigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobalsigner_description))
    {
    goto end; //String
    }


    ezsigntemplateglobalsigner_response_compound_local_var = ezsigntemplateglobalsigner_response_compound_create (
        pki_ezsigntemplateglobalsigner_id->valuedouble,
        fki_ezsigntemplateglobal_id->valuedouble,
        strdup(s_ezsigntemplateglobalsigner_description->valuestring)
        );

    return ezsigntemplateglobalsigner_response_compound_local_var;
end:
    return NULL;

}
