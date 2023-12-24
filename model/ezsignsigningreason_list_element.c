#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_list_element.h"



ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_create(
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

    return ezsignsigningreason_list_element_local_var;
}


void ezsignsigningreason_list_element_free(ezsignsigningreason_list_element_t *ezsignsigningreason_list_element) {
    if(NULL == ezsignsigningreason_list_element){
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
    if (!pki_ezsignsigningreason_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }

    // ezsignsigningreason_list_element->s_ezsignsigningreason_description_x
    cJSON *s_ezsignsigningreason_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_list_elementJSON, "sEzsignsigningreasonDescriptionX");
    if (!s_ezsignsigningreason_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsigningreason_description_x))
    {
    goto end; //String
    }

    // ezsignsigningreason_list_element->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_list_elementJSON, "bEzsignsigningreasonIsactive");
    if (!b_ezsignsigningreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignsigningreason_isactive))
    {
    goto end; //Bool
    }


    ezsignsigningreason_list_element_local_var = ezsignsigningreason_list_element_create (
        pki_ezsignsigningreason_id->valuedouble,
        strdup(s_ezsignsigningreason_description_x->valuestring),
        b_ezsignsigningreason_isactive->valueint
        );

    return ezsignsigningreason_list_element_local_var;
end:
    return NULL;

}
