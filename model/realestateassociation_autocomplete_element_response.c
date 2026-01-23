#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "realestateassociation_autocomplete_element_response.h"



static realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_create_internal(
    int pki_realestateassociation_id,
    char *s_realestateassociation_name_x,
    char *s_realestateassociation_acronym_x,
    int b_realestateassociation_isactive
    ) {
    realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_local_var = malloc(sizeof(realestateassociation_autocomplete_element_response_t));
    if (!realestateassociation_autocomplete_element_response_local_var) {
        return NULL;
    }
    realestateassociation_autocomplete_element_response_local_var->pki_realestateassociation_id = pki_realestateassociation_id;
    realestateassociation_autocomplete_element_response_local_var->s_realestateassociation_name_x = s_realestateassociation_name_x;
    realestateassociation_autocomplete_element_response_local_var->s_realestateassociation_acronym_x = s_realestateassociation_acronym_x;
    realestateassociation_autocomplete_element_response_local_var->b_realestateassociation_isactive = b_realestateassociation_isactive;

    realestateassociation_autocomplete_element_response_local_var->_library_owned = 1;
    return realestateassociation_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_create(
    int pki_realestateassociation_id,
    char *s_realestateassociation_name_x,
    char *s_realestateassociation_acronym_x,
    int b_realestateassociation_isactive
    ) {
    return realestateassociation_autocomplete_element_response_create_internal (
        pki_realestateassociation_id,
        s_realestateassociation_name_x,
        s_realestateassociation_acronym_x,
        b_realestateassociation_isactive
        );
}

void realestateassociation_autocomplete_element_response_free(realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response) {
    if(NULL == realestateassociation_autocomplete_element_response){
        return ;
    }
    if(realestateassociation_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "realestateassociation_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (realestateassociation_autocomplete_element_response->s_realestateassociation_name_x) {
        free(realestateassociation_autocomplete_element_response->s_realestateassociation_name_x);
        realestateassociation_autocomplete_element_response->s_realestateassociation_name_x = NULL;
    }
    if (realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x) {
        free(realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x);
        realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x = NULL;
    }
    free(realestateassociation_autocomplete_element_response);
}

cJSON *realestateassociation_autocomplete_element_response_convertToJSON(realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // realestateassociation_autocomplete_element_response->pki_realestateassociation_id
    if (!realestateassociation_autocomplete_element_response->pki_realestateassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiRealestateassociationID", realestateassociation_autocomplete_element_response->pki_realestateassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // realestateassociation_autocomplete_element_response->s_realestateassociation_name_x
    if (!realestateassociation_autocomplete_element_response->s_realestateassociation_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sRealestateassociationNameX", realestateassociation_autocomplete_element_response->s_realestateassociation_name_x) == NULL) {
    goto fail; //String
    }


    // realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x
    if (!realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sRealestateassociationAcronymX", realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x) == NULL) {
    goto fail; //String
    }


    // realestateassociation_autocomplete_element_response->b_realestateassociation_isactive
    if (!realestateassociation_autocomplete_element_response->b_realestateassociation_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bRealestateassociationIsactive", realestateassociation_autocomplete_element_response->b_realestateassociation_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_parseFromJSON(cJSON *realestateassociation_autocomplete_element_responseJSON){

    realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_local_var = NULL;

    // realestateassociation_autocomplete_element_response->pki_realestateassociation_id
    cJSON *pki_realestateassociation_id = cJSON_GetObjectItemCaseSensitive(realestateassociation_autocomplete_element_responseJSON, "pkiRealestateassociationID");
    if (cJSON_IsNull(pki_realestateassociation_id)) {
        pki_realestateassociation_id = NULL;
    }
    if (!pki_realestateassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_realestateassociation_id))
    {
    goto end; //Numeric
    }

    // realestateassociation_autocomplete_element_response->s_realestateassociation_name_x
    cJSON *s_realestateassociation_name_x = cJSON_GetObjectItemCaseSensitive(realestateassociation_autocomplete_element_responseJSON, "sRealestateassociationNameX");
    if (cJSON_IsNull(s_realestateassociation_name_x)) {
        s_realestateassociation_name_x = NULL;
    }
    if (!s_realestateassociation_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_realestateassociation_name_x))
    {
    goto end; //String
    }

    // realestateassociation_autocomplete_element_response->s_realestateassociation_acronym_x
    cJSON *s_realestateassociation_acronym_x = cJSON_GetObjectItemCaseSensitive(realestateassociation_autocomplete_element_responseJSON, "sRealestateassociationAcronymX");
    if (cJSON_IsNull(s_realestateassociation_acronym_x)) {
        s_realestateassociation_acronym_x = NULL;
    }
    if (!s_realestateassociation_acronym_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_realestateassociation_acronym_x))
    {
    goto end; //String
    }

    // realestateassociation_autocomplete_element_response->b_realestateassociation_isactive
    cJSON *b_realestateassociation_isactive = cJSON_GetObjectItemCaseSensitive(realestateassociation_autocomplete_element_responseJSON, "bRealestateassociationIsactive");
    if (cJSON_IsNull(b_realestateassociation_isactive)) {
        b_realestateassociation_isactive = NULL;
    }
    if (!b_realestateassociation_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_realestateassociation_isactive))
    {
    goto end; //Bool
    }


    realestateassociation_autocomplete_element_response_local_var = realestateassociation_autocomplete_element_response_create_internal (
        pki_realestateassociation_id->valuedouble,
        strdup(s_realestateassociation_name_x->valuestring),
        strdup(s_realestateassociation_acronym_x->valuestring),
        b_realestateassociation_isactive->valueint
        );

    return realestateassociation_autocomplete_element_response_local_var;
end:
    return NULL;

}
