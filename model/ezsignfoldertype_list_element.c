#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_list_element.h"



static ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create_internal(
    int *pki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignfoldertype_isactive
    ) {
    ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_local_var = malloc(sizeof(ezsignfoldertype_list_element_t));
    if (!ezsignfoldertype_list_element_local_var) {
        return NULL;
    }
    memset(ezsignfoldertype_list_element_local_var, 0, sizeof(ezsignfoldertype_list_element_t));
    ezsignfoldertype_list_element_local_var->_library_owned = 1;
    ezsignfoldertype_list_element_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_list_element_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfoldertype_list_element_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    return ezsignfoldertype_list_element_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create(
    int *pki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignfoldertype_isactive
    ) {
    int *pki_ezsignfoldertype_id_copy = NULL;
    if (pki_ezsignfoldertype_id) {
        pki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldertype_id_copy) *pki_ezsignfoldertype_id_copy = *pki_ezsignfoldertype_id;
    }
    int *b_ezsignfoldertype_isactive_copy = NULL;
    if (b_ezsignfoldertype_isactive) {
        b_ezsignfoldertype_isactive_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_isactive_copy) *b_ezsignfoldertype_isactive_copy = *b_ezsignfoldertype_isactive;
    }
    ezsignfoldertype_list_element_t *result = ezsignfoldertype_list_element_create_internal (
        pki_ezsignfoldertype_id_copy,
        e_ezsignfoldertype_privacylevel,
        s_ezsignfoldertype_name_x,
        b_ezsignfoldertype_isactive_copy
        );
    if (!result) {
        free(pki_ezsignfoldertype_id_copy);
        free(b_ezsignfoldertype_isactive_copy);
    }
    return result;
}

void ezsignfoldertype_list_element_free(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element) {
    if(NULL == ezsignfoldertype_list_element){
        return ;
    }
    if(ezsignfoldertype_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_list_element->pki_ezsignfoldertype_id) {
        free(ezsignfoldertype_list_element->pki_ezsignfoldertype_id);
        ezsignfoldertype_list_element->pki_ezsignfoldertype_id = NULL;
    }
    if (ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfoldertype_list_element->s_ezsignfoldertype_name_x);
        ezsignfoldertype_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfoldertype_list_element->b_ezsignfoldertype_isactive) {
        free(ezsignfoldertype_list_element->b_ezsignfoldertype_isactive);
        ezsignfoldertype_list_element->b_ezsignfoldertype_isactive = NULL;
    }
    free(ezsignfoldertype_list_element);
}

cJSON *ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_list_element->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_list_element->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", *ezsignfoldertype_list_element->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_list_element->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfoldertype_list_element->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_list_element->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_list_element->s_ezsignfoldertype_name_x
    if (!ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfoldertype_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfoldertype_list_element->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_list_element->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", *ezsignfoldertype_list_element->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_parseFromJSON(cJSON *ezsignfoldertype_list_elementJSON){

    ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_local_var = NULL;

    // define the local variable for ezsignfoldertype_list_element->pki_ezsignfoldertype_id
    int *pki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_list_element->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsignfoldertype_list_element->b_ezsignfoldertype_isactive
    int *b_ezsignfoldertype_isactive_local_var = NULL;

    // ezsignfoldertype_list_element->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfoldertype_id_local_var = pki_ezsignfoldertype_id->valuedouble;

    // ezsignfoldertype_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfoldertype_list_element->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_list_elementJSON, "bEzsignfoldertypeIsactive");
    if (cJSON_IsNull(b_ezsignfoldertype_isactive)) {
        b_ezsignfoldertype_isactive = NULL;
    }
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_isactive_local_var = b_ezsignfoldertype_isactive->valueint;


    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    ezsignfoldertype_list_element_local_var = ezsignfoldertype_list_element_create_internal (
        pki_ezsignfoldertype_id_local_var,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        s_ezsignfoldertype_name_x_local_str,
        b_ezsignfoldertype_isactive_local_var
        );

    if (!ezsignfoldertype_list_element_local_var) {
        goto end;
    }

    return ezsignfoldertype_list_element_local_var;
end:
    if (pki_ezsignfoldertype_id_local_var) {
        free(pki_ezsignfoldertype_id_local_var);
        pki_ezsignfoldertype_id_local_var = NULL;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (b_ezsignfoldertype_isactive_local_var) {
        free(b_ezsignfoldertype_isactive_local_var);
        b_ezsignfoldertype_isactive_local_var = NULL;
    }
    return NULL;

}
