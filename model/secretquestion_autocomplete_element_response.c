#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "secretquestion_autocomplete_element_response.h"



static secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_create_internal(
    char *s_secretquestion_text_x,
    int pki_secretquestion_id,
    int b_secretquestion_isactive
    ) {
    secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_local_var = malloc(sizeof(secretquestion_autocomplete_element_response_t));
    if (!secretquestion_autocomplete_element_response_local_var) {
        return NULL;
    }
    secretquestion_autocomplete_element_response_local_var->s_secretquestion_text_x = s_secretquestion_text_x;
    secretquestion_autocomplete_element_response_local_var->pki_secretquestion_id = pki_secretquestion_id;
    secretquestion_autocomplete_element_response_local_var->b_secretquestion_isactive = b_secretquestion_isactive;

    secretquestion_autocomplete_element_response_local_var->_library_owned = 1;
    return secretquestion_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_create(
    char *s_secretquestion_text_x,
    int pki_secretquestion_id,
    int b_secretquestion_isactive
    ) {
    return secretquestion_autocomplete_element_response_create_internal (
        s_secretquestion_text_x,
        pki_secretquestion_id,
        b_secretquestion_isactive
        );
}

void secretquestion_autocomplete_element_response_free(secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response) {
    if(NULL == secretquestion_autocomplete_element_response){
        return ;
    }
    if(secretquestion_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "secretquestion_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (secretquestion_autocomplete_element_response->s_secretquestion_text_x) {
        free(secretquestion_autocomplete_element_response->s_secretquestion_text_x);
        secretquestion_autocomplete_element_response->s_secretquestion_text_x = NULL;
    }
    free(secretquestion_autocomplete_element_response);
}

cJSON *secretquestion_autocomplete_element_response_convertToJSON(secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // secretquestion_autocomplete_element_response->s_secretquestion_text_x
    if (!secretquestion_autocomplete_element_response->s_secretquestion_text_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSecretquestionTextX", secretquestion_autocomplete_element_response->s_secretquestion_text_x) == NULL) {
    goto fail; //String
    }


    // secretquestion_autocomplete_element_response->pki_secretquestion_id
    if (!secretquestion_autocomplete_element_response->pki_secretquestion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSecretquestionID", secretquestion_autocomplete_element_response->pki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }


    // secretquestion_autocomplete_element_response->b_secretquestion_isactive
    if (!secretquestion_autocomplete_element_response->b_secretquestion_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSecretquestionIsactive", secretquestion_autocomplete_element_response->b_secretquestion_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_parseFromJSON(cJSON *secretquestion_autocomplete_element_responseJSON){

    secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_local_var = NULL;

    // secretquestion_autocomplete_element_response->s_secretquestion_text_x
    cJSON *s_secretquestion_text_x = cJSON_GetObjectItemCaseSensitive(secretquestion_autocomplete_element_responseJSON, "sSecretquestionTextX");
    if (cJSON_IsNull(s_secretquestion_text_x)) {
        s_secretquestion_text_x = NULL;
    }
    if (!s_secretquestion_text_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_secretquestion_text_x))
    {
    goto end; //String
    }

    // secretquestion_autocomplete_element_response->pki_secretquestion_id
    cJSON *pki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(secretquestion_autocomplete_element_responseJSON, "pkiSecretquestionID");
    if (cJSON_IsNull(pki_secretquestion_id)) {
        pki_secretquestion_id = NULL;
    }
    if (!pki_secretquestion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_secretquestion_id))
    {
    goto end; //Numeric
    }

    // secretquestion_autocomplete_element_response->b_secretquestion_isactive
    cJSON *b_secretquestion_isactive = cJSON_GetObjectItemCaseSensitive(secretquestion_autocomplete_element_responseJSON, "bSecretquestionIsactive");
    if (cJSON_IsNull(b_secretquestion_isactive)) {
        b_secretquestion_isactive = NULL;
    }
    if (!b_secretquestion_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_secretquestion_isactive))
    {
    goto end; //Bool
    }


    secretquestion_autocomplete_element_response_local_var = secretquestion_autocomplete_element_response_create_internal (
        strdup(s_secretquestion_text_x->valuestring),
        pki_secretquestion_id->valuedouble,
        b_secretquestion_isactive->valueint
        );

    return secretquestion_autocomplete_element_response_local_var;
end:
    return NULL;

}
