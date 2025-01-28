#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationrecipientsgroup_response.h"



static custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_create_internal(
    char *s_communicationrecipientsgroup_label,
    list_t *a_obj_communicationrecipientsrecipient
    ) {
    custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_local_var = malloc(sizeof(custom_communicationrecipientsgroup_response_t));
    if (!custom_communicationrecipientsgroup_response_local_var) {
        return NULL;
    }
    custom_communicationrecipientsgroup_response_local_var->s_communicationrecipientsgroup_label = s_communicationrecipientsgroup_label;
    custom_communicationrecipientsgroup_response_local_var->a_obj_communicationrecipientsrecipient = a_obj_communicationrecipientsrecipient;

    custom_communicationrecipientsgroup_response_local_var->_library_owned = 1;
    return custom_communicationrecipientsgroup_response_local_var;
}

__attribute__((deprecated)) custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_create(
    char *s_communicationrecipientsgroup_label,
    list_t *a_obj_communicationrecipientsrecipient
    ) {
    return custom_communicationrecipientsgroup_response_create_internal (
        s_communicationrecipientsgroup_label,
        a_obj_communicationrecipientsrecipient
        );
}

void custom_communicationrecipientsgroup_response_free(custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response) {
    if(NULL == custom_communicationrecipientsgroup_response){
        return ;
    }
    if(custom_communicationrecipientsgroup_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_communicationrecipientsgroup_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label) {
        free(custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label);
        custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label = NULL;
    }
    if (custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient) {
        list_ForEach(listEntry, custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient) {
            custom_communicationrecipientsrecipient_response_free(listEntry->data);
        }
        list_freeList(custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient);
        custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient = NULL;
    }
    free(custom_communicationrecipientsgroup_response);
}

cJSON *custom_communicationrecipientsgroup_response_convertToJSON(custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label
    if (!custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationrecipientsgroupLabel", custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label) == NULL) {
    goto fail; //String
    }


    // custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient
    if (!custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipientsrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationrecipientsrecipient");
    if(a_obj_communicationrecipientsrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientsrecipientListEntry;
    if (custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient) {
    list_ForEach(a_obj_communicationrecipientsrecipientListEntry, custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient) {
    cJSON *itemLocal = custom_communicationrecipientsrecipient_response_convertToJSON(a_obj_communicationrecipientsrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationrecipientsrecipient, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_parseFromJSON(cJSON *custom_communicationrecipientsgroup_responseJSON){

    custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_local_var = NULL;

    // define the local list for custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient
    list_t *a_obj_communicationrecipientsrecipientList = NULL;

    // custom_communicationrecipientsgroup_response->s_communicationrecipientsgroup_label
    cJSON *s_communicationrecipientsgroup_label = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsgroup_responseJSON, "sCommunicationrecipientsgroupLabel");
    if (cJSON_IsNull(s_communicationrecipientsgroup_label)) {
        s_communicationrecipientsgroup_label = NULL;
    }
    if (!s_communicationrecipientsgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communicationrecipientsgroup_label))
    {
    goto end; //String
    }

    // custom_communicationrecipientsgroup_response->a_obj_communicationrecipientsrecipient
    cJSON *a_obj_communicationrecipientsrecipient = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsgroup_responseJSON, "a_objCommunicationrecipientsrecipient");
    if (cJSON_IsNull(a_obj_communicationrecipientsrecipient)) {
        a_obj_communicationrecipientsrecipient = NULL;
    }
    if (!a_obj_communicationrecipientsrecipient) {
        goto end;
    }

    
    cJSON *a_obj_communicationrecipientsrecipient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationrecipientsrecipient)){
        goto end; //nonprimitive container
    }

    a_obj_communicationrecipientsrecipientList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationrecipientsrecipient_local_nonprimitive,a_obj_communicationrecipientsrecipient )
    {
        if(!cJSON_IsObject(a_obj_communicationrecipientsrecipient_local_nonprimitive)){
            goto end;
        }
        custom_communicationrecipientsrecipient_response_t *a_obj_communicationrecipientsrecipientItem = custom_communicationrecipientsrecipient_response_parseFromJSON(a_obj_communicationrecipientsrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationrecipientsrecipientList, a_obj_communicationrecipientsrecipientItem);
    }


    custom_communicationrecipientsgroup_response_local_var = custom_communicationrecipientsgroup_response_create_internal (
        strdup(s_communicationrecipientsgroup_label->valuestring),
        a_obj_communicationrecipientsrecipientList
        );

    return custom_communicationrecipientsgroup_response_local_var;
end:
    if (a_obj_communicationrecipientsrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationrecipientsrecipientList) {
            custom_communicationrecipientsrecipient_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationrecipientsrecipientList);
        a_obj_communicationrecipientsrecipientList = NULL;
    }
    return NULL;

}
