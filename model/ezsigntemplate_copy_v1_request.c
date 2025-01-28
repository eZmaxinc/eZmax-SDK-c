#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_copy_v1_request.h"



static ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_create_internal(
    list_t *a_fki_ezsignfoldertype_id,
    int b_copy_company,
    int b_copy_user
    ) {
    ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_local_var = malloc(sizeof(ezsigntemplate_copy_v1_request_t));
    if (!ezsigntemplate_copy_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplate_copy_v1_request_local_var->a_fki_ezsignfoldertype_id = a_fki_ezsignfoldertype_id;
    ezsigntemplate_copy_v1_request_local_var->b_copy_company = b_copy_company;
    ezsigntemplate_copy_v1_request_local_var->b_copy_user = b_copy_user;

    ezsigntemplate_copy_v1_request_local_var->_library_owned = 1;
    return ezsigntemplate_copy_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_create(
    list_t *a_fki_ezsignfoldertype_id,
    int b_copy_company,
    int b_copy_user
    ) {
    return ezsigntemplate_copy_v1_request_create_internal (
        a_fki_ezsignfoldertype_id,
        b_copy_company,
        b_copy_user
        );
}

void ezsigntemplate_copy_v1_request_free(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request) {
    if(NULL == ezsigntemplate_copy_v1_request){
        return ;
    }
    if(ezsigntemplate_copy_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_copy_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
        list_ForEach(listEntry, ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id);
        ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id = NULL;
    }
    free(ezsigntemplate_copy_v1_request);
}

cJSON *ezsigntemplate_copy_v1_request_convertToJSON(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    if(ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
    cJSON *a_fki_ezsignfoldertype_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldertypeID");
    if(a_fki_ezsignfoldertype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldertype_idListEntry;
    list_ForEach(a_fki_ezsignfoldertype_idListEntry, ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldertype_id, "", *(double *)a_fki_ezsignfoldertype_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsigntemplate_copy_v1_request->b_copy_company
    if(ezsigntemplate_copy_v1_request->b_copy_company) {
    if(cJSON_AddBoolToObject(item, "bCopyCompany", ezsigntemplate_copy_v1_request->b_copy_company) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplate_copy_v1_request->b_copy_user
    if(ezsigntemplate_copy_v1_request->b_copy_user) {
    if(cJSON_AddBoolToObject(item, "bCopyUser", ezsigntemplate_copy_v1_request->b_copy_user) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_parseFromJSON(cJSON *ezsigntemplate_copy_v1_requestJSON){

    ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_local_var = NULL;

    // define the local list for ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    list_t *a_fki_ezsignfoldertype_idList = NULL;

    // ezsigntemplate_copy_v1_request->a_fki_ezsignfoldertype_id
    cJSON *a_fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_copy_v1_requestJSON, "a_fkiEzsignfoldertypeID");
    if (cJSON_IsNull(a_fki_ezsignfoldertype_id)) {
        a_fki_ezsignfoldertype_id = NULL;
    }
    if (a_fki_ezsignfoldertype_id) { 
    cJSON *a_fki_ezsignfoldertype_id_local = NULL;
    if(!cJSON_IsArray(a_fki_ezsignfoldertype_id)) {
        goto end;//primitive container
    }
    a_fki_ezsignfoldertype_idList = list_createList();

    cJSON_ArrayForEach(a_fki_ezsignfoldertype_id_local, a_fki_ezsignfoldertype_id)
    {
        if(!cJSON_IsNumber(a_fki_ezsignfoldertype_id_local))
        {
            goto end;
        }
        double *a_fki_ezsignfoldertype_id_local_value = calloc(1, sizeof(double));
        if(!a_fki_ezsignfoldertype_id_local_value)
        {
            goto end;
        }
        *a_fki_ezsignfoldertype_id_local_value = a_fki_ezsignfoldertype_id_local->valuedouble;
        list_addElement(a_fki_ezsignfoldertype_idList , a_fki_ezsignfoldertype_id_local_value);
    }
    }

    // ezsigntemplate_copy_v1_request->b_copy_company
    cJSON *b_copy_company = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_copy_v1_requestJSON, "bCopyCompany");
    if (cJSON_IsNull(b_copy_company)) {
        b_copy_company = NULL;
    }
    if (b_copy_company) { 
    if(!cJSON_IsBool(b_copy_company))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplate_copy_v1_request->b_copy_user
    cJSON *b_copy_user = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_copy_v1_requestJSON, "bCopyUser");
    if (cJSON_IsNull(b_copy_user)) {
        b_copy_user = NULL;
    }
    if (b_copy_user) { 
    if(!cJSON_IsBool(b_copy_user))
    {
    goto end; //Bool
    }
    }


    ezsigntemplate_copy_v1_request_local_var = ezsigntemplate_copy_v1_request_create_internal (
        a_fki_ezsignfoldertype_id ? a_fki_ezsignfoldertype_idList : NULL,
        b_copy_company ? b_copy_company->valueint : 0,
        b_copy_user ? b_copy_user->valueint : 0
        );

    return ezsigntemplate_copy_v1_request_local_var;
end:
    if (a_fki_ezsignfoldertype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_ezsignfoldertype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_ezsignfoldertype_idList);
        a_fki_ezsignfoldertype_idList = NULL;
    }
    return NULL;

}
