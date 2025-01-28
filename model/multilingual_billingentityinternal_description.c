#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_billingentityinternal_description.h"



static multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_create_internal(
    char *s_billingentityinternal_description1,
    char *s_billingentityinternal_description2
    ) {
    multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_local_var = malloc(sizeof(multilingual_billingentityinternal_description_t));
    if (!multilingual_billingentityinternal_description_local_var) {
        return NULL;
    }
    multilingual_billingentityinternal_description_local_var->s_billingentityinternal_description1 = s_billingentityinternal_description1;
    multilingual_billingentityinternal_description_local_var->s_billingentityinternal_description2 = s_billingentityinternal_description2;

    multilingual_billingentityinternal_description_local_var->_library_owned = 1;
    return multilingual_billingentityinternal_description_local_var;
}

__attribute__((deprecated)) multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_create(
    char *s_billingentityinternal_description1,
    char *s_billingentityinternal_description2
    ) {
    return multilingual_billingentityinternal_description_create_internal (
        s_billingentityinternal_description1,
        s_billingentityinternal_description2
        );
}

void multilingual_billingentityinternal_description_free(multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description) {
    if(NULL == multilingual_billingentityinternal_description){
        return ;
    }
    if(multilingual_billingentityinternal_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_billingentityinternal_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_billingentityinternal_description->s_billingentityinternal_description1) {
        free(multilingual_billingentityinternal_description->s_billingentityinternal_description1);
        multilingual_billingentityinternal_description->s_billingentityinternal_description1 = NULL;
    }
    if (multilingual_billingentityinternal_description->s_billingentityinternal_description2) {
        free(multilingual_billingentityinternal_description->s_billingentityinternal_description2);
        multilingual_billingentityinternal_description->s_billingentityinternal_description2 = NULL;
    }
    free(multilingual_billingentityinternal_description);
}

cJSON *multilingual_billingentityinternal_description_convertToJSON(multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_billingentityinternal_description->s_billingentityinternal_description1
    if(multilingual_billingentityinternal_description->s_billingentityinternal_description1) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescription1", multilingual_billingentityinternal_description->s_billingentityinternal_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_billingentityinternal_description->s_billingentityinternal_description2
    if(multilingual_billingentityinternal_description->s_billingentityinternal_description2) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescription2", multilingual_billingentityinternal_description->s_billingentityinternal_description2) == NULL) {
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

multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_parseFromJSON(cJSON *multilingual_billingentityinternal_descriptionJSON){

    multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_local_var = NULL;

    // multilingual_billingentityinternal_description->s_billingentityinternal_description1
    cJSON *s_billingentityinternal_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_billingentityinternal_descriptionJSON, "sBillingentityinternalDescription1");
    if (cJSON_IsNull(s_billingentityinternal_description1)) {
        s_billingentityinternal_description1 = NULL;
    }
    if (s_billingentityinternal_description1) { 
    if(!cJSON_IsString(s_billingentityinternal_description1) && !cJSON_IsNull(s_billingentityinternal_description1))
    {
    goto end; //String
    }
    }

    // multilingual_billingentityinternal_description->s_billingentityinternal_description2
    cJSON *s_billingentityinternal_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_billingentityinternal_descriptionJSON, "sBillingentityinternalDescription2");
    if (cJSON_IsNull(s_billingentityinternal_description2)) {
        s_billingentityinternal_description2 = NULL;
    }
    if (s_billingentityinternal_description2) { 
    if(!cJSON_IsString(s_billingentityinternal_description2) && !cJSON_IsNull(s_billingentityinternal_description2))
    {
    goto end; //String
    }
    }


    multilingual_billingentityinternal_description_local_var = multilingual_billingentityinternal_description_create_internal (
        s_billingentityinternal_description1 && !cJSON_IsNull(s_billingentityinternal_description1) ? strdup(s_billingentityinternal_description1->valuestring) : NULL,
        s_billingentityinternal_description2 && !cJSON_IsNull(s_billingentityinternal_description2) ? strdup(s_billingentityinternal_description2->valuestring) : NULL
        );

    return multilingual_billingentityinternal_description_local_var;
end:
    return NULL;

}
