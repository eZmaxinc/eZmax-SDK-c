#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_map_v1_request.h"



userstaged_map_v1_request_t *userstaged_map_v1_request_create(
    int fki_user_id
    ) {
    userstaged_map_v1_request_t *userstaged_map_v1_request_local_var = malloc(sizeof(userstaged_map_v1_request_t));
    if (!userstaged_map_v1_request_local_var) {
        return NULL;
    }
    userstaged_map_v1_request_local_var->fki_user_id = fki_user_id;

    return userstaged_map_v1_request_local_var;
}


void userstaged_map_v1_request_free(userstaged_map_v1_request_t *userstaged_map_v1_request) {
    if(NULL == userstaged_map_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(userstaged_map_v1_request);
}

cJSON *userstaged_map_v1_request_convertToJSON(userstaged_map_v1_request_t *userstaged_map_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_map_v1_request->fki_user_id
    if (!userstaged_map_v1_request->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", userstaged_map_v1_request->fki_user_id) == NULL) {
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

    // userstaged_map_v1_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(userstaged_map_v1_requestJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }


    userstaged_map_v1_request_local_var = userstaged_map_v1_request_create (
        fki_user_id->valuedouble
        );

    return userstaged_map_v1_request_local_var;
end:
    return NULL;

}
