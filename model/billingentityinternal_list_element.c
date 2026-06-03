#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_list_element.h"



static billingentityinternal_list_element_t *billingentityinternal_list_element_create_internal(
    int *pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x
    ) {
    billingentityinternal_list_element_t *billingentityinternal_list_element_local_var = malloc(sizeof(billingentityinternal_list_element_t));
    if (!billingentityinternal_list_element_local_var) {
        return NULL;
    }
    memset(billingentityinternal_list_element_local_var, 0, sizeof(billingentityinternal_list_element_t));
    billingentityinternal_list_element_local_var->_library_owned = 1;
    billingentityinternal_list_element_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_list_element_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    return billingentityinternal_list_element_local_var;
}

__attribute__((deprecated)) billingentityinternal_list_element_t *billingentityinternal_list_element_create(
    int *pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x
    ) {
    int *pki_billingentityinternal_id_copy = NULL;
    if (pki_billingentityinternal_id) {
        pki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (pki_billingentityinternal_id_copy) *pki_billingentityinternal_id_copy = *pki_billingentityinternal_id;
    }
    billingentityinternal_list_element_t *result = billingentityinternal_list_element_create_internal (
        pki_billingentityinternal_id_copy,
        s_billingentityinternal_description_x
        );
    if (!result) {
        free(pki_billingentityinternal_id_copy);
    }
    return result;
}

void billingentityinternal_list_element_free(billingentityinternal_list_element_t *billingentityinternal_list_element) {
    if(NULL == billingentityinternal_list_element){
        return ;
    }
    if(billingentityinternal_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_list_element->pki_billingentityinternal_id) {
        free(billingentityinternal_list_element->pki_billingentityinternal_id);
        billingentityinternal_list_element->pki_billingentityinternal_id = NULL;
    }
    if (billingentityinternal_list_element->s_billingentityinternal_description_x) {
        free(billingentityinternal_list_element->s_billingentityinternal_description_x);
        billingentityinternal_list_element->s_billingentityinternal_description_x = NULL;
    }
    free(billingentityinternal_list_element);
}

cJSON *billingentityinternal_list_element_convertToJSON(billingentityinternal_list_element_t *billingentityinternal_list_element) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_list_element->pki_billingentityinternal_id
    if (!billingentityinternal_list_element->pki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", *billingentityinternal_list_element->pki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_list_element->s_billingentityinternal_description_x
    if (!billingentityinternal_list_element->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", billingentityinternal_list_element->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternal_list_element_t *billingentityinternal_list_element_parseFromJSON(cJSON *billingentityinternal_list_elementJSON){

    billingentityinternal_list_element_t *billingentityinternal_list_element_local_var = NULL;

    // define the local variable for billingentityinternal_list_element->pki_billingentityinternal_id
    int *pki_billingentityinternal_id_local_var = NULL;

    char *s_billingentityinternal_description_x_local_str = NULL;

    // billingentityinternal_list_element->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_list_elementJSON, "pkiBillingentityinternalID");
    if (cJSON_IsNull(pki_billingentityinternal_id)) {
        pki_billingentityinternal_id = NULL;
    }
    if (!pki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    pki_billingentityinternal_id_local_var = malloc(sizeof(int));
    if(!pki_billingentityinternal_id_local_var)
    {
        goto end;
    }
    *pki_billingentityinternal_id_local_var = pki_billingentityinternal_id->valuedouble;

    // billingentityinternal_list_element->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternal_list_elementJSON, "sBillingentityinternalDescriptionX");
    if (cJSON_IsNull(s_billingentityinternal_description_x)) {
        s_billingentityinternal_description_x = NULL;
    }
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }


    if (s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x)) s_billingentityinternal_description_x_local_str = strdup(s_billingentityinternal_description_x->valuestring);

    billingentityinternal_list_element_local_var = billingentityinternal_list_element_create_internal (
        pki_billingentityinternal_id_local_var,
        s_billingentityinternal_description_x_local_str
        );

    if (!billingentityinternal_list_element_local_var) {
        goto end;
    }

    return billingentityinternal_list_element_local_var;
end:
    if (pki_billingentityinternal_id_local_var) {
        free(pki_billingentityinternal_id_local_var);
        pki_billingentityinternal_id_local_var = NULL;
    }
    if (s_billingentityinternal_description_x_local_str) {
        free(s_billingentityinternal_description_x_local_str);
        s_billingentityinternal_description_x_local_str = NULL;
    }
    return NULL;

}
