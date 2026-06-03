#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_reassign_v1_request.h"



static ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create_internal(
    int *fki_ezsignfoldersignerassociation_id
    ) {
    ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_reassign_v1_request_t));
    if (!ezsignfoldersignerassociation_reassign_v1_request_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_reassign_v1_request_local_var, 0, sizeof(ezsignfoldersignerassociation_reassign_v1_request_t));
    ezsignfoldersignerassociation_reassign_v1_request_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_reassign_v1_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create(
    int *fki_ezsignfoldersignerassociation_id
    ) {
    int *fki_ezsignfoldersignerassociation_id_copy = NULL;
    if (fki_ezsignfoldersignerassociation_id) {
        fki_ezsignfoldersignerassociation_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldersignerassociation_id_copy) *fki_ezsignfoldersignerassociation_id_copy = *fki_ezsignfoldersignerassociation_id;
    }
    ezsignfoldersignerassociation_reassign_v1_request_t *result = ezsignfoldersignerassociation_reassign_v1_request_create_internal (
        fki_ezsignfoldersignerassociation_id_copy
        );
    if (!result) {
        free(fki_ezsignfoldersignerassociation_id_copy);
    }
    return result;
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
    if (ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id) {
        free(ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id);
        ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsignfoldersignerassociation_reassign_v1_request);
}

cJSON *ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id
    if(ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", *ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id) == NULL) {
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

    // define the local variable for ezsignfoldersignerassociation_reassign_v1_request->fki_ezsignfoldersignerassociation_id
    int *fki_ezsignfoldersignerassociation_id_local_var = NULL;

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
    fki_ezsignfoldersignerassociation_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldersignerassociation_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldersignerassociation_id_local_var = fki_ezsignfoldersignerassociation_id->valuedouble;
    }



    ezsignfoldersignerassociation_reassign_v1_request_local_var = ezsignfoldersignerassociation_reassign_v1_request_create_internal (
        fki_ezsignfoldersignerassociation_id_local_var
        );

    if (!ezsignfoldersignerassociation_reassign_v1_request_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_reassign_v1_request_local_var;
end:
    if (fki_ezsignfoldersignerassociation_id_local_var) {
        free(fki_ezsignfoldersignerassociation_id_local_var);
        fki_ezsignfoldersignerassociation_id_local_var = NULL;
    }
    return NULL;

}
