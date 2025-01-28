#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_response.h"



static ezsignsigningreason_response_t *ezsignsigningreason_response_create_internal(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
    ) {
    ezsignsigningreason_response_t *ezsignsigningreason_response_local_var = malloc(sizeof(ezsignsigningreason_response_t));
    if (!ezsignsigningreason_response_local_var) {
        return NULL;
    }
    ezsignsigningreason_response_local_var->pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    ezsignsigningreason_response_local_var->obj_ezsignsigningreason_description = obj_ezsignsigningreason_description;
    ezsignsigningreason_response_local_var->b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;

    ezsignsigningreason_response_local_var->_library_owned = 1;
    return ezsignsigningreason_response_local_var;
}

__attribute__((deprecated)) ezsignsigningreason_response_t *ezsignsigningreason_response_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
    ) {
    return ezsignsigningreason_response_create_internal (
        pki_ezsignsigningreason_id,
        obj_ezsignsigningreason_description,
        b_ezsignsigningreason_isactive
        );
}

void ezsignsigningreason_response_free(ezsignsigningreason_response_t *ezsignsigningreason_response) {
    if(NULL == ezsignsigningreason_response){
        return ;
    }
    if(ezsignsigningreason_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigningreason_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_response->obj_ezsignsigningreason_description) {
        multilingual_ezsignsigningreason_description_free(ezsignsigningreason_response->obj_ezsignsigningreason_description);
        ezsignsigningreason_response->obj_ezsignsigningreason_description = NULL;
    }
    free(ezsignsigningreason_response);
}

cJSON *ezsignsigningreason_response_convertToJSON(ezsignsigningreason_response_t *ezsignsigningreason_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_response->pki_ezsignsigningreason_id
    if (!ezsignsigningreason_response->pki_ezsignsigningreason_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsigningreasonID", ezsignsigningreason_response->pki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_response->obj_ezsignsigningreason_description
    if (!ezsignsigningreason_response->obj_ezsignsigningreason_description) {
        goto fail;
    }
    cJSON *obj_ezsignsigningreason_description_local_JSON = multilingual_ezsignsigningreason_description_convertToJSON(ezsignsigningreason_response->obj_ezsignsigningreason_description);
    if(obj_ezsignsigningreason_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigningreasonDescription", obj_ezsignsigningreason_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsigningreason_response->b_ezsignsigningreason_isactive
    if (!ezsignsigningreason_response->b_ezsignsigningreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignsigningreasonIsactive", ezsignsigningreason_response->b_ezsignsigningreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_response_t *ezsignsigningreason_response_parseFromJSON(cJSON *ezsignsigningreason_responseJSON){

    ezsignsigningreason_response_t *ezsignsigningreason_response_local_var = NULL;

    // define the local variable for ezsignsigningreason_response->obj_ezsignsigningreason_description
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description_local_nonprim = NULL;

    // ezsignsigningreason_response->pki_ezsignsigningreason_id
    cJSON *pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_responseJSON, "pkiEzsignsigningreasonID");
    if (cJSON_IsNull(pki_ezsignsigningreason_id)) {
        pki_ezsignsigningreason_id = NULL;
    }
    if (!pki_ezsignsigningreason_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }

    // ezsignsigningreason_response->obj_ezsignsigningreason_description
    cJSON *obj_ezsignsigningreason_description = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_responseJSON, "objEzsignsigningreasonDescription");
    if (cJSON_IsNull(obj_ezsignsigningreason_description)) {
        obj_ezsignsigningreason_description = NULL;
    }
    if (!obj_ezsignsigningreason_description) {
        goto end;
    }

    
    obj_ezsignsigningreason_description_local_nonprim = multilingual_ezsignsigningreason_description_parseFromJSON(obj_ezsignsigningreason_description); //nonprimitive

    // ezsignsigningreason_response->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_responseJSON, "bEzsignsigningreasonIsactive");
    if (cJSON_IsNull(b_ezsignsigningreason_isactive)) {
        b_ezsignsigningreason_isactive = NULL;
    }
    if (!b_ezsignsigningreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignsigningreason_isactive))
    {
    goto end; //Bool
    }


    ezsignsigningreason_response_local_var = ezsignsigningreason_response_create_internal (
        pki_ezsignsigningreason_id->valuedouble,
        obj_ezsignsigningreason_description_local_nonprim,
        b_ezsignsigningreason_isactive->valueint
        );

    return ezsignsigningreason_response_local_var;
end:
    if (obj_ezsignsigningreason_description_local_nonprim) {
        multilingual_ezsignsigningreason_description_free(obj_ezsignsigningreason_description_local_nonprim);
        obj_ezsignsigningreason_description_local_nonprim = NULL;
    }
    return NULL;

}
