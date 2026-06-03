#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxpartner_list_element.h"



static custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_create_internal(
    int *pki_ezmaxpartner_id,
    char *s_ezmaxpartner_address_x,
    char *s_ezmaxpartner_emailaddress_x,
    char *s_ezmaxpartner_shortdescription_x,
    char *s_ezmaxpartner_name_x,
    char *s_ezmaxpartner_phone_e164_x,
    char *s_ezmaxpartner_url_x
    ) {
    custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_local_var = malloc(sizeof(custom_ezmaxpartner_list_element_t));
    if (!custom_ezmaxpartner_list_element_local_var) {
        return NULL;
    }
    memset(custom_ezmaxpartner_list_element_local_var, 0, sizeof(custom_ezmaxpartner_list_element_t));
    custom_ezmaxpartner_list_element_local_var->_library_owned = 1;
    custom_ezmaxpartner_list_element_local_var->pki_ezmaxpartner_id = pki_ezmaxpartner_id;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_address_x = s_ezmaxpartner_address_x;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_emailaddress_x = s_ezmaxpartner_emailaddress_x;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_shortdescription_x = s_ezmaxpartner_shortdescription_x;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_name_x = s_ezmaxpartner_name_x;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_phone_e164_x = s_ezmaxpartner_phone_e164_x;
    custom_ezmaxpartner_list_element_local_var->s_ezmaxpartner_url_x = s_ezmaxpartner_url_x;
    return custom_ezmaxpartner_list_element_local_var;
}

__attribute__((deprecated)) custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_create(
    int *pki_ezmaxpartner_id,
    char *s_ezmaxpartner_address_x,
    char *s_ezmaxpartner_emailaddress_x,
    char *s_ezmaxpartner_shortdescription_x,
    char *s_ezmaxpartner_name_x,
    char *s_ezmaxpartner_phone_e164_x,
    char *s_ezmaxpartner_url_x
    ) {
    int *pki_ezmaxpartner_id_copy = NULL;
    if (pki_ezmaxpartner_id) {
        pki_ezmaxpartner_id_copy = malloc(sizeof(int));
        if (pki_ezmaxpartner_id_copy) *pki_ezmaxpartner_id_copy = *pki_ezmaxpartner_id;
    }
    custom_ezmaxpartner_list_element_t *result = custom_ezmaxpartner_list_element_create_internal (
        pki_ezmaxpartner_id_copy,
        s_ezmaxpartner_address_x,
        s_ezmaxpartner_emailaddress_x,
        s_ezmaxpartner_shortdescription_x,
        s_ezmaxpartner_name_x,
        s_ezmaxpartner_phone_e164_x,
        s_ezmaxpartner_url_x
        );
    if (!result) {
        free(pki_ezmaxpartner_id_copy);
    }
    return result;
}

void custom_ezmaxpartner_list_element_free(custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element) {
    if(NULL == custom_ezmaxpartner_list_element){
        return ;
    }
    if(custom_ezmaxpartner_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezmaxpartner_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxpartner_list_element->pki_ezmaxpartner_id) {
        free(custom_ezmaxpartner_list_element->pki_ezmaxpartner_id);
        custom_ezmaxpartner_list_element->pki_ezmaxpartner_id = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x = NULL;
    }
    if (custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x) {
        free(custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x);
        custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x = NULL;
    }
    free(custom_ezmaxpartner_list_element);
}

cJSON *custom_ezmaxpartner_list_element_convertToJSON(custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxpartner_list_element->pki_ezmaxpartner_id
    if (!custom_ezmaxpartner_list_element->pki_ezmaxpartner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxpartnerID", *custom_ezmaxpartner_list_element->pki_ezmaxpartner_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerAddressX", custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerEmailaddressX", custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerShortdescriptionX", custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerNameX", custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerPhoneE164X", custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x
    if (!custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerUrlX", custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_parseFromJSON(cJSON *custom_ezmaxpartner_list_elementJSON){

    custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_local_var = NULL;

    // define the local variable for custom_ezmaxpartner_list_element->pki_ezmaxpartner_id
    int *pki_ezmaxpartner_id_local_var = NULL;

    char *s_ezmaxpartner_address_x_local_str = NULL;

    char *s_ezmaxpartner_emailaddress_x_local_str = NULL;

    char *s_ezmaxpartner_shortdescription_x_local_str = NULL;

    char *s_ezmaxpartner_name_x_local_str = NULL;

    char *s_ezmaxpartner_phone_e164_x_local_str = NULL;

    char *s_ezmaxpartner_url_x_local_str = NULL;

    // custom_ezmaxpartner_list_element->pki_ezmaxpartner_id
    cJSON *pki_ezmaxpartner_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "pkiEzmaxpartnerID");
    if (cJSON_IsNull(pki_ezmaxpartner_id)) {
        pki_ezmaxpartner_id = NULL;
    }
    if (!pki_ezmaxpartner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxpartner_id))
    {
    goto end; //Numeric
    }
    pki_ezmaxpartner_id_local_var = malloc(sizeof(int));
    if(!pki_ezmaxpartner_id_local_var)
    {
        goto end;
    }
    *pki_ezmaxpartner_id_local_var = pki_ezmaxpartner_id->valuedouble;

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_address_x
    cJSON *s_ezmaxpartner_address_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerAddressX");
    if (cJSON_IsNull(s_ezmaxpartner_address_x)) {
        s_ezmaxpartner_address_x = NULL;
    }
    if (!s_ezmaxpartner_address_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_address_x))
    {
    goto end; //String
    }

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_emailaddress_x
    cJSON *s_ezmaxpartner_emailaddress_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerEmailaddressX");
    if (cJSON_IsNull(s_ezmaxpartner_emailaddress_x)) {
        s_ezmaxpartner_emailaddress_x = NULL;
    }
    if (!s_ezmaxpartner_emailaddress_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_emailaddress_x))
    {
    goto end; //String
    }

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_shortdescription_x
    cJSON *s_ezmaxpartner_shortdescription_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerShortdescriptionX");
    if (cJSON_IsNull(s_ezmaxpartner_shortdescription_x)) {
        s_ezmaxpartner_shortdescription_x = NULL;
    }
    if (!s_ezmaxpartner_shortdescription_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_shortdescription_x))
    {
    goto end; //String
    }

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_name_x
    cJSON *s_ezmaxpartner_name_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerNameX");
    if (cJSON_IsNull(s_ezmaxpartner_name_x)) {
        s_ezmaxpartner_name_x = NULL;
    }
    if (!s_ezmaxpartner_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_name_x))
    {
    goto end; //String
    }

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_phone_e164_x
    cJSON *s_ezmaxpartner_phone_e164_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerPhoneE164X");
    if (cJSON_IsNull(s_ezmaxpartner_phone_e164_x)) {
        s_ezmaxpartner_phone_e164_x = NULL;
    }
    if (!s_ezmaxpartner_phone_e164_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_phone_e164_x))
    {
    goto end; //String
    }

    // custom_ezmaxpartner_list_element->s_ezmaxpartner_url_x
    cJSON *s_ezmaxpartner_url_x = cJSON_GetObjectItemCaseSensitive(custom_ezmaxpartner_list_elementJSON, "sEzmaxpartnerUrlX");
    if (cJSON_IsNull(s_ezmaxpartner_url_x)) {
        s_ezmaxpartner_url_x = NULL;
    }
    if (!s_ezmaxpartner_url_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxpartner_url_x))
    {
    goto end; //String
    }


    if (s_ezmaxpartner_address_x && !cJSON_IsNull(s_ezmaxpartner_address_x)) s_ezmaxpartner_address_x_local_str = strdup(s_ezmaxpartner_address_x->valuestring);
    if (s_ezmaxpartner_emailaddress_x && !cJSON_IsNull(s_ezmaxpartner_emailaddress_x)) s_ezmaxpartner_emailaddress_x_local_str = strdup(s_ezmaxpartner_emailaddress_x->valuestring);
    if (s_ezmaxpartner_shortdescription_x && !cJSON_IsNull(s_ezmaxpartner_shortdescription_x)) s_ezmaxpartner_shortdescription_x_local_str = strdup(s_ezmaxpartner_shortdescription_x->valuestring);
    if (s_ezmaxpartner_name_x && !cJSON_IsNull(s_ezmaxpartner_name_x)) s_ezmaxpartner_name_x_local_str = strdup(s_ezmaxpartner_name_x->valuestring);
    if (s_ezmaxpartner_phone_e164_x && !cJSON_IsNull(s_ezmaxpartner_phone_e164_x)) s_ezmaxpartner_phone_e164_x_local_str = strdup(s_ezmaxpartner_phone_e164_x->valuestring);
    if (s_ezmaxpartner_url_x && !cJSON_IsNull(s_ezmaxpartner_url_x)) s_ezmaxpartner_url_x_local_str = strdup(s_ezmaxpartner_url_x->valuestring);

    custom_ezmaxpartner_list_element_local_var = custom_ezmaxpartner_list_element_create_internal (
        pki_ezmaxpartner_id_local_var,
        s_ezmaxpartner_address_x_local_str,
        s_ezmaxpartner_emailaddress_x_local_str,
        s_ezmaxpartner_shortdescription_x_local_str,
        s_ezmaxpartner_name_x_local_str,
        s_ezmaxpartner_phone_e164_x_local_str,
        s_ezmaxpartner_url_x_local_str
        );

    if (!custom_ezmaxpartner_list_element_local_var) {
        goto end;
    }

    return custom_ezmaxpartner_list_element_local_var;
end:
    if (pki_ezmaxpartner_id_local_var) {
        free(pki_ezmaxpartner_id_local_var);
        pki_ezmaxpartner_id_local_var = NULL;
    }
    if (s_ezmaxpartner_address_x_local_str) {
        free(s_ezmaxpartner_address_x_local_str);
        s_ezmaxpartner_address_x_local_str = NULL;
    }
    if (s_ezmaxpartner_emailaddress_x_local_str) {
        free(s_ezmaxpartner_emailaddress_x_local_str);
        s_ezmaxpartner_emailaddress_x_local_str = NULL;
    }
    if (s_ezmaxpartner_shortdescription_x_local_str) {
        free(s_ezmaxpartner_shortdescription_x_local_str);
        s_ezmaxpartner_shortdescription_x_local_str = NULL;
    }
    if (s_ezmaxpartner_name_x_local_str) {
        free(s_ezmaxpartner_name_x_local_str);
        s_ezmaxpartner_name_x_local_str = NULL;
    }
    if (s_ezmaxpartner_phone_e164_x_local_str) {
        free(s_ezmaxpartner_phone_e164_x_local_str);
        s_ezmaxpartner_phone_e164_x_local_str = NULL;
    }
    if (s_ezmaxpartner_url_x_local_str) {
        free(s_ezmaxpartner_url_x_local_str);
        s_ezmaxpartner_url_x_local_str = NULL;
    }
    return NULL;

}
