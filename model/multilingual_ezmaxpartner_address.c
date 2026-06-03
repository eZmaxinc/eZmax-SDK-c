#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_address.h"



static multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_create_internal(
    char *s_ezmaxpartner_address1,
    char *s_ezmaxpartner_address2
    ) {
    multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_local_var = malloc(sizeof(multilingual_ezmaxpartner_address_t));
    if (!multilingual_ezmaxpartner_address_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_address_local_var, 0, sizeof(multilingual_ezmaxpartner_address_t));
    multilingual_ezmaxpartner_address_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_address_local_var->s_ezmaxpartner_address1 = s_ezmaxpartner_address1;
    multilingual_ezmaxpartner_address_local_var->s_ezmaxpartner_address2 = s_ezmaxpartner_address2;
    return multilingual_ezmaxpartner_address_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_create(
    char *s_ezmaxpartner_address1,
    char *s_ezmaxpartner_address2
    ) {
    multilingual_ezmaxpartner_address_t *result = multilingual_ezmaxpartner_address_create_internal (
        s_ezmaxpartner_address1,
        s_ezmaxpartner_address2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_address_free(multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address) {
    if(NULL == multilingual_ezmaxpartner_address){
        return ;
    }
    if(multilingual_ezmaxpartner_address->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_address_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_address->s_ezmaxpartner_address1) {
        free(multilingual_ezmaxpartner_address->s_ezmaxpartner_address1);
        multilingual_ezmaxpartner_address->s_ezmaxpartner_address1 = NULL;
    }
    if (multilingual_ezmaxpartner_address->s_ezmaxpartner_address2) {
        free(multilingual_ezmaxpartner_address->s_ezmaxpartner_address2);
        multilingual_ezmaxpartner_address->s_ezmaxpartner_address2 = NULL;
    }
    free(multilingual_ezmaxpartner_address);
}

cJSON *multilingual_ezmaxpartner_address_convertToJSON(multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_address->s_ezmaxpartner_address1
    if(multilingual_ezmaxpartner_address->s_ezmaxpartner_address1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerAddress1", multilingual_ezmaxpartner_address->s_ezmaxpartner_address1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_address->s_ezmaxpartner_address2
    if(multilingual_ezmaxpartner_address->s_ezmaxpartner_address2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerAddress2", multilingual_ezmaxpartner_address->s_ezmaxpartner_address2) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_parseFromJSON(cJSON *multilingual_ezmaxpartner_addressJSON){

    multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_local_var = NULL;

    char *s_ezmaxpartner_address1_local_str = NULL;

    char *s_ezmaxpartner_address2_local_str = NULL;

    // multilingual_ezmaxpartner_address->s_ezmaxpartner_address1
    cJSON *s_ezmaxpartner_address1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_addressJSON, "sEzmaxpartnerAddress1");
    if (cJSON_IsNull(s_ezmaxpartner_address1)) {
        s_ezmaxpartner_address1 = NULL;
    }
    if (s_ezmaxpartner_address1) { 
    if(!cJSON_IsString(s_ezmaxpartner_address1) && !cJSON_IsNull(s_ezmaxpartner_address1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_address->s_ezmaxpartner_address2
    cJSON *s_ezmaxpartner_address2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_addressJSON, "sEzmaxpartnerAddress2");
    if (cJSON_IsNull(s_ezmaxpartner_address2)) {
        s_ezmaxpartner_address2 = NULL;
    }
    if (s_ezmaxpartner_address2) { 
    if(!cJSON_IsString(s_ezmaxpartner_address2) && !cJSON_IsNull(s_ezmaxpartner_address2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_address1 && !cJSON_IsNull(s_ezmaxpartner_address1)) s_ezmaxpartner_address1_local_str = strdup(s_ezmaxpartner_address1->valuestring);
    if (s_ezmaxpartner_address2 && !cJSON_IsNull(s_ezmaxpartner_address2)) s_ezmaxpartner_address2_local_str = strdup(s_ezmaxpartner_address2->valuestring);

    multilingual_ezmaxpartner_address_local_var = multilingual_ezmaxpartner_address_create_internal (
        s_ezmaxpartner_address1_local_str,
        s_ezmaxpartner_address2_local_str
        );

    if (!multilingual_ezmaxpartner_address_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_address_local_var;
end:
    if (s_ezmaxpartner_address1_local_str) {
        free(s_ezmaxpartner_address1_local_str);
        s_ezmaxpartner_address1_local_str = NULL;
    }
    if (s_ezmaxpartner_address2_local_str) {
        free(s_ezmaxpartner_address2_local_str);
        s_ezmaxpartner_address2_local_str = NULL;
    }
    return NULL;

}
