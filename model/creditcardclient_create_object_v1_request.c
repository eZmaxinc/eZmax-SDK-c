#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_create_object_v1_request.h"



creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_create(
    list_t *a_obj_creditcardclient
    ) {
    creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_local_var = malloc(sizeof(creditcardclient_create_object_v1_request_t));
    if (!creditcardclient_create_object_v1_request_local_var) {
        return NULL;
    }
    creditcardclient_create_object_v1_request_local_var->a_obj_creditcardclient = a_obj_creditcardclient;

    return creditcardclient_create_object_v1_request_local_var;
}


void creditcardclient_create_object_v1_request_free(creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request) {
    if(NULL == creditcardclient_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_create_object_v1_request->a_obj_creditcardclient) {
        list_ForEach(listEntry, creditcardclient_create_object_v1_request->a_obj_creditcardclient) {
            creditcardclient_request_compound_free(listEntry->data);
        }
        list_freeList(creditcardclient_create_object_v1_request->a_obj_creditcardclient);
        creditcardclient_create_object_v1_request->a_obj_creditcardclient = NULL;
    }
    free(creditcardclient_create_object_v1_request);
}

cJSON *creditcardclient_create_object_v1_request_convertToJSON(creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_create_object_v1_request->a_obj_creditcardclient
    if (!creditcardclient_create_object_v1_request->a_obj_creditcardclient) {
        goto fail;
    }
    cJSON *a_obj_creditcardclient = cJSON_AddArrayToObject(item, "a_objCreditcardclient");
    if(a_obj_creditcardclient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardclientListEntry;
    if (creditcardclient_create_object_v1_request->a_obj_creditcardclient) {
    list_ForEach(a_obj_creditcardclientListEntry, creditcardclient_create_object_v1_request->a_obj_creditcardclient) {
    cJSON *itemLocal = creditcardclient_request_compound_convertToJSON(a_obj_creditcardclientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_creditcardclient, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_parseFromJSON(cJSON *creditcardclient_create_object_v1_requestJSON){

    creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_local_var = NULL;

    // define the local list for creditcardclient_create_object_v1_request->a_obj_creditcardclient
    list_t *a_obj_creditcardclientList = NULL;

    // creditcardclient_create_object_v1_request->a_obj_creditcardclient
    cJSON *a_obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_create_object_v1_requestJSON, "a_objCreditcardclient");
    if (!a_obj_creditcardclient) {
        goto end;
    }

    
    cJSON *a_obj_creditcardclient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_creditcardclient)){
        goto end; //nonprimitive container
    }

    a_obj_creditcardclientList = list_createList();

    cJSON_ArrayForEach(a_obj_creditcardclient_local_nonprimitive,a_obj_creditcardclient )
    {
        if(!cJSON_IsObject(a_obj_creditcardclient_local_nonprimitive)){
            goto end;
        }
        creditcardclient_request_compound_t *a_obj_creditcardclientItem = creditcardclient_request_compound_parseFromJSON(a_obj_creditcardclient_local_nonprimitive);

        list_addElement(a_obj_creditcardclientList, a_obj_creditcardclientItem);
    }


    creditcardclient_create_object_v1_request_local_var = creditcardclient_create_object_v1_request_create (
        a_obj_creditcardclientList
        );

    return creditcardclient_create_object_v1_request_local_var;
end:
    if (a_obj_creditcardclientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardclientList) {
            creditcardclient_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardclientList);
        a_obj_creditcardclientList = NULL;
    }
    return NULL;

}
