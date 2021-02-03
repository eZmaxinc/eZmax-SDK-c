#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_request_compound.h"



apikey_request_compound_t *apikey_request_compound_create(
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description
    ) {
    apikey_request_compound_t *apikey_request_compound_local_var = malloc(sizeof(apikey_request_compound_t));
    if (!apikey_request_compound_local_var) {
        return NULL;
    }
    apikey_request_compound_local_var->fki_user_id = fki_user_id;
    apikey_request_compound_local_var->obj_apikey_description = obj_apikey_description;

    return apikey_request_compound_local_var;
}


void apikey_request_compound_free(apikey_request_compound_t *apikey_request_compound) {
    if(NULL == apikey_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_request_compound->obj_apikey_description) {
        multilingual_apikey_description_free(apikey_request_compound->obj_apikey_description);
        apikey_request_compound->obj_apikey_description = NULL;
    }
    free(apikey_request_compound);
}

cJSON *apikey_request_compound_convertToJSON(apikey_request_compound_t *apikey_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // apikey_request_compound->fki_user_id
    if (!apikey_request_compound->fki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserID", apikey_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_request_compound->obj_apikey_description
    if (!apikey_request_compound->obj_apikey_description) {
        goto fail;
    }
    
    cJSON *obj_apikey_description_local_JSON = multilingual_apikey_description_convertToJSON(apikey_request_compound->obj_apikey_description);
    if(obj_apikey_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyDescription", obj_apikey_description_local_JSON);
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

apikey_request_compound_t *apikey_request_compound_parseFromJSON(cJSON *apikey_request_compoundJSON){

    apikey_request_compound_t *apikey_request_compound_local_var = NULL;

    // apikey_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // apikey_request_compound->obj_apikey_description
    cJSON *obj_apikey_description = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "objApikeyDescription");
    if (!obj_apikey_description) {
        goto end;
    }

    multilingual_apikey_description_t *obj_apikey_description_local_nonprim = NULL;
    
    obj_apikey_description_local_nonprim = multilingual_apikey_description_parseFromJSON(obj_apikey_description); //nonprimitive


    apikey_request_compound_local_var = apikey_request_compound_create (
        fki_user_id->valuedouble,
        obj_apikey_description_local_nonprim
        );

    return apikey_request_compound_local_var;
end:
    if (obj_apikey_description_local_nonprim) {
        multilingual_apikey_description_free(obj_apikey_description_local_nonprim);
        obj_apikey_description_local_nonprim = NULL;
    }
    return NULL;

}
