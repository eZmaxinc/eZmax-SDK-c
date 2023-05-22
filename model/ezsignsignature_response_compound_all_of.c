#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_response_compound_all_of.h"



ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_create(
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    custom_creditcardtransaction_response_t *obj_creditcardtransaction
    ) {
    ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_local_var = malloc(sizeof(ezsignsignature_response_compound_all_of_t));
    if (!ezsignsignature_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignsignature_response_compound_all_of_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_response_compound_all_of_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    ezsignsignature_response_compound_all_of_local_var->obj_creditcardtransaction = obj_creditcardtransaction;

    return ezsignsignature_response_compound_all_of_local_var;
}


void ezsignsignature_response_compound_all_of_free(ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of) {
    if(NULL == ezsignsignature_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (ezsignsignature_response_compound_all_of->obj_creditcardtransaction) {
        custom_creditcardtransaction_response_free(ezsignsignature_response_compound_all_of->obj_creditcardtransaction);
        ezsignsignature_response_compound_all_of->obj_creditcardtransaction = NULL;
    }
    free(ezsignsignature_response_compound_all_of);
}

cJSON *ezsignsignature_response_compound_all_of_convertToJSON(ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_response_compound_all_of->b_ezsignsignature_customdate
    if(ezsignsignature_response_compound_all_of->b_ezsignsignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", ezsignsignature_response_compound_all_of->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate) {
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_response_compound_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
    }
    }
    }


    // ezsignsignature_response_compound_all_of->obj_creditcardtransaction
    if(ezsignsignature_response_compound_all_of->obj_creditcardtransaction) {
    cJSON *obj_creditcardtransaction_local_JSON = custom_creditcardtransaction_response_convertToJSON(ezsignsignature_response_compound_all_of->obj_creditcardtransaction);
    if(obj_creditcardtransaction_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardtransaction", obj_creditcardtransaction_local_JSON);
    if(item->child == NULL) {
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

ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_parseFromJSON(cJSON *ezsignsignature_response_compound_all_ofJSON){

    ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_local_var = NULL;

    // define the local list for ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate
    list_t *a_obj_ezsignsignaturecustomdateList = NULL;

    // define the local variable for ezsignsignature_response_compound_all_of->obj_creditcardtransaction
    custom_creditcardtransaction_response_t *obj_creditcardtransaction_local_nonprim = NULL;

    // ezsignsignature_response_compound_all_of->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_response_compound_all_ofJSON, "bEzsignsignatureCustomdate");
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_response_compound_all_of->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_response_compound_all_ofJSON, "a_objEzsignsignaturecustomdate");
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_response_compound_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_response_compound_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }

    // ezsignsignature_response_compound_all_of->obj_creditcardtransaction
    cJSON *obj_creditcardtransaction = cJSON_GetObjectItemCaseSensitive(ezsignsignature_response_compound_all_ofJSON, "objCreditcardtransaction");
    if (obj_creditcardtransaction) { 
    obj_creditcardtransaction_local_nonprim = custom_creditcardtransaction_response_parseFromJSON(obj_creditcardtransaction); //nonprimitive
    }


    ezsignsignature_response_compound_all_of_local_var = ezsignsignature_response_compound_all_of_create (
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL,
        obj_creditcardtransaction ? obj_creditcardtransaction_local_nonprim : NULL
        );

    return ezsignsignature_response_compound_all_of_local_var;
end:
    if (a_obj_ezsignsignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturecustomdateList) {
            ezsignsignaturecustomdate_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturecustomdateList);
        a_obj_ezsignsignaturecustomdateList = NULL;
    }
    if (obj_creditcardtransaction_local_nonprim) {
        custom_creditcardtransaction_response_free(obj_creditcardtransaction_local_nonprim);
        obj_creditcardtransaction_local_nonprim = NULL;
    }
    return NULL;

}
