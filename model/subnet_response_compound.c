#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_response_compound.h"



static subnet_response_compound_t *subnet_response_compound_create_internal(
    int *pki_subnet_id,
    int *fki_user_id,
    int *fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long *i_subnet_network,
    long *i_subnet_mask
    ) {
    subnet_response_compound_t *subnet_response_compound_local_var = malloc(sizeof(subnet_response_compound_t));
    if (!subnet_response_compound_local_var) {
        return NULL;
    }
    memset(subnet_response_compound_local_var, 0, sizeof(subnet_response_compound_t));
    subnet_response_compound_local_var->_library_owned = 1;
    subnet_response_compound_local_var->pki_subnet_id = pki_subnet_id;
    subnet_response_compound_local_var->fki_user_id = fki_user_id;
    subnet_response_compound_local_var->fki_apikey_id = fki_apikey_id;
    subnet_response_compound_local_var->obj_subnet_description = obj_subnet_description;
    subnet_response_compound_local_var->i_subnet_network = i_subnet_network;
    subnet_response_compound_local_var->i_subnet_mask = i_subnet_mask;
    return subnet_response_compound_local_var;
}

__attribute__((deprecated)) subnet_response_compound_t *subnet_response_compound_create(
    int *pki_subnet_id,
    int *fki_user_id,
    int *fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long *i_subnet_network,
    long *i_subnet_mask
    ) {
    int *pki_subnet_id_copy = NULL;
    if (pki_subnet_id) {
        pki_subnet_id_copy = malloc(sizeof(int));
        if (pki_subnet_id_copy) *pki_subnet_id_copy = *pki_subnet_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_apikey_id_copy = NULL;
    if (fki_apikey_id) {
        fki_apikey_id_copy = malloc(sizeof(int));
        if (fki_apikey_id_copy) *fki_apikey_id_copy = *fki_apikey_id;
    }
    long *i_subnet_network_copy = NULL;
    if (i_subnet_network) {
        i_subnet_network_copy = malloc(sizeof(long));
        if (i_subnet_network_copy) *i_subnet_network_copy = *i_subnet_network;
    }
    long *i_subnet_mask_copy = NULL;
    if (i_subnet_mask) {
        i_subnet_mask_copy = malloc(sizeof(long));
        if (i_subnet_mask_copy) *i_subnet_mask_copy = *i_subnet_mask;
    }
    subnet_response_compound_t *result = subnet_response_compound_create_internal (
        pki_subnet_id_copy,
        fki_user_id_copy,
        fki_apikey_id_copy,
        obj_subnet_description,
        i_subnet_network_copy,
        i_subnet_mask_copy
        );
    if (!result) {
        free(pki_subnet_id_copy);
        free(fki_user_id_copy);
        free(fki_apikey_id_copy);
        free(i_subnet_network_copy);
        free(i_subnet_mask_copy);
    }
    return result;
}

void subnet_response_compound_free(subnet_response_compound_t *subnet_response_compound) {
    if(NULL == subnet_response_compound){
        return ;
    }
    if(subnet_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_response_compound->pki_subnet_id) {
        free(subnet_response_compound->pki_subnet_id);
        subnet_response_compound->pki_subnet_id = NULL;
    }
    if (subnet_response_compound->fki_user_id) {
        free(subnet_response_compound->fki_user_id);
        subnet_response_compound->fki_user_id = NULL;
    }
    if (subnet_response_compound->fki_apikey_id) {
        free(subnet_response_compound->fki_apikey_id);
        subnet_response_compound->fki_apikey_id = NULL;
    }
    if (subnet_response_compound->obj_subnet_description) {
        multilingual_subnet_description_free(subnet_response_compound->obj_subnet_description);
        subnet_response_compound->obj_subnet_description = NULL;
    }
    if (subnet_response_compound->i_subnet_network) {
        free(subnet_response_compound->i_subnet_network);
        subnet_response_compound->i_subnet_network = NULL;
    }
    if (subnet_response_compound->i_subnet_mask) {
        free(subnet_response_compound->i_subnet_mask);
        subnet_response_compound->i_subnet_mask = NULL;
    }
    free(subnet_response_compound);
}

cJSON *subnet_response_compound_convertToJSON(subnet_response_compound_t *subnet_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // subnet_response_compound->pki_subnet_id
    if (!subnet_response_compound->pki_subnet_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSubnetID", *subnet_response_compound->pki_subnet_id) == NULL) {
    goto fail; //Numeric
    }


    // subnet_response_compound->fki_user_id
    if(subnet_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *subnet_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_response_compound->fki_apikey_id
    if(subnet_response_compound->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", *subnet_response_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_response_compound->obj_subnet_description
    if (!subnet_response_compound->obj_subnet_description) {
        goto fail;
    }
    cJSON *obj_subnet_description_local_JSON = multilingual_subnet_description_convertToJSON(subnet_response_compound->obj_subnet_description);
    if(obj_subnet_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnetDescription", obj_subnet_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_response_compound->i_subnet_network
    if (!subnet_response_compound->i_subnet_network) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetNetwork", *subnet_response_compound->i_subnet_network) == NULL) {
    goto fail; //Numeric
    }


    // subnet_response_compound->i_subnet_mask
    if (!subnet_response_compound->i_subnet_mask) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetMask", *subnet_response_compound->i_subnet_mask) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_response_compound_t *subnet_response_compound_parseFromJSON(cJSON *subnet_response_compoundJSON){

    subnet_response_compound_t *subnet_response_compound_local_var = NULL;

    // define the local variable for subnet_response_compound->pki_subnet_id
    int *pki_subnet_id_local_var = NULL;

    // define the local variable for subnet_response_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for subnet_response_compound->fki_apikey_id
    int *fki_apikey_id_local_var = NULL;

    // define the local variable for subnet_response_compound->obj_subnet_description
    multilingual_subnet_description_t *obj_subnet_description_local_nonprim = NULL;

    // define the local variable for subnet_response_compound->i_subnet_network
    long *i_subnet_network_local_var = NULL;

    // define the local variable for subnet_response_compound->i_subnet_mask
    long *i_subnet_mask_local_var = NULL;

    // subnet_response_compound->pki_subnet_id
    cJSON *pki_subnet_id = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "pkiSubnetID");
    if (cJSON_IsNull(pki_subnet_id)) {
        pki_subnet_id = NULL;
    }
    if (!pki_subnet_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_subnet_id))
    {
    goto end; //Numeric
    }
    pki_subnet_id_local_var = malloc(sizeof(int));
    if(!pki_subnet_id_local_var)
    {
        goto end;
    }
    *pki_subnet_id_local_var = pki_subnet_id->valuedouble;

    // subnet_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
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
    }

    // subnet_response_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "fkiApikeyID");
    if (cJSON_IsNull(fki_apikey_id)) {
        fki_apikey_id = NULL;
    }
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    fki_apikey_id_local_var = malloc(sizeof(int));
    if(!fki_apikey_id_local_var)
    {
        goto end;
    }
    *fki_apikey_id_local_var = fki_apikey_id->valuedouble;
    }

    // subnet_response_compound->obj_subnet_description
    cJSON *obj_subnet_description = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "objSubnetDescription");
    if (cJSON_IsNull(obj_subnet_description)) {
        obj_subnet_description = NULL;
    }
    if (!obj_subnet_description) {
        goto end;
    }

    
    obj_subnet_description_local_nonprim = multilingual_subnet_description_parseFromJSON(obj_subnet_description); //nonprimitive

    // subnet_response_compound->i_subnet_network
    cJSON *i_subnet_network = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "iSubnetNetwork");
    if (cJSON_IsNull(i_subnet_network)) {
        i_subnet_network = NULL;
    }
    if (!i_subnet_network) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_network))
    {
    goto end; //Numeric
    }
    i_subnet_network_local_var = malloc(sizeof(long));
    if(!i_subnet_network_local_var)
    {
        goto end;
    }
    *i_subnet_network_local_var = i_subnet_network->valuedouble;

    // subnet_response_compound->i_subnet_mask
    cJSON *i_subnet_mask = cJSON_GetObjectItemCaseSensitive(subnet_response_compoundJSON, "iSubnetMask");
    if (cJSON_IsNull(i_subnet_mask)) {
        i_subnet_mask = NULL;
    }
    if (!i_subnet_mask) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_mask))
    {
    goto end; //Numeric
    }
    i_subnet_mask_local_var = malloc(sizeof(long));
    if(!i_subnet_mask_local_var)
    {
        goto end;
    }
    *i_subnet_mask_local_var = i_subnet_mask->valuedouble;



    subnet_response_compound_local_var = subnet_response_compound_create_internal (
        pki_subnet_id_local_var,
        fki_user_id_local_var,
        fki_apikey_id_local_var,
        obj_subnet_description_local_nonprim,
        i_subnet_network_local_var,
        i_subnet_mask_local_var
        );

    if (!subnet_response_compound_local_var) {
        goto end;
    }

    return subnet_response_compound_local_var;
end:
    if (pki_subnet_id_local_var) {
        free(pki_subnet_id_local_var);
        pki_subnet_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_apikey_id_local_var) {
        free(fki_apikey_id_local_var);
        fki_apikey_id_local_var = NULL;
    }
    if (obj_subnet_description_local_nonprim) {
        multilingual_subnet_description_free(obj_subnet_description_local_nonprim);
        obj_subnet_description_local_nonprim = NULL;
    }
    if (i_subnet_network_local_var) {
        free(i_subnet_network_local_var);
        i_subnet_network_local_var = NULL;
    }
    if (i_subnet_mask_local_var) {
        free(i_subnet_mask_local_var);
        i_subnet_mask_local_var = NULL;
    }
    return NULL;

}
