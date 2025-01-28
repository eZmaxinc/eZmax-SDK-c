#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociationstatus_response.h"



static custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_create_internal(
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsignfoldersignerassociationstatus_lastname,
    char *s_ezsignfoldersignerassociationstatus_firstname,
    char *s_ezsignfoldersignerassociationstatus_description_x,
    list_t *a_obj_ezsignsignaturestatus
    ) {
    custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_local_var = malloc(sizeof(custom_ezsignfoldersignerassociationstatus_response_t));
    if (!custom_ezsignfoldersignerassociationstatus_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociationstatus_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociationstatus_response_local_var->s_ezsignfoldersignerassociationstatus_lastname = s_ezsignfoldersignerassociationstatus_lastname;
    custom_ezsignfoldersignerassociationstatus_response_local_var->s_ezsignfoldersignerassociationstatus_firstname = s_ezsignfoldersignerassociationstatus_firstname;
    custom_ezsignfoldersignerassociationstatus_response_local_var->s_ezsignfoldersignerassociationstatus_description_x = s_ezsignfoldersignerassociationstatus_description_x;
    custom_ezsignfoldersignerassociationstatus_response_local_var->a_obj_ezsignsignaturestatus = a_obj_ezsignsignaturestatus;

    custom_ezsignfoldersignerassociationstatus_response_local_var->_library_owned = 1;
    return custom_ezsignfoldersignerassociationstatus_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_create(
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsignfoldersignerassociationstatus_lastname,
    char *s_ezsignfoldersignerassociationstatus_firstname,
    char *s_ezsignfoldersignerassociationstatus_description_x,
    list_t *a_obj_ezsignsignaturestatus
    ) {
    return custom_ezsignfoldersignerassociationstatus_response_create_internal (
        fki_ezsignfoldersignerassociation_id,
        s_ezsignfoldersignerassociationstatus_lastname,
        s_ezsignfoldersignerassociationstatus_firstname,
        s_ezsignfoldersignerassociationstatus_description_x,
        a_obj_ezsignsignaturestatus
        );
}

void custom_ezsignfoldersignerassociationstatus_response_free(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response) {
    if(NULL == custom_ezsignfoldersignerassociationstatus_response){
        return ;
    }
    if(custom_ezsignfoldersignerassociationstatus_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfoldersignerassociationstatus_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) {
        free(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname);
        custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname = NULL;
    }
    if (custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) {
        free(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname);
        custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname = NULL;
    }
    if (custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x) {
        free(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x);
        custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x = NULL;
    }
    if (custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
        list_ForEach(listEntry, custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
            custom_ezsignsignaturestatus_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus);
        custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus = NULL;
    }
    free(custom_ezsignfoldersignerassociationstatus_response);
}

cJSON *custom_ezsignfoldersignerassociationstatus_response_convertToJSON(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname
    if(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldersignerassociationstatusLastname", custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname
    if(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldersignerassociationstatusFirstname", custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x
    if(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldersignerassociationstatusDescriptionX", custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus
    if (!custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignaturestatus = cJSON_AddArrayToObject(item, "a_objEzsignsignaturestatus");
    if(a_obj_ezsignsignaturestatus == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturestatusListEntry;
    if (custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
    list_ForEach(a_obj_ezsignsignaturestatusListEntry, custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
    cJSON *itemLocal = custom_ezsignsignaturestatus_response_convertToJSON(a_obj_ezsignsignaturestatusListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturestatus, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationstatus_responseJSON){

    custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_local_var = NULL;

    // define the local list for custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus
    list_t *a_obj_ezsignsignaturestatusList = NULL;

    // custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id)) {
        fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname
    cJSON *s_ezsignfoldersignerassociationstatus_lastname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "sEzsignfoldersignerassociationstatusLastname");
    if (cJSON_IsNull(s_ezsignfoldersignerassociationstatus_lastname)) {
        s_ezsignfoldersignerassociationstatus_lastname = NULL;
    }
    if (s_ezsignfoldersignerassociationstatus_lastname) { 
    if(!cJSON_IsString(s_ezsignfoldersignerassociationstatus_lastname) && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_lastname))
    {
    goto end; //String
    }
    }

    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname
    cJSON *s_ezsignfoldersignerassociationstatus_firstname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "sEzsignfoldersignerassociationstatusFirstname");
    if (cJSON_IsNull(s_ezsignfoldersignerassociationstatus_firstname)) {
        s_ezsignfoldersignerassociationstatus_firstname = NULL;
    }
    if (s_ezsignfoldersignerassociationstatus_firstname) { 
    if(!cJSON_IsString(s_ezsignfoldersignerassociationstatus_firstname) && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_firstname))
    {
    goto end; //String
    }
    }

    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_description_x
    cJSON *s_ezsignfoldersignerassociationstatus_description_x = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "sEzsignfoldersignerassociationstatusDescriptionX");
    if (cJSON_IsNull(s_ezsignfoldersignerassociationstatus_description_x)) {
        s_ezsignfoldersignerassociationstatus_description_x = NULL;
    }
    if (s_ezsignfoldersignerassociationstatus_description_x) { 
    if(!cJSON_IsString(s_ezsignfoldersignerassociationstatus_description_x) && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_description_x))
    {
    goto end; //String
    }
    }

    // custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus
    cJSON *a_obj_ezsignsignaturestatus = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "a_objEzsignsignaturestatus");
    if (cJSON_IsNull(a_obj_ezsignsignaturestatus)) {
        a_obj_ezsignsignaturestatus = NULL;
    }
    if (!a_obj_ezsignsignaturestatus) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignaturestatus_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturestatus)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturestatusList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturestatus_local_nonprimitive,a_obj_ezsignsignaturestatus )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturestatus_local_nonprimitive)){
            goto end;
        }
        custom_ezsignsignaturestatus_response_t *a_obj_ezsignsignaturestatusItem = custom_ezsignsignaturestatus_response_parseFromJSON(a_obj_ezsignsignaturestatus_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturestatusList, a_obj_ezsignsignaturestatusItem);
    }


    custom_ezsignfoldersignerassociationstatus_response_local_var = custom_ezsignfoldersignerassociationstatus_response_create_internal (
        fki_ezsignfoldersignerassociation_id->valuedouble,
        s_ezsignfoldersignerassociationstatus_lastname && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_lastname) ? strdup(s_ezsignfoldersignerassociationstatus_lastname->valuestring) : NULL,
        s_ezsignfoldersignerassociationstatus_firstname && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_firstname) ? strdup(s_ezsignfoldersignerassociationstatus_firstname->valuestring) : NULL,
        s_ezsignfoldersignerassociationstatus_description_x && !cJSON_IsNull(s_ezsignfoldersignerassociationstatus_description_x) ? strdup(s_ezsignfoldersignerassociationstatus_description_x->valuestring) : NULL,
        a_obj_ezsignsignaturestatusList
        );

    return custom_ezsignfoldersignerassociationstatus_response_local_var;
end:
    if (a_obj_ezsignsignaturestatusList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturestatusList) {
            custom_ezsignsignaturestatus_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturestatusList);
        a_obj_ezsignsignaturestatusList = NULL;
    }
    return NULL;

}
