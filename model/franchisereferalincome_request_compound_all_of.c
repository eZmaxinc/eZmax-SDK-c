#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_request_compound_all_of.h"



franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_create(
    address_request_t *obj_address,
    list_t *a_obj_contact
    ) {
    franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_local_var = malloc(sizeof(franchisereferalincome_request_compound_all_of_t));
    if (!franchisereferalincome_request_compound_all_of_local_var) {
        return NULL;
    }
    franchisereferalincome_request_compound_all_of_local_var->obj_address = obj_address;
    franchisereferalincome_request_compound_all_of_local_var->a_obj_contact = a_obj_contact;

    return franchisereferalincome_request_compound_all_of_local_var;
}


void franchisereferalincome_request_compound_all_of_free(franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of) {
    if(NULL == franchisereferalincome_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_request_compound_all_of->obj_address) {
        address_request_free(franchisereferalincome_request_compound_all_of->obj_address);
        franchisereferalincome_request_compound_all_of->obj_address = NULL;
    }
    if (franchisereferalincome_request_compound_all_of->a_obj_contact) {
        list_ForEach(listEntry, franchisereferalincome_request_compound_all_of->a_obj_contact) {
            contact_request_compound_free(listEntry->data);
        }
        list_free(franchisereferalincome_request_compound_all_of->a_obj_contact);
        franchisereferalincome_request_compound_all_of->a_obj_contact = NULL;
    }
    free(franchisereferalincome_request_compound_all_of);
}

cJSON *franchisereferalincome_request_compound_all_of_convertToJSON(franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_request_compound_all_of->obj_address
    if(franchisereferalincome_request_compound_all_of->obj_address) { 
    cJSON *obj_address_local_JSON = address_request_convertToJSON(franchisereferalincome_request_compound_all_of->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // franchisereferalincome_request_compound_all_of->a_obj_contact
    if (!franchisereferalincome_request_compound_all_of->a_obj_contact) {
        goto fail;
    }
    
    cJSON *a_obj_contact = cJSON_AddArrayToObject(item, "a_objContact");
    if(a_obj_contact == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_contactListEntry;
    if (franchisereferalincome_request_compound_all_of->a_obj_contact) {
    list_ForEach(a_obj_contactListEntry, franchisereferalincome_request_compound_all_of->a_obj_contact) {
    cJSON *itemLocal = contact_request_compound_convertToJSON(a_obj_contactListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_contact, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_parseFromJSON(cJSON *franchisereferalincome_request_compound_all_ofJSON){

    franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_local_var = NULL;

    // franchisereferalincome_request_compound_all_of->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compound_all_ofJSON, "objAddress");
    address_request_t *obj_address_local_nonprim = NULL;
    if (obj_address) { 
    obj_address_local_nonprim = address_request_parseFromJSON(obj_address); //nonprimitive
    }

    // franchisereferalincome_request_compound_all_of->a_obj_contact
    cJSON *a_obj_contact = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_request_compound_all_ofJSON, "a_objContact");
    if (!a_obj_contact) {
        goto end;
    }

    list_t *a_obj_contactList;
    
    cJSON *a_obj_contact_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_contact)){
        goto end; //nonprimitive container
    }

    a_obj_contactList = list_create();

    cJSON_ArrayForEach(a_obj_contact_local_nonprimitive,a_obj_contact )
    {
        if(!cJSON_IsObject(a_obj_contact_local_nonprimitive)){
            goto end;
        }
        contact_request_compound_t *a_obj_contactItem = contact_request_compound_parseFromJSON(a_obj_contact_local_nonprimitive);

        list_addElement(a_obj_contactList, a_obj_contactItem);
    }


    franchisereferalincome_request_compound_all_of_local_var = franchisereferalincome_request_compound_all_of_create (
        obj_address ? obj_address_local_nonprim : NULL,
        a_obj_contactList
        );

    return franchisereferalincome_request_compound_all_of_local_var;
end:
    if (obj_address_local_nonprim) {
        address_request_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    return NULL;

}
