#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_response_compound_all_of.h"



ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_create(
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
    ) {
    ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_local_var = malloc(sizeof(ezsigntemplatepackagemembership_response_compound_all_of_t));
    if (!ezsigntemplatepackagemembership_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_response_compound_all_of_local_var->obj_ezsigntemplate = obj_ezsigntemplate;
    ezsigntemplatepackagemembership_response_compound_all_of_local_var->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;

    return ezsigntemplatepackagemembership_response_compound_all_of_local_var;
}


void ezsigntemplatepackagemembership_response_compound_all_of_free(ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of) {
    if(NULL == ezsigntemplatepackagemembership_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_free(ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate);
        ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership) {
        list_ForEach(listEntry, ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership) {
            ezsigntemplatepackagesignermembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership);
        ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership = NULL;
    }
    free(ezsigntemplatepackagemembership_response_compound_all_of);
}

cJSON *ezsigntemplatepackagemembership_response_compound_all_of_convertToJSON(ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate
    if (!ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_convertToJSON(ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership
    if (!ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesignermembership");
    if(a_obj_ezsigntemplatepackagesignermembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignermembershipListEntry;
    if (ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership) {
    list_ForEach(a_obj_ezsigntemplatepackagesignermembershipListEntry, ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership) {
    cJSON *itemLocal = ezsigntemplatepackagesignermembership_response_compound_convertToJSON(a_obj_ezsigntemplatepackagesignermembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesignermembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatepackagemembership_response_compound_all_ofJSON){

    ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate
    ezsigntemplate_response_compound_t *obj_ezsigntemplate_local_nonprim = NULL;

    // define the local list for ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership
    list_t *a_obj_ezsigntemplatepackagesignermembershipList = NULL;

    // ezsigntemplatepackagemembership_response_compound_all_of->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_all_ofJSON, "objEzsigntemplate");
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_parseFromJSON(obj_ezsigntemplate); //nonprimitive

    // ezsigntemplatepackagemembership_response_compound_all_of->a_obj_ezsigntemplatepackagesignermembership
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_all_ofJSON, "a_objEzsigntemplatepackagesignermembership");
    if (!a_obj_ezsigntemplatepackagesignermembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesignermembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignermembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive,a_obj_ezsigntemplatepackagesignermembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesignermembership_response_compound_t *a_obj_ezsigntemplatepackagesignermembershipItem = ezsigntemplatepackagesignermembership_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignermembershipList, a_obj_ezsigntemplatepackagesignermembershipItem);
    }


    ezsigntemplatepackagemembership_response_compound_all_of_local_var = ezsigntemplatepackagemembership_response_compound_all_of_create (
        obj_ezsigntemplate_local_nonprim,
        a_obj_ezsigntemplatepackagesignermembershipList
        );

    return ezsigntemplatepackagemembership_response_compound_all_of_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatepackagesignermembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignermembershipList) {
            ezsigntemplatepackagesignermembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignermembershipList);
        a_obj_ezsigntemplatepackagesignermembershipList = NULL;
    }
    return NULL;

}
