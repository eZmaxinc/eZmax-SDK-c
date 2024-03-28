#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload.h"


char* ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type) {
    char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    return a_e_ezsignsignature_typeArray[a_e_ezsignsignature_type - 1];
}

ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type) {
    int stringToReturn = 0;
    char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    size_t sizeofArray = sizeof(a_e_ezsignsignature_typeArray) / sizeof(a_e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(a_e_ezsignsignature_type, a_e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
    ) {
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t));
    if (!ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_e_ezsignsignature_type = a_e_ezsignsignature_type;
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    return ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
}


void ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        list_ForEach(listEntry, ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
            field_e_ezsignsignature_type_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type);
        ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type = NULL;
    }
    if (ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
            custom_ezsignfolder_ezsignsignatures_automatic_response_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder);
        ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload);
}

cJSON *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    if (ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_AEEZSIGNSIGNATURETYPE_NULL == ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *a_e_ezsignsignature_type = cJSON_AddArrayToObject(item, "a_eEzsignsignatureType");
    if(a_e_ezsignsignature_type == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_e_ezsignsignature_typeListEntry;
    if (ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    list_ForEach(a_e_ezsignsignature_typeListEntry, ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    cJSON *itemLocal = field_e_ezsignsignature_type_convertToJSON((ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e)a_e_ezsignsignature_typeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_e_ezsignsignature_type, itemLocal);
    }
    }


    // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    if (!ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
    cJSON *itemLocal = custom_ezsignfolder_ezsignsignatures_automatic_response_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payloadJSON){

    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    list_t *a_e_ezsignsignature_typeList = NULL;

    // define the local list for ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    cJSON *a_e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_eEzsignsignatureType");
    if (!a_e_ezsignsignature_type) {
        goto end;
    }

    
    cJSON *a_e_ezsignsignature_type_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_e_ezsignsignature_type)){
        goto end; //nonprimitive container
    }

    a_e_ezsignsignature_typeList = list_createList();

    cJSON_ArrayForEach(a_e_ezsignsignature_type_local_nonprimitive,a_e_ezsignsignature_type )
    {
        if(!cJSON_IsObject(a_e_ezsignsignature_type_local_nonprimitive)){
            goto end;
        }
        ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_field_e_ezsignsignature_type_e a_e_ezsignsignature_typeItem = field_e_ezsignsignature_type_parseFromJSON(a_e_ezsignsignature_type_local_nonprimitive);

        list_addElement(a_e_ezsignsignature_typeList, (void *)a_e_ezsignsignature_typeItem);
    }

    // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_objEzsignfolder");
    if (!a_obj_ezsignfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfolder_local_nonprimitive,a_obj_ezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolder_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfolder_ezsignsignatures_automatic_response_t *a_obj_ezsignfolderItem = custom_ezsignfolder_ezsignsignatures_automatic_response_parseFromJSON(a_obj_ezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderList, a_obj_ezsignfolderItem);
    }


    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_create (
        a_e_ezsignsignature_typeList,
        a_obj_ezsignfolderList
        );

    return ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
end:
    if (a_e_ezsignsignature_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_e_ezsignsignature_typeList) {
            field_e_ezsignsignature_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_e_ezsignsignature_typeList);
        a_e_ezsignsignature_typeList = NULL;
    }
    if (a_obj_ezsignfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfolderList) {
            custom_ezsignfolder_ezsignsignatures_automatic_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfolderList);
        a_obj_ezsignfolderList = NULL;
    }
    return NULL;

}
