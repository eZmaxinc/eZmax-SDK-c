#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_reassign_v1_request.h"



ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create(
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_reassign_v1_request_t));
    if (!ezsignfoldersignerassociation_reassign_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_reassign_v1_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
}


void ezsignfoldersignerassociation_reassign_v1_request_free(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request) {
    if(NULL == ezsignfoldersignerassociation_reassign_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignfoldersignerassociation_reassign_v1_request);
}

cJSON *ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id
    if(ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_reassign_v1_requestJSON){

    ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_local_var = NULL;

    // ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_reassign_v1_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (fki_ezsignfoldersignerassociation_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    }


    ezsignfoldersignerassociation_reassign_v1_request_local_var = ezsignfoldersignerassociation_reassign_v1_request_create (
        fki_ezsignfoldersignerassociation_id ? fki_ezsignfoldersignerassociation_id->valuedouble : 0
        );

    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
end:
    return NULL;

}
