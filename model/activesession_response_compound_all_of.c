#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_all_of.h"



activesession_response_compound_all_of_t *activesession_response_compound_all_of_create(
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
    ) {
    activesession_response_compound_all_of_t *activesession_response_compound_all_of_local_var = malloc(sizeof(activesession_response_compound_all_of_t));
    if (!activesession_response_compound_all_of_local_var) {
        return NULL;
    }
    activesession_response_compound_all_of_local_var->a_pki_permission_id = a_pki_permission_id;
    activesession_response_compound_all_of_local_var->obj_user_real = obj_user_real;
    activesession_response_compound_all_of_local_var->obj_user_cloned = obj_user_cloned;
    activesession_response_compound_all_of_local_var->obj_apikey = obj_apikey;
    activesession_response_compound_all_of_local_var->a_e_module_internalname = a_e_module_internalname;

    return activesession_response_compound_all_of_local_var;
}


void activesession_response_compound_all_of_free(activesession_response_compound_all_of_t *activesession_response_compound_all_of) {
    if(NULL == activesession_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response_compound_all_of->a_pki_permission_id) {
        list_ForEach(listEntry, activesession_response_compound_all_of->a_pki_permission_id) {
            free(listEntry->data);
        }
        list_freeList(activesession_response_compound_all_of->a_pki_permission_id);
        activesession_response_compound_all_of->a_pki_permission_id = NULL;
    }
    if (activesession_response_compound_all_of->obj_user_real) {
        activesession_response_compound_user_free(activesession_response_compound_all_of->obj_user_real);
        activesession_response_compound_all_of->obj_user_real = NULL;
    }
    if (activesession_response_compound_all_of->obj_user_cloned) {
        activesession_response_compound_user_free(activesession_response_compound_all_of->obj_user_cloned);
        activesession_response_compound_all_of->obj_user_cloned = NULL;
    }
    if (activesession_response_compound_all_of->obj_apikey) {
        activesession_response_compound_apikey_free(activesession_response_compound_all_of->obj_apikey);
        activesession_response_compound_all_of->obj_apikey = NULL;
    }
    if (activesession_response_compound_all_of->a_e_module_internalname) {
        list_ForEach(listEntry, activesession_response_compound_all_of->a_e_module_internalname) {
            free(listEntry->data);
        }
        list_freeList(activesession_response_compound_all_of->a_e_module_internalname);
        activesession_response_compound_all_of->a_e_module_internalname = NULL;
    }
    free(activesession_response_compound_all_of);
}

cJSON *activesession_response_compound_all_of_convertToJSON(activesession_response_compound_all_of_t *activesession_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response_compound_all_of->a_pki_permission_id
    if (!activesession_response_compound_all_of->a_pki_permission_id) {
        goto fail;
    }
    
    cJSON *a_pki_permission_id = cJSON_AddArrayToObject(item, "a_pkiPermissionID");
    if(a_pki_permission_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_permission_idListEntry;
    list_ForEach(a_pki_permission_idListEntry, activesession_response_compound_all_of->a_pki_permission_id) {
    if(cJSON_AddNumberToObject(a_pki_permission_id, "", *(double *)a_pki_permission_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // activesession_response_compound_all_of->obj_user_real
    if (!activesession_response_compound_all_of->obj_user_real) {
        goto fail;
    }
    
    cJSON *obj_user_real_local_JSON = activesession_response_compound_user_convertToJSON(activesession_response_compound_all_of->obj_user_real);
    if(obj_user_real_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserReal", obj_user_real_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // activesession_response_compound_all_of->obj_user_cloned
    if(activesession_response_compound_all_of->obj_user_cloned) { 
    cJSON *obj_user_cloned_local_JSON = activesession_response_compound_user_convertToJSON(activesession_response_compound_all_of->obj_user_cloned);
    if(obj_user_cloned_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserCloned", obj_user_cloned_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // activesession_response_compound_all_of->obj_apikey
    if(activesession_response_compound_all_of->obj_apikey) { 
    cJSON *obj_apikey_local_JSON = activesession_response_compound_apikey_convertToJSON(activesession_response_compound_all_of->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // activesession_response_compound_all_of->a_e_module_internalname
    if (!activesession_response_compound_all_of->a_e_module_internalname) {
        goto fail;
    }
    
    cJSON *a_e_module_internalname = cJSON_AddArrayToObject(item, "a_eModuleInternalname");
    if(a_e_module_internalname == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_e_module_internalnameListEntry;
    list_ForEach(a_e_module_internalnameListEntry, activesession_response_compound_all_of->a_e_module_internalname) {
    if(cJSON_AddStringToObject(a_e_module_internalname, "", (char*)a_e_module_internalnameListEntry->data) == NULL)
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

activesession_response_compound_all_of_t *activesession_response_compound_all_of_parseFromJSON(cJSON *activesession_response_compound_all_ofJSON){

    activesession_response_compound_all_of_t *activesession_response_compound_all_of_local_var = NULL;

    // define the local variable for activesession_response_compound_all_of->obj_user_real
    activesession_response_compound_user_t *obj_user_real_local_nonprim = NULL;

    // define the local variable for activesession_response_compound_all_of->obj_user_cloned
    activesession_response_compound_user_t *obj_user_cloned_local_nonprim = NULL;

    // define the local variable for activesession_response_compound_all_of->obj_apikey
    activesession_response_compound_apikey_t *obj_apikey_local_nonprim = NULL;

    // activesession_response_compound_all_of->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_all_ofJSON, "a_pkiPermissionID");
    if (!a_pki_permission_id) {
        goto end;
    }

    list_t *a_pki_permission_idList;
    
    cJSON *a_pki_permission_id_local;
    if(!cJSON_IsArray(a_pki_permission_id)) {
        goto end;//primitive container
    }
    a_pki_permission_idList = list_createList();

    cJSON_ArrayForEach(a_pki_permission_id_local, a_pki_permission_id)
    {
        if(!cJSON_IsNumber(a_pki_permission_id_local))
        {
            goto end;
        }
        double *a_pki_permission_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_permission_id_local_value)
        {
            goto end;
        }
        *a_pki_permission_id_local_value = a_pki_permission_id_local->valuedouble;
        list_addElement(a_pki_permission_idList , a_pki_permission_id_local_value);
    }

    // activesession_response_compound_all_of->obj_user_real
    cJSON *obj_user_real = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_all_ofJSON, "objUserReal");
    if (!obj_user_real) {
        goto end;
    }

    
    obj_user_real_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_real); //nonprimitive

    // activesession_response_compound_all_of->obj_user_cloned
    cJSON *obj_user_cloned = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_all_ofJSON, "objUserCloned");
    if (obj_user_cloned) { 
    obj_user_cloned_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_cloned); //nonprimitive
    }

    // activesession_response_compound_all_of->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_all_ofJSON, "objApikey");
    if (obj_apikey) { 
    obj_apikey_local_nonprim = activesession_response_compound_apikey_parseFromJSON(obj_apikey); //nonprimitive
    }

    // activesession_response_compound_all_of->a_e_module_internalname
    cJSON *a_e_module_internalname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_all_ofJSON, "a_eModuleInternalname");
    if (!a_e_module_internalname) {
        goto end;
    }

    list_t *a_e_module_internalnameList;
    
    cJSON *a_e_module_internalname_local;
    if(!cJSON_IsArray(a_e_module_internalname)) {
        goto end;//primitive container
    }
    a_e_module_internalnameList = list_createList();

    cJSON_ArrayForEach(a_e_module_internalname_local, a_e_module_internalname)
    {
        if(!cJSON_IsString(a_e_module_internalname_local))
        {
            goto end;
        }
        list_addElement(a_e_module_internalnameList , strdup(a_e_module_internalname_local->valuestring));
    }


    activesession_response_compound_all_of_local_var = activesession_response_compound_all_of_create (
        a_pki_permission_idList,
        obj_user_real_local_nonprim,
        obj_user_cloned ? obj_user_cloned_local_nonprim : NULL,
        obj_apikey ? obj_apikey_local_nonprim : NULL,
        a_e_module_internalnameList
        );

    return activesession_response_compound_all_of_local_var;
end:
    if (obj_user_real_local_nonprim) {
        activesession_response_compound_user_free(obj_user_real_local_nonprim);
        obj_user_real_local_nonprim = NULL;
    }
    if (obj_user_cloned_local_nonprim) {
        activesession_response_compound_user_free(obj_user_cloned_local_nonprim);
        obj_user_cloned_local_nonprim = NULL;
    }
    if (obj_apikey_local_nonprim) {
        activesession_response_compound_apikey_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    return NULL;

}
