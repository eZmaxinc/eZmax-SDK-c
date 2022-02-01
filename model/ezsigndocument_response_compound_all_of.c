#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_response_compound_all_of.h"



ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_create(
    int i_ezsigndocument_stepformtotal,
    int i_ezsigndocument_stepformcurrent,
    int i_ezsigndocument_stepsignaturetotal,
    int i_ezsigndocument_stepsignature_current,
    list_t *a_obj_ezsignfoldersignerassociationstatus
    ) {
    ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_local_var = malloc(sizeof(ezsigndocument_response_compound_all_of_t));
    if (!ezsigndocument_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigndocument_response_compound_all_of_local_var->i_ezsigndocument_stepformtotal = i_ezsigndocument_stepformtotal;
    ezsigndocument_response_compound_all_of_local_var->i_ezsigndocument_stepformcurrent = i_ezsigndocument_stepformcurrent;
    ezsigndocument_response_compound_all_of_local_var->i_ezsigndocument_stepsignaturetotal = i_ezsigndocument_stepsignaturetotal;
    ezsigndocument_response_compound_all_of_local_var->i_ezsigndocument_stepsignature_current = i_ezsigndocument_stepsignature_current;
    ezsigndocument_response_compound_all_of_local_var->a_obj_ezsignfoldersignerassociationstatus = a_obj_ezsignfoldersignerassociationstatus;

    return ezsigndocument_response_compound_all_of_local_var;
}


void ezsigndocument_response_compound_all_of_free(ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of) {
    if(NULL == ezsigndocument_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus) {
        list_ForEach(listEntry, ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus) {
            custom_ezsignfoldersignerassociationstatus_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus);
        ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus = NULL;
    }
    free(ezsigndocument_response_compound_all_of);
}

cJSON *ezsigndocument_response_compound_all_of_convertToJSON(ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformtotal
    if (!ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformtotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepformtotal", ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformtotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformcurrent
    if (!ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformcurrent) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepformcurrent", ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformcurrent) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignaturetotal
    if (!ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignaturetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepsignaturetotal", ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignature_current
    if (!ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignature_current) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepsignatureCurrent", ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignature_current) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus
    if (!ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignfoldersignerassociationstatus = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociationstatus");
    if(a_obj_ezsignfoldersignerassociationstatus == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationstatusListEntry;
    if (ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus) {
    list_ForEach(a_obj_ezsignfoldersignerassociationstatusListEntry, ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus) {
    cJSON *itemLocal = custom_ezsignfoldersignerassociationstatus_response_convertToJSON(a_obj_ezsignfoldersignerassociationstatusListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociationstatus, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_parseFromJSON(cJSON *ezsigndocument_response_compound_all_ofJSON){

    ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_local_var = NULL;

    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformtotal
    cJSON *i_ezsigndocument_stepformtotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_compound_all_ofJSON, "iEzsigndocumentStepformtotal");
    if (!i_ezsigndocument_stepformtotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepformtotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepformcurrent
    cJSON *i_ezsigndocument_stepformcurrent = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_compound_all_ofJSON, "iEzsigndocumentStepformcurrent");
    if (!i_ezsigndocument_stepformcurrent) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepformcurrent))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignaturetotal
    cJSON *i_ezsigndocument_stepsignaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_compound_all_ofJSON, "iEzsigndocumentStepsignaturetotal");
    if (!i_ezsigndocument_stepsignaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepsignaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_compound_all_of->i_ezsigndocument_stepsignature_current
    cJSON *i_ezsigndocument_stepsignature_current = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_compound_all_ofJSON, "iEzsigndocumentStepsignatureCurrent");
    if (!i_ezsigndocument_stepsignature_current) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepsignature_current))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_compound_all_of->a_obj_ezsignfoldersignerassociationstatus
    cJSON *a_obj_ezsignfoldersignerassociationstatus = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_compound_all_ofJSON, "a_objEzsignfoldersignerassociationstatus");
    if (!a_obj_ezsignfoldersignerassociationstatus) {
        goto end;
    }

    list_t *a_obj_ezsignfoldersignerassociationstatusList;
    
    cJSON *a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociationstatus)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationstatusList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive,a_obj_ezsignfoldersignerassociationstatus )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldersignerassociationstatus_response_t *a_obj_ezsignfoldersignerassociationstatusItem = custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationstatusList, a_obj_ezsignfoldersignerassociationstatusItem);
    }


    ezsigndocument_response_compound_all_of_local_var = ezsigndocument_response_compound_all_of_create (
        i_ezsigndocument_stepformtotal->valuedouble,
        i_ezsigndocument_stepformcurrent->valuedouble,
        i_ezsigndocument_stepsignaturetotal->valuedouble,
        i_ezsigndocument_stepsignature_current->valuedouble,
        a_obj_ezsignfoldersignerassociationstatusList
        );

    return ezsigndocument_response_compound_all_of_local_var;
end:
    return NULL;

}
