#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroupsigner_response.h"



ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_local_var = malloc(sizeof(ezsignformfieldgroupsigner_response_t));
    if (!ezsignformfieldgroupsigner_response_local_var) {
        return NULL;
    }
    ezsignformfieldgroupsigner_response_local_var->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    ezsignformfieldgroupsigner_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    return ezsignformfieldgroupsigner_response_local_var;
}


void ezsignformfieldgroupsigner_response_free(ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response) {
    if(NULL == ezsignformfieldgroupsigner_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignformfieldgroupsigner_response);
}

cJSON *ezsignformfieldgroupsigner_response_convertToJSON(ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroupsigner_response->pki_ezsignformfieldgroupsigner_id
    if (!ezsignformfieldgroupsigner_response->pki_ezsignformfieldgroupsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupsignerID", ezsignformfieldgroupsigner_response->pki_ezsignformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroupsigner_response->fki_ezsignfoldersignerassociation_id
    if (!ezsignformfieldgroupsigner_response->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignformfieldgroupsigner_response->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_parseFromJSON(cJSON *ezsignformfieldgroupsigner_responseJSON){

    ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_local_var = NULL;

    // ezsignformfieldgroupsigner_response->pki_ezsignformfieldgroupsigner_id
    cJSON *pki_ezsignformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_responseJSON, "pkiEzsignformfieldgroupsignerID");
    if (!pki_ezsignformfieldgroupsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroupsigner_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }


    ezsignformfieldgroupsigner_response_local_var = ezsignformfieldgroupsigner_response_create (
        pki_ezsignformfieldgroupsigner_id->valuedouble,
        fki_ezsignfoldersignerassociation_id->valuedouble
        );

    return ezsignformfieldgroupsigner_response_local_var;
end:
    return NULL;

}
