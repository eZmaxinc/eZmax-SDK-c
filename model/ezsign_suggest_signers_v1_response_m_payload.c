#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsign_suggest_signers_v1_response_m_payload.h"



ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_create(
    list_t *a_obj_ezsignfoldersignerassociation,
    list_t *a_obj_user_team,
    list_t *a_obj_user
    ) {
    ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_local_var = malloc(sizeof(ezsign_suggest_signers_v1_response_m_payload_t));
    if (!ezsign_suggest_signers_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsign_suggest_signers_v1_response_m_payload_local_var->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;
    ezsign_suggest_signers_v1_response_m_payload_local_var->a_obj_user_team = a_obj_user_team;
    ezsign_suggest_signers_v1_response_m_payload_local_var->a_obj_user = a_obj_user;

    return ezsign_suggest_signers_v1_response_m_payload_local_var;
}


void ezsign_suggest_signers_v1_response_m_payload_free(ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload) {
    if(NULL == ezsign_suggest_signers_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
        list_ForEach(listEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
            ezsignfoldersignerassociation_response_compound_free(listEntry->data);
        }
        list_freeList(ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation);
        ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation = NULL;
    }
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team) {
        list_ForEach(listEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team) {
            custom_user_response_free(listEntry->data);
        }
        list_freeList(ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team);
        ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team = NULL;
    }
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_user) {
        list_ForEach(listEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_user) {
            custom_user_response_free(listEntry->data);
        }
        list_freeList(ezsign_suggest_signers_v1_response_m_payload->a_obj_user);
        ezsign_suggest_signers_v1_response_m_payload->a_obj_user = NULL;
    }
    free(ezsign_suggest_signers_v1_response_m_payload);
}

cJSON *ezsign_suggest_signers_v1_response_m_payload_convertToJSON(ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    if (!ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociation");
    if(a_obj_ezsignfoldersignerassociation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationListEntry;
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
    list_ForEach(a_obj_ezsignfoldersignerassociationListEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
    cJSON *itemLocal = ezsignfoldersignerassociation_response_compound_convertToJSON(a_obj_ezsignfoldersignerassociationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociation, itemLocal);
    }
    }


    // ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team
    if (!ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team) {
        goto fail;
    }
    cJSON *a_obj_user_team = cJSON_AddArrayToObject(item, "a_objUserTeam");
    if(a_obj_user_team == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_user_teamListEntry;
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team) {
    list_ForEach(a_obj_user_teamListEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team) {
    cJSON *itemLocal = custom_user_response_convertToJSON(a_obj_user_teamListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_user_team, itemLocal);
    }
    }


    // ezsign_suggest_signers_v1_response_m_payload->a_obj_user
    if (!ezsign_suggest_signers_v1_response_m_payload->a_obj_user) {
        goto fail;
    }
    cJSON *a_obj_user = cJSON_AddArrayToObject(item, "a_objUser");
    if(a_obj_user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userListEntry;
    if (ezsign_suggest_signers_v1_response_m_payload->a_obj_user) {
    list_ForEach(a_obj_userListEntry, ezsign_suggest_signers_v1_response_m_payload->a_obj_user) {
    cJSON *itemLocal = custom_user_response_convertToJSON(a_obj_userListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_user, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_parseFromJSON(cJSON *ezsign_suggest_signers_v1_response_m_payloadJSON){

    ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    list_t *a_obj_ezsignfoldersignerassociationList = NULL;

    // define the local list for ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team
    list_t *a_obj_user_teamList = NULL;

    // define the local list for ezsign_suggest_signers_v1_response_m_payload->a_obj_user
    list_t *a_obj_userList = NULL;

    // ezsign_suggest_signers_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_signers_v1_response_m_payloadJSON, "a_objEzsignfoldersignerassociation");
    if (!a_obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldersignerassociation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociation_local_nonprimitive,a_obj_ezsignfoldersignerassociation )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociation_local_nonprimitive)){
            goto end;
        }
        ezsignfoldersignerassociation_response_compound_t *a_obj_ezsignfoldersignerassociationItem = ezsignfoldersignerassociation_response_compound_parseFromJSON(a_obj_ezsignfoldersignerassociation_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationList, a_obj_ezsignfoldersignerassociationItem);
    }

    // ezsign_suggest_signers_v1_response_m_payload->a_obj_user_team
    cJSON *a_obj_user_team = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_signers_v1_response_m_payloadJSON, "a_objUserTeam");
    if (!a_obj_user_team) {
        goto end;
    }

    
    cJSON *a_obj_user_team_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_user_team)){
        goto end; //nonprimitive container
    }

    a_obj_user_teamList = list_createList();

    cJSON_ArrayForEach(a_obj_user_team_local_nonprimitive,a_obj_user_team )
    {
        if(!cJSON_IsObject(a_obj_user_team_local_nonprimitive)){
            goto end;
        }
        custom_user_response_t *a_obj_user_teamItem = custom_user_response_parseFromJSON(a_obj_user_team_local_nonprimitive);

        list_addElement(a_obj_user_teamList, a_obj_user_teamItem);
    }

    // ezsign_suggest_signers_v1_response_m_payload->a_obj_user
    cJSON *a_obj_user = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_signers_v1_response_m_payloadJSON, "a_objUser");
    if (!a_obj_user) {
        goto end;
    }

    
    cJSON *a_obj_user_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_user)){
        goto end; //nonprimitive container
    }

    a_obj_userList = list_createList();

    cJSON_ArrayForEach(a_obj_user_local_nonprimitive,a_obj_user )
    {
        if(!cJSON_IsObject(a_obj_user_local_nonprimitive)){
            goto end;
        }
        custom_user_response_t *a_obj_userItem = custom_user_response_parseFromJSON(a_obj_user_local_nonprimitive);

        list_addElement(a_obj_userList, a_obj_userItem);
    }


    ezsign_suggest_signers_v1_response_m_payload_local_var = ezsign_suggest_signers_v1_response_m_payload_create (
        a_obj_ezsignfoldersignerassociationList,
        a_obj_user_teamList,
        a_obj_userList
        );

    return ezsign_suggest_signers_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignfoldersignerassociationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldersignerassociationList) {
            ezsignfoldersignerassociation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldersignerassociationList);
        a_obj_ezsignfoldersignerassociationList = NULL;
    }
    if (a_obj_user_teamList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_user_teamList) {
            custom_user_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_user_teamList);
        a_obj_user_teamList = NULL;
    }
    if (a_obj_userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userList) {
            custom_user_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userList);
        a_obj_userList = NULL;
    }
    return NULL;

}
