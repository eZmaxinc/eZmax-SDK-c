#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_request_compound_all_of.h"



ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_create(
    list_t *a_ezsignfoldersignerassociation
    ) {
    ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_local_var = malloc(sizeof(ezsignfolder_request_compound_all_of_t));
    if (!ezsignfolder_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignfolder_request_compound_all_of_local_var->a_ezsignfoldersignerassociation = a_ezsignfoldersignerassociation;

    return ezsignfolder_request_compound_all_of_local_var;
}


void ezsignfolder_request_compound_all_of_free(ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of) {
    if(NULL == ezsignfolder_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation) {
        list_ForEach(listEntry, ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation) {
            ezsignfoldersignerassociation_request_free(listEntry->data);
        }
        list_free(ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation);
        ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfolder_request_compound_all_of);
}

cJSON *ezsignfolder_request_compound_all_of_convertToJSON(ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation
    if (!ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation) {
        goto fail;
    }
    
    cJSON *a_ezsignfoldersignerassociation = cJSON_AddArrayToObject(item, "a_Ezsignfoldersignerassociation");
    if(a_ezsignfoldersignerassociation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_ezsignfoldersignerassociationListEntry;
    if (ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation) {
    list_ForEach(a_ezsignfoldersignerassociationListEntry, ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation) {
    cJSON *itemLocal = ezsignfoldersignerassociation_request_convertToJSON(a_ezsignfoldersignerassociationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_ezsignfoldersignerassociation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_parseFromJSON(cJSON *ezsignfolder_request_compound_all_ofJSON){

    ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_local_var = NULL;

    // ezsignfolder_request_compound_all_of->a_ezsignfoldersignerassociation
    cJSON *a_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_all_ofJSON, "a_Ezsignfoldersignerassociation");
    if (!a_ezsignfoldersignerassociation) {
        goto end;
    }

    list_t *a_ezsignfoldersignerassociationList;
    
    cJSON *a_ezsignfoldersignerassociation_local_nonprimitive;
    if(!cJSON_IsArray(a_ezsignfoldersignerassociation)){
        goto end; //nonprimitive container
    }

    a_ezsignfoldersignerassociationList = list_create();

    cJSON_ArrayForEach(a_ezsignfoldersignerassociation_local_nonprimitive,a_ezsignfoldersignerassociation )
    {
        if(!cJSON_IsObject(a_ezsignfoldersignerassociation_local_nonprimitive)){
            goto end;
        }
        ezsignfoldersignerassociation_request_t *a_ezsignfoldersignerassociationItem = ezsignfoldersignerassociation_request_parseFromJSON(a_ezsignfoldersignerassociation_local_nonprimitive);

        list_addElement(a_ezsignfoldersignerassociationList, a_ezsignfoldersignerassociationItem);
    }


    ezsignfolder_request_compound_all_of_local_var = ezsignfolder_request_compound_all_of_create (
        a_ezsignfoldersignerassociationList
        );

    return ezsignfolder_request_compound_all_of_local_var;
end:
    return NULL;

}
