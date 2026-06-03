#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_request_patch.h"



static creditcardclient_request_patch_t *creditcardclient_request_patch_create_internal(
    int *b_creditcardclientrelation_isdefault
    ) {
    creditcardclient_request_patch_t *creditcardclient_request_patch_local_var = malloc(sizeof(creditcardclient_request_patch_t));
    if (!creditcardclient_request_patch_local_var) {
        return NULL;
    }
    memset(creditcardclient_request_patch_local_var, 0, sizeof(creditcardclient_request_patch_t));
    creditcardclient_request_patch_local_var->_library_owned = 1;
    creditcardclient_request_patch_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    return creditcardclient_request_patch_local_var;
}

__attribute__((deprecated)) creditcardclient_request_patch_t *creditcardclient_request_patch_create(
    int *b_creditcardclientrelation_isdefault
    ) {
    int *b_creditcardclientrelation_isdefault_copy = NULL;
    if (b_creditcardclientrelation_isdefault) {
        b_creditcardclientrelation_isdefault_copy = malloc(sizeof(int));
        if (b_creditcardclientrelation_isdefault_copy) *b_creditcardclientrelation_isdefault_copy = *b_creditcardclientrelation_isdefault;
    }
    creditcardclient_request_patch_t *result = creditcardclient_request_patch_create_internal (
        b_creditcardclientrelation_isdefault_copy
        );
    if (!result) {
        free(b_creditcardclientrelation_isdefault_copy);
    }
    return result;
}

void creditcardclient_request_patch_free(creditcardclient_request_patch_t *creditcardclient_request_patch) {
    if(NULL == creditcardclient_request_patch){
        return ;
    }
    if(creditcardclient_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_request_patch->b_creditcardclientrelation_isdefault) {
        free(creditcardclient_request_patch->b_creditcardclientrelation_isdefault);
        creditcardclient_request_patch->b_creditcardclientrelation_isdefault = NULL;
    }
    free(creditcardclient_request_patch);
}

cJSON *creditcardclient_request_patch_convertToJSON(creditcardclient_request_patch_t *creditcardclient_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_request_patch->b_creditcardclientrelation_isdefault
    if(creditcardclient_request_patch->b_creditcardclientrelation_isdefault) {
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", *creditcardclient_request_patch->b_creditcardclientrelation_isdefault) == NULL) {
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

creditcardclient_request_patch_t *creditcardclient_request_patch_parseFromJSON(cJSON *creditcardclient_request_patchJSON){

    creditcardclient_request_patch_t *creditcardclient_request_patch_local_var = NULL;

    // define the local variable for creditcardclient_request_patch->b_creditcardclientrelation_isdefault
    int *b_creditcardclientrelation_isdefault_local_var = NULL;

    // creditcardclient_request_patch->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_patchJSON, "bCreditcardclientrelationIsdefault");
    if (cJSON_IsNull(b_creditcardclientrelation_isdefault)) {
        b_creditcardclientrelation_isdefault = NULL;
    }
    if (b_creditcardclientrelation_isdefault) { 
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }
    b_creditcardclientrelation_isdefault_local_var = malloc(sizeof(int));
    if(!b_creditcardclientrelation_isdefault_local_var)
    {
        goto end;
    }
    *b_creditcardclientrelation_isdefault_local_var = b_creditcardclientrelation_isdefault->valueint;
    }



    creditcardclient_request_patch_local_var = creditcardclient_request_patch_create_internal (
        b_creditcardclientrelation_isdefault_local_var
        );

    if (!creditcardclient_request_patch_local_var) {
        goto end;
    }

    return creditcardclient_request_patch_local_var;
end:
    if (b_creditcardclientrelation_isdefault_local_var) {
        free(b_creditcardclientrelation_isdefault_local_var);
        b_creditcardclientrelation_isdefault_local_var = NULL;
    }
    return NULL;

}
