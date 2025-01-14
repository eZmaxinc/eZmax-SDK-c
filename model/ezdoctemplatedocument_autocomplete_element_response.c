#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_autocomplete_element_response.h"



ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_create(
    int pki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    int b_ezdoctemplatedocument_isactive
    ) {
    ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_local_var = malloc(sizeof(ezdoctemplatedocument_autocomplete_element_response_t));
    if (!ezdoctemplatedocument_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_autocomplete_element_response_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_autocomplete_element_response_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezdoctemplatedocument_autocomplete_element_response_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;

    return ezdoctemplatedocument_autocomplete_element_response_local_var;
}


void ezdoctemplatedocument_autocomplete_element_response_free(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response) {
    if(NULL == ezdoctemplatedocument_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) {
        free(ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x);
        ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x = NULL;
    }
    free(ezdoctemplatedocument_autocomplete_element_response);
}

cJSON *ezdoctemplatedocument_autocomplete_element_response_convertToJSON(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id
    if (!ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x
    if (!ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatedocument_autocomplete_element_responseJSON){

    ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_local_var = NULL;

    // ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "pkiEzdoctemplatedocumentID");
    if (!pki_ezdoctemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "sEzdoctemplatedocumentNameX");
    if (!s_ezdoctemplatedocument_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }

    // ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "bEzdoctemplatedocumentIsactive");
    if (!b_ezdoctemplatedocument_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatedocument_isactive))
    {
    goto end; //Bool
    }


    ezdoctemplatedocument_autocomplete_element_response_local_var = ezdoctemplatedocument_autocomplete_element_response_create (
        pki_ezdoctemplatedocument_id->valuedouble,
        strdup(s_ezdoctemplatedocument_name_x->valuestring),
        b_ezdoctemplatedocument_isactive->valueint
        );

    return ezdoctemplatedocument_autocomplete_element_response_local_var;
end:
    return NULL;

}
