#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_response_compound.h"



ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
    ) {
    ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_local_var = malloc(sizeof(ezsignsigningreason_response_compound_t));
    if (!ezsignsigningreason_response_compound_local_var) {
        return NULL;
    }
    ezsignsigningreason_response_compound_local_var->pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    ezsignsigningreason_response_compound_local_var->obj_ezsignsigningreason_description = obj_ezsignsigningreason_description;
    ezsignsigningreason_response_compound_local_var->b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;

    return ezsignsigningreason_response_compound_local_var;
}


void ezsignsigningreason_response_compound_free(ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound) {
    if(NULL == ezsignsigningreason_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_response_compound->obj_ezsignsigningreason_description) {
        multilingual_ezsignsigningreason_description_free(ezsignsigningreason_response_compound->obj_ezsignsigningreason_description);
        ezsignsigningreason_response_compound->obj_ezsignsigningreason_description = NULL;
    }
    free(ezsignsigningreason_response_compound);
}

cJSON *ezsignsigningreason_response_compound_convertToJSON(ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_response_compound->pki_ezsignsigningreason_id
    if (!ezsignsigningreason_response_compound->pki_ezsignsigningreason_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsigningreasonID", ezsignsigningreason_response_compound->pki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_response_compound->obj_ezsignsigningreason_description
    if (!ezsignsigningreason_response_compound->obj_ezsignsigningreason_description) {
        goto fail;
    }
    cJSON *obj_ezsignsigningreason_description_local_JSON = multilingual_ezsignsigningreason_description_convertToJSON(ezsignsigningreason_response_compound->obj_ezsignsigningreason_description);
    if(obj_ezsignsigningreason_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigningreasonDescription", obj_ezsignsigningreason_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsigningreason_response_compound->b_ezsignsigningreason_isactive
    if (!ezsignsigningreason_response_compound->b_ezsignsigningreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignsigningreasonIsactive", ezsignsigningreason_response_compound->b_ezsignsigningreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_parseFromJSON(cJSON *ezsignsigningreason_response_compoundJSON){

    ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_local_var = NULL;

    // define the local variable for ezsignsigningreason_response_compound->obj_ezsignsigningreason_description
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description_local_nonprim = NULL;

    // ezsignsigningreason_response_compound->pki_ezsignsigningreason_id
    cJSON *pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_response_compoundJSON, "pkiEzsignsigningreasonID");
    if (!pki_ezsignsigningreason_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }

    // ezsignsigningreason_response_compound->obj_ezsignsigningreason_description
    cJSON *obj_ezsignsigningreason_description = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_response_compoundJSON, "objEzsignsigningreasonDescription");
    if (!obj_ezsignsigningreason_description) {
        goto end;
    }

    
    obj_ezsignsigningreason_description_local_nonprim = multilingual_ezsignsigningreason_description_parseFromJSON(obj_ezsignsigningreason_description); //nonprimitive

    // ezsignsigningreason_response_compound->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_response_compoundJSON, "bEzsignsigningreasonIsactive");
    if (!b_ezsignsigningreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignsigningreason_isactive))
    {
    goto end; //Bool
    }


    ezsignsigningreason_response_compound_local_var = ezsignsigningreason_response_compound_create (
        pki_ezsignsigningreason_id->valuedouble,
        obj_ezsignsigningreason_description_local_nonprim,
        b_ezsignsigningreason_isactive->valueint
        );

    return ezsignsigningreason_response_compound_local_var;
end:
    if (obj_ezsignsigningreason_description_local_nonprim) {
        multilingual_ezsignsigningreason_description_free(obj_ezsignsigningreason_description_local_nonprim);
        obj_ezsignsigningreason_description_local_nonprim = NULL;
    }
    return NULL;

}