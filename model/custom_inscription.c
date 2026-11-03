#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_inscription.h"



static custom_inscription_t *custom_inscription_create_internal(
    int *pki_inscription_id,
    int *fki_address_id,
    address_response_compound_t *obj_address
    ) {
    custom_inscription_t *custom_inscription_local_var = malloc(sizeof(custom_inscription_t));
    if (!custom_inscription_local_var) {
        return NULL;
    }
    memset(custom_inscription_local_var, 0, sizeof(custom_inscription_t));
    custom_inscription_local_var->_library_owned = 1;
    custom_inscription_local_var->pki_inscription_id = pki_inscription_id;
    custom_inscription_local_var->fki_address_id = fki_address_id;
    custom_inscription_local_var->obj_address = obj_address;
    return custom_inscription_local_var;
}

__attribute__((deprecated)) custom_inscription_t *custom_inscription_create(
    int *pki_inscription_id,
    int *fki_address_id,
    address_response_compound_t *obj_address
    ) {
    int *pki_inscription_id_copy = NULL;
    if (pki_inscription_id) {
        pki_inscription_id_copy = malloc(sizeof(int));
        if (pki_inscription_id_copy) *pki_inscription_id_copy = *pki_inscription_id;
    }
    int *fki_address_id_copy = NULL;
    if (fki_address_id) {
        fki_address_id_copy = malloc(sizeof(int));
        if (fki_address_id_copy) *fki_address_id_copy = *fki_address_id;
    }
    custom_inscription_t *result = custom_inscription_create_internal (
        pki_inscription_id_copy,
        fki_address_id_copy,
        obj_address
        );
    if (!result) {
        free(pki_inscription_id_copy);
        free(fki_address_id_copy);
    }
    return result;
}

void custom_inscription_free(custom_inscription_t *custom_inscription) {
    if(NULL == custom_inscription){
        return ;
    }
    if(custom_inscription->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_inscription_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_inscription->pki_inscription_id) {
        free(custom_inscription->pki_inscription_id);
        custom_inscription->pki_inscription_id = NULL;
    }
    if (custom_inscription->fki_address_id) {
        free(custom_inscription->fki_address_id);
        custom_inscription->fki_address_id = NULL;
    }
    if (custom_inscription->obj_address) {
        address_response_compound_free(custom_inscription->obj_address);
        custom_inscription->obj_address = NULL;
    }
    free(custom_inscription);
}

cJSON *custom_inscription_convertToJSON(custom_inscription_t *custom_inscription) {
    cJSON *item = cJSON_CreateObject();

    // custom_inscription->pki_inscription_id
    if (!custom_inscription->pki_inscription_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionID", *custom_inscription->pki_inscription_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_inscription->fki_address_id
    if (!custom_inscription->fki_address_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAddressID", *custom_inscription->fki_address_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_inscription->obj_address
    if (!custom_inscription->obj_address) {
        goto fail;
    }
    cJSON *obj_address_local_JSON = address_response_compound_convertToJSON(custom_inscription->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
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

custom_inscription_t *custom_inscription_parseFromJSON(cJSON *custom_inscriptionJSON){

    custom_inscription_t *custom_inscription_local_var = NULL;

    // define the local variable for custom_inscription->pki_inscription_id
    int *pki_inscription_id_local_var = NULL;

    // define the local variable for custom_inscription->fki_address_id
    int *fki_address_id_local_var = NULL;

    // define the local variable for custom_inscription->obj_address
    address_response_compound_t *obj_address_local_nonprim = NULL;

    // custom_inscription->pki_inscription_id
    cJSON *pki_inscription_id = cJSON_GetObjectItemCaseSensitive(custom_inscriptionJSON, "pkiInscriptionID");
    if (cJSON_IsNull(pki_inscription_id)) {
        pki_inscription_id = NULL;
    }
    if (!pki_inscription_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscription_id))
    {
    goto end; //Numeric
    }
    pki_inscription_id_local_var = malloc(sizeof(int));
    if(!pki_inscription_id_local_var)
    {
        goto end;
    }
    *pki_inscription_id_local_var = pki_inscription_id->valuedouble;

    // custom_inscription->fki_address_id
    cJSON *fki_address_id = cJSON_GetObjectItemCaseSensitive(custom_inscriptionJSON, "fkiAddressID");
    if (cJSON_IsNull(fki_address_id)) {
        fki_address_id = NULL;
    }
    if (!fki_address_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_address_id))
    {
    goto end; //Numeric
    }
    fki_address_id_local_var = malloc(sizeof(int));
    if(!fki_address_id_local_var)
    {
        goto end;
    }
    *fki_address_id_local_var = fki_address_id->valuedouble;

    // custom_inscription->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(custom_inscriptionJSON, "objAddress");
    if (cJSON_IsNull(obj_address)) {
        obj_address = NULL;
    }
    if (!obj_address) {
        goto end;
    }

    
    obj_address_local_nonprim = address_response_compound_parseFromJSON(obj_address); //nonprimitive



    custom_inscription_local_var = custom_inscription_create_internal (
        pki_inscription_id_local_var,
        fki_address_id_local_var,
        obj_address_local_nonprim
        );

    if (!custom_inscription_local_var) {
        goto end;
    }

    return custom_inscription_local_var;
end:
    if (pki_inscription_id_local_var) {
        free(pki_inscription_id_local_var);
        pki_inscription_id_local_var = NULL;
    }
    if (fki_address_id_local_var) {
        free(fki_address_id_local_var);
        fki_address_id_local_var = NULL;
    }
    if (obj_address_local_nonprim) {
        address_response_compound_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    return NULL;

}
