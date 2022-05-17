#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_import_ezsigntemplatepackage_v1_request.h"



ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_create(
    int fki_ezsigntemplatepackage_id,
    char *dt_ezsigndocument_duedate,
    list_t *a_obj_import_ezsigntemplatepackage_relation
    ) {
    ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var = malloc(sizeof(ezsignfolder_import_ezsigntemplatepackage_v1_request_t));
    if (!ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var->a_obj_import_ezsigntemplatepackage_relation = a_obj_import_ezsigntemplatepackage_relation;

    return ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var;
}


void ezsignfolder_import_ezsigntemplatepackage_v1_request_free(ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request) {
    if(NULL == ezsignfolder_import_ezsigntemplatepackage_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate) {
        free(ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate);
        ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation) {
        list_ForEach(listEntry, ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation) {
            custom_import_ezsigntemplatepackage_relation_request_free(listEntry->data);
        }
        list_freeList(ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation);
        ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation = NULL;
    }
    free(ezsignfolder_import_ezsigntemplatepackage_v1_request);
}

cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_request_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_import_ezsigntemplatepackage_v1_request->fki_ezsigntemplatepackage_id
    if (!ezsignfolder_import_ezsigntemplatepackage_v1_request->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsignfolder_import_ezsigntemplatepackage_v1_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate
    if (!ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation
    if (!ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation) {
        goto fail;
    }
    cJSON *a_obj_import_ezsigntemplatepackage_relation = cJSON_AddArrayToObject(item, "a_objImportEzsigntemplatepackageRelation");
    if(a_obj_import_ezsigntemplatepackage_relation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_import_ezsigntemplatepackage_relationListEntry;
    if (ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation) {
    list_ForEach(a_obj_import_ezsigntemplatepackage_relationListEntry, ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation) {
    cJSON *itemLocal = custom_import_ezsigntemplatepackage_relation_request_convertToJSON(a_obj_import_ezsigntemplatepackage_relationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_import_ezsigntemplatepackage_relation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_parseFromJSON(cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_requestJSON){

    ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var = NULL;

    // define the local list for ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation
    list_t *a_obj_import_ezsigntemplatepackage_relationList = NULL;

    // ezsignfolder_import_ezsigntemplatepackage_v1_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v1_requestJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_import_ezsigntemplatepackage_v1_request->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v1_requestJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsignfolder_import_ezsigntemplatepackage_v1_request->a_obj_import_ezsigntemplatepackage_relation
    cJSON *a_obj_import_ezsigntemplatepackage_relation = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v1_requestJSON, "a_objImportEzsigntemplatepackageRelation");
    if (!a_obj_import_ezsigntemplatepackage_relation) {
        goto end;
    }

    
    cJSON *a_obj_import_ezsigntemplatepackage_relation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_import_ezsigntemplatepackage_relation)){
        goto end; //nonprimitive container
    }

    a_obj_import_ezsigntemplatepackage_relationList = list_createList();

    cJSON_ArrayForEach(a_obj_import_ezsigntemplatepackage_relation_local_nonprimitive,a_obj_import_ezsigntemplatepackage_relation )
    {
        if(!cJSON_IsObject(a_obj_import_ezsigntemplatepackage_relation_local_nonprimitive)){
            goto end;
        }
        custom_import_ezsigntemplatepackage_relation_request_t *a_obj_import_ezsigntemplatepackage_relationItem = custom_import_ezsigntemplatepackage_relation_request_parseFromJSON(a_obj_import_ezsigntemplatepackage_relation_local_nonprimitive);

        list_addElement(a_obj_import_ezsigntemplatepackage_relationList, a_obj_import_ezsigntemplatepackage_relationItem);
    }


    ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var = ezsignfolder_import_ezsigntemplatepackage_v1_request_create (
        fki_ezsigntemplatepackage_id->valuedouble,
        strdup(dt_ezsigndocument_duedate->valuestring),
        a_obj_import_ezsigntemplatepackage_relationList
        );

    return ezsignfolder_import_ezsigntemplatepackage_v1_request_local_var;
end:
    if (a_obj_import_ezsigntemplatepackage_relationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_import_ezsigntemplatepackage_relationList) {
            custom_import_ezsigntemplatepackage_relation_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_import_ezsigntemplatepackage_relationList);
        a_obj_import_ezsigntemplatepackage_relationList = NULL;
    }
    return NULL;

}
