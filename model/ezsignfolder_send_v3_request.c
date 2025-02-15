#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_send_v3_request.h"



static ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_create_internal(
    char *t_ezsignfolder_message,
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e e_ezsignfolder_messageorder,
    char *dt_ezsignfolder_delayedsenddate,
    list_t *a_fki_ezsignfoldersignerassociation_id
    ) {
    ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_local_var = malloc(sizeof(ezsignfolder_send_v3_request_t));
    if (!ezsignfolder_send_v3_request_local_var) {
        return NULL;
    }
    ezsignfolder_send_v3_request_local_var->t_ezsignfolder_message = t_ezsignfolder_message;
    ezsignfolder_send_v3_request_local_var->e_ezsignfolder_messageorder = e_ezsignfolder_messageorder;
    ezsignfolder_send_v3_request_local_var->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    ezsignfolder_send_v3_request_local_var->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;

    ezsignfolder_send_v3_request_local_var->_library_owned = 1;
    return ezsignfolder_send_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_create(
    char *t_ezsignfolder_message,
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e e_ezsignfolder_messageorder,
    char *dt_ezsignfolder_delayedsenddate,
    list_t *a_fki_ezsignfoldersignerassociation_id
    ) {
    return ezsignfolder_send_v3_request_create_internal (
        t_ezsignfolder_message,
        e_ezsignfolder_messageorder,
        dt_ezsignfolder_delayedsenddate,
        a_fki_ezsignfoldersignerassociation_id
        );
}

void ezsignfolder_send_v3_request_free(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request) {
    if(NULL == ezsignfolder_send_v3_request){
        return ;
    }
    if(ezsignfolder_send_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_send_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_send_v3_request->t_ezsignfolder_message) {
        free(ezsignfolder_send_v3_request->t_ezsignfolder_message);
        ezsignfolder_send_v3_request->t_ezsignfolder_message = NULL;
    }
    if (ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate) {
        free(ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate);
        ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id);
        ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsignfolder_send_v3_request);
}

cJSON *ezsignfolder_send_v3_request_convertToJSON(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_send_v3_request->t_ezsignfolder_message
    if(ezsignfolder_send_v3_request->t_ezsignfolder_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderMessage", ezsignfolder_send_v3_request->t_ezsignfolder_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_send_v3_request->e_ezsignfolder_messageorder
    if(ezsignfolder_send_v3_request->e_ezsignfolder_messageorder != ezmax_api_definition__full_field_e_ezsignfolder_messageorder__NULL) {
    cJSON *e_ezsignfolder_messageorder_local_JSON = field_e_ezsignfolder_messageorder_convertToJSON(ezsignfolder_send_v3_request->e_ezsignfolder_messageorder);
    if(e_ezsignfolder_messageorder_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderMessageorder", e_ezsignfolder_messageorder_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate
    if(ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDelayedsenddate", ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id
    if (!ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_fkiEzsignfoldersignerassociationID");
    if(a_fki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_fki_ezsignfoldersignerassociation_idListEntry, ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_fki_ezsignfoldersignerassociation_id, "", *(double *)a_fki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
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

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_parseFromJSON(cJSON *ezsignfolder_send_v3_requestJSON){

    ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_local_var = NULL;

    // define the local variable for ezsignfolder_send_v3_request->e_ezsignfolder_messageorder
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e e_ezsignfolder_messageorder_local_nonprim = 0;

    // define the local list for ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id
    list_t *a_fki_ezsignfoldersignerassociation_idList = NULL;

    // ezsignfolder_send_v3_request->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v3_requestJSON, "tEzsignfolderMessage");
    if (cJSON_IsNull(t_ezsignfolder_message)) {
        t_ezsignfolder_message = NULL;
    }
    if (t_ezsignfolder_message) { 
    if(!cJSON_IsString(t_ezsignfolder_message) && !cJSON_IsNull(t_ezsignfolder_message))
    {
    goto end; //String
    }
    }

    // ezsignfolder_send_v3_request->e_ezsignfolder_messageorder
    cJSON *e_ezsignfolder_messageorder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v3_requestJSON, "eEzsignfolderMessageorder");
    if (cJSON_IsNull(e_ezsignfolder_messageorder)) {
        e_ezsignfolder_messageorder = NULL;
    }
    if (e_ezsignfolder_messageorder) { 
    e_ezsignfolder_messageorder_local_nonprim = field_e_ezsignfolder_messageorder_parseFromJSON(e_ezsignfolder_messageorder); //custom
    }

    // ezsignfolder_send_v3_request->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v3_requestJSON, "dtEzsignfolderDelayedsenddate");
    if (cJSON_IsNull(dt_ezsignfolder_delayedsenddate)) {
        dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_send_v3_request->a_fki_ezsignfoldersignerassociation_id
    cJSON *a_fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v3_requestJSON, "a_fkiEzsignfoldersignerassociationID");
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


    ezsignfolder_send_v3_request_local_var = ezsignfolder_send_v3_request_create_internal (
        t_ezsignfolder_message && !cJSON_IsNull(t_ezsignfolder_message) ? strdup(t_ezsignfolder_message->valuestring) : NULL,
        e_ezsignfolder_messageorder ? e_ezsignfolder_messageorder_local_nonprim : 0,
        dt_ezsignfolder_delayedsenddate && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate) ? strdup(dt_ezsignfolder_delayedsenddate->valuestring) : NULL,
        a_fki_ezsignfoldersignerassociation_idList
        );

    return ezsignfolder_send_v3_request_local_var;
end:
    if (e_ezsignfolder_messageorder_local_nonprim) {
        e_ezsignfolder_messageorder_local_nonprim = 0;
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
    return NULL;

}
