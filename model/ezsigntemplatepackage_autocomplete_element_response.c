#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_autocomplete_element_response.h"


char* ezsigntemplatepackage_autocomplete_element_response_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsigntemplatepackage_autocomplete_element_response__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsigntemplatepackage_autocomplete_element_response__e ezsigntemplatepackage_autocomplete_element_response_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_create(
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplatepackage_description,
    int pki_ezsigntemplatepackage_id,
    int b_ezsigntemplatepackage_isactive,
    int b_disabled
    ) {
    ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_local_var = malloc(sizeof(ezsigntemplatepackage_autocomplete_element_response_t));
    if (!ezsigntemplatepackage_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_autocomplete_element_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsigntemplatepackage_autocomplete_element_response_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_autocomplete_element_response_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_autocomplete_element_response_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_autocomplete_element_response_local_var->b_disabled = b_disabled;

    return ezsigntemplatepackage_autocomplete_element_response_local_var;
}


void ezsigntemplatepackage_autocomplete_element_response_free(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response) {
    if(NULL == ezsigntemplatepackage_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
        ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description = NULL;
    }
    free(ezsigntemplatepackage_autocomplete_element_response);
}

cJSON *ezsigntemplatepackage_autocomplete_element_response_convertToJSON(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsigntemplatepackage_autocomplete_element_response__NULL == ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_autocomplete_element_response->b_disabled
    if (!ezsigntemplatepackage_autocomplete_element_response->b_disabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDisabled", ezsigntemplatepackage_autocomplete_element_response->b_disabled) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplatepackage_autocomplete_element_responseJSON){

    ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "sEzsigntemplatepackageDescription");
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "pkiEzsigntemplatepackageID");
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "bEzsigntemplatepackageIsactive");
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_autocomplete_element_response->b_disabled
    cJSON *b_disabled = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "bDisabled");
    if (!b_disabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_disabled))
    {
    goto end; //Bool
    }


    ezsigntemplatepackage_autocomplete_element_response_local_var = ezsigntemplatepackage_autocomplete_element_response_create (
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsigntemplatepackage_description->valuestring),
        pki_ezsigntemplatepackage_id->valuedouble,
        b_ezsigntemplatepackage_isactive->valueint,
        b_disabled->valueint
        );

    return ezsigntemplatepackage_autocomplete_element_response_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    return NULL;

}
