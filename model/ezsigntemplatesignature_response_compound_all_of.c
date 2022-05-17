#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_response_compound_all_of.h"



ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_create(
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate
    ) {
    ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_local_var = malloc(sizeof(ezsigntemplatesignature_response_compound_all_of_t));
    if (!ezsigntemplatesignature_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_response_compound_all_of_local_var->b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    ezsigntemplatesignature_response_compound_all_of_local_var->a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;

    return ezsigntemplatesignature_response_compound_all_of_local_var;
}


void ezsigntemplatesignature_response_compound_all_of_free(ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of) {
    if(NULL == ezsigntemplatesignature_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate) {
        list_ForEach(listEntry, ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate) {
            ezsigntemplatesignaturecustomdate_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate);
        ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate = NULL;
    }
    free(ezsigntemplatesignature_response_compound_all_of);
}

cJSON *ezsigntemplatesignature_response_compound_all_of_convertToJSON(ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_response_compound_all_of->b_ezsigntemplatesignature_customdate
    if(ezsigntemplatesignature_response_compound_all_of->b_ezsigntemplatesignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureCustomdate", ezsigntemplatesignature_response_compound_all_of->b_ezsigntemplatesignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate
    if(ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignaturecustomdate");
    if(a_obj_ezsigntemplatesignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignaturecustomdateListEntry;
    if (ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate) {
    list_ForEach(a_obj_ezsigntemplatesignaturecustomdateListEntry, ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *itemLocal = ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(a_obj_ezsigntemplatesignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesignaturecustomdate, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatesignature_response_compound_all_ofJSON){

    ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_local_var = NULL;

    // define the local list for ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate
    list_t *a_obj_ezsigntemplatesignaturecustomdateList = NULL;

    // ezsigntemplatesignature_response_compound_all_of->b_ezsigntemplatesignature_customdate
    cJSON *b_ezsigntemplatesignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_response_compound_all_ofJSON, "bEzsigntemplatesignatureCustomdate");
    if (b_ezsigntemplatesignature_customdate) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_response_compound_all_of->a_obj_ezsigntemplatesignaturecustomdate
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_response_compound_all_ofJSON, "a_objEzsigntemplatesignaturecustomdate");
    if (a_obj_ezsigntemplatesignaturecustomdate) { 
    cJSON *a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive,a_obj_ezsigntemplatesignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesignaturecustomdate_response_compound_t *a_obj_ezsigntemplatesignaturecustomdateItem = ezsigntemplatesignaturecustomdate_response_compound_parseFromJSON(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignaturecustomdateList, a_obj_ezsigntemplatesignaturecustomdateItem);
    }
    }


    ezsigntemplatesignature_response_compound_all_of_local_var = ezsigntemplatesignature_response_compound_all_of_create (
        b_ezsigntemplatesignature_customdate ? b_ezsigntemplatesignature_customdate->valueint : 0,
        a_obj_ezsigntemplatesignaturecustomdate ? a_obj_ezsigntemplatesignaturecustomdateList : NULL
        );

    return ezsigntemplatesignature_response_compound_all_of_local_var;
end:
    if (a_obj_ezsigntemplatesignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignaturecustomdateList) {
            ezsigntemplatesignaturecustomdate_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignaturecustomdateList);
        a_obj_ezsigntemplatesignaturecustomdateList = NULL;
    }
    return NULL;

}
