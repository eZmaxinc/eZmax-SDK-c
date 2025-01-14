#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_supply_description.h"



multilingual_supply_description_t *multilingual_supply_description_create(
    char *s_supply_description1,
    char *s_supply_description2
    ) {
    multilingual_supply_description_t *multilingual_supply_description_local_var = malloc(sizeof(multilingual_supply_description_t));
    if (!multilingual_supply_description_local_var) {
        return NULL;
    }
    multilingual_supply_description_local_var->s_supply_description1 = s_supply_description1;
    multilingual_supply_description_local_var->s_supply_description2 = s_supply_description2;

    return multilingual_supply_description_local_var;
}


void multilingual_supply_description_free(multilingual_supply_description_t *multilingual_supply_description) {
    if(NULL == multilingual_supply_description){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_supply_description->s_supply_description1) {
        free(multilingual_supply_description->s_supply_description1);
        multilingual_supply_description->s_supply_description1 = NULL;
    }
    if (multilingual_supply_description->s_supply_description2) {
        free(multilingual_supply_description->s_supply_description2);
        multilingual_supply_description->s_supply_description2 = NULL;
    }
    free(multilingual_supply_description);
}

cJSON *multilingual_supply_description_convertToJSON(multilingual_supply_description_t *multilingual_supply_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_supply_description->s_supply_description1
    if(multilingual_supply_description->s_supply_description1) {
    if(cJSON_AddStringToObject(item, "sSupplyDescription1", multilingual_supply_description->s_supply_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_supply_description->s_supply_description2
    if(multilingual_supply_description->s_supply_description2) {
    if(cJSON_AddStringToObject(item, "sSupplyDescription2", multilingual_supply_description->s_supply_description2) == NULL) {
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

multilingual_supply_description_t *multilingual_supply_description_parseFromJSON(cJSON *multilingual_supply_descriptionJSON){

    multilingual_supply_description_t *multilingual_supply_description_local_var = NULL;

    // multilingual_supply_description->s_supply_description1
    cJSON *s_supply_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_supply_descriptionJSON, "sSupplyDescription1");
    if (s_supply_description1) { 
    if(!cJSON_IsString(s_supply_description1) && !cJSON_IsNull(s_supply_description1))
    {
    goto end; //String
    }
    }

    // multilingual_supply_description->s_supply_description2
    cJSON *s_supply_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_supply_descriptionJSON, "sSupplyDescription2");
    if (s_supply_description2) { 
    if(!cJSON_IsString(s_supply_description2) && !cJSON_IsNull(s_supply_description2))
    {
    goto end; //String
    }
    }


    multilingual_supply_description_local_var = multilingual_supply_description_create (
        s_supply_description1 && !cJSON_IsNull(s_supply_description1) ? strdup(s_supply_description1->valuestring) : NULL,
        s_supply_description2 && !cJSON_IsNull(s_supply_description2) ? strdup(s_supply_description2->valuestring) : NULL
        );

    return multilingual_supply_description_local_var;
end:
    return NULL;

}
