#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_response_compound_v3.h"



static ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_create_internal(
    int *pki_ezsigntemplatepackagemembership_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
    ) {
    ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_local_var = malloc(sizeof(ezsigntemplatepackagemembership_response_compound_v3_t));
    if (!ezsigntemplatepackagemembership_response_compound_v3_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepackagemembership_response_compound_v3_local_var, 0, sizeof(ezsigntemplatepackagemembership_response_compound_v3_t));
    ezsigntemplatepackagemembership_response_compound_v3_local_var->_library_owned = 1;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->obj_ezsigntemplate = obj_ezsigntemplate;
    ezsigntemplatepackagemembership_response_compound_v3_local_var->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    return ezsigntemplatepackagemembership_response_compound_v3_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_create(
    int *pki_ezsigntemplatepackagemembership_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
    ) {
    int *pki_ezsigntemplatepackagemembership_id_copy = NULL;
    if (pki_ezsigntemplatepackagemembership_id) {
        pki_ezsigntemplatepackagemembership_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatepackagemembership_id_copy) *pki_ezsigntemplatepackagemembership_id_copy = *pki_ezsigntemplatepackagemembership_id;
    }
    int *fki_ezsigntemplatepackage_id_copy = NULL;
    if (fki_ezsigntemplatepackage_id) {
        fki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepackage_id_copy) *fki_ezsigntemplatepackage_id_copy = *fki_ezsigntemplatepackage_id;
    }
    int *fki_ezsigntemplate_id_copy = NULL;
    if (fki_ezsigntemplate_id) {
        fki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplate_id_copy) *fki_ezsigntemplate_id_copy = *fki_ezsigntemplate_id;
    }
    int *i_ezsigntemplatepackagemembership_order_copy = NULL;
    if (i_ezsigntemplatepackagemembership_order) {
        i_ezsigntemplatepackagemembership_order_copy = malloc(sizeof(int));
        if (i_ezsigntemplatepackagemembership_order_copy) *i_ezsigntemplatepackagemembership_order_copy = *i_ezsigntemplatepackagemembership_order;
    }
    ezsigntemplatepackagemembership_response_compound_v3_t *result = ezsigntemplatepackagemembership_response_compound_v3_create_internal (
        pki_ezsigntemplatepackagemembership_id_copy,
        fki_ezsigntemplatepackage_id_copy,
        fki_ezsigntemplate_id_copy,
        i_ezsigntemplatepackagemembership_order_copy,
        obj_ezsigntemplate,
        a_obj_ezsigntemplatepackagesignermembership
        );
    if (!result) {
        free(pki_ezsigntemplatepackagemembership_id_copy);
        free(fki_ezsigntemplatepackage_id_copy);
        free(fki_ezsigntemplate_id_copy);
        free(i_ezsigntemplatepackagemembership_order_copy);
    }
    return result;
}

void ezsigntemplatepackagemembership_response_compound_v3_free(ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3) {
    if(NULL == ezsigntemplatepackagemembership_response_compound_v3){
        return ;
    }
    if(ezsigntemplatepackagemembership_response_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagemembership_response_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id) {
        free(ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id);
        ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id);
        ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id) {
        free(ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id);
        ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order) {
        free(ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order);
        ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_v4_free(ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate);
        ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate = NULL;
    }
    if (ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership) {
        list_ForEach(listEntry, ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership) {
            ezsigntemplatepackagesignermembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership);
        ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership = NULL;
    }
    free(ezsigntemplatepackagemembership_response_compound_v3);
}

cJSON *ezsigntemplatepackagemembership_response_compound_v3_convertToJSON(ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagemembershipID", *ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id
    if (!ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order
    if (!ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagemembershipOrder", *ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate
    if (!ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_v4_convertToJSON(ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership
    if (!ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesignermembership");
    if(a_obj_ezsigntemplatepackagesignermembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignermembershipListEntry;
    if (ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership) {
    list_ForEach(a_obj_ezsigntemplatepackagesignermembershipListEntry, ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership) {
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

ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_parseFromJSON(cJSON *ezsigntemplatepackagemembership_response_compound_v3JSON){

    ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id
    int *pki_ezsigntemplatepackagemembership_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order
    int *i_ezsigntemplatepackagemembership_order_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate
    ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate_local_nonprim = NULL;

    // define the local list for ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership
    list_t *a_obj_ezsigntemplatepackagesignermembershipList = NULL;

    // ezsigntemplatepackagemembership_response_compound_v3->pki_ezsigntemplatepackagemembership_id
    cJSON *pki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "pkiEzsigntemplatepackagemembershipID");
    if (cJSON_IsNull(pki_ezsigntemplatepackagemembership_id)) {
        pki_ezsigntemplatepackagemembership_id = NULL;
    }
    if (!pki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatepackagemembership_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatepackagemembership_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatepackagemembership_id_local_var = pki_ezsigntemplatepackagemembership_id->valuedouble;

    // ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatepackage_id_local_var = fki_ezsigntemplatepackage_id->valuedouble;

    // ezsigntemplatepackagemembership_response_compound_v3->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplate_id_local_var = fki_ezsigntemplate_id->valuedouble;

    // ezsigntemplatepackagemembership_response_compound_v3->i_ezsigntemplatepackagemembership_order
    cJSON *i_ezsigntemplatepackagemembership_order = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "iEzsigntemplatepackagemembershipOrder");
    if (cJSON_IsNull(i_ezsigntemplatepackagemembership_order)) {
        i_ezsigntemplatepackagemembership_order = NULL;
    }
    if (!i_ezsigntemplatepackagemembership_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepackagemembership_order))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatepackagemembership_order_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatepackagemembership_order_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatepackagemembership_order_local_var = i_ezsigntemplatepackagemembership_order->valuedouble;

    // ezsigntemplatepackagemembership_response_compound_v3->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "objEzsigntemplate");
    if (cJSON_IsNull(obj_ezsigntemplate)) {
        obj_ezsigntemplate = NULL;
    }
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_v4_parseFromJSON(obj_ezsigntemplate); //nonprimitive

    // ezsigntemplatepackagemembership_response_compound_v3->a_obj_ezsigntemplatepackagesignermembership
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_response_compound_v3JSON, "a_objEzsigntemplatepackagesignermembership");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackagesignermembership)) {
        a_obj_ezsigntemplatepackagesignermembership = NULL;
    }
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



    ezsigntemplatepackagemembership_response_compound_v3_local_var = ezsigntemplatepackagemembership_response_compound_v3_create_internal (
        pki_ezsigntemplatepackagemembership_id_local_var,
        fki_ezsigntemplatepackage_id_local_var,
        fki_ezsigntemplate_id_local_var,
        i_ezsigntemplatepackagemembership_order_local_var,
        obj_ezsigntemplate_local_nonprim,
        a_obj_ezsigntemplatepackagesignermembershipList
        );

    if (!ezsigntemplatepackagemembership_response_compound_v3_local_var) {
        goto end;
    }

    return ezsigntemplatepackagemembership_response_compound_v3_local_var;
end:
    if (pki_ezsigntemplatepackagemembership_id_local_var) {
        free(pki_ezsigntemplatepackagemembership_id_local_var);
        pki_ezsigntemplatepackagemembership_id_local_var = NULL;
    }
    if (fki_ezsigntemplatepackage_id_local_var) {
        free(fki_ezsigntemplatepackage_id_local_var);
        fki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (fki_ezsigntemplate_id_local_var) {
        free(fki_ezsigntemplate_id_local_var);
        fki_ezsigntemplate_id_local_var = NULL;
    }
    if (i_ezsigntemplatepackagemembership_order_local_var) {
        free(i_ezsigntemplatepackagemembership_order_local_var);
        i_ezsigntemplatepackagemembership_order_local_var = NULL;
    }
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_v4_free(obj_ezsigntemplate_local_nonprim);
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
