#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_emailaddress.h"



static multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_create_internal(
    char *s_ezmaxpartner_emailaddress1,
    char *s_ezmaxpartner_emailaddress2
    ) {
    multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_local_var = malloc(sizeof(multilingual_ezmaxpartner_emailaddress_t));
    if (!multilingual_ezmaxpartner_emailaddress_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_emailaddress_local_var, 0, sizeof(multilingual_ezmaxpartner_emailaddress_t));
    multilingual_ezmaxpartner_emailaddress_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_emailaddress_local_var->s_ezmaxpartner_emailaddress1 = s_ezmaxpartner_emailaddress1;
    multilingual_ezmaxpartner_emailaddress_local_var->s_ezmaxpartner_emailaddress2 = s_ezmaxpartner_emailaddress2;
    return multilingual_ezmaxpartner_emailaddress_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_create(
    char *s_ezmaxpartner_emailaddress1,
    char *s_ezmaxpartner_emailaddress2
    ) {
    multilingual_ezmaxpartner_emailaddress_t *result = multilingual_ezmaxpartner_emailaddress_create_internal (
        s_ezmaxpartner_emailaddress1,
        s_ezmaxpartner_emailaddress2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_emailaddress_free(multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress) {
    if(NULL == multilingual_ezmaxpartner_emailaddress){
        return ;
    }
    if(multilingual_ezmaxpartner_emailaddress->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_emailaddress_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1) {
        free(multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1);
        multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1 = NULL;
    }
    if (multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2) {
        free(multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2);
        multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2 = NULL;
    }
    free(multilingual_ezmaxpartner_emailaddress);
}

cJSON *multilingual_ezmaxpartner_emailaddress_convertToJSON(multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1
    if(multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerEmailaddress1", multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2
    if(multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerEmailaddress2", multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2) == NULL) {
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

multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_parseFromJSON(cJSON *multilingual_ezmaxpartner_emailaddressJSON){

    multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_local_var = NULL;

    char *s_ezmaxpartner_emailaddress1_local_str = NULL;

    char *s_ezmaxpartner_emailaddress2_local_str = NULL;

    // multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress1
    cJSON *s_ezmaxpartner_emailaddress1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_emailaddressJSON, "sEzmaxpartnerEmailaddress1");
    if (cJSON_IsNull(s_ezmaxpartner_emailaddress1)) {
        s_ezmaxpartner_emailaddress1 = NULL;
    }
    if (s_ezmaxpartner_emailaddress1) { 
    if(!cJSON_IsString(s_ezmaxpartner_emailaddress1) && !cJSON_IsNull(s_ezmaxpartner_emailaddress1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_emailaddress->s_ezmaxpartner_emailaddress2
    cJSON *s_ezmaxpartner_emailaddress2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_emailaddressJSON, "sEzmaxpartnerEmailaddress2");
    if (cJSON_IsNull(s_ezmaxpartner_emailaddress2)) {
        s_ezmaxpartner_emailaddress2 = NULL;
    }
    if (s_ezmaxpartner_emailaddress2) { 
    if(!cJSON_IsString(s_ezmaxpartner_emailaddress2) && !cJSON_IsNull(s_ezmaxpartner_emailaddress2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_emailaddress1 && !cJSON_IsNull(s_ezmaxpartner_emailaddress1)) s_ezmaxpartner_emailaddress1_local_str = strdup(s_ezmaxpartner_emailaddress1->valuestring);
    if (s_ezmaxpartner_emailaddress2 && !cJSON_IsNull(s_ezmaxpartner_emailaddress2)) s_ezmaxpartner_emailaddress2_local_str = strdup(s_ezmaxpartner_emailaddress2->valuestring);

    multilingual_ezmaxpartner_emailaddress_local_var = multilingual_ezmaxpartner_emailaddress_create_internal (
        s_ezmaxpartner_emailaddress1_local_str,
        s_ezmaxpartner_emailaddress2_local_str
        );

    if (!multilingual_ezmaxpartner_emailaddress_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_emailaddress_local_var;
end:
    if (s_ezmaxpartner_emailaddress1_local_str) {
        free(s_ezmaxpartner_emailaddress1_local_str);
        s_ezmaxpartner_emailaddress1_local_str = NULL;
    }
    if (s_ezmaxpartner_emailaddress2_local_str) {
        free(s_ezmaxpartner_emailaddress2_local_str);
        s_ezmaxpartner_emailaddress2_local_str = NULL;
    }
    return NULL;

}
