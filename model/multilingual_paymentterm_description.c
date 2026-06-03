#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_paymentterm_description.h"



static multilingual_paymentterm_description_t *multilingual_paymentterm_description_create_internal(
    char *s_paymentterm_description1,
    char *s_paymentterm_description2
    ) {
    multilingual_paymentterm_description_t *multilingual_paymentterm_description_local_var = malloc(sizeof(multilingual_paymentterm_description_t));
    if (!multilingual_paymentterm_description_local_var) {
        return NULL;
    }
    memset(multilingual_paymentterm_description_local_var, 0, sizeof(multilingual_paymentterm_description_t));
    multilingual_paymentterm_description_local_var->_library_owned = 1;
    multilingual_paymentterm_description_local_var->s_paymentterm_description1 = s_paymentterm_description1;
    multilingual_paymentterm_description_local_var->s_paymentterm_description2 = s_paymentterm_description2;
    return multilingual_paymentterm_description_local_var;
}

__attribute__((deprecated)) multilingual_paymentterm_description_t *multilingual_paymentterm_description_create(
    char *s_paymentterm_description1,
    char *s_paymentterm_description2
    ) {
    multilingual_paymentterm_description_t *result = multilingual_paymentterm_description_create_internal (
        s_paymentterm_description1,
        s_paymentterm_description2
        );
    if (!result) {
    }
    return result;
}

void multilingual_paymentterm_description_free(multilingual_paymentterm_description_t *multilingual_paymentterm_description) {
    if(NULL == multilingual_paymentterm_description){
        return ;
    }
    if(multilingual_paymentterm_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_paymentterm_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_paymentterm_description->s_paymentterm_description1) {
        free(multilingual_paymentterm_description->s_paymentterm_description1);
        multilingual_paymentterm_description->s_paymentterm_description1 = NULL;
    }
    if (multilingual_paymentterm_description->s_paymentterm_description2) {
        free(multilingual_paymentterm_description->s_paymentterm_description2);
        multilingual_paymentterm_description->s_paymentterm_description2 = NULL;
    }
    free(multilingual_paymentterm_description);
}

cJSON *multilingual_paymentterm_description_convertToJSON(multilingual_paymentterm_description_t *multilingual_paymentterm_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_paymentterm_description->s_paymentterm_description1
    if(multilingual_paymentterm_description->s_paymentterm_description1) {
    if(cJSON_AddStringToObject(item, "sPaymenttermDescription1", multilingual_paymentterm_description->s_paymentterm_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_paymentterm_description->s_paymentterm_description2
    if(multilingual_paymentterm_description->s_paymentterm_description2) {
    if(cJSON_AddStringToObject(item, "sPaymenttermDescription2", multilingual_paymentterm_description->s_paymentterm_description2) == NULL) {
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

multilingual_paymentterm_description_t *multilingual_paymentterm_description_parseFromJSON(cJSON *multilingual_paymentterm_descriptionJSON){

    multilingual_paymentterm_description_t *multilingual_paymentterm_description_local_var = NULL;

    char *s_paymentterm_description1_local_str = NULL;

    char *s_paymentterm_description2_local_str = NULL;

    // multilingual_paymentterm_description->s_paymentterm_description1
    cJSON *s_paymentterm_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentterm_descriptionJSON, "sPaymenttermDescription1");
    if (cJSON_IsNull(s_paymentterm_description1)) {
        s_paymentterm_description1 = NULL;
    }
    if (s_paymentterm_description1) { 
    if(!cJSON_IsString(s_paymentterm_description1) && !cJSON_IsNull(s_paymentterm_description1))
    {
    goto end; //String
    }
    }

    // multilingual_paymentterm_description->s_paymentterm_description2
    cJSON *s_paymentterm_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentterm_descriptionJSON, "sPaymenttermDescription2");
    if (cJSON_IsNull(s_paymentterm_description2)) {
        s_paymentterm_description2 = NULL;
    }
    if (s_paymentterm_description2) { 
    if(!cJSON_IsString(s_paymentterm_description2) && !cJSON_IsNull(s_paymentterm_description2))
    {
    goto end; //String
    }
    }


    if (s_paymentterm_description1 && !cJSON_IsNull(s_paymentterm_description1)) s_paymentterm_description1_local_str = strdup(s_paymentterm_description1->valuestring);
    if (s_paymentterm_description2 && !cJSON_IsNull(s_paymentterm_description2)) s_paymentterm_description2_local_str = strdup(s_paymentterm_description2->valuestring);

    multilingual_paymentterm_description_local_var = multilingual_paymentterm_description_create_internal (
        s_paymentterm_description1_local_str,
        s_paymentterm_description2_local_str
        );

    if (!multilingual_paymentterm_description_local_var) {
        goto end;
    }

    return multilingual_paymentterm_description_local_var;
end:
    if (s_paymentterm_description1_local_str) {
        free(s_paymentterm_description1_local_str);
        s_paymentterm_description1_local_str = NULL;
    }
    if (s_paymentterm_description2_local_str) {
        free(s_paymentterm_description2_local_str);
        s_paymentterm_description2_local_str = NULL;
    }
    return NULL;

}
