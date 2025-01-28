#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacttitle_autocomplete_element_response.h"



static contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_create_internal(
    int pki_contacttitle_id,
    char *s_contacttitle_name_x
    ) {
    contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_local_var = malloc(sizeof(contacttitle_autocomplete_element_response_t));
    if (!contacttitle_autocomplete_element_response_local_var) {
        return NULL;
    }
    contacttitle_autocomplete_element_response_local_var->pki_contacttitle_id = pki_contacttitle_id;
    contacttitle_autocomplete_element_response_local_var->s_contacttitle_name_x = s_contacttitle_name_x;

    contacttitle_autocomplete_element_response_local_var->_library_owned = 1;
    return contacttitle_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_create(
    int pki_contacttitle_id,
    char *s_contacttitle_name_x
    ) {
    return contacttitle_autocomplete_element_response_create_internal (
        pki_contacttitle_id,
        s_contacttitle_name_x
        );
}

void contacttitle_autocomplete_element_response_free(contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response) {
    if(NULL == contacttitle_autocomplete_element_response){
        return ;
    }
    if(contacttitle_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contacttitle_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contacttitle_autocomplete_element_response->s_contacttitle_name_x) {
        free(contacttitle_autocomplete_element_response->s_contacttitle_name_x);
        contacttitle_autocomplete_element_response->s_contacttitle_name_x = NULL;
    }
    free(contacttitle_autocomplete_element_response);
}

cJSON *contacttitle_autocomplete_element_response_convertToJSON(contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // contacttitle_autocomplete_element_response->pki_contacttitle_id
    if (!contacttitle_autocomplete_element_response->pki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiContacttitleID", contacttitle_autocomplete_element_response->pki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contacttitle_autocomplete_element_response->s_contacttitle_name_x
    if (!contacttitle_autocomplete_element_response->s_contacttitle_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContacttitleNameX", contacttitle_autocomplete_element_response->s_contacttitle_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_parseFromJSON(cJSON *contacttitle_autocomplete_element_responseJSON){

    contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_local_var = NULL;

    // contacttitle_autocomplete_element_response->pki_contacttitle_id
    cJSON *pki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contacttitle_autocomplete_element_responseJSON, "pkiContacttitleID");
    if (cJSON_IsNull(pki_contacttitle_id)) {
        pki_contacttitle_id = NULL;
    }
    if (!pki_contacttitle_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contacttitle_id))
    {
    goto end; //Numeric
    }

    // contacttitle_autocomplete_element_response->s_contacttitle_name_x
    cJSON *s_contacttitle_name_x = cJSON_GetObjectItemCaseSensitive(contacttitle_autocomplete_element_responseJSON, "sContacttitleNameX");
    if (cJSON_IsNull(s_contacttitle_name_x)) {
        s_contacttitle_name_x = NULL;
    }
    if (!s_contacttitle_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contacttitle_name_x))
    {
    goto end; //String
    }


    contacttitle_autocomplete_element_response_local_var = contacttitle_autocomplete_element_response_create_internal (
        pki_contacttitle_id->valuedouble,
        strdup(s_contacttitle_name_x->valuestring)
        );

    return contacttitle_autocomplete_element_response_local_var;
end:
    return NULL;

}
