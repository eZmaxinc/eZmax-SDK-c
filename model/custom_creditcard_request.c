#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_creditcard_request.h"



static custom_creditcard_request_t *custom_creditcard_request_create_internal(
    char *fks_creditcardtoken_id,
    char *s_creditcard_cvv,
    creditcarddetail_request_t *obj_creditcarddetail
    ) {
    custom_creditcard_request_t *custom_creditcard_request_local_var = malloc(sizeof(custom_creditcard_request_t));
    if (!custom_creditcard_request_local_var) {
        return NULL;
    }
    custom_creditcard_request_local_var->fks_creditcardtoken_id = fks_creditcardtoken_id;
    custom_creditcard_request_local_var->s_creditcard_cvv = s_creditcard_cvv;
    custom_creditcard_request_local_var->obj_creditcarddetail = obj_creditcarddetail;

    custom_creditcard_request_local_var->_library_owned = 1;
    return custom_creditcard_request_local_var;
}

__attribute__((deprecated)) custom_creditcard_request_t *custom_creditcard_request_create(
    char *fks_creditcardtoken_id,
    char *s_creditcard_cvv,
    creditcarddetail_request_t *obj_creditcarddetail
    ) {
    return custom_creditcard_request_create_internal (
        fks_creditcardtoken_id,
        s_creditcard_cvv,
        obj_creditcarddetail
        );
}

void custom_creditcard_request_free(custom_creditcard_request_t *custom_creditcard_request) {
    if(NULL == custom_creditcard_request){
        return ;
    }
    if(custom_creditcard_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_creditcard_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_creditcard_request->fks_creditcardtoken_id) {
        free(custom_creditcard_request->fks_creditcardtoken_id);
        custom_creditcard_request->fks_creditcardtoken_id = NULL;
    }
    if (custom_creditcard_request->s_creditcard_cvv) {
        free(custom_creditcard_request->s_creditcard_cvv);
        custom_creditcard_request->s_creditcard_cvv = NULL;
    }
    if (custom_creditcard_request->obj_creditcarddetail) {
        creditcarddetail_request_free(custom_creditcard_request->obj_creditcarddetail);
        custom_creditcard_request->obj_creditcarddetail = NULL;
    }
    free(custom_creditcard_request);
}

cJSON *custom_creditcard_request_convertToJSON(custom_creditcard_request_t *custom_creditcard_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_creditcard_request->fks_creditcardtoken_id
    if (!custom_creditcard_request->fks_creditcardtoken_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fksCreditcardtokenID", custom_creditcard_request->fks_creditcardtoken_id) == NULL) {
    goto fail; //String
    }


    // custom_creditcard_request->s_creditcard_cvv
    if (!custom_creditcard_request->s_creditcard_cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardCVV", custom_creditcard_request->s_creditcard_cvv) == NULL) {
    goto fail; //String
    }


    // custom_creditcard_request->obj_creditcarddetail
    if (!custom_creditcard_request->obj_creditcarddetail) {
        goto fail;
    }
    cJSON *obj_creditcarddetail_local_JSON = creditcarddetail_request_convertToJSON(custom_creditcard_request->obj_creditcarddetail);
    if(obj_creditcarddetail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcarddetail", obj_creditcarddetail_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_creditcard_request_t *custom_creditcard_request_parseFromJSON(cJSON *custom_creditcard_requestJSON){

    custom_creditcard_request_t *custom_creditcard_request_local_var = NULL;

    // define the local variable for custom_creditcard_request->obj_creditcarddetail
    creditcarddetail_request_t *obj_creditcarddetail_local_nonprim = NULL;

    // custom_creditcard_request->fks_creditcardtoken_id
    cJSON *fks_creditcardtoken_id = cJSON_GetObjectItemCaseSensitive(custom_creditcard_requestJSON, "fksCreditcardtokenID");
    if (cJSON_IsNull(fks_creditcardtoken_id)) {
        fks_creditcardtoken_id = NULL;
    }
    if (!fks_creditcardtoken_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fks_creditcardtoken_id))
    {
    goto end; //String
    }

    // custom_creditcard_request->s_creditcard_cvv
    cJSON *s_creditcard_cvv = cJSON_GetObjectItemCaseSensitive(custom_creditcard_requestJSON, "sCreditcardCVV");
    if (cJSON_IsNull(s_creditcard_cvv)) {
        s_creditcard_cvv = NULL;
    }
    if (!s_creditcard_cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcard_cvv))
    {
    goto end; //String
    }

    // custom_creditcard_request->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(custom_creditcard_requestJSON, "objCreditcarddetail");
    if (cJSON_IsNull(obj_creditcarddetail)) {
        obj_creditcarddetail = NULL;
    }
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_request_parseFromJSON(obj_creditcarddetail); //nonprimitive


    custom_creditcard_request_local_var = custom_creditcard_request_create_internal (
        strdup(fks_creditcardtoken_id->valuestring),
        strdup(s_creditcard_cvv->valuestring),
        obj_creditcarddetail_local_nonprim
        );

    return custom_creditcard_request_local_var;
end:
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_request_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    return NULL;

}
