#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_duplicate_v1_request.h"



static ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_create_internal(
    char *s_ezsignfolder_description,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_obj_ezsigndocument,
    char *t_ezsignfolder_note
    ) {
    ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_local_var = malloc(sizeof(ezsignfolder_duplicate_v1_request_t));
    if (!ezsignfolder_duplicate_v1_request_local_var) {
        return NULL;
    }
    memset(ezsignfolder_duplicate_v1_request_local_var, 0, sizeof(ezsignfolder_duplicate_v1_request_t));
    ezsignfolder_duplicate_v1_request_local_var->_library_owned = 1;
    ezsignfolder_duplicate_v1_request_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_duplicate_v1_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    ezsignfolder_duplicate_v1_request_local_var->a_obj_ezsigndocument = a_obj_ezsigndocument;
    ezsignfolder_duplicate_v1_request_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    return ezsignfolder_duplicate_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_create(
    char *s_ezsignfolder_description,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_obj_ezsigndocument,
    char *t_ezsignfolder_note
    ) {
    ezsignfolder_duplicate_v1_request_t *result = ezsignfolder_duplicate_v1_request_create_internal (
        s_ezsignfolder_description,
        a_fki_ezsignfoldersignerassociation_id,
        a_obj_ezsigndocument,
        t_ezsignfolder_note
        );
    if (!result) {
    }
    return result;
}

void ezsignfolder_duplicate_v1_request_free(ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request) {
    if(NULL == ezsignfolder_duplicate_v1_request){
        return ;
    }
    if(ezsignfolder_duplicate_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_duplicate_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_duplicate_v1_request->s_ezsignfolder_description) {
        free(ezsignfolder_duplicate_v1_request->s_ezsignfolder_description);
        ezsignfolder_duplicate_v1_request->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id);
        ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument) {
        list_ForEach(listEntry, ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument) {
            custom_ezsigndocument_duplicate_request_free(listEntry->data);
        }
        list_freeList(ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument);
        ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument = NULL;
    }
    if (ezsignfolder_duplicate_v1_request->t_ezsignfolder_note) {
        free(ezsignfolder_duplicate_v1_request->t_ezsignfolder_note);
        ezsignfolder_duplicate_v1_request->t_ezsignfolder_note = NULL;
    }
    free(ezsignfolder_duplicate_v1_request);
}

cJSON *ezsignfolder_duplicate_v1_request_convertToJSON(ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_duplicate_v1_request->s_ezsignfolder_description
    if (!ezsignfolder_duplicate_v1_request->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_duplicate_v1_request->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument
    if (!ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocument = cJSON_AddArrayToObject(item, "a_objEzsigndocument");
    if(a_obj_ezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentListEntry;
    if (ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument) {
    list_ForEach(a_obj_ezsigndocumentListEntry, ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument) {
    cJSON *itemLocal = custom_ezsigndocument_duplicate_request_convertToJSON(a_obj_ezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocument, itemLocal);
    }
    }


    // ezsignfolder_duplicate_v1_request->t_ezsignfolder_note
    if(ezsignfolder_duplicate_v1_request->t_ezsignfolder_note) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_duplicate_v1_request->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_parseFromJSON(cJSON *ezsignfolder_duplicate_v1_requestJSON){

    ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_local_var = NULL;

    char *s_ezsignfolder_description_local_str = NULL;

    // define the local list for ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // define the local list for ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument
    list_t *a_obj_ezsigndocumentList = NULL;

    char *t_ezsignfolder_note_local_str = NULL;

    // ezsignfolder_duplicate_v1_request->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_duplicate_v1_requestJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_duplicate_v1_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_duplicate_v1_requestJSON, "a_fkiEzsignfoldersignerassociationID");
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

    // ezsignfolder_duplicate_v1_request->a_obj_ezsigndocument
    cJSON *a_obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_duplicate_v1_requestJSON, "a_objEzsigndocument");
    if (cJSON_IsNull(a_obj_ezsigndocument)) {
        a_obj_ezsigndocument = NULL;
    }
    if (!a_obj_ezsigndocument) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocument_local_nonprimitive,a_obj_ezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocument_local_nonprimitive)){
            goto end;
        }
        custom_ezsigndocument_duplicate_request_t *a_obj_ezsigndocumentItem = custom_ezsigndocument_duplicate_request_parseFromJSON(a_obj_ezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentList, a_obj_ezsigndocumentItem);
    }

    // ezsignfolder_duplicate_v1_request->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_duplicate_v1_requestJSON, "tEzsignfolderNote");
    if (cJSON_IsNull(t_ezsignfolder_note)) {
        t_ezsignfolder_note = NULL;
    }
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }


    if (s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description)) s_ezsignfolder_description_local_str = strdup(s_ezsignfolder_description->valuestring);
    if (t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note)) t_ezsignfolder_note_local_str = strdup(t_ezsignfolder_note->valuestring);

    ezsignfolder_duplicate_v1_request_local_var = ezsignfolder_duplicate_v1_request_create_internal (
        s_ezsignfolder_description_local_str,
        a_fki_ezsignfoldersignerassociation_idList,
        a_obj_ezsigndocumentList,
        t_ezsignfolder_note_local_str
        );

    if (!ezsignfolder_duplicate_v1_request_local_var) {
        goto end;
    }

    return ezsignfolder_duplicate_v1_request_local_var;
end:
    if (s_ezsignfolder_description_local_str) {
        free(s_ezsignfolder_description_local_str);
        s_ezsignfolder_description_local_str = NULL;
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
    if (a_obj_ezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentList) {
            custom_ezsigndocument_duplicate_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentList);
        a_obj_ezsigndocumentList = NULL;
    }
    if (t_ezsignfolder_note_local_str) {
        free(t_ezsignfolder_note_local_str);
        t_ezsignfolder_note_local_str = NULL;
    }
    return NULL;

}
