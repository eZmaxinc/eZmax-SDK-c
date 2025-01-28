#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_reassign_v1_request.h"



static ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create_internal(
    int fki_ezsignfoldersignerassociation_id
    ) {
    ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_reassign_v1_request_t));
    if (!ezsignfoldersignerassociation_reassign_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_reassign_v1_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;

    ezsignfoldersignerassociation_reassign_v1_request_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create(
    int fki_ezsignfoldersignerassociation_id
    ) {
    return ezsignfoldersignerassociation_reassign_v1_request_create_internal (
        fki_ezsignfoldersignerassociation_id
        );
}

void ezsignfoldersignerassociation_reassign_v1_request_free(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request) {
    if(NULL == ezsignfoldersignerassociation_reassign_v1_request){
        return ;
    }
    if(ezsignfoldersignerassociation_reassign_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_reassign_v1_request_free");
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
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id)) {
        fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    }


    ezsignfoldersignerassociation_reassign_v1_request_local_var = ezsignfoldersignerassociation_reassign_v1_request_create_internal (
        fki_ezsignfoldersignerassociation_id ? fki_ezsignfoldersignerassociation_id->valuedouble : 0
        );

    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
end:
    return NULL;

}
