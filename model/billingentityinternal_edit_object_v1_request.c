#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_edit_object_v1_request.h"



static billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_create_internal(
    billingentityinternal_request_compound_t *obj_billingentityinternal
    ) {
    billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_local_var = malloc(sizeof(billingentityinternal_edit_object_v1_request_t));
    if (!billingentityinternal_edit_object_v1_request_local_var) {
        return NULL;
    }
    billingentityinternal_edit_object_v1_request_local_var->obj_billingentityinternal = obj_billingentityinternal;

    billingentityinternal_edit_object_v1_request_local_var->_library_owned = 1;
    return billingentityinternal_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_create(
    billingentityinternal_request_compound_t *obj_billingentityinternal
    ) {
    return billingentityinternal_edit_object_v1_request_create_internal (
        obj_billingentityinternal
        );
}

void billingentityinternal_edit_object_v1_request_free(billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request) {
    if(NULL == billingentityinternal_edit_object_v1_request){
        return ;
    }
    if(billingentityinternal_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_edit_object_v1_request->obj_billingentityinternal) {
        billingentityinternal_request_compound_free(billingentityinternal_edit_object_v1_request->obj_billingentityinternal);
        billingentityinternal_edit_object_v1_request->obj_billingentityinternal = NULL;
    }
    free(billingentityinternal_edit_object_v1_request);
}

cJSON *billingentityinternal_edit_object_v1_request_convertToJSON(billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_edit_object_v1_request->obj_billingentityinternal
    if (!billingentityinternal_edit_object_v1_request->obj_billingentityinternal) {
        goto fail;
    }
    cJSON *obj_billingentityinternal_local_JSON = billingentityinternal_request_compound_convertToJSON(billingentityinternal_edit_object_v1_request->obj_billingentityinternal);
    if(obj_billingentityinternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBillingentityinternal", obj_billingentityinternal_local_JSON);
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

billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_parseFromJSON(cJSON *billingentityinternal_edit_object_v1_requestJSON){

    billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_local_var = NULL;

    // define the local variable for billingentityinternal_edit_object_v1_request->obj_billingentityinternal
    billingentityinternal_request_compound_t *obj_billingentityinternal_local_nonprim = NULL;

    // billingentityinternal_edit_object_v1_request->obj_billingentityinternal
    cJSON *obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_edit_object_v1_requestJSON, "objBillingentityinternal");
    if (cJSON_IsNull(obj_billingentityinternal)) {
        obj_billingentityinternal = NULL;
    }
    if (!obj_billingentityinternal) {
        goto end;
    }

    
    obj_billingentityinternal_local_nonprim = billingentityinternal_request_compound_parseFromJSON(obj_billingentityinternal); //nonprimitive


    billingentityinternal_edit_object_v1_request_local_var = billingentityinternal_edit_object_v1_request_create_internal (
        obj_billingentityinternal_local_nonprim
        );

    return billingentityinternal_edit_object_v1_request_local_var;
end:
    if (obj_billingentityinternal_local_nonprim) {
        billingentityinternal_request_compound_free(obj_billingentityinternal_local_nonprim);
        obj_billingentityinternal_local_nonprim = NULL;
    }
    return NULL;

}
