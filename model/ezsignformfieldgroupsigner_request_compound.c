#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroupsigner_request_compound.h"



ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound_local_var = malloc(sizeof(ezsignformfieldgroupsigner_request_compound_t));
    if (!ezsignformfieldgroupsigner_request_compound_local_var) {
        return NULL;
    }
    ezsignformfieldgroupsigner_request_compound_local_var->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    ezsignformfieldgroupsigner_request_compound_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    return ezsignformfieldgroupsigner_request_compound_local_var;
}


void ezsignformfieldgroupsigner_request_compound_free(ezsignformfieldgroupsigner_request_compound_t *ezsignformfieldgroupsigner_request_compound) {
    if(NULL == ezsignformfieldgroupsigner_request_compound){
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
    if (pki_ezsignformfieldgroupsigner_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroupsigner_request_compound->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroupsigner_request_compoundJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }


    ezsignformfieldgroupsigner_request_compound_local_var = ezsignformfieldgroupsigner_request_compound_create (
        pki_ezsignformfieldgroupsigner_id ? pki_ezsignformfieldgroupsigner_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id->valuedouble
        );

    return ezsignformfieldgroupsigner_request_compound_local_var;
end:
    return NULL;

}
