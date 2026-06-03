#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request.h"



static inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_create_internal(
    list_t *a_obj_inscriptionnotauthenticatedcondition,
    char *dt_inscriptionnotauthenticated_transactiondate_real
    ) {
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var = malloc(sizeof(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t));
    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var, 0, sizeof(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t));
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var->_library_owned = 1;
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var->a_obj_inscriptionnotauthenticatedcondition = a_obj_inscriptionnotauthenticatedcondition;
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var->dt_inscriptionnotauthenticated_transactiondate_real = dt_inscriptionnotauthenticated_transactiondate_real;
    return inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_create(
    list_t *a_obj_inscriptionnotauthenticatedcondition,
    char *dt_inscriptionnotauthenticated_transactiondate_real
    ) {
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *result = inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_create_internal (
        a_obj_inscriptionnotauthenticatedcondition,
        dt_inscriptionnotauthenticated_transactiondate_real
        );
    if (!result) {
    }
    return result;
}

void inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request) {
    if(NULL == inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request){
        return ;
    }
    if(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition) {
        list_ForEach(listEntry, inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition) {
            custom_inscriptionnotauthenticatedcondition_request_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition);
        inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition = NULL;
    }
    if (inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real) {
        free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real);
        inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request);
}

cJSON *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_convertToJSON(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition
    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition) {
        goto fail;
    }
    cJSON *a_obj_inscriptionnotauthenticatedcondition = cJSON_AddArrayToObject(item, "a_objInscriptionnotauthenticatedcondition");
    if(a_obj_inscriptionnotauthenticatedcondition == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionnotauthenticatedconditionListEntry;
    if (inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition) {
    list_ForEach(a_obj_inscriptionnotauthenticatedconditionListEntry, inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition) {
    cJSON *itemLocal = custom_inscriptionnotauthenticatedcondition_request_convertToJSON(a_obj_inscriptionnotauthenticatedconditionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptionnotauthenticatedcondition, itemLocal);
    }
    }


    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real
    if(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedTransactiondateReal", inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_parseFromJSON(cJSON *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_requestJSON){

    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition
    list_t *a_obj_inscriptionnotauthenticatedconditionList = NULL;

    char *dt_inscriptionnotauthenticated_transactiondate_real_local_str = NULL;

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->a_obj_inscriptionnotauthenticatedcondition
    cJSON *a_obj_inscriptionnotauthenticatedcondition = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_requestJSON, "a_objInscriptionnotauthenticatedcondition");
    if (cJSON_IsNull(a_obj_inscriptionnotauthenticatedcondition)) {
        a_obj_inscriptionnotauthenticatedcondition = NULL;
    }
    if (!a_obj_inscriptionnotauthenticatedcondition) {
        goto end;
    }

    
    cJSON *a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptionnotauthenticatedcondition)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionnotauthenticatedconditionList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive,a_obj_inscriptionnotauthenticatedcondition )
    {
        if(!cJSON_IsObject(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive)){
            goto end;
        }
        custom_inscriptionnotauthenticatedcondition_request_t *a_obj_inscriptionnotauthenticatedconditionItem = custom_inscriptionnotauthenticatedcondition_request_parseFromJSON(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive);

        list_addElement(a_obj_inscriptionnotauthenticatedconditionList, a_obj_inscriptionnotauthenticatedconditionItem);
    }

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request->dt_inscriptionnotauthenticated_transactiondate_real
    cJSON *dt_inscriptionnotauthenticated_transactiondate_real = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_requestJSON, "dtInscriptionnotauthenticatedTransactiondateReal");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real)) {
        dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_real) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_transactiondate_real) && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real))
    {
    goto end; //String
    }
    }


    if (dt_inscriptionnotauthenticated_transactiondate_real && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real)) dt_inscriptionnotauthenticated_transactiondate_real_local_str = strdup(dt_inscriptionnotauthenticated_transactiondate_real->valuestring);

    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var = inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_create_internal (
        a_obj_inscriptionnotauthenticatedconditionList,
        dt_inscriptionnotauthenticated_transactiondate_real_local_str
        );

    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_local_var;
end:
    if (a_obj_inscriptionnotauthenticatedconditionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionnotauthenticatedconditionList) {
            custom_inscriptionnotauthenticatedcondition_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionnotauthenticatedconditionList);
        a_obj_inscriptionnotauthenticatedconditionList = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_real_local_str) {
        free(dt_inscriptionnotauthenticated_transactiondate_real_local_str);
        dt_inscriptionnotauthenticated_transactiondate_real_local_str = NULL;
    }
    return NULL;

}
