#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplateglobal_v2_request.h"



static ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_create_internal(
    int *fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_s_ezsigntemplateglobalannotation_description,
    list_t *a_s_ezsigntemplateglobalannotation_defaulttext
    ) {
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t));
    if (!ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var, 0, sizeof(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t));
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->_library_owned = 1;
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->a_s_ezsigntemplateglobalsigner = a_s_ezsigntemplateglobalsigner;
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->a_s_ezsigntemplateglobalannotation_description = a_s_ezsigntemplateglobalannotation_description;
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var->a_s_ezsigntemplateglobalannotation_defaulttext = a_s_ezsigntemplateglobalannotation_defaulttext;
    return ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_create(
    int *fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_s_ezsigntemplateglobalannotation_description,
    list_t *a_s_ezsigntemplateglobalannotation_defaulttext
    ) {
    int *fki_ezsigntemplateglobal_id_copy = NULL;
    if (fki_ezsigntemplateglobal_id) {
        fki_ezsigntemplateglobal_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateglobal_id_copy) *fki_ezsigntemplateglobal_id_copy = *fki_ezsigntemplateglobal_id;
    }
    ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *result = ezsigndocument_apply_ezsigntemplateglobal_v2_request_create_internal (
        fki_ezsigntemplateglobal_id_copy,
        a_s_ezsigntemplateglobalsigner,
        a_fki_ezsignfoldersignerassociation_id,
        a_s_ezsigntemplateglobalannotation_description,
        a_s_ezsigntemplateglobalannotation_defaulttext
        );
    if (!result) {
        free(fki_ezsigntemplateglobal_id_copy);
    }
    return result;
}

void ezsigndocument_apply_ezsigntemplateglobal_v2_request_free(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request) {
    if(NULL == ezsigndocument_apply_ezsigntemplateglobal_v2_request){
        return ;
    }
    if(ezsigndocument_apply_ezsigntemplateglobal_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_apply_ezsigntemplateglobal_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id) {
        free(ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id);
        ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner);
        ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id);
        ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description);
        ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext);
        ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplateglobal_v2_request);
}

cJSON *ezsigndocument_apply_ezsigntemplateglobal_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id
    if (!ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobalID", *ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner
    if (!ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateglobalsigner = cJSON_AddArrayToObject(item, "a_sEzsigntemplateglobalsigner");
    if(a_s_ezsigntemplateglobalsigner == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateglobalsignerListEntry;
    list_ForEach(a_s_ezsigntemplateglobalsignerListEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateglobalsigner, "", a_s_ezsigntemplateglobalsignerListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description
    if(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description) {
    cJSON *a_s_ezsigntemplateglobalannotation_description = cJSON_AddArrayToObject(item, "a_sEzsigntemplateglobalannotationDescription");
    if(a_s_ezsigntemplateglobalannotation_description == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateglobalannotation_descriptionListEntry;
    list_ForEach(a_s_ezsigntemplateglobalannotation_descriptionListEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateglobalannotation_description, "", a_s_ezsigntemplateglobalannotation_descriptionListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext
    if(ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext) {
    cJSON *a_s_ezsigntemplateglobalannotation_defaulttext = cJSON_AddArrayToObject(item, "a_sEzsigntemplateglobalannotationDefaulttext");
    if(a_s_ezsigntemplateglobalannotation_defaulttext == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateglobalannotation_defaulttextListEntry;
    list_ForEach(a_s_ezsigntemplateglobalannotation_defaulttextListEntry, ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateglobalannotation_defaulttext, "", a_s_ezsigntemplateglobalannotation_defaulttextListEntry->data) == NULL)
    {
        goto fail;
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

ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON){

    ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id
    int *fki_ezsigntemplateglobal_id_local_var = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner
    list_t *a_s_ezsigntemplateglobalsignerList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description
    list_t *a_s_ezsigntemplateglobalannotation_descriptionList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext
    list_t *a_s_ezsigntemplateglobalannotation_defaulttextList = NULL;

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->fki_ezsigntemplateglobal_id
    cJSON *fki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON, "fkiEzsigntemplateglobalID");
    if (cJSON_IsNull(fki_ezsigntemplateglobal_id)) {
        fki_ezsigntemplateglobal_id = NULL;
    }
    if (!fki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateglobal_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateglobal_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateglobal_id_local_var = fki_ezsigntemplateglobal_id->valuedouble;

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalsigner
    cJSON *a_s_ezsigntemplateglobalsigner = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON, "a_sEzsigntemplateglobalsigner");
    if (cJSON_IsNull(a_s_ezsigntemplateglobalsigner)) {
        a_s_ezsigntemplateglobalsigner = NULL;
    }
    if (!a_s_ezsigntemplateglobalsigner) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplateglobalsigner_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplateglobalsigner)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplateglobalsignerList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplateglobalsigner_local, a_s_ezsigntemplateglobalsigner)
    {
        if(!cJSON_IsString(a_s_ezsigntemplateglobalsigner_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplateglobalsignerList , strdup(a_s_ezsigntemplateglobalsigner_local->valuestring));
    }

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON, "a_fkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(a_fki_ezsignfoldersignerassociation_id)) {
        a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!a_fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    cJSON *a_fki_ezsignfoldersignerassociation_id_local = NULL;
    if(!cJSON_IsArray(a_fki_ezsignfoldersignerassociation_id)) {
        goto end;//primitive container
    }
    a_fki_ezsignfoldersignerassociation_idList = list_createList();

    cJSON_ArrayForEach(a_fki_ezsignfoldersignerassociation_id_local, a_fki_ezsignfoldersignerassociation_id)
    {
        if(!cJSON_IsNumber(a_fki_ezsignfoldersignerassociation_id_local))
        {
            goto end;
        }
        double *a_fki_ezsignfoldersignerassociation_id_local_value = calloc(1, sizeof(double));
        if(!a_fki_ezsignfoldersignerassociation_id_local_value)
        {
            goto end;
        }
        *a_fki_ezsignfoldersignerassociation_id_local_value = a_fki_ezsignfoldersignerassociation_id_local->valuedouble;
        list_addElement(a_fki_ezsignfoldersignerassociation_idList , a_fki_ezsignfoldersignerassociation_id_local_value);
    }

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_description
    cJSON *a_s_ezsigntemplateglobalannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON, "a_sEzsigntemplateglobalannotationDescription");
    if (cJSON_IsNull(a_s_ezsigntemplateglobalannotation_description)) {
        a_s_ezsigntemplateglobalannotation_description = NULL;
    }
    if (a_s_ezsigntemplateglobalannotation_description) { 
    cJSON *a_s_ezsigntemplateglobalannotation_description_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplateglobalannotation_description)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplateglobalannotation_descriptionList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplateglobalannotation_description_local, a_s_ezsigntemplateglobalannotation_description)
    {
        if(!cJSON_IsString(a_s_ezsigntemplateglobalannotation_description_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplateglobalannotation_descriptionList , strdup(a_s_ezsigntemplateglobalannotation_description_local->valuestring));
    }
    }

    // ezsigndocument_apply_ezsigntemplateglobal_v2_request->a_s_ezsigntemplateglobalannotation_defaulttext
    cJSON *a_s_ezsigntemplateglobalannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON, "a_sEzsigntemplateglobalannotationDefaulttext");
    if (cJSON_IsNull(a_s_ezsigntemplateglobalannotation_defaulttext)) {
        a_s_ezsigntemplateglobalannotation_defaulttext = NULL;
    }
    if (a_s_ezsigntemplateglobalannotation_defaulttext) { 
    cJSON *a_s_ezsigntemplateglobalannotation_defaulttext_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplateglobalannotation_defaulttext)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplateglobalannotation_defaulttextList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplateglobalannotation_defaulttext_local, a_s_ezsigntemplateglobalannotation_defaulttext)
    {
        if(!cJSON_IsString(a_s_ezsigntemplateglobalannotation_defaulttext_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplateglobalannotation_defaulttextList , strdup(a_s_ezsigntemplateglobalannotation_defaulttext_local->valuestring));
    }
    }



    ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var = ezsigndocument_apply_ezsigntemplateglobal_v2_request_create_internal (
        fki_ezsigntemplateglobal_id_local_var,
        a_s_ezsigntemplateglobalsignerList,
        a_fki_ezsignfoldersignerassociation_idList,
        a_s_ezsigntemplateglobalannotation_description ? a_s_ezsigntemplateglobalannotation_descriptionList : NULL,
        a_s_ezsigntemplateglobalannotation_defaulttext ? a_s_ezsigntemplateglobalannotation_defaulttextList : NULL
        );

    if (!ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var) {
        goto end;
    }

    return ezsigndocument_apply_ezsigntemplateglobal_v2_request_local_var;
end:
    if (fki_ezsigntemplateglobal_id_local_var) {
        free(fki_ezsigntemplateglobal_id_local_var);
        fki_ezsigntemplateglobal_id_local_var = NULL;
    }
    if (a_s_ezsigntemplateglobalsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateglobalsignerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateglobalsignerList);
        a_s_ezsigntemplateglobalsignerList = NULL;
    }
    if (a_fki_ezsignfoldersignerassociation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_ezsignfoldersignerassociation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_ezsignfoldersignerassociation_idList);
        a_fki_ezsignfoldersignerassociation_idList = NULL;
    }
    if (a_s_ezsigntemplateglobalannotation_descriptionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateglobalannotation_descriptionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateglobalannotation_descriptionList);
        a_s_ezsigntemplateglobalannotation_descriptionList = NULL;
    }
    if (a_s_ezsigntemplateglobalannotation_defaulttextList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateglobalannotation_defaulttextList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateglobalannotation_defaulttextList);
        a_s_ezsigntemplateglobalannotation_defaulttextList = NULL;
    }
    return NULL;

}
