#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_batch_download_v1_request.h"



static agent_batch_download_v1_request_t *agent_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    agent_batch_download_v1_request_t *agent_batch_download_v1_request_local_var = malloc(sizeof(agent_batch_download_v1_request_t));
    if (!agent_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(agent_batch_download_v1_request_local_var, 0, sizeof(agent_batch_download_v1_request_t));
    agent_batch_download_v1_request_local_var->_library_owned = 1;
    agent_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return agent_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) agent_batch_download_v1_request_t *agent_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    agent_batch_download_v1_request_t *result = agent_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void agent_batch_download_v1_request_free(agent_batch_download_v1_request_t *agent_batch_download_v1_request) {
    if(NULL == agent_batch_download_v1_request){
        return ;
    }
    if(agent_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, agent_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(agent_batch_download_v1_request->a_pki_attachment_id);
        agent_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(agent_batch_download_v1_request);
}

cJSON *agent_batch_download_v1_request_convertToJSON(agent_batch_download_v1_request_t *agent_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // agent_batch_download_v1_request->a_pki_attachment_id
    if (!agent_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, agent_batch_download_v1_request->a_pki_attachment_id) {
    if(cJSON_AddNumberToObject(a_pki_attachment_id, "", *(double *)a_pki_attachment_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_batch_download_v1_request_t *agent_batch_download_v1_request_parseFromJSON(cJSON *agent_batch_download_v1_requestJSON){

    agent_batch_download_v1_request_t *agent_batch_download_v1_request_local_var = NULL;

    // define the local list for agent_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // agent_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(agent_batch_download_v1_requestJSON, "a_pkiAttachmentID");
    if (cJSON_IsNull(a_pki_attachment_id)) {
        a_pki_attachment_id = NULL;
    }
    if (!a_pki_attachment_id) {
        goto end;
    }

    
    cJSON *a_pki_attachment_id_local = NULL;
    if(!cJSON_IsArray(a_pki_attachment_id)) {
        goto end;//primitive container
    }
    a_pki_attachment_idList = list_createList();

    cJSON_ArrayForEach(a_pki_attachment_id_local, a_pki_attachment_id)
    {
        if(!cJSON_IsNumber(a_pki_attachment_id_local))
        {
            goto end;
        }
        double *a_pki_attachment_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_attachment_id_local_value)
        {
            goto end;
        }
        *a_pki_attachment_id_local_value = a_pki_attachment_id_local->valuedouble;
        list_addElement(a_pki_attachment_idList , a_pki_attachment_id_local_value);
    }



    agent_batch_download_v1_request_local_var = agent_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!agent_batch_download_v1_request_local_var) {
        goto end;
    }

    return agent_batch_download_v1_request_local_var;
end:
    if (a_pki_attachment_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_attachment_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_attachment_idList);
        a_pki_attachment_idList = NULL;
    }
    return NULL;

}
