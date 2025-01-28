#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationattachment_request.h"



static custom_communicationattachment_request_t *custom_communicationattachment_request_create_internal(
    communicationattachment_request_compound_t *obj_communicationattachment,
    common_file_t *obj_communicationexternalattachment
    ) {
    custom_communicationattachment_request_t *custom_communicationattachment_request_local_var = malloc(sizeof(custom_communicationattachment_request_t));
    if (!custom_communicationattachment_request_local_var) {
        return NULL;
    }
    custom_communicationattachment_request_local_var->obj_communicationattachment = obj_communicationattachment;
    custom_communicationattachment_request_local_var->obj_communicationexternalattachment = obj_communicationexternalattachment;

    custom_communicationattachment_request_local_var->_library_owned = 1;
    return custom_communicationattachment_request_local_var;
}

__attribute__((deprecated)) custom_communicationattachment_request_t *custom_communicationattachment_request_create(
    communicationattachment_request_compound_t *obj_communicationattachment,
    common_file_t *obj_communicationexternalattachment
    ) {
    return custom_communicationattachment_request_create_internal (
        obj_communicationattachment,
        obj_communicationexternalattachment
        );
}

void custom_communicationattachment_request_free(custom_communicationattachment_request_t *custom_communicationattachment_request) {
    if(NULL == custom_communicationattachment_request){
        return ;
    }
    if(custom_communicationattachment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_communicationattachment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communicationattachment_request->obj_communicationattachment) {
        communicationattachment_request_compound_free(custom_communicationattachment_request->obj_communicationattachment);
        custom_communicationattachment_request->obj_communicationattachment = NULL;
    }
    if (custom_communicationattachment_request->obj_communicationexternalattachment) {
        common_file_free(custom_communicationattachment_request->obj_communicationexternalattachment);
        custom_communicationattachment_request->obj_communicationexternalattachment = NULL;
    }
    free(custom_communicationattachment_request);
}

cJSON *custom_communicationattachment_request_convertToJSON(custom_communicationattachment_request_t *custom_communicationattachment_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_communicationattachment_request->obj_communicationattachment
    if(custom_communicationattachment_request->obj_communicationattachment) {
    cJSON *obj_communicationattachment_local_JSON = communicationattachment_request_compound_convertToJSON(custom_communicationattachment_request->obj_communicationattachment);
    if(obj_communicationattachment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCommunicationattachment", obj_communicationattachment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_communicationattachment_request->obj_communicationexternalattachment
    if(custom_communicationattachment_request->obj_communicationexternalattachment) {
    cJSON *obj_communicationexternalattachment_local_JSON = common_file_convertToJSON(custom_communicationattachment_request->obj_communicationexternalattachment);
    if(obj_communicationexternalattachment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCommunicationexternalattachment", obj_communicationexternalattachment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_communicationattachment_request_t *custom_communicationattachment_request_parseFromJSON(cJSON *custom_communicationattachment_requestJSON){

    custom_communicationattachment_request_t *custom_communicationattachment_request_local_var = NULL;

    // define the local variable for custom_communicationattachment_request->obj_communicationattachment
    communicationattachment_request_compound_t *obj_communicationattachment_local_nonprim = NULL;

    // define the local variable for custom_communicationattachment_request->obj_communicationexternalattachment
    common_file_t *obj_communicationexternalattachment_local_nonprim = NULL;

    // custom_communicationattachment_request->obj_communicationattachment
    cJSON *obj_communicationattachment = cJSON_GetObjectItemCaseSensitive(custom_communicationattachment_requestJSON, "objCommunicationattachment");
    if (cJSON_IsNull(obj_communicationattachment)) {
        obj_communicationattachment = NULL;
    }
    if (obj_communicationattachment) { 
    obj_communicationattachment_local_nonprim = communicationattachment_request_compound_parseFromJSON(obj_communicationattachment); //nonprimitive
    }

    // custom_communicationattachment_request->obj_communicationexternalattachment
    cJSON *obj_communicationexternalattachment = cJSON_GetObjectItemCaseSensitive(custom_communicationattachment_requestJSON, "objCommunicationexternalattachment");
    if (cJSON_IsNull(obj_communicationexternalattachment)) {
        obj_communicationexternalattachment = NULL;
    }
    if (obj_communicationexternalattachment) { 
    obj_communicationexternalattachment_local_nonprim = common_file_parseFromJSON(obj_communicationexternalattachment); //nonprimitive
    }


    custom_communicationattachment_request_local_var = custom_communicationattachment_request_create_internal (
        obj_communicationattachment ? obj_communicationattachment_local_nonprim : NULL,
        obj_communicationexternalattachment ? obj_communicationexternalattachment_local_nonprim : NULL
        );

    return custom_communicationattachment_request_local_var;
end:
    if (obj_communicationattachment_local_nonprim) {
        communicationattachment_request_compound_free(obj_communicationattachment_local_nonprim);
        obj_communicationattachment_local_nonprim = NULL;
    }
    if (obj_communicationexternalattachment_local_nonprim) {
        common_file_free(obj_communicationexternalattachment_local_nonprim);
        obj_communicationexternalattachment_local_nonprim = NULL;
    }
    return NULL;

}
