#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_request.h"



apikey_request_t *apikey_request_create(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description
    ) {
    apikey_request_t *apikey_request_local_var = malloc(sizeof(apikey_request_t));
    if (!apikey_request_local_var) {
        return NULL;
    }
    apikey_request_local_var->pki_apikey_id = pki_apikey_id;
    apikey_request_local_var->fki_user_id = fki_user_id;
    apikey_request_local_var->obj_apikey_description = obj_apikey_description;

    return apikey_request_local_var;
}


void apikey_request_free(apikey_request_t *apikey_request) {
    if(NULL == apikey_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_request->obj_apikey_description) {
        multilingual_apikey_description_free(apikey_request->obj_apikey_description);
        apikey_request->obj_apikey_description = NULL;
    }
    free(apikey_request);
}

cJSON *apikey_request_convertToJSON(apikey_request_t *apikey_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_request->pki_apikey_id
    if(apikey_request->pki_apikey_id) { 
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", apikey_request->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // apikey_request->fki_user_id
    if (!apikey_request->fki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserID", apikey_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_request->obj_apikey_description
    if (!apikey_request->obj_apikey_description) {
        goto fail;
    }
    
    cJSON *obj_apikey_description_local_JSON = multilingual_apikey_description_convertToJSON(apikey_request->obj_apikey_description);
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

apikey_request_t *apikey_request_parseFromJSON(cJSON *apikey_requestJSON){

    apikey_request_t *apikey_request_local_var = NULL;

    // define the local variable for apikey_request->obj_apikey_description
    multilingual_apikey_description_t *obj_apikey_description_local_nonprim = NULL;

    // apikey_request->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(apikey_requestJSON, "pkiApikeyID");
    if (pki_apikey_id) { 
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // apikey_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(apikey_requestJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // apikey_request->obj_apikey_description
    cJSON *obj_apikey_description = cJSON_GetObjectItemCaseSensitive(apikey_requestJSON, "objApikeyDescription");
    if (!obj_apikey_description) {
        goto end;
    }

    
    obj_apikey_description_local_nonprim = multilingual_apikey_description_parseFromJSON(obj_apikey_description); //nonprimitive


    apikey_request_local_var = apikey_request_create (
        pki_apikey_id ? pki_apikey_id->valuedouble : 0,
        fki_user_id->valuedouble,
        obj_apikey_description_local_nonprim
        );

    return apikey_request_local_var;
end:
    if (obj_apikey_description_local_nonprim) {
        multilingual_apikey_description_free(obj_apikey_description_local_nonprim);
        obj_apikey_description_local_nonprim = NULL;
    }
    return NULL;

}
