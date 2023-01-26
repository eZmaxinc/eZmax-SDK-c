#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_paymentterm_description.h"



multilingual_paymentterm_description_t *multilingual_paymentterm_description_create(
    char *s_paymentterm_description1,
    char *s_paymentterm_description2
    ) {
    multilingual_paymentterm_description_t *multilingual_paymentterm_description_local_var = malloc(sizeof(multilingual_paymentterm_description_t));
    if (!multilingual_paymentterm_description_local_var) {
        return NULL;
    }
    multilingual_paymentterm_description_local_var->s_paymentterm_description1 = s_paymentterm_description1;
    multilingual_paymentterm_description_local_var->s_paymentterm_description2 = s_paymentterm_description2;

    return multilingual_paymentterm_description_local_var;
}


void multilingual_paymentterm_description_free(multilingual_paymentterm_description_t *multilingual_paymentterm_description) {
    if(NULL == multilingual_paymentterm_description){
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

    // multilingual_paymentterm_description->s_paymentterm_description1
    cJSON *s_paymentterm_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentterm_descriptionJSON, "sPaymenttermDescription1");
    if (s_paymentterm_description1) { 
    if(!cJSON_IsString(s_paymentterm_description1))
    {
    goto end; //String
    }
    }

    // multilingual_paymentterm_description->s_paymentterm_description2
    cJSON *s_paymentterm_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentterm_descriptionJSON, "sPaymenttermDescription2");
    if (s_paymentterm_description2) { 
    if(!cJSON_IsString(s_paymentterm_description2))
    {
    goto end; //String
    }
    }


    multilingual_paymentterm_description_local_var = multilingual_paymentterm_description_create (
        s_paymentterm_description1 ? strdup(s_paymentterm_description1->valuestring) : NULL,
        s_paymentterm_description2 ? strdup(s_paymentterm_description2->valuestring) : NULL
        );

    return multilingual_paymentterm_description_local_var;
end:
    return NULL;

}
