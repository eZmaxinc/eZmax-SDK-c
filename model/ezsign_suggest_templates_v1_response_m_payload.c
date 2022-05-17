#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsign_suggest_templates_v1_response_m_payload.h"



ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackage
    ) {
    ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload_local_var = malloc(sizeof(ezsign_suggest_templates_v1_response_m_payload_t));
    if (!ezsign_suggest_templates_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsign_suggest_templates_v1_response_m_payload_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;
    ezsign_suggest_templates_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;

    return ezsign_suggest_templates_v1_response_m_payload_local_var;
}


void ezsign_suggest_templates_v1_response_m_payload_free(ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload) {
    if(NULL == ezsign_suggest_templates_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate) {
            ezsigntemplate_response_compound_free(listEntry->data);
        }
        list_freeList(ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate);
        ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate = NULL;
    }
    if (ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
        list_ForEach(listEntry, ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
            ezsigntemplatepackage_response_compound_free(listEntry->data);
        }
        list_freeList(ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage);
        ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage = NULL;
    }
    free(ezsign_suggest_templates_v1_response_m_payload);
}

cJSON *ezsign_suggest_templates_v1_response_m_payload_convertToJSON(ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate
    if (!ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_response_compound_convertToJSON(a_obj_ezsigntemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplate, itemLocal);
    }
    }


    // ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage
    if (!ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackage");
    if(a_obj_ezsigntemplatepackage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackageListEntry;
    if (ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
    list_ForEach(a_obj_ezsigntemplatepackageListEntry, ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
    cJSON *itemLocal = ezsigntemplatepackage_response_compound_convertToJSON(a_obj_ezsigntemplatepackageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload_parseFromJSON(cJSON *ezsign_suggest_templates_v1_response_m_payloadJSON){

    ezsign_suggest_templates_v1_response_m_payload_t *ezsign_suggest_templates_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // define the local list for ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage
    list_t *a_obj_ezsigntemplatepackageList = NULL;

    // ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_templates_v1_response_m_payloadJSON, "a_objEzsigntemplate");
    if (!a_obj_ezsigntemplate) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplate_local_nonprimitive,a_obj_ezsigntemplate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplate_response_compound_t *a_obj_ezsigntemplateItem = ezsigntemplate_response_compound_parseFromJSON(a_obj_ezsigntemplate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateList, a_obj_ezsigntemplateItem);
    }

    // ezsign_suggest_templates_v1_response_m_payload->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_templates_v1_response_m_payloadJSON, "a_objEzsigntemplatepackage");
    if (!a_obj_ezsigntemplatepackage) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackage_local_nonprimitive,a_obj_ezsigntemplatepackage )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackage_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackage_response_compound_t *a_obj_ezsigntemplatepackageItem = ezsigntemplatepackage_response_compound_parseFromJSON(a_obj_ezsigntemplatepackage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackageList, a_obj_ezsigntemplatepackageItem);
    }


    ezsign_suggest_templates_v1_response_m_payload_local_var = ezsign_suggest_templates_v1_response_m_payload_create (
        a_obj_ezsigntemplateList,
        a_obj_ezsigntemplatepackageList
        );

    return ezsign_suggest_templates_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateList) {
            ezsigntemplate_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateList);
        a_obj_ezsigntemplateList = NULL;
    }
    if (a_obj_ezsigntemplatepackageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackageList) {
            ezsigntemplatepackage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackageList);
        a_obj_ezsigntemplatepackageList = NULL;
    }
    return NULL;

}
