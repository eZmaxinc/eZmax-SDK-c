#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_request.h"


char* e_systemconfiguration_newexternaluseractionsystemconfiguration_request_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_newexternaluseraction) {
    char* e_systemconfiguration_newexternaluseractionArray[] =  { "NULL", "Stage", "AutoCreate" };
    return e_systemconfiguration_newexternaluseractionArray[e_systemconfiguration_newexternaluseraction];
}

ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_newexternaluseractionsystemconfiguration_request_FromString(char* e_systemconfiguration_newexternaluseraction){
    int stringToReturn = 0;
    char *e_systemconfiguration_newexternaluseractionArray[] =  { "NULL", "Stage", "AutoCreate" };
    size_t sizeofArray = sizeof(e_systemconfiguration_newexternaluseractionArray) / sizeof(e_systemconfiguration_newexternaluseractionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_systemconfiguration_newexternaluseraction, e_systemconfiguration_newexternaluseractionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_systemconfiguration_language1systemconfiguration_request_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language1) {
    char* e_systemconfiguration_language1Array[] =  { "NULL", "fr_QC" };
    return e_systemconfiguration_language1Array[e_systemconfiguration_language1];
}

ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language1systemconfiguration_request_FromString(char* e_systemconfiguration_language1){
    int stringToReturn = 0;
    char *e_systemconfiguration_language1Array[] =  { "NULL", "fr_QC" };
    size_t sizeofArray = sizeof(e_systemconfiguration_language1Array) / sizeof(e_systemconfiguration_language1Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_systemconfiguration_language1, e_systemconfiguration_language1Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_systemconfiguration_language2systemconfiguration_request_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language2) {
    char* e_systemconfiguration_language2Array[] =  { "NULL", "en_CA", "en_QC", "en_US" };
    return e_systemconfiguration_language2Array[e_systemconfiguration_language2];
}

ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language2systemconfiguration_request_FromString(char* e_systemconfiguration_language2){
    int stringToReturn = 0;
    char *e_systemconfiguration_language2Array[] =  { "NULL", "en_CA", "en_QC", "en_US" };
    size_t sizeofArray = sizeof(e_systemconfiguration_language2Array) / sizeof(e_systemconfiguration_language2Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_systemconfiguration_language2, e_systemconfiguration_language2Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_systemconfiguration_ezsignsystemconfiguration_request_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_ezsign) {
    char* e_systemconfiguration_ezsignArray[] =  { "NULL", "No", "Yes" };
    return e_systemconfiguration_ezsignArray[e_systemconfiguration_ezsign];
}

ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_ezsignsystemconfiguration_request_FromString(char* e_systemconfiguration_ezsign){
    int stringToReturn = 0;
    char *e_systemconfiguration_ezsignArray[] =  { "NULL", "No", "Yes" };
    size_t sizeofArray = sizeof(e_systemconfiguration_ezsignArray) / sizeof(e_systemconfiguration_ezsignArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_systemconfiguration_ezsign, e_systemconfiguration_ezsignArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

systemconfiguration_request_t *systemconfiguration_request_create(
    int pki_systemconfiguration_id,
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction,
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1,
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2,
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend
    ) {
    systemconfiguration_request_t *systemconfiguration_request_local_var = malloc(sizeof(systemconfiguration_request_t));
    if (!systemconfiguration_request_local_var) {
        return NULL;
    }
    systemconfiguration_request_local_var->pki_systemconfiguration_id = pki_systemconfiguration_id;
    systemconfiguration_request_local_var->e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    systemconfiguration_request_local_var->e_systemconfiguration_language1 = e_systemconfiguration_language1;
    systemconfiguration_request_local_var->e_systemconfiguration_language2 = e_systemconfiguration_language2;
    systemconfiguration_request_local_var->e_systemconfiguration_ezsign = e_systemconfiguration_ezsign;
    systemconfiguration_request_local_var->b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    systemconfiguration_request_local_var->b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    systemconfiguration_request_local_var->dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    systemconfiguration_request_local_var->dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;

    return systemconfiguration_request_local_var;
}


void systemconfiguration_request_free(systemconfiguration_request_t *systemconfiguration_request) {
    if(NULL == systemconfiguration_request){
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_request->e_systemconfiguration_newexternaluseraction) {
        field_e_systemconfiguration_newexternaluseraction_free(systemconfiguration_request->e_systemconfiguration_newexternaluseraction);
        systemconfiguration_request->e_systemconfiguration_newexternaluseraction = NULL;
    }
    if (systemconfiguration_request->e_systemconfiguration_language1) {
        field_e_systemconfiguration_language1_free(systemconfiguration_request->e_systemconfiguration_language1);
        systemconfiguration_request->e_systemconfiguration_language1 = NULL;
    }
    if (systemconfiguration_request->e_systemconfiguration_language2) {
        field_e_systemconfiguration_language2_free(systemconfiguration_request->e_systemconfiguration_language2);
        systemconfiguration_request->e_systemconfiguration_language2 = NULL;
    }
    if (systemconfiguration_request->e_systemconfiguration_ezsign) {
        field_e_systemconfiguration_ezsign_free(systemconfiguration_request->e_systemconfiguration_ezsign);
        systemconfiguration_request->e_systemconfiguration_ezsign = NULL;
    }
    if (systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart) {
        free(systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart);
        systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend) {
        free(systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend);
        systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    free(systemconfiguration_request);
}

cJSON *systemconfiguration_request_convertToJSON(systemconfiguration_request_t *systemconfiguration_request) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_request->pki_systemconfiguration_id
    if(systemconfiguration_request->pki_systemconfiguration_id) {
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationID", systemconfiguration_request->pki_systemconfiguration_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_request->e_systemconfiguration_newexternaluseraction
    if (ezmax_api_definition__full_systemconfiguration_request__NULL == systemconfiguration_request->e_systemconfiguration_newexternaluseraction) {
        goto fail;
    }
    cJSON *e_systemconfiguration_newexternaluseraction_local_JSON = field_e_systemconfiguration_newexternaluseraction_convertToJSON(systemconfiguration_request->e_systemconfiguration_newexternaluseraction);
    if(e_systemconfiguration_newexternaluseraction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationNewexternaluseraction", e_systemconfiguration_newexternaluseraction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request->e_systemconfiguration_language1
    if (ezmax_api_definition__full_systemconfiguration_request__NULL == systemconfiguration_request->e_systemconfiguration_language1) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language1_local_JSON = field_e_systemconfiguration_language1_convertToJSON(systemconfiguration_request->e_systemconfiguration_language1);
    if(e_systemconfiguration_language1_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage1", e_systemconfiguration_language1_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request->e_systemconfiguration_language2
    if (ezmax_api_definition__full_systemconfiguration_request__NULL == systemconfiguration_request->e_systemconfiguration_language2) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language2_local_JSON = field_e_systemconfiguration_language2_convertToJSON(systemconfiguration_request->e_systemconfiguration_language2);
    if(e_systemconfiguration_language2_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage2", e_systemconfiguration_language2_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request->e_systemconfiguration_ezsign
    if(systemconfiguration_request->e_systemconfiguration_ezsign != ezmax_api_definition__full_systemconfiguration_request__NULL) {
    cJSON *e_systemconfiguration_ezsign_local_JSON = field_e_systemconfiguration_ezsign_convertToJSON(systemconfiguration_request->e_systemconfiguration_ezsign);
    if(e_systemconfiguration_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsign", e_systemconfiguration_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_request->b_systemconfiguration_ezsignpersonnal
    if (!systemconfiguration_request->b_systemconfiguration_ezsignpersonnal) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpersonnal", systemconfiguration_request->b_systemconfiguration_ezsignpersonnal) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request->b_systemconfiguration_sspr
    if (!systemconfiguration_request->b_systemconfiguration_sspr) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationSspr", systemconfiguration_request->b_systemconfiguration_sspr) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart
    if(systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationstart", systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend
    if(systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationend", systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

systemconfiguration_request_t *systemconfiguration_request_parseFromJSON(cJSON *systemconfiguration_requestJSON){

    systemconfiguration_request_t *systemconfiguration_request_local_var = NULL;

    // define the local variable for systemconfiguration_request->e_systemconfiguration_newexternaluseraction
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction_local_nonprim = NULL;

    // define the local variable for systemconfiguration_request->e_systemconfiguration_language1
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1_local_nonprim = NULL;

    // define the local variable for systemconfiguration_request->e_systemconfiguration_language2
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2_local_nonprim = NULL;

    // define the local variable for systemconfiguration_request->e_systemconfiguration_ezsign
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign_local_nonprim = NULL;

    // systemconfiguration_request->pki_systemconfiguration_id
    cJSON *pki_systemconfiguration_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "pkiSystemconfigurationID");
    if (pki_systemconfiguration_id) { 
    if(!cJSON_IsNumber(pki_systemconfiguration_id))
    {
    goto end; //Numeric
    }
    }

    // systemconfiguration_request->e_systemconfiguration_newexternaluseraction
    cJSON *e_systemconfiguration_newexternaluseraction = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "eSystemconfigurationNewexternaluseraction");
    if (!e_systemconfiguration_newexternaluseraction) {
        goto end;
    }

    
    e_systemconfiguration_newexternaluseraction_local_nonprim = field_e_systemconfiguration_newexternaluseraction_parseFromJSON(e_systemconfiguration_newexternaluseraction); //custom

    // systemconfiguration_request->e_systemconfiguration_language1
    cJSON *e_systemconfiguration_language1 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "eSystemconfigurationLanguage1");
    if (!e_systemconfiguration_language1) {
        goto end;
    }

    
    e_systemconfiguration_language1_local_nonprim = field_e_systemconfiguration_language1_parseFromJSON(e_systemconfiguration_language1); //custom

    // systemconfiguration_request->e_systemconfiguration_language2
    cJSON *e_systemconfiguration_language2 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "eSystemconfigurationLanguage2");
    if (!e_systemconfiguration_language2) {
        goto end;
    }

    
    e_systemconfiguration_language2_local_nonprim = field_e_systemconfiguration_language2_parseFromJSON(e_systemconfiguration_language2); //custom

    // systemconfiguration_request->e_systemconfiguration_ezsign
    cJSON *e_systemconfiguration_ezsign = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "eSystemconfigurationEzsign");
    if (e_systemconfiguration_ezsign) { 
    e_systemconfiguration_ezsign_local_nonprim = field_e_systemconfiguration_ezsign_parseFromJSON(e_systemconfiguration_ezsign); //custom
    }

    // systemconfiguration_request->b_systemconfiguration_ezsignpersonnal
    cJSON *b_systemconfiguration_ezsignpersonnal = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "bSystemconfigurationEzsignpersonnal");
    if (!b_systemconfiguration_ezsignpersonnal) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpersonnal))
    {
    goto end; //Bool
    }

    // systemconfiguration_request->b_systemconfiguration_sspr
    cJSON *b_systemconfiguration_sspr = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "bSystemconfigurationSspr");
    if (!b_systemconfiguration_sspr) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_systemconfiguration_sspr))
    {
    goto end; //Bool
    }

    // systemconfiguration_request->dt_systemconfiguration_readonlyexpirationstart
    cJSON *dt_systemconfiguration_readonlyexpirationstart = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "dtSystemconfigurationReadonlyexpirationstart");
    if (dt_systemconfiguration_readonlyexpirationstart) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationstart) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart))
    {
    goto end; //String
    }
    }

    // systemconfiguration_request->dt_systemconfiguration_readonlyexpirationend
    cJSON *dt_systemconfiguration_readonlyexpirationend = cJSON_GetObjectItemCaseSensitive(systemconfiguration_requestJSON, "dtSystemconfigurationReadonlyexpirationend");
    if (dt_systemconfiguration_readonlyexpirationend) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationend) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend))
    {
    goto end; //String
    }
    }


    systemconfiguration_request_local_var = systemconfiguration_request_create (
        pki_systemconfiguration_id ? pki_systemconfiguration_id->valuedouble : 0,
        e_systemconfiguration_newexternaluseraction_local_nonprim,
        e_systemconfiguration_language1_local_nonprim,
        e_systemconfiguration_language2_local_nonprim,
        e_systemconfiguration_ezsign ? e_systemconfiguration_ezsign_local_nonprim : NULL,
        b_systemconfiguration_ezsignpersonnal->valueint,
        b_systemconfiguration_sspr->valueint,
        dt_systemconfiguration_readonlyexpirationstart && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart) ? strdup(dt_systemconfiguration_readonlyexpirationstart->valuestring) : NULL,
        dt_systemconfiguration_readonlyexpirationend && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend) ? strdup(dt_systemconfiguration_readonlyexpirationend->valuestring) : NULL
        );

    return systemconfiguration_request_local_var;
end:
    if (e_systemconfiguration_newexternaluseraction_local_nonprim) {
        field_e_systemconfiguration_newexternaluseraction_free(e_systemconfiguration_newexternaluseraction_local_nonprim);
        e_systemconfiguration_newexternaluseraction_local_nonprim = NULL;
    }
    if (e_systemconfiguration_language1_local_nonprim) {
        field_e_systemconfiguration_language1_free(e_systemconfiguration_language1_local_nonprim);
        e_systemconfiguration_language1_local_nonprim = NULL;
    }
    if (e_systemconfiguration_language2_local_nonprim) {
        field_e_systemconfiguration_language2_free(e_systemconfiguration_language2_local_nonprim);
        e_systemconfiguration_language2_local_nonprim = NULL;
    }
    if (e_systemconfiguration_ezsign_local_nonprim) {
        field_e_systemconfiguration_ezsign_free(e_systemconfiguration_ezsign_local_nonprim);
        e_systemconfiguration_ezsign_local_nonprim = NULL;
    }
    return NULL;

}
