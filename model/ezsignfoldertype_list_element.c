#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_list_element.h"



ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create(
    int pki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x
    ) {
    ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_local_var = malloc(sizeof(ezsignfoldertype_list_element_t));
    if (!ezsignfoldertype_list_element_local_var) {
        return NULL;
    }
    ezsignfoldertype_list_element_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;

    return ezsignfoldertype_list_element_local_var;
}


void ezsignfoldertype_list_element_free(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element) {
    if(NULL == ezsignfoldertype_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfoldertype_list_element->s_ezsignfoldertype_name_x);
        ezsignfoldertype_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsignfoldertype_list_element);
}

cJSON *ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_list_element->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_list_element->pki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_list_element->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_list_element->s_ezsignfoldertype_name_x
    if (!ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_parseFromJSON(cJSON *ezsignfoldertype_list_elementJSON){

    ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_local_var = NULL;

    // ezsignfoldertype_list_element->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "pkiEzsignfoldertypeID");
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }


    ezsignfoldertype_list_element_local_var = ezsignfoldertype_list_element_create (
        pki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring)
        );

    return ezsignfoldertype_list_element_local_var;
end:
    return NULL;

}
