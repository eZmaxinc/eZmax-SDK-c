#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatetype_autocomplete_element_response.h"



ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_create(
    int pki_ezdoctemplatetype_id,
    char *s_ezdoctemplatetype_description_x,
    int b_ezdoctemplatetype_isactive
    ) {
    ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_local_var = malloc(sizeof(ezdoctemplatetype_autocomplete_element_response_t));
    if (!ezdoctemplatetype_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezdoctemplatetype_autocomplete_element_response_local_var->pki_ezdoctemplatetype_id = pki_ezdoctemplatetype_id;
    ezdoctemplatetype_autocomplete_element_response_local_var->s_ezdoctemplatetype_description_x = s_ezdoctemplatetype_description_x;
    ezdoctemplatetype_autocomplete_element_response_local_var->b_ezdoctemplatetype_isactive = b_ezdoctemplatetype_isactive;

    return ezdoctemplatetype_autocomplete_element_response_local_var;
}


void ezdoctemplatetype_autocomplete_element_response_free(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response) {
    if(NULL == ezdoctemplatetype_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) {
        free(ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x);
        ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x = NULL;
    }
    free(ezdoctemplatetype_autocomplete_element_response);
}

cJSON *ezdoctemplatetype_autocomplete_element_response_convertToJSON(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id
    if (!ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatetypeID", ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x
    if (!ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatetypeDescriptionX", ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive
    if (!ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatetypeIsactive", ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatetype_autocomplete_element_responseJSON){

    ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_local_var = NULL;

    // ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id
    cJSON *pki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "pkiEzdoctemplatetypeID");
    if (!pki_ezdoctemplatetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatetype_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x
    cJSON *s_ezdoctemplatetype_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "sEzdoctemplatetypeDescriptionX");
    if (!s_ezdoctemplatetype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatetype_description_x))
    {
    goto end; //String
    }

    // ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive
    cJSON *b_ezdoctemplatetype_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "bEzdoctemplatetypeIsactive");
    if (!b_ezdoctemplatetype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatetype_isactive))
    {
    goto end; //Bool
    }


    ezdoctemplatetype_autocomplete_element_response_local_var = ezdoctemplatetype_autocomplete_element_response_create (
        pki_ezdoctemplatetype_id->valuedouble,
        strdup(s_ezdoctemplatetype_description_x->valuestring),
        b_ezdoctemplatetype_isactive->valueint
        );

    return ezdoctemplatetype_autocomplete_element_response_local_var;
end:
    return NULL;

}
