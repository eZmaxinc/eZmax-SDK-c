#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplate_v2_request.h"



static ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_create_internal(
    int fki_ezsigntemplate_id,
    list_t *a_s_ezsigntemplatesigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
    ) {
    ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplate_v2_request_t));
    if (!ezsigndocument_apply_ezsigntemplate_v2_request_local_var) {
        return NULL;
    }
    ezsigndocument_apply_ezsigntemplate_v2_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigndocument_apply_ezsigntemplate_v2_request_local_var->a_s_ezsigntemplatesigner = a_s_ezsigntemplatesigner;
    ezsigndocument_apply_ezsigntemplate_v2_request_local_var->a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;

    ezsigndocument_apply_ezsigntemplate_v2_request_local_var->_library_owned = 1;
    return ezsigndocument_apply_ezsigntemplate_v2_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_create(
    int fki_ezsigntemplate_id,
    list_t *a_s_ezsigntemplatesigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
    ) {
    return ezsigndocument_apply_ezsigntemplate_v2_request_create_internal (
        fki_ezsigntemplate_id,
        a_s_ezsigntemplatesigner,
        a_pki_ezsignfoldersignerassociation_id
        );
}

void ezsigndocument_apply_ezsigntemplate_v2_request_free(ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request) {
    if(NULL == ezsigndocument_apply_ezsigntemplate_v2_request){
        return ;
    }
    if(ezsigndocument_apply_ezsigntemplate_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_apply_ezsigntemplate_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner);
        ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id);
        ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplate_v2_request);
}

cJSON *ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplate_v2_request->fki_ezsigntemplate_id
    if (!ezsigndocument_apply_ezsigntemplate_v2_request->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigndocument_apply_ezsigntemplate_v2_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner
    if (!ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_sEzsigntemplatesigner");
    if(a_s_ezsigntemplatesigner == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplatesignerListEntry;
    list_ForEach(a_s_ezsigntemplatesignerListEntry, ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplatesigner, "", a_s_ezsigntemplatesignerListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id
    if (!ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_pkiEzsignfoldersignerassociationID");
    if(a_pki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_pki_ezsignfoldersignerassociation_idListEntry, ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignfoldersignerassociation_id, "", *(double *)a_pki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
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

ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplate_v2_requestJSON){

    ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_local_var = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner
    list_t *a_s_ezsigntemplatesignerList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id
    list_t *a_pki_ezsignfoldersignerassociation_idList = NULL;

    // ezsigndocument_apply_ezsigntemplate_v2_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v2_requestJSON, "fkiEzsigntemplateID");
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

    // ezsigndocument_apply_ezsigntemplate_v2_request->a_s_ezsigntemplatesigner
    cJSON *a_s_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v2_requestJSON, "a_sEzsigntemplatesigner");
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

    // ezsigndocument_apply_ezsigntemplate_v2_request->a_pki_ezsignfoldersignerassociation_id
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v2_requestJSON, "a_pkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(a_pki_ezsignfoldersignerassociation_id)) {
        a_pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!a_pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignfoldersignerassociation_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignfoldersignerassociation_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignfoldersignerassociation_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignfoldersignerassociation_id_local, a_pki_ezsignfoldersignerassociation_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignfoldersignerassociation_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignfoldersignerassociation_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignfoldersignerassociation_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignfoldersignerassociation_id_local_value = a_pki_ezsignfoldersignerassociation_id_local->valuedouble;
        list_addElement(a_pki_ezsignfoldersignerassociation_idList , a_pki_ezsignfoldersignerassociation_id_local_value);
    }


    ezsigndocument_apply_ezsigntemplate_v2_request_local_var = ezsigndocument_apply_ezsigntemplate_v2_request_create_internal (
        fki_ezsigntemplate_id->valuedouble,
        a_s_ezsigntemplatesignerList,
        a_pki_ezsignfoldersignerassociation_idList
        );

    return ezsigndocument_apply_ezsigntemplate_v2_request_local_var;
end:
    if (a_s_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplatesignerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplatesignerList);
        a_s_ezsigntemplatesignerList = NULL;
    }
    if (a_pki_ezsignfoldersignerassociation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignfoldersignerassociation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignfoldersignerassociation_idList);
        a_pki_ezsignfoldersignerassociation_idList = NULL;
    }
    return NULL;

}
