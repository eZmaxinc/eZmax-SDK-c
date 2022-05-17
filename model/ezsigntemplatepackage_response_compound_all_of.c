#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_response_compound_all_of.h"



ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_create(
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_local_var = malloc(sizeof(ezsigntemplatepackage_response_compound_all_of_t));
    if (!ezsigntemplatepackage_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_response_compound_all_of_local_var->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;
    ezsigntemplatepackage_response_compound_all_of_local_var->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;

    return ezsigntemplatepackage_response_compound_all_of_local_var;
}


void ezsigntemplatepackage_response_compound_all_of_free(ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of) {
    if(NULL == ezsigntemplatepackage_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner) {
        list_ForEach(listEntry, ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner = NULL;
    }
    if (ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership) {
        list_ForEach(listEntry, ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership);
        ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership = NULL;
    }
    free(ezsigntemplatepackage_response_compound_all_of);
}

cJSON *ezsigntemplatepackage_response_compound_all_of_convertToJSON(ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesigner");
    if(a_obj_ezsigntemplatepackagesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignerListEntry;
    if (ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner) {
    list_ForEach(a_obj_ezsigntemplatepackagesignerListEntry, ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner) {
    cJSON *itemLocal = ezsigntemplatepackagesigner_response_compound_convertToJSON(a_obj_ezsigntemplatepackagesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesigner, itemLocal);
    }
    }


    // ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagemembership");
    if(a_obj_ezsigntemplatepackagemembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagemembershipListEntry;
    if (ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership) {
    list_ForEach(a_obj_ezsigntemplatepackagemembershipListEntry, ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership) {
    cJSON *itemLocal = ezsigntemplatepackagemembership_response_compound_convertToJSON(a_obj_ezsigntemplatepackagemembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagemembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatepackage_response_compound_all_ofJSON){

    ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_local_var = NULL;

    // define the local list for ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner
    list_t *a_obj_ezsigntemplatepackagesignerList = NULL;

    // define the local list for ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership
    list_t *a_obj_ezsigntemplatepackagemembershipList = NULL;

    // ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagesigner
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compound_all_ofJSON, "a_objEzsigntemplatepackagesigner");
    if (!a_obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesigner_local_nonprimitive,a_obj_ezsigntemplatepackagesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesigner_response_compound_t *a_obj_ezsigntemplatepackagesignerItem = ezsigntemplatepackagesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignerList, a_obj_ezsigntemplatepackagesignerItem);
    }

    // ezsigntemplatepackage_response_compound_all_of->a_obj_ezsigntemplatepackagemembership
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compound_all_ofJSON, "a_objEzsigntemplatepackagemembership");
    if (!a_obj_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagemembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagemembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagemembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagemembership_local_nonprimitive,a_obj_ezsigntemplatepackagemembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagemembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagemembership_response_compound_t *a_obj_ezsigntemplatepackagemembershipItem = ezsigntemplatepackagemembership_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagemembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagemembershipList, a_obj_ezsigntemplatepackagemembershipItem);
    }


    ezsigntemplatepackage_response_compound_all_of_local_var = ezsigntemplatepackage_response_compound_all_of_create (
        a_obj_ezsigntemplatepackagesignerList,
        a_obj_ezsigntemplatepackagemembershipList
        );

    return ezsigntemplatepackage_response_compound_all_of_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignerList) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignerList);
        a_obj_ezsigntemplatepackagesignerList = NULL;
    }
    if (a_obj_ezsigntemplatepackagemembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagemembershipList) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagemembershipList);
        a_obj_ezsigntemplatepackagemembershipList = NULL;
    }
    return NULL;

}
