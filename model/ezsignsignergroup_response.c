#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_response.h"



ezsignsignergroup_response_t *ezsignsignergroup_response_create(
    int pki_ezsignsignergroup_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description,
    char *s_ezsignsignergroup_description_x
    ) {
    ezsignsignergroup_response_t *ezsignsignergroup_response_local_var = malloc(sizeof(ezsignsignergroup_response_t));
    if (!ezsignsignergroup_response_local_var) {
        return NULL;
    }
    ezsignsignergroup_response_local_var->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    ezsignsignergroup_response_local_var->obj_ezsignsignergroup_description = obj_ezsignsignergroup_description;
    ezsignsignergroup_response_local_var->s_ezsignsignergroup_description_x = s_ezsignsignergroup_description_x;

    return ezsignsignergroup_response_local_var;
}


void ezsignsignergroup_response_free(ezsignsignergroup_response_t *ezsignsignergroup_response) {
    if(NULL == ezsignsignergroup_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_response->obj_ezsignsignergroup_description) {
        multilingual_ezsignsignergroup_description_free(ezsignsignergroup_response->obj_ezsignsignergroup_description);
        ezsignsignergroup_response->obj_ezsignsignergroup_description = NULL;
    }
    if (ezsignsignergroup_response->s_ezsignsignergroup_description_x) {
        free(ezsignsignergroup_response->s_ezsignsignergroup_description_x);
        ezsignsignergroup_response->s_ezsignsignergroup_description_x = NULL;
    }
    free(ezsignsignergroup_response);
}

cJSON *ezsignsignergroup_response_convertToJSON(ezsignsignergroup_response_t *ezsignsignergroup_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_response->pki_ezsignsignergroup_id
    if (!ezsignsignergroup_response->pki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupID", ezsignsignergroup_response->pki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroup_response->obj_ezsignsignergroup_description
    if (!ezsignsignergroup_response->obj_ezsignsignergroup_description) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroup_description_local_JSON = multilingual_ezsignsignergroup_description_convertToJSON(ezsignsignergroup_response->obj_ezsignsignergroup_description);
    if(obj_ezsignsignergroup_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroupDescription", obj_ezsignsignergroup_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignergroup_response->s_ezsignsignergroup_description_x
    if(ezsignsignergroup_response->s_ezsignsignergroup_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsignsignergroupDescriptionX", ezsignsignergroup_response->s_ezsignsignergroup_description_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroup_response_t *ezsignsignergroup_response_parseFromJSON(cJSON *ezsignsignergroup_responseJSON){

    ezsignsignergroup_response_t *ezsignsignergroup_response_local_var = NULL;

    // define the local variable for ezsignsignergroup_response->obj_ezsignsignergroup_description
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description_local_nonprim = NULL;

    // ezsignsignergroup_response->pki_ezsignsignergroup_id
    cJSON *pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_responseJSON, "pkiEzsignsignergroupID");
    if (!pki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroup_response->obj_ezsignsignergroup_description
    cJSON *obj_ezsignsignergroup_description = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_responseJSON, "objEzsignsignergroupDescription");
    if (!obj_ezsignsignergroup_description) {
        goto end;
    }

    
    obj_ezsignsignergroup_description_local_nonprim = multilingual_ezsignsignergroup_description_parseFromJSON(obj_ezsignsignergroup_description); //nonprimitive

    // ezsignsignergroup_response->s_ezsignsignergroup_description_x
    cJSON *s_ezsignsignergroup_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_responseJSON, "sEzsignsignergroupDescriptionX");
    if (s_ezsignsignergroup_description_x) { 
    if(!cJSON_IsString(s_ezsignsignergroup_description_x) && !cJSON_IsNull(s_ezsignsignergroup_description_x))
    {
    goto end; //String
    }
    }


    ezsignsignergroup_response_local_var = ezsignsignergroup_response_create (
        pki_ezsignsignergroup_id->valuedouble,
        obj_ezsignsignergroup_description_local_nonprim,
        s_ezsignsignergroup_description_x && !cJSON_IsNull(s_ezsignsignergroup_description_x) ? strdup(s_ezsignsignergroup_description_x->valuestring) : NULL
        );

    return ezsignsignergroup_response_local_var;
end:
    if (obj_ezsignsignergroup_description_local_nonprim) {
        multilingual_ezsignsignergroup_description_free(obj_ezsignsignergroup_description_local_nonprim);
        obj_ezsignsignergroup_description_local_nonprim = NULL;
    }
    return NULL;

}
