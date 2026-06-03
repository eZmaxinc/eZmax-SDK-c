#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_matchingtemplate_v3_response.h"



static ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_create_internal(
    int *pki_ezsigntemplate_id,
    int *pki_ezsigntemplateglobal_id
    ) {
    ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_local_var = malloc(sizeof(ezsigndocument_matchingtemplate_v3_response_t));
    if (!ezsigndocument_matchingtemplate_v3_response_local_var) {
        return NULL;
    }
    memset(ezsigndocument_matchingtemplate_v3_response_local_var, 0, sizeof(ezsigndocument_matchingtemplate_v3_response_t));
    ezsigndocument_matchingtemplate_v3_response_local_var->_library_owned = 1;
    ezsigndocument_matchingtemplate_v3_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigndocument_matchingtemplate_v3_response_local_var->pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    return ezsigndocument_matchingtemplate_v3_response_local_var;
}

__attribute__((deprecated)) ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_create(
    int *pki_ezsigntemplate_id,
    int *pki_ezsigntemplateglobal_id
    ) {
    int *pki_ezsigntemplate_id_copy = NULL;
    if (pki_ezsigntemplate_id) {
        pki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplate_id_copy) *pki_ezsigntemplate_id_copy = *pki_ezsigntemplate_id;
    }
    int *pki_ezsigntemplateglobal_id_copy = NULL;
    if (pki_ezsigntemplateglobal_id) {
        pki_ezsigntemplateglobal_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateglobal_id_copy) *pki_ezsigntemplateglobal_id_copy = *pki_ezsigntemplateglobal_id;
    }
    ezsigndocument_matchingtemplate_v3_response_t *result = ezsigndocument_matchingtemplate_v3_response_create_internal (
        pki_ezsigntemplate_id_copy,
        pki_ezsigntemplateglobal_id_copy
        );
    if (!result) {
        free(pki_ezsigntemplate_id_copy);
        free(pki_ezsigntemplateglobal_id_copy);
    }
    return result;
}

void ezsigndocument_matchingtemplate_v3_response_free(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response) {
    if(NULL == ezsigndocument_matchingtemplate_v3_response){
        return ;
    }
    if(ezsigndocument_matchingtemplate_v3_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_matchingtemplate_v3_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id) {
        free(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id);
        ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id = NULL;
    }
    if (ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id) {
        free(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id);
        ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id = NULL;
    }
    free(ezsigndocument_matchingtemplate_v3_response);
}

cJSON *ezsigndocument_matchingtemplate_v3_response_convertToJSON(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id
    if(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", *ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id
    if(ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", *ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id) == NULL) {
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

    // define the local variable for ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id
    int *pki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id
    int *pki_ezsigntemplateglobal_id_local_var = NULL;

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_matchingtemplate_v3_responseJSON, "pkiEzsigntemplateID");
    if (cJSON_IsNull(pki_ezsigntemplate_id)) {
        pki_ezsigntemplate_id = NULL;
    }
    if (pki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplate_id_local_var = pki_ezsigntemplate_id->valuedouble;
    }

    // ezsigndocument_matchingtemplate_v3_response->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_matchingtemplate_v3_responseJSON, "pkiEzsigntemplateglobalID");
    if (cJSON_IsNull(pki_ezsigntemplateglobal_id)) {
        pki_ezsigntemplateglobal_id = NULL;
    }
    if (pki_ezsigntemplateglobal_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateglobal_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateglobal_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateglobal_id_local_var = pki_ezsigntemplateglobal_id->valuedouble;
    }



    ezsigndocument_matchingtemplate_v3_response_local_var = ezsigndocument_matchingtemplate_v3_response_create_internal (
        pki_ezsigntemplate_id_local_var,
        pki_ezsigntemplateglobal_id_local_var
        );

    if (!ezsigndocument_matchingtemplate_v3_response_local_var) {
        goto end;
    }

    return ezsigndocument_matchingtemplate_v3_response_local_var;
end:
    if (pki_ezsigntemplate_id_local_var) {
        free(pki_ezsigntemplate_id_local_var);
        pki_ezsigntemplate_id_local_var = NULL;
    }
    if (pki_ezsigntemplateglobal_id_local_var) {
        free(pki_ezsigntemplateglobal_id_local_var);
        pki_ezsigntemplateglobal_id_local_var = NULL;
    }
    return NULL;

}
