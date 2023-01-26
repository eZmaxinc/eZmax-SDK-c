#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "descriptionstatic_response.h"



descriptionstatic_response_t *descriptionstatic_response_create(
    int pki_descriptionstatic_id,
    char *s_descriptionstatic_description
    ) {
    descriptionstatic_response_t *descriptionstatic_response_local_var = malloc(sizeof(descriptionstatic_response_t));
    if (!descriptionstatic_response_local_var) {
        return NULL;
    }
    descriptionstatic_response_local_var->pki_descriptionstatic_id = pki_descriptionstatic_id;
    descriptionstatic_response_local_var->s_descriptionstatic_description = s_descriptionstatic_description;

    return descriptionstatic_response_local_var;
}


void descriptionstatic_response_free(descriptionstatic_response_t *descriptionstatic_response) {
    if(NULL == descriptionstatic_response){
        return ;
    }
    listEntry_t *listEntry;
    if (descriptionstatic_response->s_descriptionstatic_description) {
        free(descriptionstatic_response->s_descriptionstatic_description);
        descriptionstatic_response->s_descriptionstatic_description = NULL;
    }
    free(descriptionstatic_response);
}

cJSON *descriptionstatic_response_convertToJSON(descriptionstatic_response_t *descriptionstatic_response) {
    cJSON *item = cJSON_CreateObject();

    // descriptionstatic_response->pki_descriptionstatic_id
    if (!descriptionstatic_response->pki_descriptionstatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDescriptionstaticID", descriptionstatic_response->pki_descriptionstatic_id) == NULL) {
    goto fail; //Numeric
    }


    // descriptionstatic_response->s_descriptionstatic_description
    if (!descriptionstatic_response->s_descriptionstatic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDescriptionstaticDescription", descriptionstatic_response->s_descriptionstatic_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

descriptionstatic_response_t *descriptionstatic_response_parseFromJSON(cJSON *descriptionstatic_responseJSON){

    descriptionstatic_response_t *descriptionstatic_response_local_var = NULL;

    // descriptionstatic_response->pki_descriptionstatic_id
    cJSON *pki_descriptionstatic_id = cJSON_GetObjectItemCaseSensitive(descriptionstatic_responseJSON, "pkiDescriptionstaticID");
    if (!pki_descriptionstatic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_descriptionstatic_id))
    {
    goto end; //Numeric
    }

    // descriptionstatic_response->s_descriptionstatic_description
    cJSON *s_descriptionstatic_description = cJSON_GetObjectItemCaseSensitive(descriptionstatic_responseJSON, "sDescriptionstaticDescription");
    if (!s_descriptionstatic_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_descriptionstatic_description))
    {
    goto end; //String
    }


    descriptionstatic_response_local_var = descriptionstatic_response_create (
        pki_descriptionstatic_id->valuedouble,
        strdup(s_descriptionstatic_description->valuestring)
        );

    return descriptionstatic_response_local_var;
end:
    return NULL;

}
