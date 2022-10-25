#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_response_compound_all_of.h"



ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_create(
    ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract,
    custom_ezmaxpricing_response_t *obj_ezmaxpricing,
    list_t *a_obj_ezmaxinvoicingsummaryglobal,
    list_t *a_obj_ezmaxinvoicingsummaryexternal,
    list_t *a_obj_ezmaxinvoicingsummaryinternal,
    list_t *a_obj_ezmaxinvoicingagent,
    list_t *a_obj_ezmaxinvoicinguser,
    list_t *a_obj_ezmaxinvoicingezsignfolder,
    list_t *a_obj_ezmaxinvoicingezsigndocument
    ) {
    ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicing_response_compound_all_of_t));
    if (!ezmaxinvoicing_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicing_response_compound_all_of_local_var->obj_ezmaxinvoicingcontract = obj_ezmaxinvoicingcontract;
    ezmaxinvoicing_response_compound_all_of_local_var->obj_ezmaxpricing = obj_ezmaxpricing;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingsummaryglobal = a_obj_ezmaxinvoicingsummaryglobal;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingsummaryexternal = a_obj_ezmaxinvoicingsummaryexternal;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingsummaryinternal = a_obj_ezmaxinvoicingsummaryinternal;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingagent = a_obj_ezmaxinvoicingagent;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicinguser = a_obj_ezmaxinvoicinguser;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingezsignfolder = a_obj_ezmaxinvoicingezsignfolder;
    ezmaxinvoicing_response_compound_all_of_local_var->a_obj_ezmaxinvoicingezsigndocument = a_obj_ezmaxinvoicingezsigndocument;

    return ezmaxinvoicing_response_compound_all_of_local_var;
}


void ezmaxinvoicing_response_compound_all_of_free(ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of) {
    if(NULL == ezmaxinvoicing_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract) {
        ezmaxinvoicingcontract_response_compound_free(ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract);
        ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing) {
        custom_ezmaxpricing_response_free(ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing);
        ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal) {
            ezmaxinvoicingsummaryglobal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal) {
            ezmaxinvoicingsummaryexternal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal) {
            ezmaxinvoicingsummaryinternal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent) {
            ezmaxinvoicingagent_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser) {
            ezmaxinvoicinguser_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder) {
            custom_ezmaxinvoicing_ezsignfolder_response_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder = NULL;
    }
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument) {
            custom_ezmaxinvoicing_ezsigndocument_response_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument);
        ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument = NULL;
    }
    free(ezmaxinvoicing_response_compound_all_of);
}

cJSON *ezmaxinvoicing_response_compound_all_of_convertToJSON(ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract
    if (!ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract) {
        goto fail;
    }
    cJSON *obj_ezmaxinvoicingcontract_local_JSON = ezmaxinvoicingcontract_response_compound_convertToJSON(ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract);
    if(obj_ezmaxinvoicingcontract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxinvoicingcontract", obj_ezmaxinvoicingcontract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing
    if (!ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing) {
        goto fail;
    }
    cJSON *obj_ezmaxpricing_local_JSON = custom_ezmaxpricing_response_convertToJSON(ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing);
    if(obj_ezmaxpricing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpricing", obj_ezmaxpricing_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryglobal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryglobal");
    if(a_obj_ezmaxinvoicingsummaryglobal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryglobalListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryglobalListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryglobalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryglobal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryexternal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryexternal");
    if(a_obj_ezmaxinvoicingsummaryexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryexternalListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryexternalListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryexternal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryinternal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryinternal");
    if(a_obj_ezmaxinvoicingsummaryinternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryinternalListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryinternalListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryinternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryinternal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingagent = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingagent");
    if(a_obj_ezmaxinvoicingagent == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingagentListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent) {
    list_ForEach(a_obj_ezmaxinvoicingagentListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent) {
    cJSON *itemLocal = ezmaxinvoicingagent_response_compound_convertToJSON(a_obj_ezmaxinvoicingagentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingagent, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicinguser = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicinguser");
    if(a_obj_ezmaxinvoicinguser == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicinguserListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser) {
    list_ForEach(a_obj_ezmaxinvoicinguserListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser) {
    cJSON *itemLocal = ezmaxinvoicinguser_response_compound_convertToJSON(a_obj_ezmaxinvoicinguserListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicinguser, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingezsignfolder = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingezsignfolder");
    if(a_obj_ezmaxinvoicingezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingezsignfolderListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder) {
    list_ForEach(a_obj_ezmaxinvoicingezsignfolderListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder) {
    cJSON *itemLocal = custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(a_obj_ezmaxinvoicingezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingezsignfolder, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument
    if (!ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingezsigndocument = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingezsigndocument");
    if(a_obj_ezmaxinvoicingezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingezsigndocumentListEntry;
    if (ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument) {
    list_ForEach(a_obj_ezmaxinvoicingezsigndocumentListEntry, ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument) {
    cJSON *itemLocal = custom_ezmaxinvoicing_ezsigndocument_response_convertToJSON(a_obj_ezmaxinvoicingezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingezsigndocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicing_response_compound_all_ofJSON){

    ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_local_var = NULL;

    // define the local variable for ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract
    ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract_local_nonprim = NULL;

    // define the local variable for ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing
    custom_ezmaxpricing_response_t *obj_ezmaxpricing_local_nonprim = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal
    list_t *a_obj_ezmaxinvoicingsummaryglobalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal
    list_t *a_obj_ezmaxinvoicingsummaryexternalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal
    list_t *a_obj_ezmaxinvoicingsummaryinternalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent
    list_t *a_obj_ezmaxinvoicingagentList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser
    list_t *a_obj_ezmaxinvoicinguserList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder
    list_t *a_obj_ezmaxinvoicingezsignfolderList = NULL;

    // define the local list for ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument
    list_t *a_obj_ezmaxinvoicingezsigndocumentList = NULL;

    // ezmaxinvoicing_response_compound_all_of->obj_ezmaxinvoicingcontract
    cJSON *obj_ezmaxinvoicingcontract = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "objEzmaxinvoicingcontract");
    if (!obj_ezmaxinvoicingcontract) {
        goto end;
    }

    
    obj_ezmaxinvoicingcontract_local_nonprim = ezmaxinvoicingcontract_response_compound_parseFromJSON(obj_ezmaxinvoicingcontract); //nonprimitive

    // ezmaxinvoicing_response_compound_all_of->obj_ezmaxpricing
    cJSON *obj_ezmaxpricing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "objEzmaxpricing");
    if (!obj_ezmaxpricing) {
        goto end;
    }

    
    obj_ezmaxpricing_local_nonprim = custom_ezmaxpricing_response_parseFromJSON(obj_ezmaxpricing); //nonprimitive

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryglobal
    cJSON *a_obj_ezmaxinvoicingsummaryglobal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingsummaryglobal");
    if (!a_obj_ezmaxinvoicingsummaryglobal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryglobal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryglobalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryglobal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryglobal_response_compound_t *a_obj_ezmaxinvoicingsummaryglobalItem = ezmaxinvoicingsummaryglobal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryglobalList, a_obj_ezmaxinvoicingsummaryglobalItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryexternal
    cJSON *a_obj_ezmaxinvoicingsummaryexternal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingsummaryexternal");
    if (!a_obj_ezmaxinvoicingsummaryexternal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryexternal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryexternal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryexternal_response_compound_t *a_obj_ezmaxinvoicingsummaryexternalItem = ezmaxinvoicingsummaryexternal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryexternalList, a_obj_ezmaxinvoicingsummaryexternalItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingsummaryinternal
    cJSON *a_obj_ezmaxinvoicingsummaryinternal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingsummaryinternal");
    if (!a_obj_ezmaxinvoicingsummaryinternal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryinternal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryinternalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryinternal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryinternal_response_compound_t *a_obj_ezmaxinvoicingsummaryinternalItem = ezmaxinvoicingsummaryinternal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryinternalList, a_obj_ezmaxinvoicingsummaryinternalItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingagent
    cJSON *a_obj_ezmaxinvoicingagent = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingagent");
    if (!a_obj_ezmaxinvoicingagent) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingagent_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingagent)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingagentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingagent_local_nonprimitive,a_obj_ezmaxinvoicingagent )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingagent_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingagent_response_compound_t *a_obj_ezmaxinvoicingagentItem = ezmaxinvoicingagent_response_compound_parseFromJSON(a_obj_ezmaxinvoicingagent_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingagentList, a_obj_ezmaxinvoicingagentItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicinguser
    cJSON *a_obj_ezmaxinvoicinguser = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicinguser");
    if (!a_obj_ezmaxinvoicinguser) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicinguser_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicinguser)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicinguserList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicinguser_local_nonprimitive,a_obj_ezmaxinvoicinguser )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicinguser_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicinguser_response_compound_t *a_obj_ezmaxinvoicinguserItem = ezmaxinvoicinguser_response_compound_parseFromJSON(a_obj_ezmaxinvoicinguser_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicinguserList, a_obj_ezmaxinvoicinguserItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsignfolder
    cJSON *a_obj_ezmaxinvoicingezsignfolder = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingezsignfolder");
    if (!a_obj_ezmaxinvoicingezsignfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingezsignfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive,a_obj_ezmaxinvoicingezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive)){
            goto end;
        }
        custom_ezmaxinvoicing_ezsignfolder_response_t *a_obj_ezmaxinvoicingezsignfolderItem = custom_ezmaxinvoicing_ezsignfolder_response_parseFromJSON(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingezsignfolderList, a_obj_ezmaxinvoicingezsignfolderItem);
    }

    // ezmaxinvoicing_response_compound_all_of->a_obj_ezmaxinvoicingezsigndocument
    cJSON *a_obj_ezmaxinvoicingezsigndocument = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compound_all_ofJSON, "a_objEzmaxinvoicingezsigndocument");
    if (!a_obj_ezmaxinvoicingezsigndocument) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive,a_obj_ezmaxinvoicingezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive)){
            goto end;
        }
        custom_ezmaxinvoicing_ezsigndocument_response_t *a_obj_ezmaxinvoicingezsigndocumentItem = custom_ezmaxinvoicing_ezsigndocument_response_parseFromJSON(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingezsigndocumentList, a_obj_ezmaxinvoicingezsigndocumentItem);
    }


    ezmaxinvoicing_response_compound_all_of_local_var = ezmaxinvoicing_response_compound_all_of_create (
        obj_ezmaxinvoicingcontract_local_nonprim,
        obj_ezmaxpricing_local_nonprim,
        a_obj_ezmaxinvoicingsummaryglobalList,
        a_obj_ezmaxinvoicingsummaryexternalList,
        a_obj_ezmaxinvoicingsummaryinternalList,
        a_obj_ezmaxinvoicingagentList,
        a_obj_ezmaxinvoicinguserList,
        a_obj_ezmaxinvoicingezsignfolderList,
        a_obj_ezmaxinvoicingezsigndocumentList
        );

    return ezmaxinvoicing_response_compound_all_of_local_var;
end:
    if (obj_ezmaxinvoicingcontract_local_nonprim) {
        ezmaxinvoicingcontract_response_compound_free(obj_ezmaxinvoicingcontract_local_nonprim);
        obj_ezmaxinvoicingcontract_local_nonprim = NULL;
    }
    if (obj_ezmaxpricing_local_nonprim) {
        custom_ezmaxpricing_response_free(obj_ezmaxpricing_local_nonprim);
        obj_ezmaxpricing_local_nonprim = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryglobalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryglobalList) {
            ezmaxinvoicingsummaryglobal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryglobalList);
        a_obj_ezmaxinvoicingsummaryglobalList = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryexternalList) {
            ezmaxinvoicingsummaryexternal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryexternalList);
        a_obj_ezmaxinvoicingsummaryexternalList = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryinternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryinternalList) {
            ezmaxinvoicingsummaryinternal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryinternalList);
        a_obj_ezmaxinvoicingsummaryinternalList = NULL;
    }
    if (a_obj_ezmaxinvoicingagentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingagentList) {
            ezmaxinvoicingagent_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingagentList);
        a_obj_ezmaxinvoicingagentList = NULL;
    }
    if (a_obj_ezmaxinvoicinguserList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicinguserList) {
            ezmaxinvoicinguser_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicinguserList);
        a_obj_ezmaxinvoicinguserList = NULL;
    }
    if (a_obj_ezmaxinvoicingezsignfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingezsignfolderList) {
            custom_ezmaxinvoicing_ezsignfolder_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingezsignfolderList);
        a_obj_ezmaxinvoicingezsignfolderList = NULL;
    }
    if (a_obj_ezmaxinvoicingezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingezsigndocumentList) {
            custom_ezmaxinvoicing_ezsigndocument_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingezsigndocumentList);
        a_obj_ezmaxinvoicingezsigndocumentList = NULL;
    }
    return NULL;

}
