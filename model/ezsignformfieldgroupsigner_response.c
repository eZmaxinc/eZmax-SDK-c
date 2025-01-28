#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroupsigner_response.h"



static ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_create_internal(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_local_var = malloc(sizeof(ezsignformfieldgroupsigner_response_t));
    if (!ezsignformfieldgroupsigner_response_local_var) {
        return NULL;
    }
    ezsignformfieldgroupsigner_response_local_var->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    ezsignformfieldgroupsigner_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    ezsignformfieldgroupsigner_response_local_var->_library_owned = 1;
    return ezsignformfieldgroupsigner_response_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    return ezsignformfieldgroupsigner_response_create_internal (
        pki_ezsignformfieldgroupsigner_id,
        fki_ezsignfoldersignerassociation_id
        );
}

void ezsignformfieldgroupsigner_response_free(ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response) {
    if(NULL == ezsignformfieldgroupsigner_response){
        return ;
    }
    if(ezsignformfieldgroupsigner_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroupsigner_response_free");
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
    if (cJSON_IsNull(pki_ezsignformfieldgroupsigner_id)) {
        pki_ezsignformfieldgroupsigner_id = NULL;
    }
    if (!pki_ezsignformfieldgroupsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroupsigner_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id)) {
        fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }


    ezsignformfieldgroupsigner_response_local_var = ezsignformfieldgroupsigner_response_create_internal (
        pki_ezsignformfieldgroupsigner_id->valuedouble,
        fki_ezsignfoldersignerassociation_id->valuedouble
        );

    return ezsignformfieldgroupsigner_response_local_var;
end:
    return NULL;

}
