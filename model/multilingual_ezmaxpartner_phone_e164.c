#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_phone_e164.h"



static multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_create_internal(
    char *s_ezmaxpartner_phone_e1641,
    char *s_ezmaxpartner_phone_e1642
    ) {
    multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_local_var = malloc(sizeof(multilingual_ezmaxpartner_phone_e164_t));
    if (!multilingual_ezmaxpartner_phone_e164_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_phone_e164_local_var, 0, sizeof(multilingual_ezmaxpartner_phone_e164_t));
    multilingual_ezmaxpartner_phone_e164_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_phone_e164_local_var->s_ezmaxpartner_phone_e1641 = s_ezmaxpartner_phone_e1641;
    multilingual_ezmaxpartner_phone_e164_local_var->s_ezmaxpartner_phone_e1642 = s_ezmaxpartner_phone_e1642;
    return multilingual_ezmaxpartner_phone_e164_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_create(
    char *s_ezmaxpartner_phone_e1641,
    char *s_ezmaxpartner_phone_e1642
    ) {
    multilingual_ezmaxpartner_phone_e164_t *result = multilingual_ezmaxpartner_phone_e164_create_internal (
        s_ezmaxpartner_phone_e1641,
        s_ezmaxpartner_phone_e1642
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_phone_e164_free(multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164) {
    if(NULL == multilingual_ezmaxpartner_phone_e164){
        return ;
    }
    if(multilingual_ezmaxpartner_phone_e164->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_phone_e164_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641) {
        free(multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641);
        multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641 = NULL;
    }
    if (multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642) {
        free(multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642);
        multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642 = NULL;
    }
    free(multilingual_ezmaxpartner_phone_e164);
}

cJSON *multilingual_ezmaxpartner_phone_e164_convertToJSON(multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641
    if(multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerPhoneE1641", multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642
    if(multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerPhoneE1642", multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642) == NULL) {
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

multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_parseFromJSON(cJSON *multilingual_ezmaxpartner_phone_e164JSON){

    multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_local_var = NULL;

    char *s_ezmaxpartner_phone_e1641_local_str = NULL;

    char *s_ezmaxpartner_phone_e1642_local_str = NULL;

    // multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1641
    cJSON *s_ezmaxpartner_phone_e1641 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_phone_e164JSON, "sEzmaxpartnerPhoneE1641");
    if (cJSON_IsNull(s_ezmaxpartner_phone_e1641)) {
        s_ezmaxpartner_phone_e1641 = NULL;
    }
    if (s_ezmaxpartner_phone_e1641) { 
    if(!cJSON_IsString(s_ezmaxpartner_phone_e1641) && !cJSON_IsNull(s_ezmaxpartner_phone_e1641))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_phone_e164->s_ezmaxpartner_phone_e1642
    cJSON *s_ezmaxpartner_phone_e1642 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_phone_e164JSON, "sEzmaxpartnerPhoneE1642");
    if (cJSON_IsNull(s_ezmaxpartner_phone_e1642)) {
        s_ezmaxpartner_phone_e1642 = NULL;
    }
    if (s_ezmaxpartner_phone_e1642) { 
    if(!cJSON_IsString(s_ezmaxpartner_phone_e1642) && !cJSON_IsNull(s_ezmaxpartner_phone_e1642))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_phone_e1641 && !cJSON_IsNull(s_ezmaxpartner_phone_e1641)) s_ezmaxpartner_phone_e1641_local_str = strdup(s_ezmaxpartner_phone_e1641->valuestring);
    if (s_ezmaxpartner_phone_e1642 && !cJSON_IsNull(s_ezmaxpartner_phone_e1642)) s_ezmaxpartner_phone_e1642_local_str = strdup(s_ezmaxpartner_phone_e1642->valuestring);

    multilingual_ezmaxpartner_phone_e164_local_var = multilingual_ezmaxpartner_phone_e164_create_internal (
        s_ezmaxpartner_phone_e1641_local_str,
        s_ezmaxpartner_phone_e1642_local_str
        );

    if (!multilingual_ezmaxpartner_phone_e164_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_phone_e164_local_var;
end:
    if (s_ezmaxpartner_phone_e1641_local_str) {
        free(s_ezmaxpartner_phone_e1641_local_str);
        s_ezmaxpartner_phone_e1641_local_str = NULL;
    }
    if (s_ezmaxpartner_phone_e1642_local_str) {
        free(s_ezmaxpartner_phone_e1642_local_str);
        s_ezmaxpartner_phone_e1642_local_str = NULL;
    }
    return NULL;

}
