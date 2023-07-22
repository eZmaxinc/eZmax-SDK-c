#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_response.h"



subnet_response_t *subnet_response_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    int i_subnet_network,
    int i_subnet_mask
    ) {
    subnet_response_t *subnet_response_local_var = malloc(sizeof(subnet_response_t));
    if (!subnet_response_local_var) {
        return NULL;
    }
    subnet_response_local_var->pki_subnet_id = pki_subnet_id;
    subnet_response_local_var->fki_user_id = fki_user_id;
    subnet_response_local_var->fki_apikey_id = fki_apikey_id;
    subnet_response_local_var->obj_subnet_description = obj_subnet_description;
    subnet_response_local_var->i_subnet_network = i_subnet_network;
    subnet_response_local_var->i_subnet_mask = i_subnet_mask;

    return subnet_response_local_var;
}


void subnet_response_free(subnet_response_t *subnet_response) {
    if(NULL == subnet_response){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_response->obj_subnet_description) {
        multilingual_subnet_description_free(subnet_response->obj_subnet_description);
        subnet_response->obj_subnet_description = NULL;
    }
    free(subnet_response);
}

cJSON *subnet_response_convertToJSON(subnet_response_t *subnet_response) {
    cJSON *item = cJSON_CreateObject();

    // subnet_response->pki_subnet_id
    if (!subnet_response->pki_subnet_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSubnetID", subnet_response->pki_subnet_id) == NULL) {
    goto fail; //Numeric
    }


    // subnet_response->fki_user_id
    if(subnet_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", subnet_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_response->fki_apikey_id
    if(subnet_response->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", subnet_response->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // subnet_response->obj_subnet_description
    if (!subnet_response->obj_subnet_description) {
        goto fail;
    }
    cJSON *obj_subnet_description_local_JSON = multilingual_subnet_description_convertToJSON(subnet_response->obj_subnet_description);
    if(obj_subnet_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnetDescription", obj_subnet_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_response->i_subnet_network
    if (!subnet_response->i_subnet_network) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetNetwork", subnet_response->i_subnet_network) == NULL) {
    goto fail; //Numeric
    }


    // subnet_response->i_subnet_mask
    if (!subnet_response->i_subnet_mask) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iSubnetMask", subnet_response->i_subnet_mask) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_response_t *subnet_response_parseFromJSON(cJSON *subnet_responseJSON){

    subnet_response_t *subnet_response_local_var = NULL;

    // define the local variable for subnet_response->obj_subnet_description
    multilingual_subnet_description_t *obj_subnet_description_local_nonprim = NULL;

    // subnet_response->pki_subnet_id
    cJSON *pki_subnet_id = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "pkiSubnetID");
    if (!pki_subnet_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_subnet_id))
    {
    goto end; //Numeric
    }

    // subnet_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_response->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "fkiApikeyID");
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // subnet_response->obj_subnet_description
    cJSON *obj_subnet_description = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "objSubnetDescription");
    if (!obj_subnet_description) {
        goto end;
    }

    
    obj_subnet_description_local_nonprim = multilingual_subnet_description_parseFromJSON(obj_subnet_description); //nonprimitive

    // subnet_response->i_subnet_network
    cJSON *i_subnet_network = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "iSubnetNetwork");
    if (!i_subnet_network) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_network))
    {
    goto end; //Numeric
    }

    // subnet_response->i_subnet_mask
    cJSON *i_subnet_mask = cJSON_GetObjectItemCaseSensitive(subnet_responseJSON, "iSubnetMask");
    if (!i_subnet_mask) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_subnet_mask))
    {
    goto end; //Numeric
    }


    subnet_response_local_var = subnet_response_create (
        pki_subnet_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        obj_subnet_description_local_nonprim,
        i_subnet_network->valuedouble,
        i_subnet_mask->valuedouble
        );

    return subnet_response_local_var;
end:
    if (obj_subnet_description_local_nonprim) {
        multilingual_subnet_description_free(obj_subnet_description_local_nonprim);
        obj_subnet_description_local_nonprim = NULL;
    }
    return NULL;

}
