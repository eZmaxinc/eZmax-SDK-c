#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_response_compound.h"



static ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_create_internal(
    int *pki_ezsignsignergroup_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description,
    char *s_ezsignsignergroup_description_x
    ) {
    ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_local_var = malloc(sizeof(ezsignsignergroup_response_compound_t));
    if (!ezsignsignergroup_response_compound_local_var) {
        return NULL;
    }
    memset(ezsignsignergroup_response_compound_local_var, 0, sizeof(ezsignsignergroup_response_compound_t));
    ezsignsignergroup_response_compound_local_var->_library_owned = 1;
    ezsignsignergroup_response_compound_local_var->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    ezsignsignergroup_response_compound_local_var->obj_ezsignsignergroup_description = obj_ezsignsignergroup_description;
    ezsignsignergroup_response_compound_local_var->s_ezsignsignergroup_description_x = s_ezsignsignergroup_description_x;
    return ezsignsignergroup_response_compound_local_var;
}

__attribute__((deprecated)) ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_create(
    int *pki_ezsignsignergroup_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description,
    char *s_ezsignsignergroup_description_x
    ) {
    int *pki_ezsignsignergroup_id_copy = NULL;
    if (pki_ezsignsignergroup_id) {
        pki_ezsignsignergroup_id_copy = malloc(sizeof(int));
        if (pki_ezsignsignergroup_id_copy) *pki_ezsignsignergroup_id_copy = *pki_ezsignsignergroup_id;
    }
    ezsignsignergroup_response_compound_t *result = ezsignsignergroup_response_compound_create_internal (
        pki_ezsignsignergroup_id_copy,
        obj_ezsignsignergroup_description,
        s_ezsignsignergroup_description_x
        );
    if (!result) {
        free(pki_ezsignsignergroup_id_copy);
    }
    return result;
}

void ezsignsignergroup_response_compound_free(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound) {
    if(NULL == ezsignsignergroup_response_compound){
        return ;
    }
    if(ezsignsignergroup_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroup_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_response_compound->pki_ezsignsignergroup_id) {
        free(ezsignsignergroup_response_compound->pki_ezsignsignergroup_id);
        ezsignsignergroup_response_compound->pki_ezsignsignergroup_id = NULL;
    }
    if (ezsignsignergroup_response_compound->obj_ezsignsignergroup_description) {
        multilingual_ezsignsignergroup_description_free(ezsignsignergroup_response_compound->obj_ezsignsignergroup_description);
        ezsignsignergroup_response_compound->obj_ezsignsignergroup_description = NULL;
    }
    if (ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x) {
        free(ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x);
        ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x = NULL;
    }
    free(ezsignsignergroup_response_compound);
}

cJSON *ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_response_compound->pki_ezsignsignergroup_id
    if (!ezsignsignergroup_response_compound->pki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupID", *ezsignsignergroup_response_compound->pki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroup_response_compound->obj_ezsignsignergroup_description
    if (!ezsignsignergroup_response_compound->obj_ezsignsignergroup_description) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroup_description_local_JSON = multilingual_ezsignsignergroup_description_convertToJSON(ezsignsignergroup_response_compound->obj_ezsignsignergroup_description);
    if(obj_ezsignsignergroup_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroupDescription", obj_ezsignsignergroup_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x
    if(ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsignsignergroupDescriptionX", ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x) == NULL) {
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

ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_parseFromJSON(cJSON *ezsignsignergroup_response_compoundJSON){

    ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_local_var = NULL;

    // define the local variable for ezsignsignergroup_response_compound->pki_ezsignsignergroup_id
    int *pki_ezsignsignergroup_id_local_var = NULL;

    // define the local variable for ezsignsignergroup_response_compound->obj_ezsignsignergroup_description
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description_local_nonprim = NULL;

    char *s_ezsignsignergroup_description_x_local_str = NULL;

    // ezsignsignergroup_response_compound->pki_ezsignsignergroup_id
    cJSON *pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_response_compoundJSON, "pkiEzsignsignergroupID");
    if (cJSON_IsNull(pki_ezsignsignergroup_id)) {
        pki_ezsignsignergroup_id = NULL;
    }
    if (!pki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    pki_ezsignsignergroup_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignsignergroup_id_local_var)
    {
        goto end;
    }
    *pki_ezsignsignergroup_id_local_var = pki_ezsignsignergroup_id->valuedouble;

    // ezsignsignergroup_response_compound->obj_ezsignsignergroup_description
    cJSON *obj_ezsignsignergroup_description = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_response_compoundJSON, "objEzsignsignergroupDescription");
    if (cJSON_IsNull(obj_ezsignsignergroup_description)) {
        obj_ezsignsignergroup_description = NULL;
    }
    if (!obj_ezsignsignergroup_description) {
        goto end;
    }

    
    obj_ezsignsignergroup_description_local_nonprim = multilingual_ezsignsignergroup_description_parseFromJSON(obj_ezsignsignergroup_description); //nonprimitive

    // ezsignsignergroup_response_compound->s_ezsignsignergroup_description_x
    cJSON *s_ezsignsignergroup_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_response_compoundJSON, "sEzsignsignergroupDescriptionX");
    if (cJSON_IsNull(s_ezsignsignergroup_description_x)) {
        s_ezsignsignergroup_description_x = NULL;
    }
    if (s_ezsignsignergroup_description_x) { 
    if(!cJSON_IsString(s_ezsignsignergroup_description_x) && !cJSON_IsNull(s_ezsignsignergroup_description_x))
    {
    goto end; //String
    }
    }


    if (s_ezsignsignergroup_description_x && !cJSON_IsNull(s_ezsignsignergroup_description_x)) s_ezsignsignergroup_description_x_local_str = strdup(s_ezsignsignergroup_description_x->valuestring);

    ezsignsignergroup_response_compound_local_var = ezsignsignergroup_response_compound_create_internal (
        pki_ezsignsignergroup_id_local_var,
        obj_ezsignsignergroup_description_local_nonprim,
        s_ezsignsignergroup_description_x_local_str
        );

    if (!ezsignsignergroup_response_compound_local_var) {
        goto end;
    }

    return ezsignsignergroup_response_compound_local_var;
end:
    if (pki_ezsignsignergroup_id_local_var) {
        free(pki_ezsignsignergroup_id_local_var);
        pki_ezsignsignergroup_id_local_var = NULL;
    }
    if (obj_ezsignsignergroup_description_local_nonprim) {
        multilingual_ezsignsignergroup_description_free(obj_ezsignsignergroup_description_local_nonprim);
        obj_ezsignsignergroup_description_local_nonprim = NULL;
    }
    if (s_ezsignsignergroup_description_x_local_str) {
        free(s_ezsignsignergroup_description_x_local_str);
        s_ezsignsignergroup_description_x_local_str = NULL;
    }
    return NULL;

}
