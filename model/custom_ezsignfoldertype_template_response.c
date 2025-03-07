#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertype_template_response.h"



static custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_create_internal(
    int pki_ezsignfoldertype_id,
    int b_ezsignfoldertype_allowdownloadproofezsignsigner
    ) {
    custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_local_var = malloc(sizeof(custom_ezsignfoldertype_template_response_t));
    if (!custom_ezsignfoldertype_template_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldertype_template_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    custom_ezsignfoldertype_template_response_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;

    custom_ezsignfoldertype_template_response_local_var->_library_owned = 1;
    return custom_ezsignfoldertype_template_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_create(
    int pki_ezsignfoldertype_id,
    int b_ezsignfoldertype_allowdownloadproofezsignsigner
    ) {
    return custom_ezsignfoldertype_template_response_create_internal (
        pki_ezsignfoldertype_id,
        b_ezsignfoldertype_allowdownloadproofezsignsigner
        );
}

void custom_ezsignfoldertype_template_response_free(custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response) {
    if(NULL == custom_ezsignfoldertype_template_response){
        return ;
    }
    if(custom_ezsignfoldertype_template_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfoldertype_template_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(custom_ezsignfoldertype_template_response);
}

cJSON *custom_ezsignfoldertype_template_response_convertToJSON(custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldertype_template_response->pki_ezsignfoldertype_id
    if (!custom_ezsignfoldertype_template_response->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", custom_ezsignfoldertype_template_response->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertype_template_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(custom_ezsignfoldertype_template_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", custom_ezsignfoldertype_template_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_parseFromJSON(cJSON *custom_ezsignfoldertype_template_responseJSON){

    custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_local_var = NULL;

    // custom_ezsignfoldertype_template_response->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_template_responseJSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertype_template_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_template_responseJSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadproofezsignsigner)) {
        b_ezsignfoldertype_allowdownloadproofezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    }


    custom_ezsignfoldertype_template_response_local_var = custom_ezsignfoldertype_template_response_create_internal (
        pki_ezsignfoldertype_id->valuedouble,
        b_ezsignfoldertype_allowdownloadproofezsignsigner ? b_ezsignfoldertype_allowdownloadproofezsignsigner->valueint : 0
        );

    return custom_ezsignfoldertype_template_response_local_var;
end:
    return NULL;

}
