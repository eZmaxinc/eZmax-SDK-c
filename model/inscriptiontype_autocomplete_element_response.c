#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontype_autocomplete_element_response.h"



static inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_create_internal(
    int *pki_inscriptiontype_id,
    char *s_inscriptiontype_name_x
    ) {
    inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_local_var = malloc(sizeof(inscriptiontype_autocomplete_element_response_t));
    if (!inscriptiontype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(inscriptiontype_autocomplete_element_response_local_var, 0, sizeof(inscriptiontype_autocomplete_element_response_t));
    inscriptiontype_autocomplete_element_response_local_var->_library_owned = 1;
    inscriptiontype_autocomplete_element_response_local_var->pki_inscriptiontype_id = pki_inscriptiontype_id;
    inscriptiontype_autocomplete_element_response_local_var->s_inscriptiontype_name_x = s_inscriptiontype_name_x;
    return inscriptiontype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_create(
    int *pki_inscriptiontype_id,
    char *s_inscriptiontype_name_x
    ) {
    int *pki_inscriptiontype_id_copy = NULL;
    if (pki_inscriptiontype_id) {
        pki_inscriptiontype_id_copy = malloc(sizeof(int));
        if (pki_inscriptiontype_id_copy) *pki_inscriptiontype_id_copy = *pki_inscriptiontype_id;
    }
    inscriptiontype_autocomplete_element_response_t *result = inscriptiontype_autocomplete_element_response_create_internal (
        pki_inscriptiontype_id_copy,
        s_inscriptiontype_name_x
        );
    if (!result) {
        free(pki_inscriptiontype_id_copy);
    }
    return result;
}

void inscriptiontype_autocomplete_element_response_free(inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response) {
    if(NULL == inscriptiontype_autocomplete_element_response){
        return ;
    }
    if(inscriptiontype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id) {
        free(inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id);
        inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id = NULL;
    }
    if (inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x) {
        free(inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x);
        inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x = NULL;
    }
    free(inscriptiontype_autocomplete_element_response);
}

cJSON *inscriptiontype_autocomplete_element_response_convertToJSON(inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id
    if (!inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptiontypeID", *inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x
    if (!inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptiontypeNameX", inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_parseFromJSON(cJSON *inscriptiontype_autocomplete_element_responseJSON){

    inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_local_var = NULL;

    // define the local variable for inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id
    int *pki_inscriptiontype_id_local_var = NULL;

    char *s_inscriptiontype_name_x_local_str = NULL;

    // inscriptiontype_autocomplete_element_response->pki_inscriptiontype_id
    cJSON *pki_inscriptiontype_id = cJSON_GetObjectItemCaseSensitive(inscriptiontype_autocomplete_element_responseJSON, "pkiInscriptiontypeID");
    if (cJSON_IsNull(pki_inscriptiontype_id)) {
        pki_inscriptiontype_id = NULL;
    }
    if (!pki_inscriptiontype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptiontype_id))
    {
    goto end; //Numeric
    }
    pki_inscriptiontype_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptiontype_id_local_var)
    {
        goto end;
    }
    *pki_inscriptiontype_id_local_var = pki_inscriptiontype_id->valuedouble;

    // inscriptiontype_autocomplete_element_response->s_inscriptiontype_name_x
    cJSON *s_inscriptiontype_name_x = cJSON_GetObjectItemCaseSensitive(inscriptiontype_autocomplete_element_responseJSON, "sInscriptiontypeNameX");
    if (cJSON_IsNull(s_inscriptiontype_name_x)) {
        s_inscriptiontype_name_x = NULL;
    }
    if (!s_inscriptiontype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptiontype_name_x))
    {
    goto end; //String
    }


    if (s_inscriptiontype_name_x && !cJSON_IsNull(s_inscriptiontype_name_x)) s_inscriptiontype_name_x_local_str = strdup(s_inscriptiontype_name_x->valuestring);

    inscriptiontype_autocomplete_element_response_local_var = inscriptiontype_autocomplete_element_response_create_internal (
        pki_inscriptiontype_id_local_var,
        s_inscriptiontype_name_x_local_str
        );

    if (!inscriptiontype_autocomplete_element_response_local_var) {
        goto end;
    }

    return inscriptiontype_autocomplete_element_response_local_var;
end:
    if (pki_inscriptiontype_id_local_var) {
        free(pki_inscriptiontype_id_local_var);
        pki_inscriptiontype_id_local_var = NULL;
    }
    if (s_inscriptiontype_name_x_local_str) {
        free(s_inscriptiontype_name_x_local_str);
        s_inscriptiontype_name_x_local_str = NULL;
    }
    return NULL;

}
