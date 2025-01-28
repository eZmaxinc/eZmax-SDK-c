#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatefieldtypecategory_autocomplete_element_response.h"



static ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_create_internal(
    int pki_ezdoctemplatefieldtypecategory_id,
    int fki_ezdoctemplatetype_id,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    int b_ezdoctemplatefieldtypecategory_isactive
    ) {
    ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var = malloc(sizeof(ezdoctemplatefieldtypecategory_autocomplete_element_response_t));
    if (!ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var->pki_ezdoctemplatefieldtypecategory_id = pki_ezdoctemplatefieldtypecategory_id;
    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var->fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var->s_ezdoctemplatefieldtypecategory_description_x = s_ezdoctemplatefieldtypecategory_description_x;
    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var->b_ezdoctemplatefieldtypecategory_isactive = b_ezdoctemplatefieldtypecategory_isactive;

    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var->_library_owned = 1;
    return ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_create(
    int pki_ezdoctemplatefieldtypecategory_id,
    int fki_ezdoctemplatetype_id,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    int b_ezdoctemplatefieldtypecategory_isactive
    ) {
    return ezdoctemplatefieldtypecategory_autocomplete_element_response_create_internal (
        pki_ezdoctemplatefieldtypecategory_id,
        fki_ezdoctemplatetype_id,
        s_ezdoctemplatefieldtypecategory_description_x,
        b_ezdoctemplatefieldtypecategory_isactive
        );
}

void ezdoctemplatefieldtypecategory_autocomplete_element_response_free(ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response) {
    if(NULL == ezdoctemplatefieldtypecategory_autocomplete_element_response){
        return ;
    }
    if(ezdoctemplatefieldtypecategory_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatefieldtypecategory_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x) {
        free(ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x);
        ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x = NULL;
    }
    free(ezdoctemplatefieldtypecategory_autocomplete_element_response);
}

cJSON *ezdoctemplatefieldtypecategory_autocomplete_element_response_convertToJSON(ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatefieldtypecategory_autocomplete_element_response->pki_ezdoctemplatefieldtypecategory_id
    if (!ezdoctemplatefieldtypecategory_autocomplete_element_response->pki_ezdoctemplatefieldtypecategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatefieldtypecategoryID", ezdoctemplatefieldtypecategory_autocomplete_element_response->pki_ezdoctemplatefieldtypecategory_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatefieldtypecategory_autocomplete_element_response->fki_ezdoctemplatetype_id
    if (!ezdoctemplatefieldtypecategory_autocomplete_element_response->fki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatetypeID", ezdoctemplatefieldtypecategory_autocomplete_element_response->fki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x
    if (!ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatefieldtypecategoryDescriptionX", ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatefieldtypecategory_autocomplete_element_response->b_ezdoctemplatefieldtypecategory_isactive
    if (!ezdoctemplatefieldtypecategory_autocomplete_element_response->b_ezdoctemplatefieldtypecategory_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatefieldtypecategoryIsactive", ezdoctemplatefieldtypecategory_autocomplete_element_response->b_ezdoctemplatefieldtypecategory_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON){

    ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var = NULL;

    // ezdoctemplatefieldtypecategory_autocomplete_element_response->pki_ezdoctemplatefieldtypecategory_id
    cJSON *pki_ezdoctemplatefieldtypecategory_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON, "pkiEzdoctemplatefieldtypecategoryID");
    if (cJSON_IsNull(pki_ezdoctemplatefieldtypecategory_id)) {
        pki_ezdoctemplatefieldtypecategory_id = NULL;
    }
    if (!pki_ezdoctemplatefieldtypecategory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatefieldtypecategory_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatefieldtypecategory_autocomplete_element_response->fki_ezdoctemplatetype_id
    cJSON *fki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON, "fkiEzdoctemplatetypeID");
    if (cJSON_IsNull(fki_ezdoctemplatetype_id)) {
        fki_ezdoctemplatetype_id = NULL;
    }
    if (!fki_ezdoctemplatetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatetype_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatefieldtypecategory_autocomplete_element_response->s_ezdoctemplatefieldtypecategory_description_x
    cJSON *s_ezdoctemplatefieldtypecategory_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON, "sEzdoctemplatefieldtypecategoryDescriptionX");
    if (cJSON_IsNull(s_ezdoctemplatefieldtypecategory_description_x)) {
        s_ezdoctemplatefieldtypecategory_description_x = NULL;
    }
    if (!s_ezdoctemplatefieldtypecategory_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatefieldtypecategory_description_x))
    {
    goto end; //String
    }

    // ezdoctemplatefieldtypecategory_autocomplete_element_response->b_ezdoctemplatefieldtypecategory_isactive
    cJSON *b_ezdoctemplatefieldtypecategory_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON, "bEzdoctemplatefieldtypecategoryIsactive");
    if (cJSON_IsNull(b_ezdoctemplatefieldtypecategory_isactive)) {
        b_ezdoctemplatefieldtypecategory_isactive = NULL;
    }
    if (!b_ezdoctemplatefieldtypecategory_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatefieldtypecategory_isactive))
    {
    goto end; //Bool
    }


    ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var = ezdoctemplatefieldtypecategory_autocomplete_element_response_create_internal (
        pki_ezdoctemplatefieldtypecategory_id->valuedouble,
        fki_ezdoctemplatetype_id->valuedouble,
        strdup(s_ezdoctemplatefieldtypecategory_description_x->valuestring),
        b_ezdoctemplatefieldtypecategory_isactive->valueint
        );

    return ezdoctemplatefieldtypecategory_autocomplete_element_response_local_var;
end:
    return NULL;

}
