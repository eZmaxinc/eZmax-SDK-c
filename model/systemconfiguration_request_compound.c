#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_request_compound.h"



static systemconfiguration_request_compound_t *systemconfiguration_request_compound_create_internal(
    int pki_systemconfiguration_id,
    int fki_branding_id,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend
    ) {
    systemconfiguration_request_compound_t *systemconfiguration_request_compound_local_var = malloc(sizeof(systemconfiguration_request_compound_t));
    if (!systemconfiguration_request_compound_local_var) {
        return NULL;
    }
    systemconfiguration_request_compound_local_var->pki_systemconfiguration_id = pki_systemconfiguration_id;
    systemconfiguration_request_compound_local_var->fki_branding_id = fki_branding_id;
    systemconfiguration_request_compound_local_var->e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    systemconfiguration_request_compound_local_var->e_systemconfiguration_language1 = e_systemconfiguration_language1;
    systemconfiguration_request_compound_local_var->e_systemconfiguration_language2 = e_systemconfiguration_language2;
    systemconfiguration_request_compound_local_var->e_systemconfiguration_ezsign = e_systemconfiguration_ezsign;
    systemconfiguration_request_compound_local_var->e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    systemconfiguration_request_compound_local_var->b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    systemconfiguration_request_compound_local_var->b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    systemconfiguration_request_compound_local_var->b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    systemconfiguration_request_compound_local_var->dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    systemconfiguration_request_compound_local_var->dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;

    systemconfiguration_request_compound_local_var->_library_owned = 1;
    return systemconfiguration_request_compound_local_var;
}

__attribute__((deprecated)) systemconfiguration_request_compound_t *systemconfiguration_request_compound_create(
    int pki_systemconfiguration_id,
    int fki_branding_id,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend
    ) {
    return systemconfiguration_request_compound_create_internal (
        pki_systemconfiguration_id,
        fki_branding_id,
        e_systemconfiguration_newexternaluseraction,
        e_systemconfiguration_language1,
        e_systemconfiguration_language2,
        e_systemconfiguration_ezsign,
        e_systemconfiguration_ezsignofficeplan,
        b_systemconfiguration_ezsignpaidbyoffice,
        b_systemconfiguration_ezsignpersonnal,
        b_systemconfiguration_sspr,
        dt_systemconfiguration_readonlyexpirationstart,
        dt_systemconfiguration_readonlyexpirationend
        );
}

void systemconfiguration_request_compound_free(systemconfiguration_request_compound_t *systemconfiguration_request_compound) {
    if(NULL == systemconfiguration_request_compound){
        return ;
    }
    if(systemconfiguration_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfiguration_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart) {
        free(systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart);
        systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend) {
        free(systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend);
        systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    free(systemconfiguration_request_compound);
}

cJSON *systemconfiguration_request_compound_convertToJSON(systemconfiguration_request_compound_t *systemconfiguration_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_request_compound->pki_systemconfiguration_id
    if(systemconfiguration_request_compound->pki_systemconfiguration_id) {
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationID", systemconfiguration_request_compound->pki_systemconfiguration_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_request_compound->fki_branding_id
    if(systemconfiguration_request_compound->fki_branding_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", systemconfiguration_request_compound->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_request_compound->e_systemconfiguration_newexternaluseraction
    if (ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__NULL == systemconfiguration_request_compound->e_systemconfiguration_newexternaluseraction) {
        goto fail;
    }
    cJSON *e_systemconfiguration_newexternaluseraction_local_JSON = field_e_systemconfiguration_newexternaluseraction_convertToJSON(systemconfiguration_request_compound->e_systemconfiguration_newexternaluseraction);
    if(e_systemconfiguration_newexternaluseraction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationNewexternaluseraction", e_systemconfiguration_newexternaluseraction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_compound->e_systemconfiguration_language1
    if (ezmax_api_definition__full_field_e_systemconfiguration_language1__NULL == systemconfiguration_request_compound->e_systemconfiguration_language1) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language1_local_JSON = field_e_systemconfiguration_language1_convertToJSON(systemconfiguration_request_compound->e_systemconfiguration_language1);
    if(e_systemconfiguration_language1_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage1", e_systemconfiguration_language1_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_compound->e_systemconfiguration_language2
    if (ezmax_api_definition__full_field_e_systemconfiguration_language2__NULL == systemconfiguration_request_compound->e_systemconfiguration_language2) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language2_local_JSON = field_e_systemconfiguration_language2_convertToJSON(systemconfiguration_request_compound->e_systemconfiguration_language2);
    if(e_systemconfiguration_language2_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage2", e_systemconfiguration_language2_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_compound->e_systemconfiguration_ezsign
    if(systemconfiguration_request_compound->e_systemconfiguration_ezsign != ezmax_api_definition__full_field_e_systemconfiguration_ezsign__NULL) {
    cJSON *e_systemconfiguration_ezsign_local_JSON = field_e_systemconfiguration_ezsign_convertToJSON(systemconfiguration_request_compound->e_systemconfiguration_ezsign);
    if(e_systemconfiguration_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsign", e_systemconfiguration_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_request_compound->e_systemconfiguration_ezsignofficeplan
    if(systemconfiguration_request_compound->e_systemconfiguration_ezsignofficeplan != ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__NULL) {
    cJSON *e_systemconfiguration_ezsignofficeplan_local_JSON = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(systemconfiguration_request_compound->e_systemconfiguration_ezsignofficeplan);
    if(e_systemconfiguration_ezsignofficeplan_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsignofficeplan", e_systemconfiguration_ezsignofficeplan_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_request_compound->b_systemconfiguration_ezsignpaidbyoffice
    if(systemconfiguration_request_compound->b_systemconfiguration_ezsignpaidbyoffice) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpaidbyoffice", systemconfiguration_request_compound->b_systemconfiguration_ezsignpaidbyoffice) == NULL) {
    goto fail; //Bool
    }
    }


    // systemconfiguration_request_compound->b_systemconfiguration_ezsignpersonnal
    if (!systemconfiguration_request_compound->b_systemconfiguration_ezsignpersonnal) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpersonnal", systemconfiguration_request_compound->b_systemconfiguration_ezsignpersonnal) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request_compound->b_systemconfiguration_sspr
    if (!systemconfiguration_request_compound->b_systemconfiguration_sspr) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationSspr", systemconfiguration_request_compound->b_systemconfiguration_sspr) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart
    if(systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationstart", systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend
    if(systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationend", systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend) == NULL) {
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

systemconfiguration_request_compound_t *systemconfiguration_request_compound_parseFromJSON(cJSON *systemconfiguration_request_compoundJSON){

    systemconfiguration_request_compound_t *systemconfiguration_request_compound_local_var = NULL;

    // define the local variable for systemconfiguration_request_compound->e_systemconfiguration_newexternaluseraction
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_compound->e_systemconfiguration_language1
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_compound->e_systemconfiguration_language2
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_compound->e_systemconfiguration_ezsign
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_compound->e_systemconfiguration_ezsignofficeplan
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;

    // systemconfiguration_request_compound->pki_systemconfiguration_id
    cJSON *pki_systemconfiguration_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "pkiSystemconfigurationID");
    if (cJSON_IsNull(pki_systemconfiguration_id)) {
        pki_systemconfiguration_id = NULL;
    }
    if (pki_systemconfiguration_id) { 
    if(!cJSON_IsNumber(pki_systemconfiguration_id))
    {
    goto end; //Numeric
    }
    }

    // systemconfiguration_request_compound->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "fkiBrandingID");
    if (cJSON_IsNull(fki_branding_id)) {
        fki_branding_id = NULL;
    }
    if (fki_branding_id) { 
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }
    }

    // systemconfiguration_request_compound->e_systemconfiguration_newexternaluseraction
    cJSON *e_systemconfiguration_newexternaluseraction = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "eSystemconfigurationNewexternaluseraction");
    if (cJSON_IsNull(e_systemconfiguration_newexternaluseraction)) {
        e_systemconfiguration_newexternaluseraction = NULL;
    }
    if (!e_systemconfiguration_newexternaluseraction) {
        goto end;
    }

    
    e_systemconfiguration_newexternaluseraction_local_nonprim = field_e_systemconfiguration_newexternaluseraction_parseFromJSON(e_systemconfiguration_newexternaluseraction); //custom

    // systemconfiguration_request_compound->e_systemconfiguration_language1
    cJSON *e_systemconfiguration_language1 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "eSystemconfigurationLanguage1");
    if (cJSON_IsNull(e_systemconfiguration_language1)) {
        e_systemconfiguration_language1 = NULL;
    }
    if (!e_systemconfiguration_language1) {
        goto end;
    }

    
    e_systemconfiguration_language1_local_nonprim = field_e_systemconfiguration_language1_parseFromJSON(e_systemconfiguration_language1); //custom

    // systemconfiguration_request_compound->e_systemconfiguration_language2
    cJSON *e_systemconfiguration_language2 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "eSystemconfigurationLanguage2");
    if (cJSON_IsNull(e_systemconfiguration_language2)) {
        e_systemconfiguration_language2 = NULL;
    }
    if (!e_systemconfiguration_language2) {
        goto end;
    }

    
    e_systemconfiguration_language2_local_nonprim = field_e_systemconfiguration_language2_parseFromJSON(e_systemconfiguration_language2); //custom

    // systemconfiguration_request_compound->e_systemconfiguration_ezsign
    cJSON *e_systemconfiguration_ezsign = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "eSystemconfigurationEzsign");
    if (cJSON_IsNull(e_systemconfiguration_ezsign)) {
        e_systemconfiguration_ezsign = NULL;
    }
    if (e_systemconfiguration_ezsign) { 
    e_systemconfiguration_ezsign_local_nonprim = field_e_systemconfiguration_ezsign_parseFromJSON(e_systemconfiguration_ezsign); //custom
    }

    // systemconfiguration_request_compound->e_systemconfiguration_ezsignofficeplan
    cJSON *e_systemconfiguration_ezsignofficeplan = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "eSystemconfigurationEzsignofficeplan");
    if (cJSON_IsNull(e_systemconfiguration_ezsignofficeplan)) {
        e_systemconfiguration_ezsignofficeplan = NULL;
    }
    if (e_systemconfiguration_ezsignofficeplan) { 
    e_systemconfiguration_ezsignofficeplan_local_nonprim = field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(e_systemconfiguration_ezsignofficeplan); //custom
    }

    // systemconfiguration_request_compound->b_systemconfiguration_ezsignpaidbyoffice
    cJSON *b_systemconfiguration_ezsignpaidbyoffice = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "bSystemconfigurationEzsignpaidbyoffice");
    if (cJSON_IsNull(b_systemconfiguration_ezsignpaidbyoffice)) {
        b_systemconfiguration_ezsignpaidbyoffice = NULL;
    }
    if (b_systemconfiguration_ezsignpaidbyoffice) { 
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpaidbyoffice))
    {
    goto end; //Bool
    }
    }

    // systemconfiguration_request_compound->b_systemconfiguration_ezsignpersonnal
    cJSON *b_systemconfiguration_ezsignpersonnal = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "bSystemconfigurationEzsignpersonnal");
    if (cJSON_IsNull(b_systemconfiguration_ezsignpersonnal)) {
        b_systemconfiguration_ezsignpersonnal = NULL;
    }
    if (!b_systemconfiguration_ezsignpersonnal) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpersonnal))
    {
    goto end; //Bool
    }

    // systemconfiguration_request_compound->b_systemconfiguration_sspr
    cJSON *b_systemconfiguration_sspr = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "bSystemconfigurationSspr");
    if (cJSON_IsNull(b_systemconfiguration_sspr)) {
        b_systemconfiguration_sspr = NULL;
    }
    if (!b_systemconfiguration_sspr) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_systemconfiguration_sspr))
    {
    goto end; //Bool
    }

    // systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationstart
    cJSON *dt_systemconfiguration_readonlyexpirationstart = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "dtSystemconfigurationReadonlyexpirationstart");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart)) {
        dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationstart) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationstart) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart))
    {
    goto end; //String
    }
    }

    // systemconfiguration_request_compound->dt_systemconfiguration_readonlyexpirationend
    cJSON *dt_systemconfiguration_readonlyexpirationend = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_compoundJSON, "dtSystemconfigurationReadonlyexpirationend");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend)) {
        dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationend) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationend) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend))
    {
    goto end; //String
    }
    }


    systemconfiguration_request_compound_local_var = systemconfiguration_request_compound_create_internal (
        pki_systemconfiguration_id ? pki_systemconfiguration_id->valuedouble : 0,
        fki_branding_id ? fki_branding_id->valuedouble : 0,
        e_systemconfiguration_newexternaluseraction_local_nonprim,
        e_systemconfiguration_language1_local_nonprim,
        e_systemconfiguration_language2_local_nonprim,
        e_systemconfiguration_ezsign ? e_systemconfiguration_ezsign_local_nonprim : 0,
        e_systemconfiguration_ezsignofficeplan ? e_systemconfiguration_ezsignofficeplan_local_nonprim : 0,
        b_systemconfiguration_ezsignpaidbyoffice ? b_systemconfiguration_ezsignpaidbyoffice->valueint : 0,
        b_systemconfiguration_ezsignpersonnal->valueint,
        b_systemconfiguration_sspr->valueint,
        dt_systemconfiguration_readonlyexpirationstart && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart) ? strdup(dt_systemconfiguration_readonlyexpirationstart->valuestring) : NULL,
        dt_systemconfiguration_readonlyexpirationend && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend) ? strdup(dt_systemconfiguration_readonlyexpirationend->valuestring) : NULL
        );

    return systemconfiguration_request_compound_local_var;
end:
    if (e_systemconfiguration_newexternaluseraction_local_nonprim) {
        e_systemconfiguration_newexternaluseraction_local_nonprim = 0;
    }
    if (e_systemconfiguration_language1_local_nonprim) {
        e_systemconfiguration_language1_local_nonprim = 0;
    }
    if (e_systemconfiguration_language2_local_nonprim) {
        e_systemconfiguration_language2_local_nonprim = 0;
    }
    if (e_systemconfiguration_ezsign_local_nonprim) {
        e_systemconfiguration_ezsign_local_nonprim = 0;
    }
    if (e_systemconfiguration_ezsignofficeplan_local_nonprim) {
        e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;
    }
    return NULL;

}
