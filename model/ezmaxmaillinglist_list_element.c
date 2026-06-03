#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxmaillinglist_list_element.h"



static ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_create_internal(
    int *pki_ezmaxmaillinglist_id,
    char *s_ezmaxmaillinglist_name_x,
    char *s_ezmaxmaillinglist_description_x,
    int *b_ezmaxmaillinglist_subscribed
    ) {
    ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_local_var = malloc(sizeof(ezmaxmaillinglist_list_element_t));
    if (!ezmaxmaillinglist_list_element_local_var) {
        return NULL;
    }
    memset(ezmaxmaillinglist_list_element_local_var, 0, sizeof(ezmaxmaillinglist_list_element_t));
    ezmaxmaillinglist_list_element_local_var->_library_owned = 1;
    ezmaxmaillinglist_list_element_local_var->pki_ezmaxmaillinglist_id = pki_ezmaxmaillinglist_id;
    ezmaxmaillinglist_list_element_local_var->s_ezmaxmaillinglist_name_x = s_ezmaxmaillinglist_name_x;
    ezmaxmaillinglist_list_element_local_var->s_ezmaxmaillinglist_description_x = s_ezmaxmaillinglist_description_x;
    ezmaxmaillinglist_list_element_local_var->b_ezmaxmaillinglist_subscribed = b_ezmaxmaillinglist_subscribed;
    return ezmaxmaillinglist_list_element_local_var;
}

__attribute__((deprecated)) ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_create(
    int *pki_ezmaxmaillinglist_id,
    char *s_ezmaxmaillinglist_name_x,
    char *s_ezmaxmaillinglist_description_x,
    int *b_ezmaxmaillinglist_subscribed
    ) {
    int *pki_ezmaxmaillinglist_id_copy = NULL;
    if (pki_ezmaxmaillinglist_id) {
        pki_ezmaxmaillinglist_id_copy = malloc(sizeof(int));
        if (pki_ezmaxmaillinglist_id_copy) *pki_ezmaxmaillinglist_id_copy = *pki_ezmaxmaillinglist_id;
    }
    int *b_ezmaxmaillinglist_subscribed_copy = NULL;
    if (b_ezmaxmaillinglist_subscribed) {
        b_ezmaxmaillinglist_subscribed_copy = malloc(sizeof(int));
        if (b_ezmaxmaillinglist_subscribed_copy) *b_ezmaxmaillinglist_subscribed_copy = *b_ezmaxmaillinglist_subscribed;
    }
    ezmaxmaillinglist_list_element_t *result = ezmaxmaillinglist_list_element_create_internal (
        pki_ezmaxmaillinglist_id_copy,
        s_ezmaxmaillinglist_name_x,
        s_ezmaxmaillinglist_description_x,
        b_ezmaxmaillinglist_subscribed_copy
        );
    if (!result) {
        free(pki_ezmaxmaillinglist_id_copy);
        free(b_ezmaxmaillinglist_subscribed_copy);
    }
    return result;
}

void ezmaxmaillinglist_list_element_free(ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element) {
    if(NULL == ezmaxmaillinglist_list_element){
        return ;
    }
    if(ezmaxmaillinglist_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxmaillinglist_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id) {
        free(ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id);
        ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id = NULL;
    }
    if (ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x) {
        free(ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x);
        ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x = NULL;
    }
    if (ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x) {
        free(ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x);
        ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x = NULL;
    }
    if (ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed) {
        free(ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed);
        ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed = NULL;
    }
    free(ezmaxmaillinglist_list_element);
}

cJSON *ezmaxmaillinglist_list_element_convertToJSON(ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id
    if (!ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxmaillinglistID", *ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x
    if (!ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxmaillinglistNameX", ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x) == NULL) {
    goto fail; //String
    }


    // ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x
    if (!ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxmaillinglistDescriptionX", ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed
    if (!ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxmaillinglistSubscribed", *ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_parseFromJSON(cJSON *ezmaxmaillinglist_list_elementJSON){

    ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_local_var = NULL;

    // define the local variable for ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id
    int *pki_ezmaxmaillinglist_id_local_var = NULL;

    char *s_ezmaxmaillinglist_name_x_local_str = NULL;

    char *s_ezmaxmaillinglist_description_x_local_str = NULL;

    // define the local variable for ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed
    int *b_ezmaxmaillinglist_subscribed_local_var = NULL;

    // ezmaxmaillinglist_list_element->pki_ezmaxmaillinglist_id
    cJSON *pki_ezmaxmaillinglist_id = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_list_elementJSON, "pkiEzmaxmaillinglistID");
    if (cJSON_IsNull(pki_ezmaxmaillinglist_id)) {
        pki_ezmaxmaillinglist_id = NULL;
    }
    if (!pki_ezmaxmaillinglist_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxmaillinglist_id))
    {
    goto end; //Numeric
    }
    pki_ezmaxmaillinglist_id_local_var = malloc(sizeof(int));
    if(!pki_ezmaxmaillinglist_id_local_var)
    {
        goto end;
    }
    *pki_ezmaxmaillinglist_id_local_var = pki_ezmaxmaillinglist_id->valuedouble;

    // ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_name_x
    cJSON *s_ezmaxmaillinglist_name_x = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_list_elementJSON, "sEzmaxmaillinglistNameX");
    if (cJSON_IsNull(s_ezmaxmaillinglist_name_x)) {
        s_ezmaxmaillinglist_name_x = NULL;
    }
    if (!s_ezmaxmaillinglist_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxmaillinglist_name_x))
    {
    goto end; //String
    }

    // ezmaxmaillinglist_list_element->s_ezmaxmaillinglist_description_x
    cJSON *s_ezmaxmaillinglist_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_list_elementJSON, "sEzmaxmaillinglistDescriptionX");
    if (cJSON_IsNull(s_ezmaxmaillinglist_description_x)) {
        s_ezmaxmaillinglist_description_x = NULL;
    }
    if (!s_ezmaxmaillinglist_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxmaillinglist_description_x))
    {
    goto end; //String
    }

    // ezmaxmaillinglist_list_element->b_ezmaxmaillinglist_subscribed
    cJSON *b_ezmaxmaillinglist_subscribed = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_list_elementJSON, "bEzmaxmaillinglistSubscribed");
    if (cJSON_IsNull(b_ezmaxmaillinglist_subscribed)) {
        b_ezmaxmaillinglist_subscribed = NULL;
    }
    if (!b_ezmaxmaillinglist_subscribed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxmaillinglist_subscribed))
    {
    goto end; //Bool
    }
    b_ezmaxmaillinglist_subscribed_local_var = malloc(sizeof(int));
    if(!b_ezmaxmaillinglist_subscribed_local_var)
    {
        goto end;
    }
    *b_ezmaxmaillinglist_subscribed_local_var = b_ezmaxmaillinglist_subscribed->valueint;


    if (s_ezmaxmaillinglist_name_x && !cJSON_IsNull(s_ezmaxmaillinglist_name_x)) s_ezmaxmaillinglist_name_x_local_str = strdup(s_ezmaxmaillinglist_name_x->valuestring);
    if (s_ezmaxmaillinglist_description_x && !cJSON_IsNull(s_ezmaxmaillinglist_description_x)) s_ezmaxmaillinglist_description_x_local_str = strdup(s_ezmaxmaillinglist_description_x->valuestring);

    ezmaxmaillinglist_list_element_local_var = ezmaxmaillinglist_list_element_create_internal (
        pki_ezmaxmaillinglist_id_local_var,
        s_ezmaxmaillinglist_name_x_local_str,
        s_ezmaxmaillinglist_description_x_local_str,
        b_ezmaxmaillinglist_subscribed_local_var
        );

    if (!ezmaxmaillinglist_list_element_local_var) {
        goto end;
    }

    return ezmaxmaillinglist_list_element_local_var;
end:
    if (pki_ezmaxmaillinglist_id_local_var) {
        free(pki_ezmaxmaillinglist_id_local_var);
        pki_ezmaxmaillinglist_id_local_var = NULL;
    }
    if (s_ezmaxmaillinglist_name_x_local_str) {
        free(s_ezmaxmaillinglist_name_x_local_str);
        s_ezmaxmaillinglist_name_x_local_str = NULL;
    }
    if (s_ezmaxmaillinglist_description_x_local_str) {
        free(s_ezmaxmaillinglist_description_x_local_str);
        s_ezmaxmaillinglist_description_x_local_str = NULL;
    }
    if (b_ezmaxmaillinglist_subscribed_local_var) {
        free(b_ezmaxmaillinglist_subscribed_local_var);
        b_ezmaxmaillinglist_subscribed_local_var = NULL;
    }
    return NULL;

}
