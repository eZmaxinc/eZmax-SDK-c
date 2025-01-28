#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_create_object_v1_request.h"



static domain_create_object_v1_request_t *domain_create_object_v1_request_create_internal(
    list_t *a_obj_domain
    ) {
    domain_create_object_v1_request_t *domain_create_object_v1_request_local_var = malloc(sizeof(domain_create_object_v1_request_t));
    if (!domain_create_object_v1_request_local_var) {
        return NULL;
    }
    domain_create_object_v1_request_local_var->a_obj_domain = a_obj_domain;

    domain_create_object_v1_request_local_var->_library_owned = 1;
    return domain_create_object_v1_request_local_var;
}

__attribute__((deprecated)) domain_create_object_v1_request_t *domain_create_object_v1_request_create(
    list_t *a_obj_domain
    ) {
    return domain_create_object_v1_request_create_internal (
        a_obj_domain
        );
}

void domain_create_object_v1_request_free(domain_create_object_v1_request_t *domain_create_object_v1_request) {
    if(NULL == domain_create_object_v1_request){
        return ;
    }
    if(domain_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_create_object_v1_request->a_obj_domain) {
        list_ForEach(listEntry, domain_create_object_v1_request->a_obj_domain) {
            domain_request_compound_free(listEntry->data);
        }
        list_freeList(domain_create_object_v1_request->a_obj_domain);
        domain_create_object_v1_request->a_obj_domain = NULL;
    }
    free(domain_create_object_v1_request);
}

cJSON *domain_create_object_v1_request_convertToJSON(domain_create_object_v1_request_t *domain_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_create_object_v1_request->a_obj_domain
    if (!domain_create_object_v1_request->a_obj_domain) {
        goto fail;
    }
    cJSON *a_obj_domain = cJSON_AddArrayToObject(item, "a_objDomain");
    if(a_obj_domain == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_domainListEntry;
    if (domain_create_object_v1_request->a_obj_domain) {
    list_ForEach(a_obj_domainListEntry, domain_create_object_v1_request->a_obj_domain) {
    cJSON *itemLocal = domain_request_compound_convertToJSON(a_obj_domainListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_domain, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_create_object_v1_request_t *domain_create_object_v1_request_parseFromJSON(cJSON *domain_create_object_v1_requestJSON){

    domain_create_object_v1_request_t *domain_create_object_v1_request_local_var = NULL;

    // define the local list for domain_create_object_v1_request->a_obj_domain
    list_t *a_obj_domainList = NULL;

    // domain_create_object_v1_request->a_obj_domain
    cJSON *a_obj_domain = cJSON_GetObjectItemCaseSensitive(domain_create_object_v1_requestJSON, "a_objDomain");
    if (cJSON_IsNull(a_obj_domain)) {
        a_obj_domain = NULL;
    }
    if (!a_obj_domain) {
        goto end;
    }

    
    cJSON *a_obj_domain_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_domain)){
        goto end; //nonprimitive container
    }

    a_obj_domainList = list_createList();

    cJSON_ArrayForEach(a_obj_domain_local_nonprimitive,a_obj_domain )
    {
        if(!cJSON_IsObject(a_obj_domain_local_nonprimitive)){
            goto end;
        }
        domain_request_compound_t *a_obj_domainItem = domain_request_compound_parseFromJSON(a_obj_domain_local_nonprimitive);

        list_addElement(a_obj_domainList, a_obj_domainItem);
    }


    domain_create_object_v1_request_local_var = domain_create_object_v1_request_create_internal (
        a_obj_domainList
        );

    return domain_create_object_v1_request_local_var;
end:
    if (a_obj_domainList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_domainList) {
            domain_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_domainList);
        a_obj_domainList = NULL;
    }
    return NULL;

}
