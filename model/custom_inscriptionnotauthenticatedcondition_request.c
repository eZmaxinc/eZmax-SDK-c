#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_inscriptionnotauthenticatedcondition_request.h"



static custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_create_internal(
    int *pki_inscriptionnotauthenticatedcondition_id,
    char *dt_inscriptionnotauthenticatedcondition_completed
    ) {
    custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_local_var = malloc(sizeof(custom_inscriptionnotauthenticatedcondition_request_t));
    if (!custom_inscriptionnotauthenticatedcondition_request_local_var) {
        return NULL;
    }
    memset(custom_inscriptionnotauthenticatedcondition_request_local_var, 0, sizeof(custom_inscriptionnotauthenticatedcondition_request_t));
    custom_inscriptionnotauthenticatedcondition_request_local_var->_library_owned = 1;
    custom_inscriptionnotauthenticatedcondition_request_local_var->pki_inscriptionnotauthenticatedcondition_id = pki_inscriptionnotauthenticatedcondition_id;
    custom_inscriptionnotauthenticatedcondition_request_local_var->dt_inscriptionnotauthenticatedcondition_completed = dt_inscriptionnotauthenticatedcondition_completed;
    return custom_inscriptionnotauthenticatedcondition_request_local_var;
}

__attribute__((deprecated)) custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_create(
    int *pki_inscriptionnotauthenticatedcondition_id,
    char *dt_inscriptionnotauthenticatedcondition_completed
    ) {
    int *pki_inscriptionnotauthenticatedcondition_id_copy = NULL;
    if (pki_inscriptionnotauthenticatedcondition_id) {
        pki_inscriptionnotauthenticatedcondition_id_copy = malloc(sizeof(int));
        if (pki_inscriptionnotauthenticatedcondition_id_copy) *pki_inscriptionnotauthenticatedcondition_id_copy = *pki_inscriptionnotauthenticatedcondition_id;
    }
    custom_inscriptionnotauthenticatedcondition_request_t *result = custom_inscriptionnotauthenticatedcondition_request_create_internal (
        pki_inscriptionnotauthenticatedcondition_id_copy,
        dt_inscriptionnotauthenticatedcondition_completed
        );
    if (!result) {
        free(pki_inscriptionnotauthenticatedcondition_id_copy);
    }
    return result;
}

void custom_inscriptionnotauthenticatedcondition_request_free(custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request) {
    if(NULL == custom_inscriptionnotauthenticatedcondition_request){
        return ;
    }
    if(custom_inscriptionnotauthenticatedcondition_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_inscriptionnotauthenticatedcondition_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id) {
        free(custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id);
        custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id = NULL;
    }
    if (custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed) {
        free(custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed);
        custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed = NULL;
    }
    free(custom_inscriptionnotauthenticatedcondition_request);
}

cJSON *custom_inscriptionnotauthenticatedcondition_request_convertToJSON(custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id
    if (!custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionnotauthenticatedconditionID", *custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed
    if (!custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedconditionCompleted", custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_parseFromJSON(cJSON *custom_inscriptionnotauthenticatedcondition_requestJSON){

    custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_local_var = NULL;

    // define the local variable for custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id
    int *pki_inscriptionnotauthenticatedcondition_id_local_var = NULL;

    char *dt_inscriptionnotauthenticatedcondition_completed_local_str = NULL;

    // custom_inscriptionnotauthenticatedcondition_request->pki_inscriptionnotauthenticatedcondition_id
    cJSON *pki_inscriptionnotauthenticatedcondition_id = cJSON_GetObjectItemCaseSensitive(custom_inscriptionnotauthenticatedcondition_requestJSON, "pkiInscriptionnotauthenticatedconditionID");
    if (cJSON_IsNull(pki_inscriptionnotauthenticatedcondition_id)) {
        pki_inscriptionnotauthenticatedcondition_id = NULL;
    }
    if (!pki_inscriptionnotauthenticatedcondition_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptionnotauthenticatedcondition_id))
    {
    goto end; //Numeric
    }
    pki_inscriptionnotauthenticatedcondition_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptionnotauthenticatedcondition_id_local_var)
    {
        goto end;
    }
    *pki_inscriptionnotauthenticatedcondition_id_local_var = pki_inscriptionnotauthenticatedcondition_id->valuedouble;

    // custom_inscriptionnotauthenticatedcondition_request->dt_inscriptionnotauthenticatedcondition_completed
    cJSON *dt_inscriptionnotauthenticatedcondition_completed = cJSON_GetObjectItemCaseSensitive(custom_inscriptionnotauthenticatedcondition_requestJSON, "dtInscriptionnotauthenticatedconditionCompleted");
    if (cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_completed)) {
        dt_inscriptionnotauthenticatedcondition_completed = NULL;
    }
    if (!dt_inscriptionnotauthenticatedcondition_completed) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_inscriptionnotauthenticatedcondition_completed))
    {
    goto end; //String
    }


    if (dt_inscriptionnotauthenticatedcondition_completed && !cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_completed)) dt_inscriptionnotauthenticatedcondition_completed_local_str = strdup(dt_inscriptionnotauthenticatedcondition_completed->valuestring);

    custom_inscriptionnotauthenticatedcondition_request_local_var = custom_inscriptionnotauthenticatedcondition_request_create_internal (
        pki_inscriptionnotauthenticatedcondition_id_local_var,
        dt_inscriptionnotauthenticatedcondition_completed_local_str
        );

    if (!custom_inscriptionnotauthenticatedcondition_request_local_var) {
        goto end;
    }

    return custom_inscriptionnotauthenticatedcondition_request_local_var;
end:
    if (pki_inscriptionnotauthenticatedcondition_id_local_var) {
        free(pki_inscriptionnotauthenticatedcondition_id_local_var);
        pki_inscriptionnotauthenticatedcondition_id_local_var = NULL;
    }
    if (dt_inscriptionnotauthenticatedcondition_completed_local_str) {
        free(dt_inscriptionnotauthenticatedcondition_completed_local_str);
        dt_inscriptionnotauthenticatedcondition_completed_local_str = NULL;
    }
    return NULL;

}
