#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_variableexpense_description.h"



multilingual_variableexpense_description_t *multilingual_variableexpense_description_create(
    char *s_variableexpense_description1,
    char *s_variableexpense_description2
    ) {
    multilingual_variableexpense_description_t *multilingual_variableexpense_description_local_var = malloc(sizeof(multilingual_variableexpense_description_t));
    if (!multilingual_variableexpense_description_local_var) {
        return NULL;
    }
    multilingual_variableexpense_description_local_var->s_variableexpense_description1 = s_variableexpense_description1;
    multilingual_variableexpense_description_local_var->s_variableexpense_description2 = s_variableexpense_description2;

    return multilingual_variableexpense_description_local_var;
}


void multilingual_variableexpense_description_free(multilingual_variableexpense_description_t *multilingual_variableexpense_description) {
    if(NULL == multilingual_variableexpense_description){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_variableexpense_description->s_variableexpense_description1) {
        free(multilingual_variableexpense_description->s_variableexpense_description1);
        multilingual_variableexpense_description->s_variableexpense_description1 = NULL;
    }
    if (multilingual_variableexpense_description->s_variableexpense_description2) {
        free(multilingual_variableexpense_description->s_variableexpense_description2);
        multilingual_variableexpense_description->s_variableexpense_description2 = NULL;
    }
    free(multilingual_variableexpense_description);
}

cJSON *multilingual_variableexpense_description_convertToJSON(multilingual_variableexpense_description_t *multilingual_variableexpense_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_variableexpense_description->s_variableexpense_description1
    if(multilingual_variableexpense_description->s_variableexpense_description1) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescription1", multilingual_variableexpense_description->s_variableexpense_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_variableexpense_description->s_variableexpense_description2
    if(multilingual_variableexpense_description->s_variableexpense_description2) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescription2", multilingual_variableexpense_description->s_variableexpense_description2) == NULL) {
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

multilingual_variableexpense_description_t *multilingual_variableexpense_description_parseFromJSON(cJSON *multilingual_variableexpense_descriptionJSON){

    multilingual_variableexpense_description_t *multilingual_variableexpense_description_local_var = NULL;

    // multilingual_variableexpense_description->s_variableexpense_description1
    cJSON *s_variableexpense_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_variableexpense_descriptionJSON, "sVariableexpenseDescription1");
    if (s_variableexpense_description1) { 
    if(!cJSON_IsString(s_variableexpense_description1) && !cJSON_IsNull(s_variableexpense_description1))
    {
    goto end; //String
    }
    }

    // multilingual_variableexpense_description->s_variableexpense_description2
    cJSON *s_variableexpense_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_variableexpense_descriptionJSON, "sVariableexpenseDescription2");
    if (s_variableexpense_description2) { 
    if(!cJSON_IsString(s_variableexpense_description2) && !cJSON_IsNull(s_variableexpense_description2))
    {
    goto end; //String
    }
    }


    multilingual_variableexpense_description_local_var = multilingual_variableexpense_description_create (
        s_variableexpense_description1 && !cJSON_IsNull(s_variableexpense_description1) ? strdup(s_variableexpense_description1->valuestring) : NULL,
        s_variableexpense_description2 && !cJSON_IsNull(s_variableexpense_description2) ? strdup(s_variableexpense_description2->valuestring) : NULL
        );

    return multilingual_variableexpense_description_local_var;
end:
    return NULL;

}
