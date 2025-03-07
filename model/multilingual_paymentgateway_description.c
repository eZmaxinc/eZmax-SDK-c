#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_paymentgateway_description.h"



static multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_create_internal(
    char *s_paymentgateway_description1,
    char *s_paymentgateway_description2
    ) {
    multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_local_var = malloc(sizeof(multilingual_paymentgateway_description_t));
    if (!multilingual_paymentgateway_description_local_var) {
        return NULL;
    }
    multilingual_paymentgateway_description_local_var->s_paymentgateway_description1 = s_paymentgateway_description1;
    multilingual_paymentgateway_description_local_var->s_paymentgateway_description2 = s_paymentgateway_description2;

    multilingual_paymentgateway_description_local_var->_library_owned = 1;
    return multilingual_paymentgateway_description_local_var;
}

__attribute__((deprecated)) multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_create(
    char *s_paymentgateway_description1,
    char *s_paymentgateway_description2
    ) {
    return multilingual_paymentgateway_description_create_internal (
        s_paymentgateway_description1,
        s_paymentgateway_description2
        );
}

void multilingual_paymentgateway_description_free(multilingual_paymentgateway_description_t *multilingual_paymentgateway_description) {
    if(NULL == multilingual_paymentgateway_description){
        return ;
    }
    if(multilingual_paymentgateway_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_paymentgateway_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_paymentgateway_description->s_paymentgateway_description1) {
        free(multilingual_paymentgateway_description->s_paymentgateway_description1);
        multilingual_paymentgateway_description->s_paymentgateway_description1 = NULL;
    }
    if (multilingual_paymentgateway_description->s_paymentgateway_description2) {
        free(multilingual_paymentgateway_description->s_paymentgateway_description2);
        multilingual_paymentgateway_description->s_paymentgateway_description2 = NULL;
    }
    free(multilingual_paymentgateway_description);
}

cJSON *multilingual_paymentgateway_description_convertToJSON(multilingual_paymentgateway_description_t *multilingual_paymentgateway_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_paymentgateway_description->s_paymentgateway_description1
    if(multilingual_paymentgateway_description->s_paymentgateway_description1) {
    if(cJSON_AddStringToObject(item, "sPaymentgatewayDescription1", multilingual_paymentgateway_description->s_paymentgateway_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_paymentgateway_description->s_paymentgateway_description2
    if(multilingual_paymentgateway_description->s_paymentgateway_description2) {
    if(cJSON_AddStringToObject(item, "sPaymentgatewayDescription2", multilingual_paymentgateway_description->s_paymentgateway_description2) == NULL) {
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

multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_parseFromJSON(cJSON *multilingual_paymentgateway_descriptionJSON){

    multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_local_var = NULL;

    // multilingual_paymentgateway_description->s_paymentgateway_description1
    cJSON *s_paymentgateway_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentgateway_descriptionJSON, "sPaymentgatewayDescription1");
    if (cJSON_IsNull(s_paymentgateway_description1)) {
        s_paymentgateway_description1 = NULL;
    }
    if (s_paymentgateway_description1) { 
    if(!cJSON_IsString(s_paymentgateway_description1) && !cJSON_IsNull(s_paymentgateway_description1))
    {
    goto end; //String
    }
    }

    // multilingual_paymentgateway_description->s_paymentgateway_description2
    cJSON *s_paymentgateway_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_paymentgateway_descriptionJSON, "sPaymentgatewayDescription2");
    if (cJSON_IsNull(s_paymentgateway_description2)) {
        s_paymentgateway_description2 = NULL;
    }
    if (s_paymentgateway_description2) { 
    if(!cJSON_IsString(s_paymentgateway_description2) && !cJSON_IsNull(s_paymentgateway_description2))
    {
    goto end; //String
    }
    }


    multilingual_paymentgateway_description_local_var = multilingual_paymentgateway_description_create_internal (
        s_paymentgateway_description1 && !cJSON_IsNull(s_paymentgateway_description1) ? strdup(s_paymentgateway_description1->valuestring) : NULL,
        s_paymentgateway_description2 && !cJSON_IsNull(s_paymentgateway_description2) ? strdup(s_paymentgateway_description2->valuestring) : NULL
        );

    return multilingual_paymentgateway_description_local_var;
end:
    return NULL;

}
