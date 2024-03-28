#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_request.h"



ezsignsigningreason_request_t *ezsignsigningreason_request_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
    ) {
    ezsignsigningreason_request_t *ezsignsigningreason_request_local_var = malloc(sizeof(ezsignsigningreason_request_t));
    if (!ezsignsigningreason_request_local_var) {
        return NULL;
    }
    ezsignsigningreason_request_local_var->pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    ezsignsigningreason_request_local_var->obj_ezsignsigningreason_description = obj_ezsignsigningreason_description;
    ezsignsigningreason_request_local_var->b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;

    return ezsignsigningreason_request_local_var;
}


void ezsignsigningreason_request_free(ezsignsigningreason_request_t *ezsignsigningreason_request) {
    if(NULL == ezsignsigningreason_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_request->obj_ezsignsigningreason_description) {
        multilingual_ezsignsigningreason_description_free(ezsignsigningreason_request->obj_ezsignsigningreason_description);
        ezsignsigningreason_request->obj_ezsignsigningreason_description = NULL;
    }
    free(ezsignsigningreason_request);
}

cJSON *ezsignsigningreason_request_convertToJSON(ezsignsigningreason_request_t *ezsignsigningreason_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_request->pki_ezsignsigningreason_id
    if(ezsignsigningreason_request->pki_ezsignsigningreason_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsigningreasonID", ezsignsigningreason_request->pki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigningreason_request->obj_ezsignsigningreason_description
    if (!ezsignsigningreason_request->obj_ezsignsigningreason_description) {
        goto fail;
    }
    cJSON *obj_ezsignsigningreason_description_local_JSON = multilingual_ezsignsigningreason_description_convertToJSON(ezsignsigningreason_request->obj_ezsignsigningreason_description);
    if(obj_ezsignsigningreason_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigningreasonDescription", obj_ezsignsigningreason_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsigningreason_request->b_ezsignsigningreason_isactive
    if (!ezsignsigningreason_request->b_ezsignsigningreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignsigningreasonIsactive", ezsignsigningreason_request->b_ezsignsigningreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_request_t *ezsignsigningreason_request_parseFromJSON(cJSON *ezsignsigningreason_requestJSON){

    ezsignsigningreason_request_t *ezsignsigningreason_request_local_var = NULL;

    // define the local variable for ezsignsigningreason_request->obj_ezsignsigningreason_description
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description_local_nonprim = NULL;

    // ezsignsigningreason_request->pki_ezsignsigningreason_id
    cJSON *pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_requestJSON, "pkiEzsignsigningreasonID");
    if (pki_ezsignsigningreason_id) { 
    if(!cJSON_IsNumber(pki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigningreason_request->obj_ezsignsigningreason_description
    cJSON *obj_ezsignsigningreason_description = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_requestJSON, "objEzsignsigningreasonDescription");
    if (!obj_ezsignsigningreason_description) {
        goto end;
    }

    
    obj_ezsignsigningreason_description_local_nonprim = multilingual_ezsignsigningreason_description_parseFromJSON(obj_ezsignsigningreason_description); //nonprimitive

    // ezsignsigningreason_request->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_requestJSON, "bEzsignsigningreasonIsactive");
    if (!b_ezsignsigningreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignsigningreason_isactive))
    {
    goto end; //Bool
    }


    ezsignsigningreason_request_local_var = ezsignsigningreason_request_create (
        pki_ezsignsigningreason_id ? pki_ezsignsigningreason_id->valuedouble : 0,
        obj_ezsignsigningreason_description_local_nonprim,
        b_ezsignsigningreason_isactive->valueint
        );

    return ezsignsigningreason_request_local_var;
end:
    if (obj_ezsignsigningreason_description_local_nonprim) {
        multilingual_ezsignsigningreason_description_free(obj_ezsignsigningreason_description_local_nonprim);
        obj_ezsignsigningreason_description_local_nonprim = NULL;
    }
    return NULL;

}