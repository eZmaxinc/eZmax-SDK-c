#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_request_compound.h"



static subnet_request_compound_t *subnet_request_compound_create_internal(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long i_subnet_network,
    long i_subnet_mask
    ) {
    subnet_request_compound_t *subnet_request_compound_local_var = malloc(sizeof(subnet_request_compound_t));
    if (!subnet_request_compound_local_var) {
        return NULL;
    }
    subnet_request_compound_local_var->pki_subnet_id = pki_subnet_id;
    subnet_request_compound_local_var->fki_user_id = fki_user_id;
    subnet_request_compound_local_var->fki_apikey_id = fki_apikey_id;
    subnet_request_compound_local_var->obj_subnet_description = obj_subnet_description;
    subnet_request_compound_local_var->i_subnet_network = i_subnet_network;
    subnet_request_compound_local_var->i_subnet_mask = i_subnet_mask;

    subnet_request_compound_local_var->_library_owned = 1;
    return subnet_request_compound_local_var;
}

__attribute__((deprecated)) subnet_request_compound_t *subnet_request_compound_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long i_subnet_network,
    long i_subnet_mask
    ) {
    return subnet_request_compound_create_internal (
        pki_subnet_id,
        fki_user_id,
        fki_apikey_id,
        obj_subnet_description,
        i_subnet_network,
        i_subnet_mask
        );
}

void subnet_request_compound_free(subnet_request_compound_t *subnet_request_compound) {
    if(NULL == subnet_request_compound){
        return ;
    }
    if(subnet_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_request_compound->obj_subnet_description) {
        multilingual_subnet_description_free(subnet_request_compound->obj_subnet_description);
        subnet_request_compound->obj_subnet_description = NULL;
    }
    free(subnet_request_compound);
}

cJSON *subnet_request_compound_convertToJSON(subnet_request_compound_t *subnet_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // subnet_request_compound->pki_subnet_id
    if(subnet_request_compound->pki_subnet_id) {
    if(cJSON_AddNumberToObject(item, "pkiSubnetID", subnet_request_compound->pki_subnet_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request_compound->fki_user_id
    if(subnet_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", subnet_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request_compound->fki_apikey_id
    if(subnet_request_compound->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", subnet_request_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request_compound->obj_subnet_description
    if (!subnet_request_compound->obj_subnet_description) {
        goto fail;
    }
    cJSON *obj_subnet_description_local_JSON = multilingual_subnet_description_convertToJSON(subnet_request_compound->obj_subnet_description);
    if(obj_subnet_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnetDescription", obj_subnet_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_request_compound->i_subnet_network
    if (!subnet_request_compound->i_subnet_network) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetNetwork", subnet_request_compound->i_subnet_network) == NULL) {
    goto fail; //Numeric
    }


    // subnet_request_compound->i_subnet_mask
    if (!subnet_request_compound->i_subnet_mask) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetMask", subnet_request_compound->i_subnet_mask) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_request_compound_t *subnet_request_compound_parseFromJSON(cJSON *subnet_request_compoundJSON){

    subnet_request_compound_t *subnet_request_compound_local_var = NULL;

    // define the local variable for subnet_request_compound->obj_subnet_description
    multilingual_subnet_description_t *obj_subnet_description_local_nonprim = NULL;

    // subnet_request_compound->pki_subnet_id
    cJSON *pki_subnet_id = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "pkiSubnetID");
    if (cJSON_IsNull(pki_subnet_id)) {
        pki_subnet_id = NULL;
    }
    if (pki_subnet_id) { 
    if(!cJSON_IsNumber(pki_subnet_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "fkiApikeyID");
    if (cJSON_IsNull(fki_apikey_id)) {
        fki_apikey_id = NULL;
    }
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request_compound->obj_subnet_description
    cJSON *obj_subnet_description = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "objSubnetDescription");
    if (cJSON_IsNull(obj_subnet_description)) {
        obj_subnet_description = NULL;
    }
    if (!obj_subnet_description) {
        goto end;
    }

    
    obj_subnet_description_local_nonprim = multilingual_subnet_description_parseFromJSON(obj_subnet_description); //nonprimitive

    // subnet_request_compound->i_subnet_network
    cJSON *i_subnet_network = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "iSubnetNetwork");
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

    // subnet_request_compound->i_subnet_mask
    cJSON *i_subnet_mask = cJSON_GetObjectItemCaseSensitive(subnet_request_compoundJSON, "iSubnetMask");
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


    subnet_request_compound_local_var = subnet_request_compound_create_internal (
        pki_subnet_id ? pki_subnet_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        obj_subnet_description_local_nonprim,
        i_subnet_network->valuedouble,
        i_subnet_mask->valuedouble
        );

    return subnet_request_compound_local_var;
end:
    if (obj_subnet_description_local_nonprim) {
        multilingual_subnet_description_free(obj_subnet_description_local_nonprim);
        obj_subnet_description_local_nonprim = NULL;
    }
    return NULL;

}
