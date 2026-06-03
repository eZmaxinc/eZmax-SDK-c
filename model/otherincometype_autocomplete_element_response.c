#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincometype_autocomplete_element_response.h"



static otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_create_internal(
    int *pki_otherincometype_id,
    char *s_otherincometype_description_x,
    int *b_otherincometype_isactive
    ) {
    otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_local_var = malloc(sizeof(otherincometype_autocomplete_element_response_t));
    if (!otherincometype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(otherincometype_autocomplete_element_response_local_var, 0, sizeof(otherincometype_autocomplete_element_response_t));
    otherincometype_autocomplete_element_response_local_var->_library_owned = 1;
    otherincometype_autocomplete_element_response_local_var->pki_otherincometype_id = pki_otherincometype_id;
    otherincometype_autocomplete_element_response_local_var->s_otherincometype_description_x = s_otherincometype_description_x;
    otherincometype_autocomplete_element_response_local_var->b_otherincometype_isactive = b_otherincometype_isactive;
    return otherincometype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_create(
    int *pki_otherincometype_id,
    char *s_otherincometype_description_x,
    int *b_otherincometype_isactive
    ) {
    int *pki_otherincometype_id_copy = NULL;
    if (pki_otherincometype_id) {
        pki_otherincometype_id_copy = malloc(sizeof(int));
        if (pki_otherincometype_id_copy) *pki_otherincometype_id_copy = *pki_otherincometype_id;
    }
    int *b_otherincometype_isactive_copy = NULL;
    if (b_otherincometype_isactive) {
        b_otherincometype_isactive_copy = malloc(sizeof(int));
        if (b_otherincometype_isactive_copy) *b_otherincometype_isactive_copy = *b_otherincometype_isactive;
    }
    otherincometype_autocomplete_element_response_t *result = otherincometype_autocomplete_element_response_create_internal (
        pki_otherincometype_id_copy,
        s_otherincometype_description_x,
        b_otherincometype_isactive_copy
        );
    if (!result) {
        free(pki_otherincometype_id_copy);
        free(b_otherincometype_isactive_copy);
    }
    return result;
}

void otherincometype_autocomplete_element_response_free(otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response) {
    if(NULL == otherincometype_autocomplete_element_response){
        return ;
    }
    if(otherincometype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincometype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincometype_autocomplete_element_response->pki_otherincometype_id) {
        free(otherincometype_autocomplete_element_response->pki_otherincometype_id);
        otherincometype_autocomplete_element_response->pki_otherincometype_id = NULL;
    }
    if (otherincometype_autocomplete_element_response->s_otherincometype_description_x) {
        free(otherincometype_autocomplete_element_response->s_otherincometype_description_x);
        otherincometype_autocomplete_element_response->s_otherincometype_description_x = NULL;
    }
    if (otherincometype_autocomplete_element_response->b_otherincometype_isactive) {
        free(otherincometype_autocomplete_element_response->b_otherincometype_isactive);
        otherincometype_autocomplete_element_response->b_otherincometype_isactive = NULL;
    }
    free(otherincometype_autocomplete_element_response);
}

cJSON *otherincometype_autocomplete_element_response_convertToJSON(otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // otherincometype_autocomplete_element_response->pki_otherincometype_id
    if (!otherincometype_autocomplete_element_response->pki_otherincometype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiOtherincometypeID", *otherincometype_autocomplete_element_response->pki_otherincometype_id) == NULL) {
    goto fail; //Numeric
    }


    // otherincometype_autocomplete_element_response->s_otherincometype_description_x
    if (!otherincometype_autocomplete_element_response->s_otherincometype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sOtherincometypeDescriptionX", otherincometype_autocomplete_element_response->s_otherincometype_description_x) == NULL) {
    goto fail; //String
    }


    // otherincometype_autocomplete_element_response->b_otherincometype_isactive
    if (!otherincometype_autocomplete_element_response->b_otherincometype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bOtherincometypeIsactive", *otherincometype_autocomplete_element_response->b_otherincometype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_parseFromJSON(cJSON *otherincometype_autocomplete_element_responseJSON){

    otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_local_var = NULL;

    // define the local variable for otherincometype_autocomplete_element_response->pki_otherincometype_id
    int *pki_otherincometype_id_local_var = NULL;

    char *s_otherincometype_description_x_local_str = NULL;

    // define the local variable for otherincometype_autocomplete_element_response->b_otherincometype_isactive
    int *b_otherincometype_isactive_local_var = NULL;

    // otherincometype_autocomplete_element_response->pki_otherincometype_id
    cJSON *pki_otherincometype_id = cJSON_GetObjectItemCaseSensitive(otherincometype_autocomplete_element_responseJSON, "pkiOtherincometypeID");
    if (cJSON_IsNull(pki_otherincometype_id)) {
        pki_otherincometype_id = NULL;
    }
    if (!pki_otherincometype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_otherincometype_id))
    {
    goto end; //Numeric
    }
    pki_otherincometype_id_local_var = malloc(sizeof(int));
    if(!pki_otherincometype_id_local_var)
    {
        goto end;
    }
    *pki_otherincometype_id_local_var = pki_otherincometype_id->valuedouble;

    // otherincometype_autocomplete_element_response->s_otherincometype_description_x
    cJSON *s_otherincometype_description_x = cJSON_GetObjectItemCaseSensitive(otherincometype_autocomplete_element_responseJSON, "sOtherincometypeDescriptionX");
    if (cJSON_IsNull(s_otherincometype_description_x)) {
        s_otherincometype_description_x = NULL;
    }
    if (!s_otherincometype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_otherincometype_description_x))
    {
    goto end; //String
    }

    // otherincometype_autocomplete_element_response->b_otherincometype_isactive
    cJSON *b_otherincometype_isactive = cJSON_GetObjectItemCaseSensitive(otherincometype_autocomplete_element_responseJSON, "bOtherincometypeIsactive");
    if (cJSON_IsNull(b_otherincometype_isactive)) {
        b_otherincometype_isactive = NULL;
    }
    if (!b_otherincometype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_otherincometype_isactive))
    {
    goto end; //Bool
    }
    b_otherincometype_isactive_local_var = malloc(sizeof(int));
    if(!b_otherincometype_isactive_local_var)
    {
        goto end;
    }
    *b_otherincometype_isactive_local_var = b_otherincometype_isactive->valueint;


    if (s_otherincometype_description_x && !cJSON_IsNull(s_otherincometype_description_x)) s_otherincometype_description_x_local_str = strdup(s_otherincometype_description_x->valuestring);

    otherincometype_autocomplete_element_response_local_var = otherincometype_autocomplete_element_response_create_internal (
        pki_otherincometype_id_local_var,
        s_otherincometype_description_x_local_str,
        b_otherincometype_isactive_local_var
        );

    if (!otherincometype_autocomplete_element_response_local_var) {
        goto end;
    }

    return otherincometype_autocomplete_element_response_local_var;
end:
    if (pki_otherincometype_id_local_var) {
        free(pki_otherincometype_id_local_var);
        pki_otherincometype_id_local_var = NULL;
    }
    if (s_otherincometype_description_x_local_str) {
        free(s_otherincometype_description_x_local_str);
        s_otherincometype_description_x_local_str = NULL;
    }
    if (b_otherincometype_isactive_local_var) {
        free(b_otherincometype_isactive_local_var);
        b_otherincometype_isactive_local_var = NULL;
    }
    return NULL;

}
