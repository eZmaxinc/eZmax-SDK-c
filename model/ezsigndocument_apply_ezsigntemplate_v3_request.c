#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplate_v3_request.h"



static ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request_create_internal(
    int *fki_ezsigntemplate_id,
    list_t *a_s_ezsigntemplatesigner,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_s_ezsigntemplateannotation_description,
    list_t *a_s_ezsigntemplateannotation_defaulttext
    ) {
    ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplate_v3_request_t));
    if (!ezsigndocument_apply_ezsigntemplate_v3_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_apply_ezsigntemplate_v3_request_local_var, 0, sizeof(ezsigndocument_apply_ezsigntemplate_v3_request_t));
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->_library_owned = 1;
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->a_s_ezsigntemplatesigner = a_s_ezsigntemplatesigner;
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->a_s_ezsigntemplateannotation_description = a_s_ezsigntemplateannotation_description;
    ezsigndocument_apply_ezsigntemplate_v3_request_local_var->a_s_ezsigntemplateannotation_defaulttext = a_s_ezsigntemplateannotation_defaulttext;
    return ezsigndocument_apply_ezsigntemplate_v3_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request_create(
    int *fki_ezsigntemplate_id,
    list_t *a_s_ezsigntemplatesigner,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_s_ezsigntemplateannotation_description,
    list_t *a_s_ezsigntemplateannotation_defaulttext
    ) {
    int *fki_ezsigntemplate_id_copy = NULL;
    if (fki_ezsigntemplate_id) {
        fki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplate_id_copy) *fki_ezsigntemplate_id_copy = *fki_ezsigntemplate_id;
    }
    ezsigndocument_apply_ezsigntemplate_v3_request_t *result = ezsigndocument_apply_ezsigntemplate_v3_request_create_internal (
        fki_ezsigntemplate_id_copy,
        a_s_ezsigntemplatesigner,
        a_fki_ezsignfoldersignerassociation_id,
        a_s_ezsigntemplateannotation_description,
        a_s_ezsigntemplateannotation_defaulttext
        );
    if (!result) {
        free(fki_ezsigntemplate_id_copy);
    }
    return result;
}

void ezsigndocument_apply_ezsigntemplate_v3_request_free(ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request) {
    if(NULL == ezsigndocument_apply_ezsigntemplate_v3_request){
        return ;
    }
    if(ezsigndocument_apply_ezsigntemplate_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_apply_ezsigntemplate_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id) {
        free(ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id);
        ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner);
        ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id);
        ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description);
        ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext);
        ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplate_v3_request);
}

cJSON *ezsigndocument_apply_ezsigntemplate_v3_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id
    if (!ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner
    if (!ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_sEzsigntemplatesigner");
    if(a_s_ezsigntemplatesigner == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplatesignerListEntry;
    list_ForEach(a_s_ezsigntemplatesignerListEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplatesigner, "", a_s_ezsigntemplatesignerListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description
    if (!ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateannotation_description = cJSON_AddArrayToObject(item, "a_sEzsigntemplateannotationDescription");
    if(a_s_ezsigntemplateannotation_description == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateannotation_descriptionListEntry;
    list_ForEach(a_s_ezsigntemplateannotation_descriptionListEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateannotation_description, "", a_s_ezsigntemplateannotation_descriptionListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext
    if (!ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateannotation_defaulttext = cJSON_AddArrayToObject(item, "a_sEzsigntemplateannotationDefaulttext");
    if(a_s_ezsigntemplateannotation_defaulttext == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateannotation_defaulttextListEntry;
    list_ForEach(a_s_ezsigntemplateannotation_defaulttextListEntry, ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext) {
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

ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplate_v3_requestJSON){

    ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request_local_var = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner
    list_t *a_s_ezsigntemplatesignerList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description
    list_t *a_s_ezsigntemplateannotation_descriptionList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext
    list_t *a_s_ezsigntemplateannotation_defaulttextList = NULL;

    // ezsigndocument_apply_ezsigntemplate_v3_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v3_requestJSON, "fkiEzsigntemplateID");
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

    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplatesigner
    cJSON *a_s_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v3_requestJSON, "a_sEzsigntemplatesigner");
    if (cJSON_IsNull(a_s_ezsigntemplatesigner)) {
        a_s_ezsigntemplatesigner = NULL;
    }
    if (!a_s_ezsigntemplatesigner) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplatesigner_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplatesigner)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplatesignerList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplatesigner_local, a_s_ezsigntemplatesigner)
    {
        if(!cJSON_IsString(a_s_ezsigntemplatesigner_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplatesignerList , strdup(a_s_ezsigntemplatesigner_local->valuestring));
    }

    // ezsigndocument_apply_ezsigntemplate_v3_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v3_requestJSON, "a_fkiEzsignfoldersignerassociationID");
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

    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_description
    cJSON *a_s_ezsigntemplateannotation_description = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v3_requestJSON, "a_sEzsigntemplateannotationDescription");
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

    // ezsigndocument_apply_ezsigntemplate_v3_request->a_s_ezsigntemplateannotation_defaulttext
    cJSON *a_s_ezsigntemplateannotation_defaulttext = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v3_requestJSON, "a_sEzsigntemplateannotationDefaulttext");
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



    ezsigndocument_apply_ezsigntemplate_v3_request_local_var = ezsigndocument_apply_ezsigntemplate_v3_request_create_internal (
        fki_ezsigntemplate_id_local_var,
        a_s_ezsigntemplatesignerList,
        a_fki_ezsignfoldersignerassociation_idList,
        a_s_ezsigntemplateannotation_descriptionList,
        a_s_ezsigntemplateannotation_defaulttextList
        );

    if (!ezsigndocument_apply_ezsigntemplate_v3_request_local_var) {
        goto end;
    }

    return ezsigndocument_apply_ezsigntemplate_v3_request_local_var;
end:
    if (fki_ezsigntemplate_id_local_var) {
        free(fki_ezsigntemplate_id_local_var);
        fki_ezsigntemplate_id_local_var = NULL;
    }
    if (a_s_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplatesignerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplatesignerList);
        a_s_ezsigntemplatesignerList = NULL;
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
