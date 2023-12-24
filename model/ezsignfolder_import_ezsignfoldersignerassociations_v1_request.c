#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_import_ezsignfoldersignerassociations_v1_request.h"



ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request_create(
    list_t *a_fki_ezsignfoldersignerassociation_id
    ) {
    ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var = malloc(sizeof(ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t));
    if (!ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;

    return ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var;
}


void ezsignfolder_import_ezsignfoldersignerassociations_v1_request_free(ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request) {
    if(NULL == ezsignfolder_import_ezsignfoldersignerassociations_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id);
        ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsignfolder_import_ezsignfoldersignerassociations_v1_request);
}

cJSON *ezsignfolder_import_ezsignfoldersignerassociations_v1_request_convertToJSON(ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request_parseFromJSON(cJSON *ezsignfolder_import_ezsignfoldersignerassociations_v1_requestJSON){

    ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var = NULL;

    // define the local list for ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // ezsignfolder_import_ezsignfoldersignerassociations_v1_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsignfoldersignerassociations_v1_requestJSON, "a_fkiEzsignfoldersignerassociationID");
    if (!a_fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    cJSON *a_fki_ezsignfoldersignerassociation_id_local = NULL;
    if(!cJSON_IsArray(a_fki_ezsignfoldersignerassociation_id)) {
        goto end;//primitive container
    }
    a_fki_ezsignfoldersignerassociation_idList = list_createList();

    cJSON_ArrayForEach(a_fki_ezsignfoldersignerassociation_id_local, a_fki_ezsignfoldersignerassociation_id)
    {
        if(!cJSON_IsNumber(a_fki_ezsignfoldersignerassociation_id_local))
        {
            goto end;
        }
        double *a_fki_ezsignfoldersignerassociation_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_ezsignfoldersignerassociation_id_local_value)
        {
            goto end;
        }
        *a_fki_ezsignfoldersignerassociation_id_local_value = a_fki_ezsignfoldersignerassociation_id_local->valuedouble;
        list_addElement(a_fki_ezsignfoldersignerassociation_idList , a_fki_ezsignfoldersignerassociation_id_local_value);
    }


    ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var = ezsignfolder_import_ezsignfoldersignerassociations_v1_request_create (
        a_fki_ezsignfoldersignerassociation_idList
        );

    return ezsignfolder_import_ezsignfoldersignerassociations_v1_request_local_var;
end:
    if (a_fki_ezsignfoldersignerassociation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_ezsignfoldersignerassociation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_ezsignfoldersignerassociation_idList);
        a_fki_ezsignfoldersignerassociation_idList = NULL;
    }
    return NULL;

}
