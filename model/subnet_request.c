#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_request.h"



subnet_request_t *subnet_request_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long i_subnet_network,
    long i_subnet_mask
    ) {
    subnet_request_t *subnet_request_local_var = malloc(sizeof(subnet_request_t));
    if (!subnet_request_local_var) {
        return NULL;
    }
    subnet_request_local_var->pki_subnet_id = pki_subnet_id;
    subnet_request_local_var->fki_user_id = fki_user_id;
    subnet_request_local_var->fki_apikey_id = fki_apikey_id;
    subnet_request_local_var->obj_subnet_description = obj_subnet_description;
    subnet_request_local_var->i_subnet_network = i_subnet_network;
    subnet_request_local_var->i_subnet_mask = i_subnet_mask;

    return subnet_request_local_var;
}


void subnet_request_free(subnet_request_t *subnet_request) {
    if(NULL == subnet_request){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_request->obj_subnet_description) {
        multilingual_subnet_description_free(subnet_request->obj_subnet_description);
        subnet_request->obj_subnet_description = NULL;
    }
    free(subnet_request);
}

cJSON *subnet_request_convertToJSON(subnet_request_t *subnet_request) {
    cJSON *item = cJSON_CreateObject();

    // subnet_request->pki_subnet_id
    if(subnet_request->pki_subnet_id) {
    if(cJSON_AddNumberToObject(item, "pkiSubnetID", subnet_request->pki_subnet_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request->fki_user_id
    if(subnet_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", subnet_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request->fki_apikey_id
    if(subnet_request->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", subnet_request->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_request->obj_subnet_description
    if (!subnet_request->obj_subnet_description) {
        goto fail;
    }
    cJSON *obj_subnet_description_local_JSON = multilingual_subnet_description_convertToJSON(subnet_request->obj_subnet_description);
    if(obj_subnet_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnetDescription", obj_subnet_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_request->i_subnet_network
    if (!subnet_request->i_subnet_network) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetNetwork", subnet_request->i_subnet_network) == NULL) {
    goto fail; //Numeric
    }


    // subnet_request->i_subnet_mask
    if (!subnet_request->i_subnet_mask) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetMask", subnet_request->i_subnet_mask) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_request_t *subnet_request_parseFromJSON(cJSON *subnet_requestJSON){

    subnet_request_t *subnet_request_local_var = NULL;

    // define the local variable for subnet_request->obj_subnet_description
    multilingual_subnet_description_t *obj_subnet_description_local_nonprim = NULL;

    // subnet_request->pki_subnet_id
    cJSON *pki_subnet_id = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "pkiSubnetID");
    if (pki_subnet_id) { 
    if(!cJSON_IsNumber(pki_subnet_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "fkiApikeyID");
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_request->obj_subnet_description
    cJSON *obj_subnet_description = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "objSubnetDescription");
    if (!obj_subnet_description) {
        goto end;
    }

    
    obj_subnet_description_local_nonprim = multilingual_subnet_description_parseFromJSON(obj_subnet_description); //nonprimitive

    // subnet_request->i_subnet_network
    cJSON *i_subnet_network = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "iSubnetNetwork");
    if (!i_subnet_network) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_network))
    {
    goto end; //Numeric
    }

    // subnet_request->i_subnet_mask
    cJSON *i_subnet_mask = cJSON_GetObjectItemCaseSensitive(subnet_requestJSON, "iSubnetMask");
    if (!i_subnet_mask) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_mask))
    {
    goto end; //Numeric
    }


    subnet_request_local_var = subnet_request_create (
        pki_subnet_id ? pki_subnet_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        obj_subnet_description_local_nonprim,
        i_subnet_network->valuedouble,
        i_subnet_mask->valuedouble
        );

    return subnet_request_local_var;
end:
    if (obj_subnet_description_local_nonprim) {
        multilingual_subnet_description_free(obj_subnet_description_local_nonprim);
        obj_subnet_description_local_nonprim = NULL;
    }
    return NULL;

}
