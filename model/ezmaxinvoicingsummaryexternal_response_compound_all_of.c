#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryexternal_response_compound_all_of.h"



ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail
    ) {
    ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicingsummaryexternal_response_compound_all_of_t));
    if (!ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var->a_obj_ezmaxinvoicingsummaryexternaldetail = a_obj_ezmaxinvoicingsummaryexternaldetail;

    return ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var;
}


void ezmaxinvoicingsummaryexternal_response_compound_all_of_free(ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of) {
    if(NULL == ezmaxinvoicingsummaryexternal_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail) {
            ezmaxinvoicingsummaryexternaldetail_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail);
        ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail = NULL;
    }
    free(ezmaxinvoicingsummaryexternal_response_compound_all_of);
}

cJSON *ezmaxinvoicingsummaryexternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail
    if (!ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryexternaldetail");
    if(a_obj_ezmaxinvoicingsummaryexternaldetail == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryexternaldetailListEntry;
    if (ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryexternaldetailListEntry, ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail) {
    cJSON *itemLocal = ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryexternaldetailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryexternaldetail, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_response_compound_all_ofJSON){

    ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var = NULL;

    // define the local list for ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetailList = NULL;

    // ezmaxinvoicingsummaryexternal_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternaldetail
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compound_all_ofJSON, "a_objEzmaxinvoicingsummaryexternaldetail");
    if (!a_obj_ezmaxinvoicingsummaryexternaldetail) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryexternaldetail)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryexternaldetailList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive,a_obj_ezmaxinvoicingsummaryexternaldetail )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryexternaldetail_response_compound_t *a_obj_ezmaxinvoicingsummaryexternaldetailItem = ezmaxinvoicingsummaryexternaldetail_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryexternaldetailList, a_obj_ezmaxinvoicingsummaryexternaldetailItem);
    }


    ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var = ezmaxinvoicingsummaryexternal_response_compound_all_of_create (
        a_obj_ezmaxinvoicingsummaryexternaldetailList
        );

    return ezmaxinvoicingsummaryexternal_response_compound_all_of_local_var;
end:
    if (a_obj_ezmaxinvoicingsummaryexternaldetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryexternaldetailList) {
            ezmaxinvoicingsummaryexternaldetail_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryexternaldetailList);
        a_obj_ezmaxinvoicingsummaryexternaldetailList = NULL;
    }
    return NULL;

}
