#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignsignature_ezsignsignatures_automatic_response.h"



static custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_create_internal(
    int pki_ezsignsignature_id,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    int i_ezsignpage_pagenumber
    ) {
    custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_local_var = malloc(sizeof(custom_ezsignsignature_ezsignsignatures_automatic_response_t));
    if (!custom_ezsignsignature_ezsignsignatures_automatic_response_local_var) {
        return NULL;
    }
    custom_ezsignsignature_ezsignsignatures_automatic_response_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    custom_ezsignsignature_ezsignsignatures_automatic_response_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    custom_ezsignsignature_ezsignsignatures_automatic_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;

    custom_ezsignsignature_ezsignsignatures_automatic_response_local_var->_library_owned = 1;
    return custom_ezsignsignature_ezsignsignatures_automatic_response_local_var;
}

__attribute__((deprecated)) custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_create(
    int pki_ezsignsignature_id,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    int i_ezsignpage_pagenumber
    ) {
    return custom_ezsignsignature_ezsignsignatures_automatic_response_create_internal (
        pki_ezsignsignature_id,
        e_ezsignsignature_type,
        i_ezsignpage_pagenumber
        );
}

void custom_ezsignsignature_ezsignsignatures_automatic_response_free(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response) {
    if(NULL == custom_ezsignsignature_ezsignsignatures_automatic_response){
        return ;
    }
    if(custom_ezsignsignature_ezsignsignatures_automatic_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignsignature_ezsignsignatures_automatic_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(custom_ezsignsignature_ezsignsignatures_automatic_response);
}

cJSON *custom_ezsignsignature_ezsignsignatures_automatic_response_convertToJSON(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignsignature_ezsignsignatures_automatic_response->pki_ezsignsignature_id
    if (!custom_ezsignsignature_ezsignsignatures_automatic_response->pki_ezsignsignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", custom_ezsignsignature_ezsignsignatures_automatic_response->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_ezsignsignatures_automatic_response->e_ezsignsignature_type
    if (ezmax_api_definition__full_field_e_ezsignsignature_type__NULL == custom_ezsignsignature_ezsignsignatures_automatic_response->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(custom_ezsignsignature_ezsignsignatures_automatic_response->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignsignature_ezsignsignatures_automatic_response->i_ezsignpage_pagenumber
    if (!custom_ezsignsignature_ezsignsignatures_automatic_response->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", custom_ezsignsignature_ezsignsignatures_automatic_response->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsignsignature_ezsignsignatures_automatic_responseJSON){

    custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_local_var = NULL;

    // define the local variable for custom_ezsignsignature_ezsignsignatures_automatic_response->e_ezsignsignature_type
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type_local_nonprim = 0;

    // custom_ezsignsignature_ezsignsignatures_automatic_response->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_ezsignsignatures_automatic_responseJSON, "pkiEzsignsignatureID");
    if (cJSON_IsNull(pki_ezsignsignature_id)) {
        pki_ezsignsignature_id = NULL;
    }
    if (!pki_ezsignsignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_ezsignsignatures_automatic_response->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_ezsignsignatures_automatic_responseJSON, "eEzsignsignatureType");
    if (cJSON_IsNull(e_ezsignsignature_type)) {
        e_ezsignsignature_type = NULL;
    }
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // custom_ezsignsignature_ezsignsignatures_automatic_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_ezsignsignatures_automatic_responseJSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }


    custom_ezsignsignature_ezsignsignatures_automatic_response_local_var = custom_ezsignsignature_ezsignsignatures_automatic_response_create_internal (
        pki_ezsignsignature_id->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        i_ezsignpage_pagenumber->valuedouble
        );

    return custom_ezsignsignature_ezsignsignatures_automatic_response_local_var;
end:
    if (e_ezsignsignature_type_local_nonprim) {
        e_ezsignsignature_type_local_nonprim = 0;
    }
    return NULL;

}
