#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_creditcardmerchant_response.h"



static custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_create_internal(
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyvisa
    ) {
    custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_local_var = malloc(sizeof(custom_creditcardmerchant_response_t));
    if (!custom_creditcardmerchant_response_local_var) {
        return NULL;
    }
    memset(custom_creditcardmerchant_response_local_var, 0, sizeof(custom_creditcardmerchant_response_t));
    custom_creditcardmerchant_response_local_var->_library_owned = 1;
    custom_creditcardmerchant_response_local_var->b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    custom_creditcardmerchant_response_local_var->b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    custom_creditcardmerchant_response_local_var->b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    return custom_creditcardmerchant_response_local_var;
}

__attribute__((deprecated)) custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_create(
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyvisa
    ) {
    int *b_creditcardmerchant_denyamex_copy = NULL;
    if (b_creditcardmerchant_denyamex) {
        b_creditcardmerchant_denyamex_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denyamex_copy) *b_creditcardmerchant_denyamex_copy = *b_creditcardmerchant_denyamex;
    }
    int *b_creditcardmerchant_denymastercard_copy = NULL;
    if (b_creditcardmerchant_denymastercard) {
        b_creditcardmerchant_denymastercard_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denymastercard_copy) *b_creditcardmerchant_denymastercard_copy = *b_creditcardmerchant_denymastercard;
    }
    int *b_creditcardmerchant_denyvisa_copy = NULL;
    if (b_creditcardmerchant_denyvisa) {
        b_creditcardmerchant_denyvisa_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denyvisa_copy) *b_creditcardmerchant_denyvisa_copy = *b_creditcardmerchant_denyvisa;
    }
    custom_creditcardmerchant_response_t *result = custom_creditcardmerchant_response_create_internal (
        b_creditcardmerchant_denyamex_copy,
        b_creditcardmerchant_denymastercard_copy,
        b_creditcardmerchant_denyvisa_copy
        );
    if (!result) {
        free(b_creditcardmerchant_denyamex_copy);
        free(b_creditcardmerchant_denymastercard_copy);
        free(b_creditcardmerchant_denyvisa_copy);
    }
    return result;
}

void custom_creditcardmerchant_response_free(custom_creditcardmerchant_response_t *custom_creditcardmerchant_response) {
    if(NULL == custom_creditcardmerchant_response){
        return ;
    }
    if(custom_creditcardmerchant_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_creditcardmerchant_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_creditcardmerchant_response->b_creditcardmerchant_denyamex) {
        free(custom_creditcardmerchant_response->b_creditcardmerchant_denyamex);
        custom_creditcardmerchant_response->b_creditcardmerchant_denyamex = NULL;
    }
    if (custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard) {
        free(custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard);
        custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard = NULL;
    }
    if (custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa) {
        free(custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa);
        custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa = NULL;
    }
    free(custom_creditcardmerchant_response);
}

cJSON *custom_creditcardmerchant_response_convertToJSON(custom_creditcardmerchant_response_t *custom_creditcardmerchant_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_creditcardmerchant_response->b_creditcardmerchant_denyamex
    if(custom_creditcardmerchant_response->b_creditcardmerchant_denyamex) {
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyamex", *custom_creditcardmerchant_response->b_creditcardmerchant_denyamex) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard
    if(custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard) {
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenymastercard", *custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa
    if(custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa) {
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyvisa", *custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa) == NULL) {
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

custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_parseFromJSON(cJSON *custom_creditcardmerchant_responseJSON){

    custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_local_var = NULL;

    // define the local variable for custom_creditcardmerchant_response->b_creditcardmerchant_denyamex
    int *b_creditcardmerchant_denyamex_local_var = NULL;

    // define the local variable for custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard
    int *b_creditcardmerchant_denymastercard_local_var = NULL;

    // define the local variable for custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa
    int *b_creditcardmerchant_denyvisa_local_var = NULL;

    // custom_creditcardmerchant_response->b_creditcardmerchant_denyamex
    cJSON *b_creditcardmerchant_denyamex = cJSON_GetObjectItemCaseSensitive(custom_creditcardmerchant_responseJSON, "bCreditcardmerchantDenyamex");
    if (cJSON_IsNull(b_creditcardmerchant_denyamex)) {
        b_creditcardmerchant_denyamex = NULL;
    }
    if (b_creditcardmerchant_denyamex) { 
    if(!cJSON_IsBool(b_creditcardmerchant_denyamex))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denyamex_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denyamex_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denyamex_local_var = b_creditcardmerchant_denyamex->valueint;
    }

    // custom_creditcardmerchant_response->b_creditcardmerchant_denymastercard
    cJSON *b_creditcardmerchant_denymastercard = cJSON_GetObjectItemCaseSensitive(custom_creditcardmerchant_responseJSON, "bCreditcardmerchantDenymastercard");
    if (cJSON_IsNull(b_creditcardmerchant_denymastercard)) {
        b_creditcardmerchant_denymastercard = NULL;
    }
    if (b_creditcardmerchant_denymastercard) { 
    if(!cJSON_IsBool(b_creditcardmerchant_denymastercard))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denymastercard_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denymastercard_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denymastercard_local_var = b_creditcardmerchant_denymastercard->valueint;
    }

    // custom_creditcardmerchant_response->b_creditcardmerchant_denyvisa
    cJSON *b_creditcardmerchant_denyvisa = cJSON_GetObjectItemCaseSensitive(custom_creditcardmerchant_responseJSON, "bCreditcardmerchantDenyvisa");
    if (cJSON_IsNull(b_creditcardmerchant_denyvisa)) {
        b_creditcardmerchant_denyvisa = NULL;
    }
    if (b_creditcardmerchant_denyvisa) { 
    if(!cJSON_IsBool(b_creditcardmerchant_denyvisa))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denyvisa_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denyvisa_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denyvisa_local_var = b_creditcardmerchant_denyvisa->valueint;
    }



    custom_creditcardmerchant_response_local_var = custom_creditcardmerchant_response_create_internal (
        b_creditcardmerchant_denyamex_local_var,
        b_creditcardmerchant_denymastercard_local_var,
        b_creditcardmerchant_denyvisa_local_var
        );

    if (!custom_creditcardmerchant_response_local_var) {
        goto end;
    }

    return custom_creditcardmerchant_response_local_var;
end:
    if (b_creditcardmerchant_denyamex_local_var) {
        free(b_creditcardmerchant_denyamex_local_var);
        b_creditcardmerchant_denyamex_local_var = NULL;
    }
    if (b_creditcardmerchant_denymastercard_local_var) {
        free(b_creditcardmerchant_denymastercard_local_var);
        b_creditcardmerchant_denymastercard_local_var = NULL;
    }
    if (b_creditcardmerchant_denyvisa_local_var) {
        free(b_creditcardmerchant_denyvisa_local_var);
        b_creditcardmerchant_denyvisa_local_var = NULL;
    }
    return NULL;

}
