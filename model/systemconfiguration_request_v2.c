#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_request_v2.h"



static systemconfiguration_request_v2_t *systemconfiguration_request_v2_create_internal(
    int *pki_systemconfiguration_id,
    int *fki_branding_id,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int *b_systemconfiguration_ezsignpaidbyoffice,
    int *b_systemconfiguration_ezsignpersonnal,
    int *b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    int *i_systemconfiguration_ezsignreminderhoursend
    ) {
    systemconfiguration_request_v2_t *systemconfiguration_request_v2_local_var = malloc(sizeof(systemconfiguration_request_v2_t));
    if (!systemconfiguration_request_v2_local_var) {
        return NULL;
    }
    memset(systemconfiguration_request_v2_local_var, 0, sizeof(systemconfiguration_request_v2_t));
    systemconfiguration_request_v2_local_var->_library_owned = 1;
    systemconfiguration_request_v2_local_var->pki_systemconfiguration_id = pki_systemconfiguration_id;
    systemconfiguration_request_v2_local_var->fki_branding_id = fki_branding_id;
    systemconfiguration_request_v2_local_var->e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    systemconfiguration_request_v2_local_var->e_systemconfiguration_language1 = e_systemconfiguration_language1;
    systemconfiguration_request_v2_local_var->e_systemconfiguration_language2 = e_systemconfiguration_language2;
    systemconfiguration_request_v2_local_var->e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    systemconfiguration_request_v2_local_var->b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    systemconfiguration_request_v2_local_var->b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    systemconfiguration_request_v2_local_var->b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    systemconfiguration_request_v2_local_var->dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    systemconfiguration_request_v2_local_var->dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;
    systemconfiguration_request_v2_local_var->i_systemconfiguration_ezsignreminderhoursend = i_systemconfiguration_ezsignreminderhoursend;
    return systemconfiguration_request_v2_local_var;
}

__attribute__((deprecated)) systemconfiguration_request_v2_t *systemconfiguration_request_v2_create(
    int *pki_systemconfiguration_id,
    int *fki_branding_id,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int *b_systemconfiguration_ezsignpaidbyoffice,
    int *b_systemconfiguration_ezsignpersonnal,
    int *b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    int *i_systemconfiguration_ezsignreminderhoursend
    ) {
    int *pki_systemconfiguration_id_copy = NULL;
    if (pki_systemconfiguration_id) {
        pki_systemconfiguration_id_copy = malloc(sizeof(int));
        if (pki_systemconfiguration_id_copy) *pki_systemconfiguration_id_copy = *pki_systemconfiguration_id;
    }
    int *fki_branding_id_copy = NULL;
    if (fki_branding_id) {
        fki_branding_id_copy = malloc(sizeof(int));
        if (fki_branding_id_copy) *fki_branding_id_copy = *fki_branding_id;
    }
    int *b_systemconfiguration_ezsignpaidbyoffice_copy = NULL;
    if (b_systemconfiguration_ezsignpaidbyoffice) {
        b_systemconfiguration_ezsignpaidbyoffice_copy = malloc(sizeof(int));
        if (b_systemconfiguration_ezsignpaidbyoffice_copy) *b_systemconfiguration_ezsignpaidbyoffice_copy = *b_systemconfiguration_ezsignpaidbyoffice;
    }
    int *b_systemconfiguration_ezsignpersonnal_copy = NULL;
    if (b_systemconfiguration_ezsignpersonnal) {
        b_systemconfiguration_ezsignpersonnal_copy = malloc(sizeof(int));
        if (b_systemconfiguration_ezsignpersonnal_copy) *b_systemconfiguration_ezsignpersonnal_copy = *b_systemconfiguration_ezsignpersonnal;
    }
    int *b_systemconfiguration_sspr_copy = NULL;
    if (b_systemconfiguration_sspr) {
        b_systemconfiguration_sspr_copy = malloc(sizeof(int));
        if (b_systemconfiguration_sspr_copy) *b_systemconfiguration_sspr_copy = *b_systemconfiguration_sspr;
    }
    int *i_systemconfiguration_ezsignreminderhoursend_copy = NULL;
    if (i_systemconfiguration_ezsignreminderhoursend) {
        i_systemconfiguration_ezsignreminderhoursend_copy = malloc(sizeof(int));
        if (i_systemconfiguration_ezsignreminderhoursend_copy) *i_systemconfiguration_ezsignreminderhoursend_copy = *i_systemconfiguration_ezsignreminderhoursend;
    }
    systemconfiguration_request_v2_t *result = systemconfiguration_request_v2_create_internal (
        pki_systemconfiguration_id_copy,
        fki_branding_id_copy,
        e_systemconfiguration_newexternaluseraction,
        e_systemconfiguration_language1,
        e_systemconfiguration_language2,
        e_systemconfiguration_ezsignofficeplan,
        b_systemconfiguration_ezsignpaidbyoffice_copy,
        b_systemconfiguration_ezsignpersonnal_copy,
        b_systemconfiguration_sspr_copy,
        dt_systemconfiguration_readonlyexpirationstart,
        dt_systemconfiguration_readonlyexpirationend,
        i_systemconfiguration_ezsignreminderhoursend_copy
        );
    if (!result) {
        free(pki_systemconfiguration_id_copy);
        free(fki_branding_id_copy);
        free(b_systemconfiguration_ezsignpaidbyoffice_copy);
        free(b_systemconfiguration_ezsignpersonnal_copy);
        free(b_systemconfiguration_sspr_copy);
        free(i_systemconfiguration_ezsignreminderhoursend_copy);
    }
    return result;
}

void systemconfiguration_request_v2_free(systemconfiguration_request_v2_t *systemconfiguration_request_v2) {
    if(NULL == systemconfiguration_request_v2){
        return ;
    }
    if(systemconfiguration_request_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfiguration_request_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_request_v2->pki_systemconfiguration_id) {
        free(systemconfiguration_request_v2->pki_systemconfiguration_id);
        systemconfiguration_request_v2->pki_systemconfiguration_id = NULL;
    }
    if (systemconfiguration_request_v2->fki_branding_id) {
        free(systemconfiguration_request_v2->fki_branding_id);
        systemconfiguration_request_v2->fki_branding_id = NULL;
    }
    if (systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice) {
        free(systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice);
        systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice = NULL;
    }
    if (systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal) {
        free(systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal);
        systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal = NULL;
    }
    if (systemconfiguration_request_v2->b_systemconfiguration_sspr) {
        free(systemconfiguration_request_v2->b_systemconfiguration_sspr);
        systemconfiguration_request_v2->b_systemconfiguration_sspr = NULL;
    }
    if (systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart) {
        free(systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart);
        systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend) {
        free(systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend);
        systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    if (systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend) {
        free(systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend);
        systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend = NULL;
    }
    free(systemconfiguration_request_v2);
}

cJSON *systemconfiguration_request_v2_convertToJSON(systemconfiguration_request_v2_t *systemconfiguration_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_request_v2->pki_systemconfiguration_id
    if(systemconfiguration_request_v2->pki_systemconfiguration_id) {
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationID", *systemconfiguration_request_v2->pki_systemconfiguration_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_request_v2->fki_branding_id
    if(systemconfiguration_request_v2->fki_branding_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", *systemconfiguration_request_v2->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_request_v2->e_systemconfiguration_newexternaluseraction
    if (ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__NULL == systemconfiguration_request_v2->e_systemconfiguration_newexternaluseraction) {
        goto fail;
    }
    cJSON *e_systemconfiguration_newexternaluseraction_local_JSON = field_e_systemconfiguration_newexternaluseraction_convertToJSON(systemconfiguration_request_v2->e_systemconfiguration_newexternaluseraction);
    if(e_systemconfiguration_newexternaluseraction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationNewexternaluseraction", e_systemconfiguration_newexternaluseraction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_v2->e_systemconfiguration_language1
    if (ezmax_api_definition__full_field_e_systemconfiguration_language1__NULL == systemconfiguration_request_v2->e_systemconfiguration_language1) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language1_local_JSON = field_e_systemconfiguration_language1_convertToJSON(systemconfiguration_request_v2->e_systemconfiguration_language1);
    if(e_systemconfiguration_language1_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage1", e_systemconfiguration_language1_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_v2->e_systemconfiguration_language2
    if (ezmax_api_definition__full_field_e_systemconfiguration_language2__NULL == systemconfiguration_request_v2->e_systemconfiguration_language2) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language2_local_JSON = field_e_systemconfiguration_language2_convertToJSON(systemconfiguration_request_v2->e_systemconfiguration_language2);
    if(e_systemconfiguration_language2_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage2", e_systemconfiguration_language2_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_request_v2->e_systemconfiguration_ezsignofficeplan
    if(systemconfiguration_request_v2->e_systemconfiguration_ezsignofficeplan != ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__NULL) {
    cJSON *e_systemconfiguration_ezsignofficeplan_local_JSON = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(systemconfiguration_request_v2->e_systemconfiguration_ezsignofficeplan);
    if(e_systemconfiguration_ezsignofficeplan_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsignofficeplan", e_systemconfiguration_ezsignofficeplan_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice
    if(systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpaidbyoffice", *systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice) == NULL) {
    goto fail; //Bool
    }
    }


    // systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal
    if (!systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpersonnal", *systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request_v2->b_systemconfiguration_sspr
    if (!systemconfiguration_request_v2->b_systemconfiguration_sspr) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationSspr", *systemconfiguration_request_v2->b_systemconfiguration_sspr) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart
    if(systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationstart", systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend
    if(systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationend", systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend
    if (!systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSystemconfigurationEzsignreminderhoursend", *systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

systemconfiguration_request_v2_t *systemconfiguration_request_v2_parseFromJSON(cJSON *systemconfiguration_request_v2JSON){

    systemconfiguration_request_v2_t *systemconfiguration_request_v2_local_var = NULL;

    // define the local variable for systemconfiguration_request_v2->pki_systemconfiguration_id
    int *pki_systemconfiguration_id_local_var = NULL;

    // define the local variable for systemconfiguration_request_v2->fki_branding_id
    int *fki_branding_id_local_var = NULL;

    // define the local variable for systemconfiguration_request_v2->e_systemconfiguration_newexternaluseraction
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_v2->e_systemconfiguration_language1
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_v2->e_systemconfiguration_language2
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_v2->e_systemconfiguration_ezsignofficeplan
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;

    // define the local variable for systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice
    int *b_systemconfiguration_ezsignpaidbyoffice_local_var = NULL;

    // define the local variable for systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal
    int *b_systemconfiguration_ezsignpersonnal_local_var = NULL;

    // define the local variable for systemconfiguration_request_v2->b_systemconfiguration_sspr
    int *b_systemconfiguration_sspr_local_var = NULL;

    char *dt_systemconfiguration_readonlyexpirationstart_local_str = NULL;

    char *dt_systemconfiguration_readonlyexpirationend_local_str = NULL;

    // define the local variable for systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend
    int *i_systemconfiguration_ezsignreminderhoursend_local_var = NULL;

    // systemconfiguration_request_v2->pki_systemconfiguration_id
    cJSON *pki_systemconfiguration_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "pkiSystemconfigurationID");
    if (cJSON_IsNull(pki_systemconfiguration_id)) {
        pki_systemconfiguration_id = NULL;
    }
    if (pki_systemconfiguration_id) { 
    if(!cJSON_IsNumber(pki_systemconfiguration_id))
    {
    goto end; //Numeric
    }
    pki_systemconfiguration_id_local_var = malloc(sizeof(int));
    if(!pki_systemconfiguration_id_local_var)
    {
        goto end;
    }
    *pki_systemconfiguration_id_local_var = pki_systemconfiguration_id->valuedouble;
    }

    // systemconfiguration_request_v2->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "fkiBrandingID");
    if (cJSON_IsNull(fki_branding_id)) {
        fki_branding_id = NULL;
    }
    if (fki_branding_id) { 
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }
    fki_branding_id_local_var = malloc(sizeof(int));
    if(!fki_branding_id_local_var)
    {
        goto end;
    }
    *fki_branding_id_local_var = fki_branding_id->valuedouble;
    }

    // systemconfiguration_request_v2->e_systemconfiguration_newexternaluseraction
    cJSON *e_systemconfiguration_newexternaluseraction = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "eSystemconfigurationNewexternaluseraction");
    if (cJSON_IsNull(e_systemconfiguration_newexternaluseraction)) {
        e_systemconfiguration_newexternaluseraction = NULL;
    }
    if (!e_systemconfiguration_newexternaluseraction) {
        goto end;
    }

    
    e_systemconfiguration_newexternaluseraction_local_nonprim = field_e_systemconfiguration_newexternaluseraction_parseFromJSON(e_systemconfiguration_newexternaluseraction); //custom

    // systemconfiguration_request_v2->e_systemconfiguration_language1
    cJSON *e_systemconfiguration_language1 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "eSystemconfigurationLanguage1");
    if (cJSON_IsNull(e_systemconfiguration_language1)) {
        e_systemconfiguration_language1 = NULL;
    }
    if (!e_systemconfiguration_language1) {
        goto end;
    }

    
    e_systemconfiguration_language1_local_nonprim = field_e_systemconfiguration_language1_parseFromJSON(e_systemconfiguration_language1); //custom

    // systemconfiguration_request_v2->e_systemconfiguration_language2
    cJSON *e_systemconfiguration_language2 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "eSystemconfigurationLanguage2");
    if (cJSON_IsNull(e_systemconfiguration_language2)) {
        e_systemconfiguration_language2 = NULL;
    }
    if (!e_systemconfiguration_language2) {
        goto end;
    }

    
    e_systemconfiguration_language2_local_nonprim = field_e_systemconfiguration_language2_parseFromJSON(e_systemconfiguration_language2); //custom

    // systemconfiguration_request_v2->e_systemconfiguration_ezsignofficeplan
    cJSON *e_systemconfiguration_ezsignofficeplan = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "eSystemconfigurationEzsignofficeplan");
    if (cJSON_IsNull(e_systemconfiguration_ezsignofficeplan)) {
        e_systemconfiguration_ezsignofficeplan = NULL;
    }
    if (e_systemconfiguration_ezsignofficeplan) { 
    e_systemconfiguration_ezsignofficeplan_local_nonprim = field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(e_systemconfiguration_ezsignofficeplan); //custom
    }

    // systemconfiguration_request_v2->b_systemconfiguration_ezsignpaidbyoffice
    cJSON *b_systemconfiguration_ezsignpaidbyoffice = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "bSystemconfigurationEzsignpaidbyoffice");
    if (cJSON_IsNull(b_systemconfiguration_ezsignpaidbyoffice)) {
        b_systemconfiguration_ezsignpaidbyoffice = NULL;
    }
    if (b_systemconfiguration_ezsignpaidbyoffice) { 
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpaidbyoffice))
    {
    goto end; //Bool
    }
    b_systemconfiguration_ezsignpaidbyoffice_local_var = malloc(sizeof(int));
    if(!b_systemconfiguration_ezsignpaidbyoffice_local_var)
    {
        goto end;
    }
    *b_systemconfiguration_ezsignpaidbyoffice_local_var = b_systemconfiguration_ezsignpaidbyoffice->valueint;
    }

    // systemconfiguration_request_v2->b_systemconfiguration_ezsignpersonnal
    cJSON *b_systemconfiguration_ezsignpersonnal = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "bSystemconfigurationEzsignpersonnal");
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
    b_systemconfiguration_ezsignpersonnal_local_var = malloc(sizeof(int));
    if(!b_systemconfiguration_ezsignpersonnal_local_var)
    {
        goto end;
    }
    *b_systemconfiguration_ezsignpersonnal_local_var = b_systemconfiguration_ezsignpersonnal->valueint;

    // systemconfiguration_request_v2->b_systemconfiguration_sspr
    cJSON *b_systemconfiguration_sspr = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "bSystemconfigurationSspr");
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
    b_systemconfiguration_sspr_local_var = malloc(sizeof(int));
    if(!b_systemconfiguration_sspr_local_var)
    {
        goto end;
    }
    *b_systemconfiguration_sspr_local_var = b_systemconfiguration_sspr->valueint;

    // systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationstart
    cJSON *dt_systemconfiguration_readonlyexpirationstart = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "dtSystemconfigurationReadonlyexpirationstart");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart)) {
        dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationstart) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationstart) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart))
    {
    goto end; //String
    }
    }

    // systemconfiguration_request_v2->dt_systemconfiguration_readonlyexpirationend
    cJSON *dt_systemconfiguration_readonlyexpirationend = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "dtSystemconfigurationReadonlyexpirationend");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend)) {
        dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationend) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationend) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend))
    {
    goto end; //String
    }
    }

    // systemconfiguration_request_v2->i_systemconfiguration_ezsignreminderhoursend
    cJSON *i_systemconfiguration_ezsignreminderhoursend = cJSON_GetObjectItemCaseSensitive(systemconfiguration_request_v2JSON, "iSystemconfigurationEzsignreminderhoursend");
    if (cJSON_IsNull(i_systemconfiguration_ezsignreminderhoursend)) {
        i_systemconfiguration_ezsignreminderhoursend = NULL;
    }
    if (!i_systemconfiguration_ezsignreminderhoursend) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_systemconfiguration_ezsignreminderhoursend))
    {
    goto end; //Numeric
    }
    i_systemconfiguration_ezsignreminderhoursend_local_var = malloc(sizeof(int));
    if(!i_systemconfiguration_ezsignreminderhoursend_local_var)
    {
        goto end;
    }
    *i_systemconfiguration_ezsignreminderhoursend_local_var = i_systemconfiguration_ezsignreminderhoursend->valuedouble;


    if (dt_systemconfiguration_readonlyexpirationstart && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart)) dt_systemconfiguration_readonlyexpirationstart_local_str = strdup(dt_systemconfiguration_readonlyexpirationstart->valuestring);
    if (dt_systemconfiguration_readonlyexpirationend && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend)) dt_systemconfiguration_readonlyexpirationend_local_str = strdup(dt_systemconfiguration_readonlyexpirationend->valuestring);

    systemconfiguration_request_v2_local_var = systemconfiguration_request_v2_create_internal (
        pki_systemconfiguration_id_local_var,
        fki_branding_id_local_var,
        e_systemconfiguration_newexternaluseraction_local_nonprim,
        e_systemconfiguration_language1_local_nonprim,
        e_systemconfiguration_language2_local_nonprim,
        e_systemconfiguration_ezsignofficeplan ? e_systemconfiguration_ezsignofficeplan_local_nonprim : 0,
        b_systemconfiguration_ezsignpaidbyoffice_local_var,
        b_systemconfiguration_ezsignpersonnal_local_var,
        b_systemconfiguration_sspr_local_var,
        dt_systemconfiguration_readonlyexpirationstart_local_str,
        dt_systemconfiguration_readonlyexpirationend_local_str,
        i_systemconfiguration_ezsignreminderhoursend_local_var
        );

    if (!systemconfiguration_request_v2_local_var) {
        goto end;
    }

    return systemconfiguration_request_v2_local_var;
end:
    if (pki_systemconfiguration_id_local_var) {
        free(pki_systemconfiguration_id_local_var);
        pki_systemconfiguration_id_local_var = NULL;
    }
    if (fki_branding_id_local_var) {
        free(fki_branding_id_local_var);
        fki_branding_id_local_var = NULL;
    }
    if (e_systemconfiguration_newexternaluseraction_local_nonprim) {
        e_systemconfiguration_newexternaluseraction_local_nonprim = 0;
    }
    if (e_systemconfiguration_language1_local_nonprim) {
        e_systemconfiguration_language1_local_nonprim = 0;
    }
    if (e_systemconfiguration_language2_local_nonprim) {
        e_systemconfiguration_language2_local_nonprim = 0;
    }
    if (e_systemconfiguration_ezsignofficeplan_local_nonprim) {
        e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;
    }
    if (b_systemconfiguration_ezsignpaidbyoffice_local_var) {
        free(b_systemconfiguration_ezsignpaidbyoffice_local_var);
        b_systemconfiguration_ezsignpaidbyoffice_local_var = NULL;
    }
    if (b_systemconfiguration_ezsignpersonnal_local_var) {
        free(b_systemconfiguration_ezsignpersonnal_local_var);
        b_systemconfiguration_ezsignpersonnal_local_var = NULL;
    }
    if (b_systemconfiguration_sspr_local_var) {
        free(b_systemconfiguration_sspr_local_var);
        b_systemconfiguration_sspr_local_var = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationstart_local_str) {
        free(dt_systemconfiguration_readonlyexpirationstart_local_str);
        dt_systemconfiguration_readonlyexpirationstart_local_str = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationend_local_str) {
        free(dt_systemconfiguration_readonlyexpirationend_local_str);
        dt_systemconfiguration_readonlyexpirationend_local_str = NULL;
    }
    if (i_systemconfiguration_ezsignreminderhoursend_local_var) {
        free(i_systemconfiguration_ezsignreminderhoursend_local_var);
        i_systemconfiguration_ezsignreminderhoursend_local_var = NULL;
    }
    return NULL;

}
