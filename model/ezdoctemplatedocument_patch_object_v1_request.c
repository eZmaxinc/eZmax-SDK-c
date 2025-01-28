#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_patch_object_v1_request.h"



static ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_create_internal(
    ezdoctemplatedocument_request_patch_t *obj_ezdoctemplatedocument
    ) {
    ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_local_var = malloc(sizeof(ezdoctemplatedocument_patch_object_v1_request_t));
    if (!ezdoctemplatedocument_patch_object_v1_request_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_patch_object_v1_request_local_var->obj_ezdoctemplatedocument = obj_ezdoctemplatedocument;

    ezdoctemplatedocument_patch_object_v1_request_local_var->_library_owned = 1;
    return ezdoctemplatedocument_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_create(
    ezdoctemplatedocument_request_patch_t *obj_ezdoctemplatedocument
    ) {
    return ezdoctemplatedocument_patch_object_v1_request_create_internal (
        obj_ezdoctemplatedocument
        );
}

void ezdoctemplatedocument_patch_object_v1_request_free(ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request) {
    if(NULL == ezdoctemplatedocument_patch_object_v1_request){
        return ;
    }
    if(ezdoctemplatedocument_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument) {
        ezdoctemplatedocument_request_patch_free(ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument);
        ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument = NULL;
    }
    free(ezdoctemplatedocument_patch_object_v1_request);
}

cJSON *ezdoctemplatedocument_patch_object_v1_request_convertToJSON(ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument
    if (!ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_local_JSON = ezdoctemplatedocument_request_patch_convertToJSON(ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument);
    if(obj_ezdoctemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzdoctemplatedocument", obj_ezdoctemplatedocument_local_JSON);
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

ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_parseFromJSON(cJSON *ezdoctemplatedocument_patch_object_v1_requestJSON){

    ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument
    ezdoctemplatedocument_request_patch_t *obj_ezdoctemplatedocument_local_nonprim = NULL;

    // ezdoctemplatedocument_patch_object_v1_request->obj_ezdoctemplatedocument
    cJSON *obj_ezdoctemplatedocument = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_patch_object_v1_requestJSON, "objEzdoctemplatedocument");
    if (cJSON_IsNull(obj_ezdoctemplatedocument)) {
        obj_ezdoctemplatedocument = NULL;
    }
    if (!obj_ezdoctemplatedocument) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_local_nonprim = ezdoctemplatedocument_request_patch_parseFromJSON(obj_ezdoctemplatedocument); //nonprimitive


    ezdoctemplatedocument_patch_object_v1_request_local_var = ezdoctemplatedocument_patch_object_v1_request_create_internal (
        obj_ezdoctemplatedocument_local_nonprim
        );

    return ezdoctemplatedocument_patch_object_v1_request_local_var;
end:
    if (obj_ezdoctemplatedocument_local_nonprim) {
        ezdoctemplatedocument_request_patch_free(obj_ezdoctemplatedocument_local_nonprim);
        obj_ezdoctemplatedocument_local_nonprim = NULL;
    }
    return NULL;

}
