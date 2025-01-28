#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload.h"


char* ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type) {
    char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation", "Signature" };
    return a_e_ezsignsignature_typeArray[a_e_ezsignsignature_type - 1];
}

ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type) {
    int stringToReturn = 0;
    char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation", "Signature" };
    size_t sizeofArray = sizeof(a_e_ezsignsignature_typeArray) / sizeof(a_e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(a_e_ezsignsignature_type, a_e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

static ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_create_internal(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
    ) {
    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t));
    if (!ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_e_ezsignsignature_type = a_e_ezsignsignature_type;
    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
    ) {
    return ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_create_internal (
        a_e_ezsignsignature_type,
        a_obj_ezsignfolder
        );
}

void ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload) {
    if(NULL == ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload){
        return ;
    }
    if(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        list_ForEach(listEntry, ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
            field_e_ezsignsignature_type_free(listEntry->data);
        }
        list_freeList(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type);
        ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type = NULL;
    }
    if (ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
            custom_ezsignfolder_ezsignsignatures_automatic_response_free(listEntry->data);
        }
        list_freeList(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder);
        ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder = NULL;
    }
    free(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload);
}

cJSON *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    if (ezmax_api_definition__full_list_AEEZSIGNSIGNATURETYPE_NULL == ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *a_e_ezsignsignature_type = cJSON_AddArrayToObject(item, "a_eEzsignsignatureType");
    if(a_e_ezsignsignature_type == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_e_ezsignsignature_typeListEntry;
    if (ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    list_ForEach(a_e_ezsignsignature_typeListEntry, ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    cJSON *itemLocal = field_e_ezsignsignature_type_convertToJSON((ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e)a_e_ezsignsignature_typeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_e_ezsignsignature_type, itemLocal);
    }
    }


    // ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    if (!ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
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

ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payloadJSON){

    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    list_t *a_e_ezsignsignature_typeList = NULL;

    // define the local list for ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    cJSON *a_e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_eEzsignsignatureType");
    if (cJSON_IsNull(a_e_ezsignsignature_type)) {
        a_e_ezsignsignature_type = NULL;
    }
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
        ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_field_e_ezsignsignature_type_e a_e_ezsignsignature_typeItem = field_e_ezsignsignature_type_parseFromJSON(a_e_ezsignsignature_type_local_nonprimitive);

        list_addElement(a_e_ezsignsignature_typeList, (void *)a_e_ezsignsignature_typeItem);
    }

    // ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_objEzsignfolder");
    if (cJSON_IsNull(a_obj_ezsignfolder)) {
        a_obj_ezsignfolder = NULL;
    }
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


    ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_create_internal (
        a_e_ezsignsignature_typeList,
        a_obj_ezsignfolderList
        );

    return ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
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
