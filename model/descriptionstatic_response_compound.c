#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "descriptionstatic_response_compound.h"



descriptionstatic_response_compound_t *descriptionstatic_response_compound_create(
    int pki_descriptionstatic_id,
    char *s_descriptionstatic_description
    ) {
    descriptionstatic_response_compound_t *descriptionstatic_response_compound_local_var = malloc(sizeof(descriptionstatic_response_compound_t));
    if (!descriptionstatic_response_compound_local_var) {
        return NULL;
    }
    descriptionstatic_response_compound_local_var->pki_descriptionstatic_id = pki_descriptionstatic_id;
    descriptionstatic_response_compound_local_var->s_descriptionstatic_description = s_descriptionstatic_description;

    return descriptionstatic_response_compound_local_var;
}


void descriptionstatic_response_compound_free(descriptionstatic_response_compound_t *descriptionstatic_response_compound) {
    if(NULL == descriptionstatic_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (descriptionstatic_response_compound->s_descriptionstatic_description) {
        free(descriptionstatic_response_compound->s_descriptionstatic_description);
        descriptionstatic_response_compound->s_descriptionstatic_description = NULL;
    }
    free(descriptionstatic_response_compound);
}

cJSON *descriptionstatic_response_compound_convertToJSON(descriptionstatic_response_compound_t *descriptionstatic_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // descriptionstatic_response_compound->pki_descriptionstatic_id
    if (!descriptionstatic_response_compound->pki_descriptionstatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDescriptionstaticID", descriptionstatic_response_compound->pki_descriptionstatic_id) == NULL) {
    goto fail; //Numeric
    }


    // descriptionstatic_response_compound->s_descriptionstatic_description
    if (!descriptionstatic_response_compound->s_descriptionstatic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDescriptionstaticDescription", descriptionstatic_response_compound->s_descriptionstatic_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

descriptionstatic_response_compound_t *descriptionstatic_response_compound_parseFromJSON(cJSON *descriptionstatic_response_compoundJSON){

    descriptionstatic_response_compound_t *descriptionstatic_response_compound_local_var = NULL;

    // descriptionstatic_response_compound->pki_descriptionstatic_id
    cJSON *pki_descriptionstatic_id = cJSON_GetObjectItemCaseSensitive(descriptionstatic_response_compoundJSON, "pkiDescriptionstaticID");
    if (!pki_descriptionstatic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_descriptionstatic_id))
    {
    goto end; //Numeric
    }

    // descriptionstatic_response_compound->s_descriptionstatic_description
    cJSON *s_descriptionstatic_description = cJSON_GetObjectItemCaseSensitive(descriptionstatic_response_compoundJSON, "sDescriptionstaticDescription");
    if (!s_descriptionstatic_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_descriptionstatic_description))
    {
    goto end; //String
    }


    descriptionstatic_response_compound_local_var = descriptionstatic_response_compound_create (
        pki_descriptionstatic_id->valuedouble,
        strdup(s_descriptionstatic_description->valuestring)
        );

    return descriptionstatic_response_compound_local_var;
end:
    return NULL;

}
