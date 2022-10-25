#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxinvoicing_ezsignfolder_response_all_of.h"



custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_create(
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    int b_ezsigntsarequirement_billable,
    int b_ezsignfolder_mfaused,
    int b_ezsignfolder_paymentused,
    int b_ezsignfolder_allowed
    ) {
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var = malloc(sizeof(custom_ezmaxinvoicing_ezsignfolder_response_all_of_t));
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var) {
        return NULL;
    }
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->b_ezsigntsarequirement_billable = b_ezsigntsarequirement_billable;
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->b_ezsignfolder_mfaused = b_ezsignfolder_mfaused;
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->b_ezsignfolder_paymentused = b_ezsignfolder_paymentused;
    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var->b_ezsignfolder_allowed = b_ezsignfolder_allowed;

    return custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var;
}


void custom_ezmaxinvoicing_ezsignfolder_response_all_of_free(custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of) {
    if(NULL == custom_ezmaxinvoicing_ezsignfolder_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description) {
        free(custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description);
        custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description = NULL;
    }
    free(custom_ezmaxinvoicing_ezsignfolder_response_all_of);
}

cJSON *custom_ezmaxinvoicing_ezsignfolder_response_all_of_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->fki_ezsignfolder_id
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_ezmaxinvoicing_ezsignfolder_response_all_of->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsigntsarequirement_billable
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsigntsarequirement_billable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntsarequirementBillable", custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsigntsarequirement_billable) == NULL) {
    goto fail; //Bool
    }


    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_mfaused
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_mfaused) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderMfaused", custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_mfaused) == NULL) {
    goto fail; //Bool
    }


    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_paymentused
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_paymentused) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderPaymentused", custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_paymentused) == NULL) {
    goto fail; //Bool
    }


    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_allowed
    if (!custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_allowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderAllowed", custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_allowed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON){

    custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var = NULL;

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsigntsarequirement_billable
    cJSON *b_ezsigntsarequirement_billable = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "bEzsigntsarequirementBillable");
    if (!b_ezsigntsarequirement_billable) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntsarequirement_billable))
    {
    goto end; //Bool
    }

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_mfaused
    cJSON *b_ezsignfolder_mfaused = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "bEzsignfolderMfaused");
    if (!b_ezsignfolder_mfaused) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_mfaused))
    {
    goto end; //Bool
    }

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_paymentused
    cJSON *b_ezsignfolder_paymentused = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "bEzsignfolderPaymentused");
    if (!b_ezsignfolder_paymentused) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_paymentused))
    {
    goto end; //Bool
    }

    // custom_ezmaxinvoicing_ezsignfolder_response_all_of->b_ezsignfolder_allowed
    cJSON *b_ezsignfolder_allowed = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON, "bEzsignfolderAllowed");
    if (!b_ezsignfolder_allowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_allowed))
    {
    goto end; //Bool
    }


    custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var = custom_ezmaxinvoicing_ezsignfolder_response_all_of_create (
        fki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        b_ezsigntsarequirement_billable->valueint,
        b_ezsignfolder_mfaused->valueint,
        b_ezsignfolder_paymentused->valueint,
        b_ezsignfolder_allowed->valueint
        );

    return custom_ezmaxinvoicing_ezsignfolder_response_all_of_local_var;
end:
    return NULL;

}
