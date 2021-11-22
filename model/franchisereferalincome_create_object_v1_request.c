#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_create_object_v1_request.h"



franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_create(
    franchisereferalincome_request_t *obj_franchisereferalincome,
    franchisereferalincome_request_compound_t *obj_franchisereferalincome_compound
    ) {
    franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_local_var = malloc(sizeof(franchisereferalincome_create_object_v1_request_t));
    if (!franchisereferalincome_create_object_v1_request_local_var) {
        return NULL;
    }
    franchisereferalincome_create_object_v1_request_local_var->obj_franchisereferalincome = obj_franchisereferalincome;
    franchisereferalincome_create_object_v1_request_local_var->obj_franchisereferalincome_compound = obj_franchisereferalincome_compound;

    return franchisereferalincome_create_object_v1_request_local_var;
}


void franchisereferalincome_create_object_v1_request_free(franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request) {
    if(NULL == franchisereferalincome_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_create_object_v1_request->obj_franchisereferalincome) {
        franchisereferalincome_request_free(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome);
        franchisereferalincome_create_object_v1_request->obj_franchisereferalincome = NULL;
    }
    if (franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound) {
        franchisereferalincome_request_compound_free(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound);
        franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound = NULL;
    }
    free(franchisereferalincome_create_object_v1_request);
}

cJSON *franchisereferalincome_create_object_v1_request_convertToJSON(franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_create_object_v1_request->obj_franchisereferalincome
    if(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome) { 
    cJSON *obj_franchisereferalincome_local_JSON = franchisereferalincome_request_convertToJSON(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome);
    if(obj_franchisereferalincome_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objFranchisereferalincome", obj_franchisereferalincome_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound
    if(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound) { 
    cJSON *obj_franchisereferalincome_compound_local_JSON = franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound);
    if(obj_franchisereferalincome_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objFranchisereferalincomeCompound", obj_franchisereferalincome_compound_local_JSON);
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

franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_parseFromJSON(cJSON *franchisereferalincome_create_object_v1_requestJSON){

    franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_local_var = NULL;

    // define the local variable for franchisereferalincome_create_object_v1_request->obj_franchisereferalincome
    franchisereferalincome_request_t *obj_franchisereferalincome_local_nonprim = NULL;

    // define the local variable for franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound
    franchisereferalincome_request_compound_t *obj_franchisereferalincome_compound_local_nonprim = NULL;

    // franchisereferalincome_create_object_v1_request->obj_franchisereferalincome
    cJSON *obj_franchisereferalincome = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_create_object_v1_requestJSON, "objFranchisereferalincome");
    if (obj_franchisereferalincome) { 
    obj_franchisereferalincome_local_nonprim = franchisereferalincome_request_parseFromJSON(obj_franchisereferalincome); //nonprimitive
    }

    // franchisereferalincome_create_object_v1_request->obj_franchisereferalincome_compound
    cJSON *obj_franchisereferalincome_compound = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_create_object_v1_requestJSON, "objFranchisereferalincomeCompound");
    if (obj_franchisereferalincome_compound) { 
    obj_franchisereferalincome_compound_local_nonprim = franchisereferalincome_request_compound_parseFromJSON(obj_franchisereferalincome_compound); //nonprimitive
    }


    franchisereferalincome_create_object_v1_request_local_var = franchisereferalincome_create_object_v1_request_create (
        obj_franchisereferalincome ? obj_franchisereferalincome_local_nonprim : NULL,
        obj_franchisereferalincome_compound ? obj_franchisereferalincome_compound_local_nonprim : NULL
        );

    return franchisereferalincome_create_object_v1_request_local_var;
end:
    if (obj_franchisereferalincome_local_nonprim) {
        franchisereferalincome_request_free(obj_franchisereferalincome_local_nonprim);
        obj_franchisereferalincome_local_nonprim = NULL;
    }
    if (obj_franchisereferalincome_compound_local_nonprim) {
        franchisereferalincome_request_compound_free(obj_franchisereferalincome_compound_local_nonprim);
        obj_franchisereferalincome_compound_local_nonprim = NULL;
    }
    return NULL;

}
