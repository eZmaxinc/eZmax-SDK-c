#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryinternal_response_compound_all_of.h"



ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail
    ) {
    ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicingsummaryinternal_response_compound_all_of_t));
    if (!ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var->a_obj_ezmaxinvoicingsummaryinternaldetail = a_obj_ezmaxinvoicingsummaryinternaldetail;

    return ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var;
}


void ezmaxinvoicingsummaryinternal_response_compound_all_of_free(ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of) {
    if(NULL == ezmaxinvoicingsummaryinternal_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail) {
            ezmaxinvoicingsummaryinternaldetail_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail);
        ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail = NULL;
    }
    free(ezmaxinvoicingsummaryinternal_response_compound_all_of);
}

cJSON *ezmaxinvoicingsummaryinternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail
    if (!ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryinternaldetail");
    if(a_obj_ezmaxinvoicingsummaryinternaldetail == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryinternaldetailListEntry;
    if (ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryinternaldetailListEntry, ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail) {
    cJSON *itemLocal = ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryinternaldetailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryinternaldetail, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_response_compound_all_ofJSON){

    ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var = NULL;

    // define the local list for ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetailList = NULL;

    // ezmaxinvoicingsummaryinternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternaldetail
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compound_all_ofJSON, "a_objEzmaxinvoicingsummaryinternaldetail");
    if (!a_obj_ezmaxinvoicingsummaryinternaldetail) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryinternaldetail)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryinternaldetailList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive,a_obj_ezmaxinvoicingsummaryinternaldetail )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryinternaldetail_response_compound_t *a_obj_ezmaxinvoicingsummaryinternaldetailItem = ezmaxinvoicingsummaryinternaldetail_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryinternaldetailList, a_obj_ezmaxinvoicingsummaryinternaldetailItem);
    }


    ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var = ezmaxinvoicingsummaryinternal_response_compound_all_of_create (
        a_obj_ezmaxinvoicingsummaryinternaldetailList
        );

    return ezmaxinvoicingsummaryinternal_response_compound_all_of_local_var;
end:
    if (a_obj_ezmaxinvoicingsummaryinternaldetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryinternaldetailList) {
            ezmaxinvoicingsummaryinternaldetail_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryinternaldetailList);
        a_obj_ezmaxinvoicingsummaryinternaldetailList = NULL;
    }
    return NULL;

}
