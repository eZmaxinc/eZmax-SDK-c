#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_response.h"



static systemconfiguration_response_t *systemconfiguration_response_create_internal(
    int pki_systemconfiguration_id,
    int fki_systemconfigurationtype_id,
    int fki_branding_id,
    char *s_systemconfigurationtype_description_x,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_hascreditcardmerchant,
    int b_systemconfiguration_isdisposalactive,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    custom_branding_response_t *obj_branding
    ) {
    systemconfiguration_response_t *systemconfiguration_response_local_var = malloc(sizeof(systemconfiguration_response_t));
    if (!systemconfiguration_response_local_var) {
        return NULL;
    }
    systemconfiguration_response_local_var->pki_systemconfiguration_id = pki_systemconfiguration_id;
    systemconfiguration_response_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    systemconfiguration_response_local_var->fki_branding_id = fki_branding_id;
    systemconfiguration_response_local_var->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    systemconfiguration_response_local_var->e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    systemconfiguration_response_local_var->e_systemconfiguration_language1 = e_systemconfiguration_language1;
    systemconfiguration_response_local_var->e_systemconfiguration_language2 = e_systemconfiguration_language2;
    systemconfiguration_response_local_var->e_systemconfiguration_ezsign = e_systemconfiguration_ezsign;
    systemconfiguration_response_local_var->e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    systemconfiguration_response_local_var->b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    systemconfiguration_response_local_var->b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    systemconfiguration_response_local_var->b_systemconfiguration_hascreditcardmerchant = b_systemconfiguration_hascreditcardmerchant;
    systemconfiguration_response_local_var->b_systemconfiguration_isdisposalactive = b_systemconfiguration_isdisposalactive;
    systemconfiguration_response_local_var->b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    systemconfiguration_response_local_var->dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    systemconfiguration_response_local_var->dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;
    systemconfiguration_response_local_var->obj_branding = obj_branding;

    systemconfiguration_response_local_var->_library_owned = 1;
    return systemconfiguration_response_local_var;
}

__attribute__((deprecated)) systemconfiguration_response_t *systemconfiguration_response_create(
    int pki_systemconfiguration_id,
    int fki_systemconfigurationtype_id,
    int fki_branding_id,
    char *s_systemconfigurationtype_description_x,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_hascreditcardmerchant,
    int b_systemconfiguration_isdisposalactive,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    custom_branding_response_t *obj_branding
    ) {
    return systemconfiguration_response_create_internal (
        pki_systemconfiguration_id,
        fki_systemconfigurationtype_id,
        fki_branding_id,
        s_systemconfigurationtype_description_x,
        e_systemconfiguration_newexternaluseraction,
        e_systemconfiguration_language1,
        e_systemconfiguration_language2,
        e_systemconfiguration_ezsign,
        e_systemconfiguration_ezsignofficeplan,
        b_systemconfiguration_ezsignpaidbyoffice,
        b_systemconfiguration_ezsignpersonnal,
        b_systemconfiguration_hascreditcardmerchant,
        b_systemconfiguration_isdisposalactive,
        b_systemconfiguration_sspr,
        dt_systemconfiguration_readonlyexpirationstart,
        dt_systemconfiguration_readonlyexpirationend,
        obj_branding
        );
}

void systemconfiguration_response_free(systemconfiguration_response_t *systemconfiguration_response) {
    if(NULL == systemconfiguration_response){
        return ;
    }
    if(systemconfiguration_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfiguration_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_response->s_systemconfigurationtype_description_x) {
        free(systemconfiguration_response->s_systemconfigurationtype_description_x);
        systemconfiguration_response->s_systemconfigurationtype_description_x = NULL;
    }
    if (systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart) {
        free(systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart);
        systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend) {
        free(systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend);
        systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    if (systemconfiguration_response->obj_branding) {
        custom_branding_response_free(systemconfiguration_response->obj_branding);
        systemconfiguration_response->obj_branding = NULL;
    }
    free(systemconfiguration_response);
}

cJSON *systemconfiguration_response_convertToJSON(systemconfiguration_response_t *systemconfiguration_response) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_response->pki_systemconfiguration_id
    if (!systemconfiguration_response->pki_systemconfiguration_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationID", systemconfiguration_response->pki_systemconfiguration_id) == NULL) {
    goto fail; //Numeric
    }


    // systemconfiguration_response->fki_systemconfigurationtype_id
    if (!systemconfiguration_response->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", systemconfiguration_response->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // systemconfiguration_response->fki_branding_id
    if(systemconfiguration_response->fki_branding_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", systemconfiguration_response->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // systemconfiguration_response->s_systemconfigurationtype_description_x
    if (!systemconfiguration_response->s_systemconfigurationtype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescriptionX", systemconfiguration_response->s_systemconfigurationtype_description_x) == NULL) {
    goto fail; //String
    }


    // systemconfiguration_response->e_systemconfiguration_newexternaluseraction
    if (ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__NULL == systemconfiguration_response->e_systemconfiguration_newexternaluseraction) {
        goto fail;
    }
    cJSON *e_systemconfiguration_newexternaluseraction_local_JSON = field_e_systemconfiguration_newexternaluseraction_convertToJSON(systemconfiguration_response->e_systemconfiguration_newexternaluseraction);
    if(e_systemconfiguration_newexternaluseraction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationNewexternaluseraction", e_systemconfiguration_newexternaluseraction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_response->e_systemconfiguration_language1
    if (ezmax_api_definition__full_field_e_systemconfiguration_language1__NULL == systemconfiguration_response->e_systemconfiguration_language1) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language1_local_JSON = field_e_systemconfiguration_language1_convertToJSON(systemconfiguration_response->e_systemconfiguration_language1);
    if(e_systemconfiguration_language1_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage1", e_systemconfiguration_language1_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_response->e_systemconfiguration_language2
    if (ezmax_api_definition__full_field_e_systemconfiguration_language2__NULL == systemconfiguration_response->e_systemconfiguration_language2) {
        goto fail;
    }
    cJSON *e_systemconfiguration_language2_local_JSON = field_e_systemconfiguration_language2_convertToJSON(systemconfiguration_response->e_systemconfiguration_language2);
    if(e_systemconfiguration_language2_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationLanguage2", e_systemconfiguration_language2_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // systemconfiguration_response->e_systemconfiguration_ezsign
    if(systemconfiguration_response->e_systemconfiguration_ezsign != ezmax_api_definition__full_field_e_systemconfiguration_ezsign__NULL) {
    cJSON *e_systemconfiguration_ezsign_local_JSON = field_e_systemconfiguration_ezsign_convertToJSON(systemconfiguration_response->e_systemconfiguration_ezsign);
    if(e_systemconfiguration_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsign", e_systemconfiguration_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_response->e_systemconfiguration_ezsignofficeplan
    if(systemconfiguration_response->e_systemconfiguration_ezsignofficeplan != ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__NULL) {
    cJSON *e_systemconfiguration_ezsignofficeplan_local_JSON = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(systemconfiguration_response->e_systemconfiguration_ezsignofficeplan);
    if(e_systemconfiguration_ezsignofficeplan_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsignofficeplan", e_systemconfiguration_ezsignofficeplan_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // systemconfiguration_response->b_systemconfiguration_ezsignpaidbyoffice
    if(systemconfiguration_response->b_systemconfiguration_ezsignpaidbyoffice) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpaidbyoffice", systemconfiguration_response->b_systemconfiguration_ezsignpaidbyoffice) == NULL) {
    goto fail; //Bool
    }
    }


    // systemconfiguration_response->b_systemconfiguration_ezsignpersonnal
    if (!systemconfiguration_response->b_systemconfiguration_ezsignpersonnal) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpersonnal", systemconfiguration_response->b_systemconfiguration_ezsignpersonnal) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_response->b_systemconfiguration_hascreditcardmerchant
    if(systemconfiguration_response->b_systemconfiguration_hascreditcardmerchant) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationHascreditcardmerchant", systemconfiguration_response->b_systemconfiguration_hascreditcardmerchant) == NULL) {
    goto fail; //Bool
    }
    }


    // systemconfiguration_response->b_systemconfiguration_isdisposalactive
    if(systemconfiguration_response->b_systemconfiguration_isdisposalactive) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationIsdisposalactive", systemconfiguration_response->b_systemconfiguration_isdisposalactive) == NULL) {
    goto fail; //Bool
    }
    }


    // systemconfiguration_response->b_systemconfiguration_sspr
    if (!systemconfiguration_response->b_systemconfiguration_sspr) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationSspr", systemconfiguration_response->b_systemconfiguration_sspr) == NULL) {
    goto fail; //Bool
    }


    // systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart
    if(systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationstart", systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend
    if(systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend) {
    if(cJSON_AddStringToObject(item, "dtSystemconfigurationReadonlyexpirationend", systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend) == NULL) {
    goto fail; //String
    }
    }


    // systemconfiguration_response->obj_branding
    if(systemconfiguration_response->obj_branding) {
    cJSON *obj_branding_local_JSON = custom_branding_response_convertToJSON(systemconfiguration_response->obj_branding);
    if(obj_branding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBranding", obj_branding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

systemconfiguration_response_t *systemconfiguration_response_parseFromJSON(cJSON *systemconfiguration_responseJSON){

    systemconfiguration_response_t *systemconfiguration_response_local_var = NULL;

    // define the local variable for systemconfiguration_response->e_systemconfiguration_newexternaluseraction
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction_local_nonprim = 0;

    // define the local variable for systemconfiguration_response->e_systemconfiguration_language1
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1_local_nonprim = 0;

    // define the local variable for systemconfiguration_response->e_systemconfiguration_language2
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2_local_nonprim = 0;

    // define the local variable for systemconfiguration_response->e_systemconfiguration_ezsign
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign_local_nonprim = 0;

    // define the local variable for systemconfiguration_response->e_systemconfiguration_ezsignofficeplan
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;

    // define the local variable for systemconfiguration_response->obj_branding
    custom_branding_response_t *obj_branding_local_nonprim = NULL;

    // systemconfiguration_response->pki_systemconfiguration_id
    cJSON *pki_systemconfiguration_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "pkiSystemconfigurationID");
    if (cJSON_IsNull(pki_systemconfiguration_id)) {
        pki_systemconfiguration_id = NULL;
    }
    if (!pki_systemconfiguration_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_systemconfiguration_id))
    {
    goto end; //Numeric
    }

    // systemconfiguration_response->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // systemconfiguration_response->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "fkiBrandingID");
    if (cJSON_IsNull(fki_branding_id)) {
        fki_branding_id = NULL;
    }
    if (fki_branding_id) { 
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }
    }

    // systemconfiguration_response->s_systemconfigurationtype_description_x
    cJSON *s_systemconfigurationtype_description_x = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "sSystemconfigurationtypeDescriptionX");
    if (cJSON_IsNull(s_systemconfigurationtype_description_x)) {
        s_systemconfigurationtype_description_x = NULL;
    }
    if (!s_systemconfigurationtype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_systemconfigurationtype_description_x))
    {
    goto end; //String
    }

    // systemconfiguration_response->e_systemconfiguration_newexternaluseraction
    cJSON *e_systemconfiguration_newexternaluseraction = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "eSystemconfigurationNewexternaluseraction");
    if (cJSON_IsNull(e_systemconfiguration_newexternaluseraction)) {
        e_systemconfiguration_newexternaluseraction = NULL;
    }
    if (!e_systemconfiguration_newexternaluseraction) {
        goto end;
    }

    
    e_systemconfiguration_newexternaluseraction_local_nonprim = field_e_systemconfiguration_newexternaluseraction_parseFromJSON(e_systemconfiguration_newexternaluseraction); //custom

    // systemconfiguration_response->e_systemconfiguration_language1
    cJSON *e_systemconfiguration_language1 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "eSystemconfigurationLanguage1");
    if (cJSON_IsNull(e_systemconfiguration_language1)) {
        e_systemconfiguration_language1 = NULL;
    }
    if (!e_systemconfiguration_language1) {
        goto end;
    }

    
    e_systemconfiguration_language1_local_nonprim = field_e_systemconfiguration_language1_parseFromJSON(e_systemconfiguration_language1); //custom

    // systemconfiguration_response->e_systemconfiguration_language2
    cJSON *e_systemconfiguration_language2 = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "eSystemconfigurationLanguage2");
    if (cJSON_IsNull(e_systemconfiguration_language2)) {
        e_systemconfiguration_language2 = NULL;
    }
    if (!e_systemconfiguration_language2) {
        goto end;
    }

    
    e_systemconfiguration_language2_local_nonprim = field_e_systemconfiguration_language2_parseFromJSON(e_systemconfiguration_language2); //custom

    // systemconfiguration_response->e_systemconfiguration_ezsign
    cJSON *e_systemconfiguration_ezsign = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "eSystemconfigurationEzsign");
    if (cJSON_IsNull(e_systemconfiguration_ezsign)) {
        e_systemconfiguration_ezsign = NULL;
    }
    if (e_systemconfiguration_ezsign) { 
    e_systemconfiguration_ezsign_local_nonprim = field_e_systemconfiguration_ezsign_parseFromJSON(e_systemconfiguration_ezsign); //custom
    }

    // systemconfiguration_response->e_systemconfiguration_ezsignofficeplan
    cJSON *e_systemconfiguration_ezsignofficeplan = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "eSystemconfigurationEzsignofficeplan");
    if (cJSON_IsNull(e_systemconfiguration_ezsignofficeplan)) {
        e_systemconfiguration_ezsignofficeplan = NULL;
    }
    if (e_systemconfiguration_ezsignofficeplan) { 
    e_systemconfiguration_ezsignofficeplan_local_nonprim = field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(e_systemconfiguration_ezsignofficeplan); //custom
    }

    // systemconfiguration_response->b_systemconfiguration_ezsignpaidbyoffice
    cJSON *b_systemconfiguration_ezsignpaidbyoffice = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "bSystemconfigurationEzsignpaidbyoffice");
    if (cJSON_IsNull(b_systemconfiguration_ezsignpaidbyoffice)) {
        b_systemconfiguration_ezsignpaidbyoffice = NULL;
    }
    if (b_systemconfiguration_ezsignpaidbyoffice) { 
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpaidbyoffice))
    {
    goto end; //Bool
    }
    }

    // systemconfiguration_response->b_systemconfiguration_ezsignpersonnal
    cJSON *b_systemconfiguration_ezsignpersonnal = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "bSystemconfigurationEzsignpersonnal");
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

    // systemconfiguration_response->b_systemconfiguration_hascreditcardmerchant
    cJSON *b_systemconfiguration_hascreditcardmerchant = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "bSystemconfigurationHascreditcardmerchant");
    if (cJSON_IsNull(b_systemconfiguration_hascreditcardmerchant)) {
        b_systemconfiguration_hascreditcardmerchant = NULL;
    }
    if (b_systemconfiguration_hascreditcardmerchant) { 
    if(!cJSON_IsBool(b_systemconfiguration_hascreditcardmerchant))
    {
    goto end; //Bool
    }
    }

    // systemconfiguration_response->b_systemconfiguration_isdisposalactive
    cJSON *b_systemconfiguration_isdisposalactive = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "bSystemconfigurationIsdisposalactive");
    if (cJSON_IsNull(b_systemconfiguration_isdisposalactive)) {
        b_systemconfiguration_isdisposalactive = NULL;
    }
    if (b_systemconfiguration_isdisposalactive) { 
    if(!cJSON_IsBool(b_systemconfiguration_isdisposalactive))
    {
    goto end; //Bool
    }
    }

    // systemconfiguration_response->b_systemconfiguration_sspr
    cJSON *b_systemconfiguration_sspr = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "bSystemconfigurationSspr");
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

    // systemconfiguration_response->dt_systemconfiguration_readonlyexpirationstart
    cJSON *dt_systemconfiguration_readonlyexpirationstart = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "dtSystemconfigurationReadonlyexpirationstart");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart)) {
        dt_systemconfiguration_readonlyexpirationstart = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationstart) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationstart) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart))
    {
    goto end; //String
    }
    }

    // systemconfiguration_response->dt_systemconfiguration_readonlyexpirationend
    cJSON *dt_systemconfiguration_readonlyexpirationend = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "dtSystemconfigurationReadonlyexpirationend");
    if (cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend)) {
        dt_systemconfiguration_readonlyexpirationend = NULL;
    }
    if (dt_systemconfiguration_readonlyexpirationend) { 
    if(!cJSON_IsString(dt_systemconfiguration_readonlyexpirationend) && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend))
    {
    goto end; //String
    }
    }

    // systemconfiguration_response->obj_branding
    cJSON *obj_branding = cJSON_GetObjectItemCaseSensitive(systemconfiguration_responseJSON, "objBranding");
    if (cJSON_IsNull(obj_branding)) {
        obj_branding = NULL;
    }
    if (obj_branding) { 
    obj_branding_local_nonprim = custom_branding_response_parseFromJSON(obj_branding); //nonprimitive
    }


    systemconfiguration_response_local_var = systemconfiguration_response_create_internal (
        pki_systemconfiguration_id->valuedouble,
        fki_systemconfigurationtype_id->valuedouble,
        fki_branding_id ? fki_branding_id->valuedouble : 0,
        strdup(s_systemconfigurationtype_description_x->valuestring),
        e_systemconfiguration_newexternaluseraction_local_nonprim,
        e_systemconfiguration_language1_local_nonprim,
        e_systemconfiguration_language2_local_nonprim,
        e_systemconfiguration_ezsign ? e_systemconfiguration_ezsign_local_nonprim : 0,
        e_systemconfiguration_ezsignofficeplan ? e_systemconfiguration_ezsignofficeplan_local_nonprim : 0,
        b_systemconfiguration_ezsignpaidbyoffice ? b_systemconfiguration_ezsignpaidbyoffice->valueint : 0,
        b_systemconfiguration_ezsignpersonnal->valueint,
        b_systemconfiguration_hascreditcardmerchant ? b_systemconfiguration_hascreditcardmerchant->valueint : 0,
        b_systemconfiguration_isdisposalactive ? b_systemconfiguration_isdisposalactive->valueint : 0,
        b_systemconfiguration_sspr->valueint,
        dt_systemconfiguration_readonlyexpirationstart && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationstart) ? strdup(dt_systemconfiguration_readonlyexpirationstart->valuestring) : NULL,
        dt_systemconfiguration_readonlyexpirationend && !cJSON_IsNull(dt_systemconfiguration_readonlyexpirationend) ? strdup(dt_systemconfiguration_readonlyexpirationend->valuestring) : NULL,
        obj_branding ? obj_branding_local_nonprim : NULL
        );

    return systemconfiguration_response_local_var;
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
    if (obj_branding_local_nonprim) {
        custom_branding_response_free(obj_branding_local_nonprim);
        obj_branding_local_nonprim = NULL;
    }
    return NULL;

}
