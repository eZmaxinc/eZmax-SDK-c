#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionchecklist_autocomplete_element_response.h"



static inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_create_internal(
    int *pki_inscriptionchecklist_id,
    char *s_inscriptionchecklistelement_name_x,
    int *b_inscriptionchecklist_isactive
    ) {
    inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_local_var = malloc(sizeof(inscriptionchecklist_autocomplete_element_response_t));
    if (!inscriptionchecklist_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(inscriptionchecklist_autocomplete_element_response_local_var, 0, sizeof(inscriptionchecklist_autocomplete_element_response_t));
    inscriptionchecklist_autocomplete_element_response_local_var->_library_owned = 1;
    inscriptionchecklist_autocomplete_element_response_local_var->pki_inscriptionchecklist_id = pki_inscriptionchecklist_id;
    inscriptionchecklist_autocomplete_element_response_local_var->s_inscriptionchecklistelement_name_x = s_inscriptionchecklistelement_name_x;
    inscriptionchecklist_autocomplete_element_response_local_var->b_inscriptionchecklist_isactive = b_inscriptionchecklist_isactive;
    return inscriptionchecklist_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_create(
    int *pki_inscriptionchecklist_id,
    char *s_inscriptionchecklistelement_name_x,
    int *b_inscriptionchecklist_isactive
    ) {
    int *pki_inscriptionchecklist_id_copy = NULL;
    if (pki_inscriptionchecklist_id) {
        pki_inscriptionchecklist_id_copy = malloc(sizeof(int));
        if (pki_inscriptionchecklist_id_copy) *pki_inscriptionchecklist_id_copy = *pki_inscriptionchecklist_id;
    }
    int *b_inscriptionchecklist_isactive_copy = NULL;
    if (b_inscriptionchecklist_isactive) {
        b_inscriptionchecklist_isactive_copy = malloc(sizeof(int));
        if (b_inscriptionchecklist_isactive_copy) *b_inscriptionchecklist_isactive_copy = *b_inscriptionchecklist_isactive;
    }
    inscriptionchecklist_autocomplete_element_response_t *result = inscriptionchecklist_autocomplete_element_response_create_internal (
        pki_inscriptionchecklist_id_copy,
        s_inscriptionchecklistelement_name_x,
        b_inscriptionchecklist_isactive_copy
        );
    if (!result) {
        free(pki_inscriptionchecklist_id_copy);
        free(b_inscriptionchecklist_isactive_copy);
    }
    return result;
}

void inscriptionchecklist_autocomplete_element_response_free(inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response) {
    if(NULL == inscriptionchecklist_autocomplete_element_response){
        return ;
    }
    if(inscriptionchecklist_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionchecklist_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id) {
        free(inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id);
        inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id = NULL;
    }
    if (inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x) {
        free(inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x);
        inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x = NULL;
    }
    if (inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive) {
        free(inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive);
        inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive = NULL;
    }
    free(inscriptionchecklist_autocomplete_element_response);
}

cJSON *inscriptionchecklist_autocomplete_element_response_convertToJSON(inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id
    if (!inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionchecklistID", *inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x
    if (!inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionchecklistelementNameX", inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x) == NULL) {
    goto fail; //String
    }


    // inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive
    if (!inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionchecklistIsactive", *inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_parseFromJSON(cJSON *inscriptionchecklist_autocomplete_element_responseJSON){

    inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_local_var = NULL;

    // define the local variable for inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id
    int *pki_inscriptionchecklist_id_local_var = NULL;

    char *s_inscriptionchecklistelement_name_x_local_str = NULL;

    // define the local variable for inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive
    int *b_inscriptionchecklist_isactive_local_var = NULL;

    // inscriptionchecklist_autocomplete_element_response->pki_inscriptionchecklist_id
    cJSON *pki_inscriptionchecklist_id = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_autocomplete_element_responseJSON, "pkiInscriptionchecklistID");
    if (cJSON_IsNull(pki_inscriptionchecklist_id)) {
        pki_inscriptionchecklist_id = NULL;
    }
    if (!pki_inscriptionchecklist_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptionchecklist_id))
    {
    goto end; //Numeric
    }
    pki_inscriptionchecklist_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptionchecklist_id_local_var)
    {
        goto end;
    }
    *pki_inscriptionchecklist_id_local_var = pki_inscriptionchecklist_id->valuedouble;

    // inscriptionchecklist_autocomplete_element_response->s_inscriptionchecklistelement_name_x
    cJSON *s_inscriptionchecklistelement_name_x = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_autocomplete_element_responseJSON, "sInscriptionchecklistelementNameX");
    if (cJSON_IsNull(s_inscriptionchecklistelement_name_x)) {
        s_inscriptionchecklistelement_name_x = NULL;
    }
    if (!s_inscriptionchecklistelement_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptionchecklistelement_name_x))
    {
    goto end; //String
    }

    // inscriptionchecklist_autocomplete_element_response->b_inscriptionchecklist_isactive
    cJSON *b_inscriptionchecklist_isactive = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_autocomplete_element_responseJSON, "bInscriptionchecklistIsactive");
    if (cJSON_IsNull(b_inscriptionchecklist_isactive)) {
        b_inscriptionchecklist_isactive = NULL;
    }
    if (!b_inscriptionchecklist_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionchecklist_isactive))
    {
    goto end; //Bool
    }
    b_inscriptionchecklist_isactive_local_var = malloc(sizeof(int));
    if(!b_inscriptionchecklist_isactive_local_var)
    {
        goto end;
    }
    *b_inscriptionchecklist_isactive_local_var = b_inscriptionchecklist_isactive->valueint;


    if (s_inscriptionchecklistelement_name_x && !cJSON_IsNull(s_inscriptionchecklistelement_name_x)) s_inscriptionchecklistelement_name_x_local_str = strdup(s_inscriptionchecklistelement_name_x->valuestring);

    inscriptionchecklist_autocomplete_element_response_local_var = inscriptionchecklist_autocomplete_element_response_create_internal (
        pki_inscriptionchecklist_id_local_var,
        s_inscriptionchecklistelement_name_x_local_str,
        b_inscriptionchecklist_isactive_local_var
        );

    if (!inscriptionchecklist_autocomplete_element_response_local_var) {
        goto end;
    }

    return inscriptionchecklist_autocomplete_element_response_local_var;
end:
    if (pki_inscriptionchecklist_id_local_var) {
        free(pki_inscriptionchecklist_id_local_var);
        pki_inscriptionchecklist_id_local_var = NULL;
    }
    if (s_inscriptionchecklistelement_name_x_local_str) {
        free(s_inscriptionchecklistelement_name_x_local_str);
        s_inscriptionchecklistelement_name_x_local_str = NULL;
    }
    if (b_inscriptionchecklist_isactive_local_var) {
        free(b_inscriptionchecklist_isactive_local_var);
        b_inscriptionchecklist_isactive_local_var = NULL;
    }
    return NULL;

}
