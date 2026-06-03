#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_description.h"



static multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_create_internal(
    char *s_ezmaxpartner_description1,
    char *s_ezmaxpartner_description2
    ) {
    multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_local_var = malloc(sizeof(multilingual_ezmaxpartner_description_t));
    if (!multilingual_ezmaxpartner_description_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_description_local_var, 0, sizeof(multilingual_ezmaxpartner_description_t));
    multilingual_ezmaxpartner_description_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_description_local_var->s_ezmaxpartner_description1 = s_ezmaxpartner_description1;
    multilingual_ezmaxpartner_description_local_var->s_ezmaxpartner_description2 = s_ezmaxpartner_description2;
    return multilingual_ezmaxpartner_description_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_create(
    char *s_ezmaxpartner_description1,
    char *s_ezmaxpartner_description2
    ) {
    multilingual_ezmaxpartner_description_t *result = multilingual_ezmaxpartner_description_create_internal (
        s_ezmaxpartner_description1,
        s_ezmaxpartner_description2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_description_free(multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description) {
    if(NULL == multilingual_ezmaxpartner_description){
        return ;
    }
    if(multilingual_ezmaxpartner_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_description->s_ezmaxpartner_description1) {
        free(multilingual_ezmaxpartner_description->s_ezmaxpartner_description1);
        multilingual_ezmaxpartner_description->s_ezmaxpartner_description1 = NULL;
    }
    if (multilingual_ezmaxpartner_description->s_ezmaxpartner_description2) {
        free(multilingual_ezmaxpartner_description->s_ezmaxpartner_description2);
        multilingual_ezmaxpartner_description->s_ezmaxpartner_description2 = NULL;
    }
    free(multilingual_ezmaxpartner_description);
}

cJSON *multilingual_ezmaxpartner_description_convertToJSON(multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_description->s_ezmaxpartner_description1
    if(multilingual_ezmaxpartner_description->s_ezmaxpartner_description1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerDescription1", multilingual_ezmaxpartner_description->s_ezmaxpartner_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_description->s_ezmaxpartner_description2
    if(multilingual_ezmaxpartner_description->s_ezmaxpartner_description2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerDescription2", multilingual_ezmaxpartner_description->s_ezmaxpartner_description2) == NULL) {
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

multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_parseFromJSON(cJSON *multilingual_ezmaxpartner_descriptionJSON){

    multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_local_var = NULL;

    char *s_ezmaxpartner_description1_local_str = NULL;

    char *s_ezmaxpartner_description2_local_str = NULL;

    // multilingual_ezmaxpartner_description->s_ezmaxpartner_description1
    cJSON *s_ezmaxpartner_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_descriptionJSON, "sEzmaxpartnerDescription1");
    if (cJSON_IsNull(s_ezmaxpartner_description1)) {
        s_ezmaxpartner_description1 = NULL;
    }
    if (s_ezmaxpartner_description1) { 
    if(!cJSON_IsString(s_ezmaxpartner_description1) && !cJSON_IsNull(s_ezmaxpartner_description1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_description->s_ezmaxpartner_description2
    cJSON *s_ezmaxpartner_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_descriptionJSON, "sEzmaxpartnerDescription2");
    if (cJSON_IsNull(s_ezmaxpartner_description2)) {
        s_ezmaxpartner_description2 = NULL;
    }
    if (s_ezmaxpartner_description2) { 
    if(!cJSON_IsString(s_ezmaxpartner_description2) && !cJSON_IsNull(s_ezmaxpartner_description2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_description1 && !cJSON_IsNull(s_ezmaxpartner_description1)) s_ezmaxpartner_description1_local_str = strdup(s_ezmaxpartner_description1->valuestring);
    if (s_ezmaxpartner_description2 && !cJSON_IsNull(s_ezmaxpartner_description2)) s_ezmaxpartner_description2_local_str = strdup(s_ezmaxpartner_description2->valuestring);

    multilingual_ezmaxpartner_description_local_var = multilingual_ezmaxpartner_description_create_internal (
        s_ezmaxpartner_description1_local_str,
        s_ezmaxpartner_description2_local_str
        );

    if (!multilingual_ezmaxpartner_description_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_description_local_var;
end:
    if (s_ezmaxpartner_description1_local_str) {
        free(s_ezmaxpartner_description1_local_str);
        s_ezmaxpartner_description1_local_str = NULL;
    }
    if (s_ezmaxpartner_description2_local_str) {
        free(s_ezmaxpartner_description2_local_str);
        s_ezmaxpartner_description2_local_str = NULL;
    }
    return NULL;

}
