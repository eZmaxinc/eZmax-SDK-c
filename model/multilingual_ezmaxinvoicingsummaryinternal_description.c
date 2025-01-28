#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxinvoicingsummaryinternal_description.h"



static multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_create_internal(
    char *s_ezmaxinvoicingsummaryinternal_description1,
    char *s_ezmaxinvoicingsummaryinternal_description2
    ) {
    multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_local_var = malloc(sizeof(multilingual_ezmaxinvoicingsummaryinternal_description_t));
    if (!multilingual_ezmaxinvoicingsummaryinternal_description_local_var) {
        return NULL;
    }
    multilingual_ezmaxinvoicingsummaryinternal_description_local_var->s_ezmaxinvoicingsummaryinternal_description1 = s_ezmaxinvoicingsummaryinternal_description1;
    multilingual_ezmaxinvoicingsummaryinternal_description_local_var->s_ezmaxinvoicingsummaryinternal_description2 = s_ezmaxinvoicingsummaryinternal_description2;

    multilingual_ezmaxinvoicingsummaryinternal_description_local_var->_library_owned = 1;
    return multilingual_ezmaxinvoicingsummaryinternal_description_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_create(
    char *s_ezmaxinvoicingsummaryinternal_description1,
    char *s_ezmaxinvoicingsummaryinternal_description2
    ) {
    return multilingual_ezmaxinvoicingsummaryinternal_description_create_internal (
        s_ezmaxinvoicingsummaryinternal_description1,
        s_ezmaxinvoicingsummaryinternal_description2
        );
}

void multilingual_ezmaxinvoicingsummaryinternal_description_free(multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description) {
    if(NULL == multilingual_ezmaxinvoicingsummaryinternal_description){
        return ;
    }
    if(multilingual_ezmaxinvoicingsummaryinternal_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxinvoicingsummaryinternal_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1) {
        free(multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1);
        multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1 = NULL;
    }
    if (multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2) {
        free(multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2);
        multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2 = NULL;
    }
    free(multilingual_ezmaxinvoicingsummaryinternal_description);
}

cJSON *multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1
    if(multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1) {
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryinternalDescription1", multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2
    if(multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2) {
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryinternalDescription2", multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2) == NULL) {
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

multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_parseFromJSON(cJSON *multilingual_ezmaxinvoicingsummaryinternal_descriptionJSON){

    multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_local_var = NULL;

    // multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description1
    cJSON *s_ezmaxinvoicingsummaryinternal_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxinvoicingsummaryinternal_descriptionJSON, "sEzmaxinvoicingsummaryinternalDescription1");
    if (cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description1)) {
        s_ezmaxinvoicingsummaryinternal_description1 = NULL;
    }
    if (s_ezmaxinvoicingsummaryinternal_description1) { 
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryinternal_description1) && !cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxinvoicingsummaryinternal_description->s_ezmaxinvoicingsummaryinternal_description2
    cJSON *s_ezmaxinvoicingsummaryinternal_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxinvoicingsummaryinternal_descriptionJSON, "sEzmaxinvoicingsummaryinternalDescription2");
    if (cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description2)) {
        s_ezmaxinvoicingsummaryinternal_description2 = NULL;
    }
    if (s_ezmaxinvoicingsummaryinternal_description2) { 
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryinternal_description2) && !cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description2))
    {
    goto end; //String
    }
    }


    multilingual_ezmaxinvoicingsummaryinternal_description_local_var = multilingual_ezmaxinvoicingsummaryinternal_description_create_internal (
        s_ezmaxinvoicingsummaryinternal_description1 && !cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description1) ? strdup(s_ezmaxinvoicingsummaryinternal_description1->valuestring) : NULL,
        s_ezmaxinvoicingsummaryinternal_description2 && !cJSON_IsNull(s_ezmaxinvoicingsummaryinternal_description2) ? strdup(s_ezmaxinvoicingsummaryinternal_description2->valuestring) : NULL
        );

    return multilingual_ezmaxinvoicingsummaryinternal_description_local_var;
end:
    return NULL;

}
