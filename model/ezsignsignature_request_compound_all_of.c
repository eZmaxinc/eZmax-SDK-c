#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_request_compound_all_of.h"



ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_create(
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate
    ) {
    ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_local_var = malloc(sizeof(ezsignsignature_request_compound_all_of_t));
    if (!ezsignsignature_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignsignature_request_compound_all_of_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_request_compound_all_of_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;

    return ezsignsignature_request_compound_all_of_local_var;
}


void ezsignsignature_request_compound_all_of_free(ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of) {
    if(NULL == ezsignsignature_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate = NULL;
    }
    free(ezsignsignature_request_compound_all_of);
}

cJSON *ezsignsignature_request_compound_all_of_convertToJSON(ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_request_compound_all_of->b_ezsignsignature_customdate
    if(ezsignsignature_request_compound_all_of->b_ezsignsignature_customdate) { 
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", ezsignsignature_request_compound_all_of->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
     } 


    // ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_request_compound_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
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

ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_parseFromJSON(cJSON *ezsignsignature_request_compound_all_ofJSON){

    ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_local_var = NULL;

    // ezsignsignature_request_compound_all_of->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_all_ofJSON, "bEzsignsignatureCustomdate");
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound_all_of->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_all_ofJSON, "a_objEzsignsignaturecustomdate");
    list_t *a_obj_ezsignsignaturecustomdateList;
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_request_compound_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_request_compound_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }


    ezsignsignature_request_compound_all_of_local_var = ezsignsignature_request_compound_all_of_create (
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL
        );

    return ezsignsignature_request_compound_all_of_local_var;
end:
    return NULL;

}
