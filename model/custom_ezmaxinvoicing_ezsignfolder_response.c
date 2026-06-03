#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxinvoicing_ezsignfolder_response.h"



static custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_create_internal(
    int *fki_ezsignfolder_id,
    int *fki_billingentityinternal_id,
    char *s_ezsignfolder_description,
    int *b_ezsigntsarequirement_billable,
    int *b_ezsignfolder_mfaused,
    int *b_ezsignfolder_allowed
    ) {
    custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_local_var = malloc(sizeof(custom_ezmaxinvoicing_ezsignfolder_response_t));
    if (!custom_ezmaxinvoicing_ezsignfolder_response_local_var) {
        return NULL;
    }
    memset(custom_ezmaxinvoicing_ezsignfolder_response_local_var, 0, sizeof(custom_ezmaxinvoicing_ezsignfolder_response_t));
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->_library_owned = 1;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->b_ezsigntsarequirement_billable = b_ezsigntsarequirement_billable;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->b_ezsignfolder_mfaused = b_ezsignfolder_mfaused;
    custom_ezmaxinvoicing_ezsignfolder_response_local_var->b_ezsignfolder_allowed = b_ezsignfolder_allowed;
    return custom_ezmaxinvoicing_ezsignfolder_response_local_var;
}

__attribute__((deprecated)) custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_create(
    int *fki_ezsignfolder_id,
    int *fki_billingentityinternal_id,
    char *s_ezsignfolder_description,
    int *b_ezsigntsarequirement_billable,
    int *b_ezsignfolder_mfaused,
    int *b_ezsignfolder_allowed
    ) {
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    int *fki_billingentityinternal_id_copy = NULL;
    if (fki_billingentityinternal_id) {
        fki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (fki_billingentityinternal_id_copy) *fki_billingentityinternal_id_copy = *fki_billingentityinternal_id;
    }
    int *b_ezsigntsarequirement_billable_copy = NULL;
    if (b_ezsigntsarequirement_billable) {
        b_ezsigntsarequirement_billable_copy = malloc(sizeof(int));
        if (b_ezsigntsarequirement_billable_copy) *b_ezsigntsarequirement_billable_copy = *b_ezsigntsarequirement_billable;
    }
    int *b_ezsignfolder_mfaused_copy = NULL;
    if (b_ezsignfolder_mfaused) {
        b_ezsignfolder_mfaused_copy = malloc(sizeof(int));
        if (b_ezsignfolder_mfaused_copy) *b_ezsignfolder_mfaused_copy = *b_ezsignfolder_mfaused;
    }
    int *b_ezsignfolder_allowed_copy = NULL;
    if (b_ezsignfolder_allowed) {
        b_ezsignfolder_allowed_copy = malloc(sizeof(int));
        if (b_ezsignfolder_allowed_copy) *b_ezsignfolder_allowed_copy = *b_ezsignfolder_allowed;
    }
    custom_ezmaxinvoicing_ezsignfolder_response_t *result = custom_ezmaxinvoicing_ezsignfolder_response_create_internal (
        fki_ezsignfolder_id_copy,
        fki_billingentityinternal_id_copy,
        s_ezsignfolder_description,
        b_ezsigntsarequirement_billable_copy,
        b_ezsignfolder_mfaused_copy,
        b_ezsignfolder_allowed_copy
        );
    if (!result) {
        free(fki_ezsignfolder_id_copy);
        free(fki_billingentityinternal_id_copy);
        free(b_ezsigntsarequirement_billable_copy);
        free(b_ezsignfolder_mfaused_copy);
        free(b_ezsignfolder_allowed_copy);
    }
    return result;
}

void custom_ezmaxinvoicing_ezsignfolder_response_free(custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response) {
    if(NULL == custom_ezmaxinvoicing_ezsignfolder_response){
        return ;
    }
    if(custom_ezmaxinvoicing_ezsignfolder_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezmaxinvoicing_ezsignfolder_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id);
        custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id = NULL;
    }
    if (custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id);
        custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id = NULL;
    }
    if (custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description);
        custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description = NULL;
    }
    if (custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable);
        custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable = NULL;
    }
    if (custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused);
        custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused = NULL;
    }
    if (custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed) {
        free(custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed);
        custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed = NULL;
    }
    free(custom_ezmaxinvoicing_ezsignfolder_response);
}

cJSON *custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id
    if (!custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id
    if(custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", *custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description
    if (!custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable
    if (!custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntsarequirementBillable", *custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable) == NULL) {
    goto fail; //Bool
    }


    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused
    if (!custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderMfaused", *custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused) == NULL) {
    goto fail; //Bool
    }


    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed
    if (!custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderAllowed", *custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsignfolder_responseJSON){

    custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_local_var = NULL;

    // define the local variable for custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id
    int *fki_billingentityinternal_id_local_var = NULL;

    char *s_ezsignfolder_description_local_str = NULL;

    // define the local variable for custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable
    int *b_ezsigntsarequirement_billable_local_var = NULL;

    // define the local variable for custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused
    int *b_ezsignfolder_mfaused_local_var = NULL;

    // define the local variable for custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed
    int *b_ezsignfolder_allowed_local_var = NULL;

    // custom_ezmaxinvoicing_ezsignfolder_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;

    // custom_ezmaxinvoicing_ezsignfolder_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    fki_billingentityinternal_id_local_var = malloc(sizeof(int));
    if(!fki_billingentityinternal_id_local_var)
    {
        goto end;
    }
    *fki_billingentityinternal_id_local_var = fki_billingentityinternal_id->valuedouble;
    }

    // custom_ezmaxinvoicing_ezsignfolder_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsigntsarequirement_billable
    cJSON *b_ezsigntsarequirement_billable = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "bEzsigntsarequirementBillable");
    if (cJSON_IsNull(b_ezsigntsarequirement_billable)) {
        b_ezsigntsarequirement_billable = NULL;
    }
    if (!b_ezsigntsarequirement_billable) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntsarequirement_billable))
    {
    goto end; //Bool
    }
    b_ezsigntsarequirement_billable_local_var = malloc(sizeof(int));
    if(!b_ezsigntsarequirement_billable_local_var)
    {
        goto end;
    }
    *b_ezsigntsarequirement_billable_local_var = b_ezsigntsarequirement_billable->valueint;

    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_mfaused
    cJSON *b_ezsignfolder_mfaused = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "bEzsignfolderMfaused");
    if (cJSON_IsNull(b_ezsignfolder_mfaused)) {
        b_ezsignfolder_mfaused = NULL;
    }
    if (!b_ezsignfolder_mfaused) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_mfaused))
    {
    goto end; //Bool
    }
    b_ezsignfolder_mfaused_local_var = malloc(sizeof(int));
    if(!b_ezsignfolder_mfaused_local_var)
    {
        goto end;
    }
    *b_ezsignfolder_mfaused_local_var = b_ezsignfolder_mfaused->valueint;

    // custom_ezmaxinvoicing_ezsignfolder_response->b_ezsignfolder_allowed
    cJSON *b_ezsignfolder_allowed = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_responseJSON, "bEzsignfolderAllowed");
    if (cJSON_IsNull(b_ezsignfolder_allowed)) {
        b_ezsignfolder_allowed = NULL;
    }
    if (!b_ezsignfolder_allowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_allowed))
    {
    goto end; //Bool
    }
    b_ezsignfolder_allowed_local_var = malloc(sizeof(int));
    if(!b_ezsignfolder_allowed_local_var)
    {
        goto end;
    }
    *b_ezsignfolder_allowed_local_var = b_ezsignfolder_allowed->valueint;


    if (s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description)) s_ezsignfolder_description_local_str = strdup(s_ezsignfolder_description->valuestring);

    custom_ezmaxinvoicing_ezsignfolder_response_local_var = custom_ezmaxinvoicing_ezsignfolder_response_create_internal (
        fki_ezsignfolder_id_local_var,
        fki_billingentityinternal_id_local_var,
        s_ezsignfolder_description_local_str,
        b_ezsigntsarequirement_billable_local_var,
        b_ezsignfolder_mfaused_local_var,
        b_ezsignfolder_allowed_local_var
        );

    if (!custom_ezmaxinvoicing_ezsignfolder_response_local_var) {
        goto end;
    }

    return custom_ezmaxinvoicing_ezsignfolder_response_local_var;
end:
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (fki_billingentityinternal_id_local_var) {
        free(fki_billingentityinternal_id_local_var);
        fki_billingentityinternal_id_local_var = NULL;
    }
    if (s_ezsignfolder_description_local_str) {
        free(s_ezsignfolder_description_local_str);
        s_ezsignfolder_description_local_str = NULL;
    }
    if (b_ezsigntsarequirement_billable_local_var) {
        free(b_ezsigntsarequirement_billable_local_var);
        b_ezsigntsarequirement_billable_local_var = NULL;
    }
    if (b_ezsignfolder_mfaused_local_var) {
        free(b_ezsignfolder_mfaused_local_var);
        b_ezsignfolder_mfaused_local_var = NULL;
    }
    if (b_ezsignfolder_allowed_local_var) {
        free(b_ezsignfolder_allowed_local_var);
        b_ezsignfolder_allowed_local_var = NULL;
    }
    return NULL;

}
