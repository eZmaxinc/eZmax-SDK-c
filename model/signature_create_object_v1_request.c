#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_create_object_v1_request.h"



signature_create_object_v1_request_t *signature_create_object_v1_request_create(
    list_t *a_obj_signature
    ) {
    signature_create_object_v1_request_t *signature_create_object_v1_request_local_var = malloc(sizeof(signature_create_object_v1_request_t));
    if (!signature_create_object_v1_request_local_var) {
        return NULL;
    }
    signature_create_object_v1_request_local_var->a_obj_signature = a_obj_signature;

    return signature_create_object_v1_request_local_var;
}


void signature_create_object_v1_request_free(signature_create_object_v1_request_t *signature_create_object_v1_request) {
    if(NULL == signature_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_create_object_v1_request->a_obj_signature) {
        list_ForEach(listEntry, signature_create_object_v1_request->a_obj_signature) {
            signature_request_compound_free(listEntry->data);
        }
        list_freeList(signature_create_object_v1_request->a_obj_signature);
        signature_create_object_v1_request->a_obj_signature = NULL;
    }
    free(signature_create_object_v1_request);
}

cJSON *signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request_t *signature_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // signature_create_object_v1_request->a_obj_signature
    if (!signature_create_object_v1_request->a_obj_signature) {
        goto fail;
    }
    cJSON *a_obj_signature = cJSON_AddArrayToObject(item, "a_objSignature");
    if(a_obj_signature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_signatureListEntry;
    if (signature_create_object_v1_request->a_obj_signature) {
    list_ForEach(a_obj_signatureListEntry, signature_create_object_v1_request->a_obj_signature) {
    cJSON *itemLocal = signature_request_compound_convertToJSON(a_obj_signatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_signature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signature_create_object_v1_request_t *signature_create_object_v1_request_parseFromJSON(cJSON *signature_create_object_v1_requestJSON){

    signature_create_object_v1_request_t *signature_create_object_v1_request_local_var = NULL;

    // define the local list for signature_create_object_v1_request->a_obj_signature
    list_t *a_obj_signatureList = NULL;

    // signature_create_object_v1_request->a_obj_signature
    cJSON *a_obj_signature = cJSON_GetObjectItemCaseSensitive(signature_create_object_v1_requestJSON, "a_objSignature");
    if (!a_obj_signature) {
        goto end;
    }

    
    cJSON *a_obj_signature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_signature)){
        goto end; //nonprimitive container
    }

    a_obj_signatureList = list_createList();

    cJSON_ArrayForEach(a_obj_signature_local_nonprimitive,a_obj_signature )
    {
        if(!cJSON_IsObject(a_obj_signature_local_nonprimitive)){
            goto end;
        }
        signature_request_compound_t *a_obj_signatureItem = signature_request_compound_parseFromJSON(a_obj_signature_local_nonprimitive);

        list_addElement(a_obj_signatureList, a_obj_signatureItem);
    }


    signature_create_object_v1_request_local_var = signature_create_object_v1_request_create (
        a_obj_signatureList
        );

    return signature_create_object_v1_request_local_var;
end:
    if (a_obj_signatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_signatureList) {
            signature_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_signatureList);
        a_obj_signatureList = NULL;
    }
    return NULL;

}
