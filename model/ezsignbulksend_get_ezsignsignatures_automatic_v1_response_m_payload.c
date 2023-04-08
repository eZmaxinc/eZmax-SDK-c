#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload.h"


char* a_e_ezsignsignature_typeezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type) {
	char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments" };
	return a_e_ezsignsignature_typeArray[a_e_ezsignsignature_type - 1];
}

ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_typeezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_FromString(char* a_e_ezsignsignature_type) {
    int stringToReturn = 0;
    char *a_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments" };
    size_t sizeofArray = sizeof(a_e_ezsignsignature_typeArray) / sizeof(a_e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(a_e_ezsignsignature_type, a_e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    set_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
    ) {
    ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t));
    if (!ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_e_ezsignsignature_type = a_e_ezsignsignature_type;
    ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    return ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        list_ForEach(listEntry, ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
            field_e_ezsignsignature_type_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type);
        ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type = NULL;
    }
    if (ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
            custom_ezsignfolder_ezsignsignatures_automatic_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder);
        ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder = NULL;
    }
    free(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    if (ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_AEEZSIGNSIGNATURETYPE_NULL == ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *a_e_ezsignsignature_type = cJSON_AddArrayToObject(item, "a_eEzsignsignatureType");
    if(a_e_ezsignsignature_type == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_e_ezsignsignature_typeListEntry;
    if (ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    list_ForEach(a_e_ezsignsignature_typeListEntry, ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type) {
    cJSON *itemLocal = field_e_ezsignsignature_type_convertToJSON((ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e)a_e_ezsignsignature_typeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_e_ezsignsignature_type, itemLocal);
    }
    }


    // ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    if (!ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder) {
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

ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payloadJSON){

    ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    list_t *a_e_ezsignsignature_typeList = NULL;

    // define the local list for ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_e_ezsignsignature_type
    cJSON *a_e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_eEzsignsignatureType");
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
        ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_field_e_ezsignsignature_type_e a_e_ezsignsignature_typeItem = field_e_ezsignsignature_type_parseFromJSON(a_e_ezsignsignature_type_local_nonprimitive);

        list_addElement(a_e_ezsignsignature_typeList, (void *)a_e_ezsignsignature_typeItem);
    }

    // ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payloadJSON, "a_objEzsignfolder");
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


    ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var = ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_create (
        a_e_ezsignsignature_typeList,
        a_obj_ezsignfolderList
        );

    return ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_local_var;
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
