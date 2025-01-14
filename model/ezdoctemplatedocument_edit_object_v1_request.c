#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_edit_object_v1_request.h"



ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_create(
    ezdoctemplatedocument_request_compound_t *obj_ezdoctemplatedocument
    ) {
    ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_local_var = malloc(sizeof(ezdoctemplatedocument_edit_object_v1_request_t));
    if (!ezdoctemplatedocument_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_edit_object_v1_request_local_var->obj_ezdoctemplatedocument = obj_ezdoctemplatedocument;

    return ezdoctemplatedocument_edit_object_v1_request_local_var;
}


void ezdoctemplatedocument_edit_object_v1_request_free(ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request) {
    if(NULL == ezdoctemplatedocument_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument) {
        ezdoctemplatedocument_request_compound_free(ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument);
        ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument = NULL;
    }
    free(ezdoctemplatedocument_edit_object_v1_request);
}

cJSON *ezdoctemplatedocument_edit_object_v1_request_convertToJSON(ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument
    if (!ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_local_JSON = ezdoctemplatedocument_request_compound_convertToJSON(ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument);
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

ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_parseFromJSON(cJSON *ezdoctemplatedocument_edit_object_v1_requestJSON){

    ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument
    ezdoctemplatedocument_request_compound_t *obj_ezdoctemplatedocument_local_nonprim = NULL;

    // ezdoctemplatedocument_edit_object_v1_request->obj_ezdoctemplatedocument
    cJSON *obj_ezdoctemplatedocument = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_edit_object_v1_requestJSON, "objEzdoctemplatedocument");
    if (!obj_ezdoctemplatedocument) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_local_nonprim = ezdoctemplatedocument_request_compound_parseFromJSON(obj_ezdoctemplatedocument); //nonprimitive


    ezdoctemplatedocument_edit_object_v1_request_local_var = ezdoctemplatedocument_edit_object_v1_request_create (
        obj_ezdoctemplatedocument_local_nonprim
        );

    return ezdoctemplatedocument_edit_object_v1_request_local_var;
end:
    if (obj_ezdoctemplatedocument_local_nonprim) {
        ezdoctemplatedocument_request_compound_free(obj_ezdoctemplatedocument_local_nonprim);
        obj_ezdoctemplatedocument_local_nonprim = NULL;
    }
    return NULL;

}
