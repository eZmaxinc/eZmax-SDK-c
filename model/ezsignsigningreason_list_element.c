#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_list_element.h"



static ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_create_internal(
    int pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int b_ezsignsigningreason_isactive
    ) {
    ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_local_var = malloc(sizeof(ezsignsigningreason_list_element_t));
    if (!ezsignsigningreason_list_element_local_var) {
        return NULL;
    }
    ezsignsigningreason_list_element_local_var->pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    ezsignsigningreason_list_element_local_var->s_ezsignsigningreason_description_x = s_ezsignsigningreason_description_x;
    ezsignsigningreason_list_element_local_var->b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;

    ezsignsigningreason_list_element_local_var->_library_owned = 1;
    return ezsignsigningreason_list_element_local_var;
}

__attribute__((deprecated)) ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_create(
    int pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int b_ezsignsigningreason_isactive
    ) {
    return ezsignsigningreason_list_element_create_internal (
        pki_ezsignsigningreason_id,
        s_ezsignsigningreason_description_x,
        b_ezsignsigningreason_isactive
        );
}

void ezsignsigningreason_list_element_free(ezsignsigningreason_list_element_t *ezsignsigningreason_list_element) {
    if(NULL == ezsignsigningreason_list_element){
        return ;
    }
    if(ezsignsigningreason_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigningreason_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_list_element->s_ezsignsigningreason_description_x) {
        free(ezsignsigningreason_list_element->s_ezsignsigningreason_description_x);
        ezsignsigningreason_list_element->s_ezsignsigningreason_description_x = NULL;
    }
    free(ezsignsigningreason_list_element);
}

cJSON *ezsignsigningreason_list_element_convertToJSON(ezsignsigningreason_list_element_t *ezsignsigningreason_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_list_element->pki_ezsignsigningreason_id
    if (!ezsignsigningreason_list_element->pki_ezsignsigningreason_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsigningreasonID", ezsignsigningreason_list_element->pki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_list_element->s_ezsignsigningreason_description_x
    if (!ezsignsigningreason_list_element->s_ezsignsigningreason_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsigningreasonDescriptionX", ezsignsigningreason_list_element->s_ezsignsigningreason_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignsigningreason_list_element->b_ezsignsigningreason_isactive
    if (!ezsignsigningreason_list_element->b_ezsignsigningreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignsigningreasonIsactive", ezsignsigningreason_list_element->b_ezsignsigningreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_parseFromJSON(cJSON *ezsignsigningreason_list_elementJSON){

    ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_local_var = NULL;

    // ezsignsigningreason_list_element->pki_ezsignsigningreason_id
    cJSON *pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_list_elementJSON, "pkiEzsignsigningreasonID");
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

    // ezsignsigningreason_list_element->s_ezsignsigningreason_description_x
    cJSON *s_ezsignsigningreason_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_list_elementJSON, "sEzsignsigningreasonDescriptionX");
    if (cJSON_IsNull(s_ezsignsigningreason_description_x)) {
        s_ezsignsigningreason_description_x = NULL;
    }
    if (!s_ezsignsigningreason_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsigningreason_description_x))
    {
    goto end; //String
    }

    // ezsignsigningreason_list_element->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_list_elementJSON, "bEzsignsigningreasonIsactive");
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


    ezsignsigningreason_list_element_local_var = ezsignsigningreason_list_element_create_internal (
        pki_ezsignsigningreason_id->valuedouble,
        strdup(s_ezsignsigningreason_description_x->valuestring),
        b_ezsignsigningreason_isactive->valueint
        );

    return ezsignsigningreason_list_element_local_var;
end:
    return NULL;

}
