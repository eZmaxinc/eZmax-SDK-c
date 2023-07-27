#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociationmine_response.h"



custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id
    ) {
    custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_local_var = malloc(sizeof(custom_ezsignfoldersignerassociationmine_response_t));
    if (!custom_ezsignfoldersignerassociationmine_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociationmine_response_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociationmine_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;

    return custom_ezsignfoldersignerassociationmine_response_local_var;
}


void custom_ezsignfoldersignerassociationmine_response_free(custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response) {
    if(NULL == custom_ezsignfoldersignerassociationmine_response){
        return ;
    }
    listEntry_t *listEntry;
    free(custom_ezsignfoldersignerassociationmine_response);
}

cJSON *custom_ezsignfoldersignerassociationmine_response_convertToJSON(custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociationmine_response->pki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociationmine_response->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", custom_ezsignfoldersignerassociationmine_response->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociationmine_response->fki_ezsignfolder_id
    if (!custom_ezsignfoldersignerassociationmine_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_ezsignfoldersignerassociationmine_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationmine_responseJSON){

    custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_local_var = NULL;

    // custom_ezsignfoldersignerassociationmine_response->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationmine_responseJSON, "pkiEzsignfoldersignerassociationID");
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociationmine_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationmine_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }


    custom_ezsignfoldersignerassociationmine_response_local_var = custom_ezsignfoldersignerassociationmine_response_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble
        );

    return custom_ezsignfoldersignerassociationmine_response_local_var;
end:
    return NULL;

}
