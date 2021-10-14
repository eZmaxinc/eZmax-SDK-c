#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"



ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description
    ) {
    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = malloc(sizeof(ezsignfolder_list_element_t));
    if (!ezsignfolder_list_element_local_var) {
        return NULL;
    }
    ezsignfolder_list_element_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_list_element_local_var->s_ezsignfolder_description = s_ezsignfolder_description;

    return ezsignfolder_list_element_local_var;
}


void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    if(NULL == ezsignfolder_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_list_element->s_ezsignfolder_description) {
        free(ezsignfolder_list_element->s_ezsignfolder_description);
        ezsignfolder_list_element->s_ezsignfolder_description = NULL;
    }
    free(ezsignfolder_list_element);
}

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_list_element->pki_ezsignfolder_id
    if (!ezsignfolder_list_element->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_list_element->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->s_ezsignfolder_description
    if (!ezsignfolder_list_element->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_list_element->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON){

    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = NULL;

    // ezsignfolder_list_element->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }


    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring)
        );

    return ezsignfolder_list_element_local_var;
end:
    return NULL;

}
