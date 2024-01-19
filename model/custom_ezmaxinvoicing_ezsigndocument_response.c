#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxinvoicing_ezsigndocument_response.h"



custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_create(
    int fki_ezsignfolder_id,
    int fki_billingentityinternal_id,
    char *s_name,
    char *s_ezsignfolder_description,
    char *s_ezsigndocument_name,
    int b_ezsignfolder_allowed
    ) {
    custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_local_var = malloc(sizeof(custom_ezmaxinvoicing_ezsigndocument_response_t));
    if (!custom_ezmaxinvoicing_ezsigndocument_response_local_var) {
        return NULL;
    }
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->s_name = s_name;
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    custom_ezmaxinvoicing_ezsigndocument_response_local_var->b_ezsignfolder_allowed = b_ezsignfolder_allowed;

    return custom_ezmaxinvoicing_ezsigndocument_response_local_var;
}


void custom_ezmaxinvoicing_ezsigndocument_response_free(custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response) {
    if(NULL == custom_ezmaxinvoicing_ezsigndocument_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxinvoicing_ezsigndocument_response->s_name) {
        free(custom_ezmaxinvoicing_ezsigndocument_response->s_name);
        custom_ezmaxinvoicing_ezsigndocument_response->s_name = NULL;
    }
    if (custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description) {
        free(custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description);
        custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description = NULL;
    }
    if (custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name) {
        free(custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name);
        custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name = NULL;
    }
    free(custom_ezmaxinvoicing_ezsigndocument_response);
}

cJSON *custom_ezmaxinvoicing_ezsigndocument_response_convertToJSON(custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxinvoicing_ezsigndocument_response->fki_ezsignfolder_id
    if (!custom_ezmaxinvoicing_ezsigndocument_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_ezmaxinvoicing_ezsigndocument_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxinvoicing_ezsigndocument_response->fki_billingentityinternal_id
    if(custom_ezmaxinvoicing_ezsigndocument_response->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", custom_ezmaxinvoicing_ezsigndocument_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezmaxinvoicing_ezsigndocument_response->s_name
    if (!custom_ezmaxinvoicing_ezsigndocument_response->s_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sName", custom_ezmaxinvoicing_ezsigndocument_response->s_name) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description
    if (!custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name
    if (!custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxinvoicing_ezsigndocument_response->b_ezsignfolder_allowed
    if (!custom_ezmaxinvoicing_ezsigndocument_response->b_ezsignfolder_allowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderAllowed", custom_ezmaxinvoicing_ezsigndocument_response->b_ezsignfolder_allowed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsigndocument_responseJSON){

    custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_local_var = NULL;

    // custom_ezmaxinvoicing_ezsigndocument_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezmaxinvoicing_ezsigndocument_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezmaxinvoicing_ezsigndocument_response->s_name
    cJSON *s_name = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "sName");
    if (!s_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_name))
    {
    goto end; //String
    }

    // custom_ezmaxinvoicing_ezsigndocument_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezmaxinvoicing_ezsigndocument_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // custom_ezmaxinvoicing_ezsigndocument_response->b_ezsignfolder_allowed
    cJSON *b_ezsignfolder_allowed = cJSON_GetObjectItemCaseSensitive(custom_ezmaxinvoicing_ezsigndocument_responseJSON, "bEzsignfolderAllowed");
    if (!b_ezsignfolder_allowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_allowed))
    {
    goto end; //Bool
    }


    custom_ezmaxinvoicing_ezsigndocument_response_local_var = custom_ezmaxinvoicing_ezsigndocument_response_create (
        fki_ezsignfolder_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        strdup(s_name->valuestring),
        strdup(s_ezsignfolder_description->valuestring),
        strdup(s_ezsigndocument_name->valuestring),
        b_ezsignfolder_allowed->valueint
        );

    return custom_ezmaxinvoicing_ezsigndocument_response_local_var;
end:
    return NULL;

}
