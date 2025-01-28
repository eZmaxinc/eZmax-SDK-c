#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplateglobal_v1_request.h"



static ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_create_internal(
    int fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
    ) {
    ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplateglobal_v1_request_t));
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var->fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var->a_s_ezsigntemplateglobalsigner = a_s_ezsigntemplateglobalsigner;
    ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var->a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;

    ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var->_library_owned = 1;
    return ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_create(
    int fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
    ) {
    return ezsigndocument_apply_ezsigntemplateglobal_v1_request_create_internal (
        fki_ezsigntemplateglobal_id,
        a_s_ezsigntemplateglobalsigner,
        a_pki_ezsignfoldersignerassociation_id
        );
}

void ezsigndocument_apply_ezsigntemplateglobal_v1_request_free(ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request) {
    if(NULL == ezsigndocument_apply_ezsigntemplateglobal_v1_request){
        return ;
    }
    if(ezsigndocument_apply_ezsigntemplateglobal_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_apply_ezsigntemplateglobal_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner);
        ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id);
        ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplateglobal_v1_request);
}

cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->fki_ezsigntemplateglobal_id
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_request->fki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateglobalID", ezsigndocument_apply_ezsigntemplateglobal_v1_request->fki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplateglobalsigner = cJSON_AddArrayToObject(item, "a_sEzsigntemplateglobalsigner");
    if(a_s_ezsigntemplateglobalsigner == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplateglobalsignerListEntry;
    list_ForEach(a_s_ezsigntemplateglobalsignerListEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplateglobalsigner, "", a_s_ezsigntemplateglobalsignerListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_pkiEzsignfoldersignerassociationID");
    if(a_pki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_pki_ezsignfoldersignerassociation_idListEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id) {
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

ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_requestJSON){

    ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner
    list_t *a_s_ezsigntemplateglobalsignerList = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id
    list_t *a_pki_ezsignfoldersignerassociation_idList = NULL;

    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->fki_ezsigntemplateglobal_id
    cJSON *fki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_requestJSON, "fkiEzsigntemplateglobalID");
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

    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_s_ezsigntemplateglobalsigner
    cJSON *a_s_ezsigntemplateglobalsigner = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_requestJSON, "a_sEzsigntemplateglobalsigner");
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

    // ezsigndocument_apply_ezsigntemplateglobal_v1_request->a_pki_ezsignfoldersignerassociation_id
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_requestJSON, "a_pkiEzsignfoldersignerassociationID");
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


    ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var = ezsigndocument_apply_ezsigntemplateglobal_v1_request_create_internal (
        fki_ezsigntemplateglobal_id->valuedouble,
        a_s_ezsigntemplateglobalsignerList,
        a_pki_ezsignfoldersignerassociation_idList
        );

    return ezsigndocument_apply_ezsigntemplateglobal_v1_request_local_var;
end:
    if (a_s_ezsigntemplateglobalsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplateglobalsignerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplateglobalsignerList);
        a_s_ezsigntemplateglobalsignerList = NULL;
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
