#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_map_v1_request.h"



static userstaged_map_v1_request_t *userstaged_map_v1_request_create_internal(
    int *fki_user_id
    ) {
    userstaged_map_v1_request_t *userstaged_map_v1_request_local_var = malloc(sizeof(userstaged_map_v1_request_t));
    if (!userstaged_map_v1_request_local_var) {
        return NULL;
    }
    memset(userstaged_map_v1_request_local_var, 0, sizeof(userstaged_map_v1_request_t));
    userstaged_map_v1_request_local_var->_library_owned = 1;
    userstaged_map_v1_request_local_var->fki_user_id = fki_user_id;
    return userstaged_map_v1_request_local_var;
}

__attribute__((deprecated)) userstaged_map_v1_request_t *userstaged_map_v1_request_create(
    int *fki_user_id
    ) {
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    userstaged_map_v1_request_t *result = userstaged_map_v1_request_create_internal (
        fki_user_id_copy
        );
    if (!result) {
        free(fki_user_id_copy);
    }
    return result;
}

void userstaged_map_v1_request_free(userstaged_map_v1_request_t *userstaged_map_v1_request) {
    if(NULL == userstaged_map_v1_request){
        return ;
    }
    if(userstaged_map_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_map_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_map_v1_request->fki_user_id) {
        free(userstaged_map_v1_request->fki_user_id);
        userstaged_map_v1_request->fki_user_id = NULL;
    }
    free(userstaged_map_v1_request);
}

cJSON *userstaged_map_v1_request_convertToJSON(userstaged_map_v1_request_t *userstaged_map_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_map_v1_request->fki_user_id
    if (!userstaged_map_v1_request->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", *userstaged_map_v1_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_map_v1_request_t *userstaged_map_v1_request_parseFromJSON(cJSON *userstaged_map_v1_requestJSON){

    userstaged_map_v1_request_t *userstaged_map_v1_request_local_var = NULL;

    // define the local variable for userstaged_map_v1_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // userstaged_map_v1_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(userstaged_map_v1_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;



    userstaged_map_v1_request_local_var = userstaged_map_v1_request_create_internal (
        fki_user_id_local_var
        );

    if (!userstaged_map_v1_request_local_var) {
        goto end;
    }

    return userstaged_map_v1_request_local_var;
end:
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    return NULL;

}
