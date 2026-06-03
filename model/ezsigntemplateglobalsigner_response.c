#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobalsigner_response.h"



static ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_create_internal(
    int *pki_ezsigntemplateglobalsigner_id,
    int *fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobalsigner_description
    ) {
    ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_local_var = malloc(sizeof(ezsigntemplateglobalsigner_response_t));
    if (!ezsigntemplateglobalsigner_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplateglobalsigner_response_local_var, 0, sizeof(ezsigntemplateglobalsigner_response_t));
    ezsigntemplateglobalsigner_response_local_var->_library_owned = 1;
    ezsigntemplateglobalsigner_response_local_var->pki_ezsigntemplateglobalsigner_id = pki_ezsigntemplateglobalsigner_id;
    ezsigntemplateglobalsigner_response_local_var->fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    ezsigntemplateglobalsigner_response_local_var->s_ezsigntemplateglobalsigner_description = s_ezsigntemplateglobalsigner_description;
    return ezsigntemplateglobalsigner_response_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_create(
    int *pki_ezsigntemplateglobalsigner_id,
    int *fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobalsigner_description
    ) {
    int *pki_ezsigntemplateglobalsigner_id_copy = NULL;
    if (pki_ezsigntemplateglobalsigner_id) {
        pki_ezsigntemplateglobalsigner_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateglobalsigner_id_copy) *pki_ezsigntemplateglobalsigner_id_copy = *pki_ezsigntemplateglobalsigner_id;
    }
    int *fki_ezsigntemplateglobal_id_copy = NULL;
    if (fki_ezsigntemplateglobal_id) {
        fki_ezsigntemplateglobal_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateglobal_id_copy) *fki_ezsigntemplateglobal_id_copy = *fki_ezsigntemplateglobal_id;
    }
    ezsigntemplateglobalsigner_response_t *result = ezsigntemplateglobalsigner_response_create_internal (
        pki_ezsigntemplateglobalsigner_id_copy,
        fki_ezsigntemplateglobal_id_copy,
        s_ezsigntemplateglobalsigner_description
        );
    if (!result) {
        free(pki_ezsigntemplateglobalsigner_id_copy);
        free(fki_ezsigntemplateglobal_id_copy);
    }
    return result;
}

void ezsigntemplateglobalsigner_response_free(ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response) {
    if(NULL == ezsigntemplateglobalsigner_response){
        return ;
    }
    if(ezsigntemplateglobalsigner_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobalsigner_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id) {
        free(ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id);
        ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id = NULL;
    }
    if (ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id) {
        free(ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id);
        ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id = NULL;
    }
    if (ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description) {
        free(ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description);
        ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description = NULL;
    }
    free(ezsigntemplateglobalsigner_response);
}

cJSON *ezsigntemplateglobalsigner_response_convertToJSON(ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id
    if (!ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalsignerID", *ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobalID", *ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description
    if (!ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalsignerDescription", ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_parseFromJSON(cJSON *ezsigntemplateglobalsigner_responseJSON){

    ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_local_var = NULL;

    // define the local variable for ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id
    int *pki_ezsigntemplateglobalsigner_id_local_var = NULL;

    // define the local variable for ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id
    int *fki_ezsigntemplateglobal_id_local_var = NULL;

    char *s_ezsigntemplateglobalsigner_description_local_str = NULL;

    // ezsigntemplateglobalsigner_response->pki_ezsigntemplateglobalsigner_id
    cJSON *pki_ezsigntemplateglobalsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_responseJSON, "pkiEzsigntemplateglobalsignerID");
    if (cJSON_IsNull(pki_ezsigntemplateglobalsigner_id)) {
        pki_ezsigntemplateglobalsigner_id = NULL;
    }
    if (!pki_ezsigntemplateglobalsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobalsigner_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateglobalsigner_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateglobalsigner_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateglobalsigner_id_local_var = pki_ezsigntemplateglobalsigner_id->valuedouble;

    // ezsigntemplateglobalsigner_response->fki_ezsigntemplateglobal_id
    cJSON *fki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_responseJSON, "fkiEzsigntemplateglobalID");
    if (cJSON_IsNull(fki_ezsigntemplateglobal_id)) {
        fki_ezsigntemplateglobal_id = NULL;
    }
    if (!fki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateglobal_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateglobal_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateglobal_id_local_var = fki_ezsigntemplateglobal_id->valuedouble;

    // ezsigntemplateglobalsigner_response->s_ezsigntemplateglobalsigner_description
    cJSON *s_ezsigntemplateglobalsigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalsigner_responseJSON, "sEzsigntemplateglobalsignerDescription");
    if (cJSON_IsNull(s_ezsigntemplateglobalsigner_description)) {
        s_ezsigntemplateglobalsigner_description = NULL;
    }
    if (!s_ezsigntemplateglobalsigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobalsigner_description))
    {
    goto end; //String
    }


    if (s_ezsigntemplateglobalsigner_description && !cJSON_IsNull(s_ezsigntemplateglobalsigner_description)) s_ezsigntemplateglobalsigner_description_local_str = strdup(s_ezsigntemplateglobalsigner_description->valuestring);

    ezsigntemplateglobalsigner_response_local_var = ezsigntemplateglobalsigner_response_create_internal (
        pki_ezsigntemplateglobalsigner_id_local_var,
        fki_ezsigntemplateglobal_id_local_var,
        s_ezsigntemplateglobalsigner_description_local_str
        );

    if (!ezsigntemplateglobalsigner_response_local_var) {
        goto end;
    }

    return ezsigntemplateglobalsigner_response_local_var;
end:
    if (pki_ezsigntemplateglobalsigner_id_local_var) {
        free(pki_ezsigntemplateglobalsigner_id_local_var);
        pki_ezsigntemplateglobalsigner_id_local_var = NULL;
    }
    if (fki_ezsigntemplateglobal_id_local_var) {
        free(fki_ezsigntemplateglobal_id_local_var);
        fki_ezsigntemplateglobal_id_local_var = NULL;
    }
    if (s_ezsigntemplateglobalsigner_description_local_str) {
        free(s_ezsigntemplateglobalsigner_description_local_str);
        s_ezsigntemplateglobalsigner_description_local_str = NULL;
    }
    return NULL;

}
