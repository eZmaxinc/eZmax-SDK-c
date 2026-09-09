#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "officetaxreport_import_into_edm_v1_request.h"



static officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_create_internal(
    list_t *a_obj_attachment
    ) {
    officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_local_var = malloc(sizeof(officetaxreport_import_into_edm_v1_request_t));
    if (!officetaxreport_import_into_edm_v1_request_local_var) {
        return NULL;
    }
    memset(officetaxreport_import_into_edm_v1_request_local_var, 0, sizeof(officetaxreport_import_into_edm_v1_request_t));
    officetaxreport_import_into_edm_v1_request_local_var->_library_owned = 1;
    officetaxreport_import_into_edm_v1_request_local_var->a_obj_attachment = a_obj_attachment;
    return officetaxreport_import_into_edm_v1_request_local_var;
}

__attribute__((deprecated)) officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
    ) {
    officetaxreport_import_into_edm_v1_request_t *result = officetaxreport_import_into_edm_v1_request_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void officetaxreport_import_into_edm_v1_request_free(officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request) {
    if(NULL == officetaxreport_import_into_edm_v1_request){
        return ;
    }
    if(officetaxreport_import_into_edm_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "officetaxreport_import_into_edm_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (officetaxreport_import_into_edm_v1_request->a_obj_attachment) {
        list_ForEach(listEntry, officetaxreport_import_into_edm_v1_request->a_obj_attachment) {
            custom_attachment_import_into_edm_request_free(listEntry->data);
        }
        list_freeList(officetaxreport_import_into_edm_v1_request->a_obj_attachment);
        officetaxreport_import_into_edm_v1_request->a_obj_attachment = NULL;
    }
    free(officetaxreport_import_into_edm_v1_request);
}

cJSON *officetaxreport_import_into_edm_v1_request_convertToJSON(officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // officetaxreport_import_into_edm_v1_request->a_obj_attachment
    if (!officetaxreport_import_into_edm_v1_request->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (officetaxreport_import_into_edm_v1_request->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, officetaxreport_import_into_edm_v1_request->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_import_into_edm_request_convertToJSON(a_obj_attachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_parseFromJSON(cJSON *officetaxreport_import_into_edm_v1_requestJSON){

    officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_local_var = NULL;

    // define the local list for officetaxreport_import_into_edm_v1_request->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // officetaxreport_import_into_edm_v1_request->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(officetaxreport_import_into_edm_v1_requestJSON, "a_objAttachment");
    if (cJSON_IsNull(a_obj_attachment)) {
        a_obj_attachment = NULL;
    }
    if (!a_obj_attachment) {
        goto end;
    }

    
    cJSON *a_obj_attachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_local_nonprimitive,a_obj_attachment )
    {
        if(!cJSON_IsObject(a_obj_attachment_local_nonprimitive)){
            goto end;
        }
        custom_attachment_import_into_edm_request_t *a_obj_attachmentItem = custom_attachment_import_into_edm_request_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }



    officetaxreport_import_into_edm_v1_request_local_var = officetaxreport_import_into_edm_v1_request_create_internal (
        a_obj_attachmentList
        );

    if (!officetaxreport_import_into_edm_v1_request_local_var) {
        goto end;
    }

    return officetaxreport_import_into_edm_v1_request_local_var;
end:
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_import_into_edm_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
