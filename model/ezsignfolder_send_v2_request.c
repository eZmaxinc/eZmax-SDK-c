#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_send_v2_request.h"



ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_create(
    char *t_ezsignfolder_message,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_obj_ezsignfoldersignerassociationmessage
    ) {
    ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_local_var = malloc(sizeof(ezsignfolder_send_v2_request_t));
    if (!ezsignfolder_send_v2_request_local_var) {
        return NULL;
    }
    ezsignfolder_send_v2_request_local_var->t_ezsignfolder_message = t_ezsignfolder_message;
    ezsignfolder_send_v2_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    ezsignfolder_send_v2_request_local_var->a_obj_ezsignfoldersignerassociationmessage = a_obj_ezsignfoldersignerassociationmessage;

    return ezsignfolder_send_v2_request_local_var;
}


void ezsignfolder_send_v2_request_free(ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request) {
    if(NULL == ezsignfolder_send_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_send_v2_request->t_ezsignfolder_message) {
        free(ezsignfolder_send_v2_request->t_ezsignfolder_message);
        ezsignfolder_send_v2_request->t_ezsignfolder_message = NULL;
    }
    if (ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id);
        ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage) {
        list_ForEach(listEntry, ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage) {
            custom_ezsignfoldersignerassociationmessage_request_free(listEntry->data);
        }
        list_freeList(ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage);
        ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage = NULL;
    }
    free(ezsignfolder_send_v2_request);
}

cJSON *ezsignfolder_send_v2_request_convertToJSON(ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_send_v2_request->t_ezsignfolder_message
    if (!ezsignfolder_send_v2_request->t_ezsignfolder_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfolderMessage", ezsignfolder_send_v2_request->t_ezsignfolder_message) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage
    if (!ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldersignerassociationmessage = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociationmessage");
    if(a_obj_ezsignfoldersignerassociationmessage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationmessageListEntry;
    if (ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage) {
    list_ForEach(a_obj_ezsignfoldersignerassociationmessageListEntry, ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage) {
    cJSON *itemLocal = custom_ezsignfoldersignerassociationmessage_request_convertToJSON(a_obj_ezsignfoldersignerassociationmessageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociationmessage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_parseFromJSON(cJSON *ezsignfolder_send_v2_requestJSON){

    ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_local_var = NULL;

    // define the local list for ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // define the local list for ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage
    list_t *a_obj_ezsignfoldersignerassociationmessageList = NULL;

    // ezsignfolder_send_v2_request->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v2_requestJSON, "tEzsignfolderMessage");
    if (!t_ezsignfolder_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfolder_message))
    {
    goto end; //String
    }

    // ezsignfolder_send_v2_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v2_requestJSON, "a_fkiEzsignfoldersignerassociationID");
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
        double *a_fki_ezsignfoldersignerassociation_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_ezsignfoldersignerassociation_id_local_value)
        {
            goto end;
        }
        *a_fki_ezsignfoldersignerassociation_id_local_value = a_fki_ezsignfoldersignerassociation_id_local->valuedouble;
        list_addElement(a_fki_ezsignfoldersignerassociation_idList , a_fki_ezsignfoldersignerassociation_id_local_value);
    }

    // ezsignfolder_send_v2_request->a_obj_ezsignfoldersignerassociationmessage
    cJSON *a_obj_ezsignfoldersignerassociationmessage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v2_requestJSON, "a_objEzsignfoldersignerassociationmessage");
    if (!a_obj_ezsignfoldersignerassociationmessage) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldersignerassociationmessage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociationmessage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationmessageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociationmessage_local_nonprimitive,a_obj_ezsignfoldersignerassociationmessage )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociationmessage_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldersignerassociationmessage_request_t *a_obj_ezsignfoldersignerassociationmessageItem = custom_ezsignfoldersignerassociationmessage_request_parseFromJSON(a_obj_ezsignfoldersignerassociationmessage_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationmessageList, a_obj_ezsignfoldersignerassociationmessageItem);
    }


    ezsignfolder_send_v2_request_local_var = ezsignfolder_send_v2_request_create (
        strdup(t_ezsignfolder_message->valuestring),
        a_fki_ezsignfoldersignerassociation_idList,
        a_obj_ezsignfoldersignerassociationmessageList
        );

    return ezsignfolder_send_v2_request_local_var;
end:
    if (a_fki_ezsignfoldersignerassociation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_ezsignfoldersignerassociation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_ezsignfoldersignerassociation_idList);
        a_fki_ezsignfoldersignerassociation_idList = NULL;
    }
    if (a_obj_ezsignfoldersignerassociationmessageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldersignerassociationmessageList) {
            custom_ezsignfoldersignerassociationmessage_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldersignerassociationmessageList);
        a_obj_ezsignfoldersignerassociationmessageList = NULL;
    }
    return NULL;

}
