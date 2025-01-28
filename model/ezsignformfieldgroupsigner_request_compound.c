#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroupsigner_request_compound.h"



static ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_create_internal(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_local_var = malloc(sizeof(ezsignformfieldgroupsigner_request_compound_t));
    if (!ezsignformfieldgroupsigner_request_compound_local_var) {
        return NULL;
    }
    ezsignformfieldgroupsigner_request_compound_local_var->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    ezsignformfieldgroupsigner_request_compound_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    ezsignformfieldgroupsigner_request_compound_local_var->_library_owned = 1;
    return ezsignformfieldgroupsigner_request_compound_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    return ezsignformfieldgroupsigner_request_compound_create_internal (
        pki_ezsignformfieldgroupsigner_id,
        fki_ezsignfoldersignerassociation_id
        );
}

void ezsignformfieldgroupsigner_request_compound_free(ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound) {
    if(NULL == ezsignformfieldgroupsigner_request_compound){
        return ;
    }
    if(ezsignformfieldgroupsigner_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroupsigner_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignformfieldgroupsigner_request_compound);
}

cJSON *ezsignformfieldgroupsigner_request_compound_convertToJSON(ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroupsigner_request_compound->pki_ezsignformfieldgroupsigner_id
    if(ezsignformfieldgroupsigner_request_compound->pki_ezsignformfieldgroupsigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupsignerID", ezsignformfieldgroupsigner_request_compound->pki_ezsignformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfieldgroupsigner_request_compound->fki_ezsignfoldersignerassociation_id
    if (!ezsignformfieldgroupsigner_request_compound->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignformfieldgroupsigner_request_compound->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_parseFromJSON(cJSON *ezsignformfieldgroupsigner_request_compoundJSON){

    ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_local_var = NULL;

    // ezsignformfieldgroupsigner_request_compound->pki_ezsignformfieldgroupsigner_id
    cJSON *pki_ezsignformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_request_compoundJSON, "pkiEzsignformfieldgroupsignerID");
    if (cJSON_IsNull(pki_ezsignformfieldgroupsigner_id)) {
        pki_ezsignformfieldgroupsigner_id = NULL;
    }
    if (pki_ezsignformfieldgroupsigner_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroupsigner_request_compound->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_request_compoundJSON, "fkiEzsignfoldersignerassociationID");
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


    ezsignformfieldgroupsigner_request_compound_local_var = ezsignformfieldgroupsigner_request_compound_create_internal (
        pki_ezsignformfieldgroupsigner_id ? pki_ezsignformfieldgroupsigner_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id->valuedouble
        );

    return ezsignformfieldgroupsigner_request_compound_local_var;
end:
    return NULL;

}
