#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_import_ezsigntemplatepackage_v3_request.h"



static ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request_create_internal(
    int *fki_ezsigntemplatepackage_id,
    char *dt_ezsigndocument_duedate,
    list_t *a_obj_import_ezsigntemplatepackage_relation,
    list_t *a_s_ezsigntemplateannotation_description,
    list_t *a_s_ezsigntemplateannotation_defaulttext
    ) {
    ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var = malloc(sizeof(ezsignfolder_import_ezsigntemplatepackage_v3_request_t));
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var) {
        return NULL;
    }
    memset(ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var, 0, sizeof(ezsignfolder_import_ezsigntemplatepackage_v3_request_t));
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->_library_owned = 1;
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->a_obj_import_ezsigntemplatepackage_relation = a_obj_import_ezsigntemplatepackage_relation;
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->a_s_ezsigntemplateannotation_description = a_s_ezsigntemplateannotation_description;
    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var->a_s_ezsigntemplateannotation_defaulttext = a_s_ezsigntemplateannotation_defaulttext;
    return ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request_create(
    int *fki_ezsigntemplatepackage_id,
    char *dt_ezsigndocument_duedate,
    list_t *a_obj_import_ezsigntemplatepackage_relation,
    list_t *a_s_ezsigntemplateannotation_description,
    list_t *a_s_ezsigntemplateannotation_defaulttext
    ) {
    int *fki_ezsigntemplatepackage_id_copy = NULL;
    if (fki_ezsigntemplatepackage_id) {
        fki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepackage_id_copy) *fki_ezsigntemplatepackage_id_copy = *fki_ezsigntemplatepackage_id;
    }
    ezsignfolder_import_ezsigntemplatepackage_v3_request_t *result = ezsignfolder_import_ezsigntemplatepackage_v3_request_create_internal (
        fki_ezsigntemplatepackage_id_copy,
        dt_ezsigndocument_duedate,
        a_obj_import_ezsigntemplatepackage_relation,
        a_s_ezsigntemplateannotation_description,
        a_s_ezsigntemplateannotation_defaulttext
        );
    if (!result) {
        free(fki_ezsigntemplatepackage_id_copy);
    }
    return result;
}

void ezsignfolder_import_ezsigntemplatepackage_v3_request_free(ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request) {
    if(NULL == ezsignfolder_import_ezsigntemplatepackage_v3_request){
        return ;
    }
    if(ezsignfolder_import_ezsigntemplatepackage_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_import_ezsigntemplatepackage_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id) {
        free(ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id);
        ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate) {
        free(ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate);
        ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation) {
        list_ForEach(listEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation) {
            custom_import_ezsigntemplatepackage_relation_request_free(listEntry->data);
        }
        list_freeList(ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation);
        ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation = NULL;
    }
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description) {
        list_ForEach(listEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description);
        ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description = NULL;
    }
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
        list_ForEach(listEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext);
        ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext = NULL;
    }
    free(ezsignfolder_import_ezsigntemplatepackage_v3_request);
}

cJSON *ezsignfolder_import_ezsigntemplatepackage_v3_request_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation) {
        goto fail;
    }
    cJSON *a_obj_import_ezsigntemplatepackage_relation = cJSON_AddArrayToObject(item, "a_objImportEzsigntemplatepackageRelation");
    if(a_obj_import_ezsigntemplatepackage_relation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_import_ezsigntemplatepackage_relationListEntry;
    if (ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation) {
    list_ForEach(a_obj_import_ezsigntemplatepackage_relationListEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation) {
    cJSON *itemLocal = custom_import_ezsigntemplatepackage_relation_request_convertToJSON(a_obj_import_ezsigntemplatepackage_relationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_import_ezsigntemplatepackage_relation, itemLocal);
    }
    }


    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateannotation_description = cJSON_AddArrayToObject(item, "a_sEzsigntemplateannotationDescription");
    if(a_s_ezsigntemplateannotation_description == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateannotation_descriptionListEntry;
    list_ForEach(a_s_ezsigntemplateannotation_descriptionListEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateannotation_description, "", a_s_ezsigntemplateannotation_descriptionListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext
    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateannotation_defaulttext = cJSON_AddArrayToObject(item, "a_sEzsigntemplateannotationDefaulttext");
    if(a_s_ezsigntemplateannotation_defaulttext == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateannotation_defaulttextListEntry;
    list_ForEach(a_s_ezsigntemplateannotation_defaulttextListEntry, ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateannotation_defaulttext, "", a_s_ezsigntemplateannotation_defaulttextListEntry->data) == NULL)
    {
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

ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request_parseFromJSON(cJSON *ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON){

    ezsignfolder_import_ezsigntemplatepackage_v3_request_t *ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var = NULL;

    // define the local variable for ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    char *dt_ezsigndocument_duedate_local_str = NULL;

    // define the local list for ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation
    list_t *a_obj_import_ezsigntemplatepackage_relationList = NULL;

    // define the local list for ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description
    list_t *a_s_ezsigntemplateannotation_descriptionList = NULL;

    // define the local list for ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext
    list_t *a_s_ezsigntemplateannotation_defaulttextList = NULL;

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON, "fkiEzsigntemplatepackageID");
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

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON, "dtEzsigndocumentDuedate");
    if (cJSON_IsNull(dt_ezsigndocument_duedate)) {
        dt_ezsigndocument_duedate = NULL;
    }
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_obj_import_ezsigntemplatepackage_relation
    cJSON *a_obj_import_ezsigntemplatepackage_relation = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON, "a_objImportEzsigntemplatepackageRelation");
    if (cJSON_IsNull(a_obj_import_ezsigntemplatepackage_relation)) {
        a_obj_import_ezsigntemplatepackage_relation = NULL;
    }
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

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_description
    cJSON *a_s_ezsigntemplateannotation_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON, "a_sEzsigntemplateannotationDescription");
    if (cJSON_IsNull(a_s_ezsigntemplateannotation_description)) {
        a_s_ezsigntemplateannotation_description = NULL;
    }
    if (!a_s_ezsigntemplateannotation_description) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplateannotation_description_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplateannotation_description)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplateannotation_descriptionList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplateannotation_description_local, a_s_ezsigntemplateannotation_description)
    {
        if(!cJSON_IsString(a_s_ezsigntemplateannotation_description_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplateannotation_descriptionList , strdup(a_s_ezsigntemplateannotation_description_local->valuestring));
    }

    // ezsignfolder_import_ezsigntemplatepackage_v3_request->a_s_ezsigntemplateannotation_defaulttext
    cJSON *a_s_ezsigntemplateannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsignfolder_import_ezsigntemplatepackage_v3_requestJSON, "a_sEzsigntemplateannotationDefaulttext");
    if (cJSON_IsNull(a_s_ezsigntemplateannotation_defaulttext)) {
        a_s_ezsigntemplateannotation_defaulttext = NULL;
    }
    if (!a_s_ezsigntemplateannotation_defaulttext) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplateannotation_defaulttext_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplateannotation_defaulttext)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplateannotation_defaulttextList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplateannotation_defaulttext_local, a_s_ezsigntemplateannotation_defaulttext)
    {
        if(!cJSON_IsString(a_s_ezsigntemplateannotation_defaulttext_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplateannotation_defaulttextList , strdup(a_s_ezsigntemplateannotation_defaulttext_local->valuestring));
    }


    if (dt_ezsigndocument_duedate && !cJSON_IsNull(dt_ezsigndocument_duedate)) dt_ezsigndocument_duedate_local_str = strdup(dt_ezsigndocument_duedate->valuestring);

    ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var = ezsignfolder_import_ezsigntemplatepackage_v3_request_create_internal (
        fki_ezsigntemplatepackage_id_local_var,
        dt_ezsigndocument_duedate_local_str,
        a_obj_import_ezsigntemplatepackage_relationList,
        a_s_ezsigntemplateannotation_descriptionList,
        a_s_ezsigntemplateannotation_defaulttextList
        );

    if (!ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var) {
        goto end;
    }

    return ezsignfolder_import_ezsigntemplatepackage_v3_request_local_var;
end:
    if (fki_ezsigntemplatepackage_id_local_var) {
        free(fki_ezsigntemplatepackage_id_local_var);
        fki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (dt_ezsigndocument_duedate_local_str) {
        free(dt_ezsigndocument_duedate_local_str);
        dt_ezsigndocument_duedate_local_str = NULL;
    }
    if (a_obj_import_ezsigntemplatepackage_relationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_import_ezsigntemplatepackage_relationList) {
            custom_import_ezsigntemplatepackage_relation_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_import_ezsigntemplatepackage_relationList);
        a_obj_import_ezsigntemplatepackage_relationList = NULL;
    }
    if (a_s_ezsigntemplateannotation_descriptionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateannotation_descriptionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateannotation_descriptionList);
        a_s_ezsigntemplateannotation_descriptionList = NULL;
    }
    if (a_s_ezsigntemplateannotation_defaulttextList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateannotation_defaulttextList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateannotation_defaulttextList);
        a_s_ezsigntemplateannotation_defaulttextList = NULL;
    }
    return NULL;

}
