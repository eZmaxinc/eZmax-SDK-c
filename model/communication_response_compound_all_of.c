#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_response_compound_all_of.h"



communication_response_compound_all_of_t *communication_response_compound_all_of_create(
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient,
    list_t *a_obj_communicationimage,
    list_t *a_obj_communicationexternalimage
    ) {
    communication_response_compound_all_of_t *communication_response_compound_all_of_local_var = malloc(sizeof(communication_response_compound_all_of_t));
    if (!communication_response_compound_all_of_local_var) {
        return NULL;
    }
    communication_response_compound_all_of_local_var->a_obj_communicationattachment = a_obj_communicationattachment;
    communication_response_compound_all_of_local_var->a_obj_communicationrecipient = a_obj_communicationrecipient;
    communication_response_compound_all_of_local_var->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;
    communication_response_compound_all_of_local_var->a_obj_communicationimage = a_obj_communicationimage;
    communication_response_compound_all_of_local_var->a_obj_communicationexternalimage = a_obj_communicationexternalimage;

    return communication_response_compound_all_of_local_var;
}


void communication_response_compound_all_of_free(communication_response_compound_all_of_t *communication_response_compound_all_of) {
    if(NULL == communication_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_response_compound_all_of->a_obj_communicationattachment) {
        list_ForEach(listEntry, communication_response_compound_all_of->a_obj_communicationattachment) {
            communicationattachment_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound_all_of->a_obj_communicationattachment);
        communication_response_compound_all_of->a_obj_communicationattachment = NULL;
    }
    if (communication_response_compound_all_of->a_obj_communicationrecipient) {
        list_ForEach(listEntry, communication_response_compound_all_of->a_obj_communicationrecipient) {
            communicationrecipient_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound_all_of->a_obj_communicationrecipient);
        communication_response_compound_all_of->a_obj_communicationrecipient = NULL;
    }
    if (communication_response_compound_all_of->a_obj_communicationexternalrecipient) {
        list_ForEach(listEntry, communication_response_compound_all_of->a_obj_communicationexternalrecipient) {
            communicationexternalrecipient_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound_all_of->a_obj_communicationexternalrecipient);
        communication_response_compound_all_of->a_obj_communicationexternalrecipient = NULL;
    }
    if (communication_response_compound_all_of->a_obj_communicationimage) {
        list_ForEach(listEntry, communication_response_compound_all_of->a_obj_communicationimage) {
            communicationimage_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound_all_of->a_obj_communicationimage);
        communication_response_compound_all_of->a_obj_communicationimage = NULL;
    }
    if (communication_response_compound_all_of->a_obj_communicationexternalimage) {
        list_ForEach(listEntry, communication_response_compound_all_of->a_obj_communicationexternalimage) {
            communicationexternalimage_response_compound_free(listEntry->data);
        }
        list_freeList(communication_response_compound_all_of->a_obj_communicationexternalimage);
        communication_response_compound_all_of->a_obj_communicationexternalimage = NULL;
    }
    free(communication_response_compound_all_of);
}

cJSON *communication_response_compound_all_of_convertToJSON(communication_response_compound_all_of_t *communication_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // communication_response_compound_all_of->a_obj_communicationattachment
    if (!communication_response_compound_all_of->a_obj_communicationattachment) {
        goto fail;
    }
    cJSON *a_obj_communicationattachment = cJSON_AddArrayToObject(item, "a_objCommunicationattachment");
    if(a_obj_communicationattachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationattachmentListEntry;
    if (communication_response_compound_all_of->a_obj_communicationattachment) {
    list_ForEach(a_obj_communicationattachmentListEntry, communication_response_compound_all_of->a_obj_communicationattachment) {
    cJSON *itemLocal = communicationattachment_response_compound_convertToJSON(a_obj_communicationattachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationattachment, itemLocal);
    }
    }


    // communication_response_compound_all_of->a_obj_communicationrecipient
    if (!communication_response_compound_all_of->a_obj_communicationrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationrecipient");
    if(a_obj_communicationrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientListEntry;
    if (communication_response_compound_all_of->a_obj_communicationrecipient) {
    list_ForEach(a_obj_communicationrecipientListEntry, communication_response_compound_all_of->a_obj_communicationrecipient) {
    cJSON *itemLocal = communicationrecipient_response_compound_convertToJSON(a_obj_communicationrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationrecipient, itemLocal);
    }
    }


    // communication_response_compound_all_of->a_obj_communicationexternalrecipient
    if (!communication_response_compound_all_of->a_obj_communicationexternalrecipient) {
        goto fail;
    }
    cJSON *a_obj_communicationexternalrecipient = cJSON_AddArrayToObject(item, "a_objCommunicationexternalrecipient");
    if(a_obj_communicationexternalrecipient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationexternalrecipientListEntry;
    if (communication_response_compound_all_of->a_obj_communicationexternalrecipient) {
    list_ForEach(a_obj_communicationexternalrecipientListEntry, communication_response_compound_all_of->a_obj_communicationexternalrecipient) {
    cJSON *itemLocal = communicationexternalrecipient_response_compound_convertToJSON(a_obj_communicationexternalrecipientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationexternalrecipient, itemLocal);
    }
    }


    // communication_response_compound_all_of->a_obj_communicationimage
    if (!communication_response_compound_all_of->a_obj_communicationimage) {
        goto fail;
    }
    cJSON *a_obj_communicationimage = cJSON_AddArrayToObject(item, "a_objCommunicationimage");
    if(a_obj_communicationimage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationimageListEntry;
    if (communication_response_compound_all_of->a_obj_communicationimage) {
    list_ForEach(a_obj_communicationimageListEntry, communication_response_compound_all_of->a_obj_communicationimage) {
    cJSON *itemLocal = communicationimage_response_compound_convertToJSON(a_obj_communicationimageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationimage, itemLocal);
    }
    }


    // communication_response_compound_all_of->a_obj_communicationexternalimage
    if (!communication_response_compound_all_of->a_obj_communicationexternalimage) {
        goto fail;
    }
    cJSON *a_obj_communicationexternalimage = cJSON_AddArrayToObject(item, "a_objCommunicationexternalimage");
    if(a_obj_communicationexternalimage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationexternalimageListEntry;
    if (communication_response_compound_all_of->a_obj_communicationexternalimage) {
    list_ForEach(a_obj_communicationexternalimageListEntry, communication_response_compound_all_of->a_obj_communicationexternalimage) {
    cJSON *itemLocal = communicationexternalimage_response_compound_convertToJSON(a_obj_communicationexternalimageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationexternalimage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_response_compound_all_of_t *communication_response_compound_all_of_parseFromJSON(cJSON *communication_response_compound_all_ofJSON){

    communication_response_compound_all_of_t *communication_response_compound_all_of_local_var = NULL;

    // define the local list for communication_response_compound_all_of->a_obj_communicationattachment
    list_t *a_obj_communicationattachmentList = NULL;

    // define the local list for communication_response_compound_all_of->a_obj_communicationrecipient
    list_t *a_obj_communicationrecipientList = NULL;

    // define the local list for communication_response_compound_all_of->a_obj_communicationexternalrecipient
    list_t *a_obj_communicationexternalrecipientList = NULL;

    // define the local list for communication_response_compound_all_of->a_obj_communicationimage
    list_t *a_obj_communicationimageList = NULL;

    // define the local list for communication_response_compound_all_of->a_obj_communicationexternalimage
    list_t *a_obj_communicationexternalimageList = NULL;

    // communication_response_compound_all_of->a_obj_communicationattachment
    cJSON *a_obj_communicationattachment = cJSON_GetObjectItemCaseSensitive(communication_response_compound_all_ofJSON, "a_objCommunicationattachment");
    if (!a_obj_communicationattachment) {
        goto end;
    }

    
    cJSON *a_obj_communicationattachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationattachment)){
        goto end; //nonprimitive container
    }

    a_obj_communicationattachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationattachment_local_nonprimitive,a_obj_communicationattachment )
    {
        if(!cJSON_IsObject(a_obj_communicationattachment_local_nonprimitive)){
            goto end;
        }
        communicationattachment_response_compound_t *a_obj_communicationattachmentItem = communicationattachment_response_compound_parseFromJSON(a_obj_communicationattachment_local_nonprimitive);

        list_addElement(a_obj_communicationattachmentList, a_obj_communicationattachmentItem);
    }

    // communication_response_compound_all_of->a_obj_communicationrecipient
    cJSON *a_obj_communicationrecipient = cJSON_GetObjectItemCaseSensitive(communication_response_compound_all_ofJSON, "a_objCommunicationrecipient");
    if (!a_obj_communicationrecipient) {
        goto end;
    }

    
    cJSON *a_obj_communicationrecipient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationrecipient)){
        goto end; //nonprimitive container
    }

    a_obj_communicationrecipientList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationrecipient_local_nonprimitive,a_obj_communicationrecipient )
    {
        if(!cJSON_IsObject(a_obj_communicationrecipient_local_nonprimitive)){
            goto end;
        }
        communicationrecipient_response_compound_t *a_obj_communicationrecipientItem = communicationrecipient_response_compound_parseFromJSON(a_obj_communicationrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationrecipientList, a_obj_communicationrecipientItem);
    }

    // communication_response_compound_all_of->a_obj_communicationexternalrecipient
    cJSON *a_obj_communicationexternalrecipient = cJSON_GetObjectItemCaseSensitive(communication_response_compound_all_ofJSON, "a_objCommunicationexternalrecipient");
    if (!a_obj_communicationexternalrecipient) {
        goto end;
    }

    
    cJSON *a_obj_communicationexternalrecipient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationexternalrecipient)){
        goto end; //nonprimitive container
    }

    a_obj_communicationexternalrecipientList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationexternalrecipient_local_nonprimitive,a_obj_communicationexternalrecipient )
    {
        if(!cJSON_IsObject(a_obj_communicationexternalrecipient_local_nonprimitive)){
            goto end;
        }
        communicationexternalrecipient_response_compound_t *a_obj_communicationexternalrecipientItem = communicationexternalrecipient_response_compound_parseFromJSON(a_obj_communicationexternalrecipient_local_nonprimitive);

        list_addElement(a_obj_communicationexternalrecipientList, a_obj_communicationexternalrecipientItem);
    }

    // communication_response_compound_all_of->a_obj_communicationimage
    cJSON *a_obj_communicationimage = cJSON_GetObjectItemCaseSensitive(communication_response_compound_all_ofJSON, "a_objCommunicationimage");
    if (!a_obj_communicationimage) {
        goto end;
    }

    
    cJSON *a_obj_communicationimage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationimage)){
        goto end; //nonprimitive container
    }

    a_obj_communicationimageList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationimage_local_nonprimitive,a_obj_communicationimage )
    {
        if(!cJSON_IsObject(a_obj_communicationimage_local_nonprimitive)){
            goto end;
        }
        communicationimage_response_compound_t *a_obj_communicationimageItem = communicationimage_response_compound_parseFromJSON(a_obj_communicationimage_local_nonprimitive);

        list_addElement(a_obj_communicationimageList, a_obj_communicationimageItem);
    }

    // communication_response_compound_all_of->a_obj_communicationexternalimage
    cJSON *a_obj_communicationexternalimage = cJSON_GetObjectItemCaseSensitive(communication_response_compound_all_ofJSON, "a_objCommunicationexternalimage");
    if (!a_obj_communicationexternalimage) {
        goto end;
    }

    
    cJSON *a_obj_communicationexternalimage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationexternalimage)){
        goto end; //nonprimitive container
    }

    a_obj_communicationexternalimageList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationexternalimage_local_nonprimitive,a_obj_communicationexternalimage )
    {
        if(!cJSON_IsObject(a_obj_communicationexternalimage_local_nonprimitive)){
            goto end;
        }
        communicationexternalimage_response_compound_t *a_obj_communicationexternalimageItem = communicationexternalimage_response_compound_parseFromJSON(a_obj_communicationexternalimage_local_nonprimitive);

        list_addElement(a_obj_communicationexternalimageList, a_obj_communicationexternalimageItem);
    }


    communication_response_compound_all_of_local_var = communication_response_compound_all_of_create (
        a_obj_communicationattachmentList,
        a_obj_communicationrecipientList,
        a_obj_communicationexternalrecipientList,
        a_obj_communicationimageList,
        a_obj_communicationexternalimageList
        );

    return communication_response_compound_all_of_local_var;
end:
    if (a_obj_communicationattachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationattachmentList) {
            communicationattachment_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationattachmentList);
        a_obj_communicationattachmentList = NULL;
    }
    if (a_obj_communicationrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationrecipientList) {
            communicationrecipient_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationrecipientList);
        a_obj_communicationrecipientList = NULL;
    }
    if (a_obj_communicationexternalrecipientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationexternalrecipientList) {
            communicationexternalrecipient_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationexternalrecipientList);
        a_obj_communicationexternalrecipientList = NULL;
    }
    if (a_obj_communicationimageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationimageList) {
            communicationimage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationimageList);
        a_obj_communicationimageList = NULL;
    }
    if (a_obj_communicationexternalimageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationexternalimageList) {
            communicationexternalimage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationexternalimageList);
        a_obj_communicationexternalimageList = NULL;
    }
    return NULL;

}
