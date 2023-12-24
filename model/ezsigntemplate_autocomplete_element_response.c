#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_autocomplete_element_response.h"


char* e_ezsignfoldertype_privacylevelezsigntemplate_autocomplete_element_response_ToString(ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__e e_ezsignfoldertype_privacylevelezsigntemplate_autocomplete_element_response_FromString(char* e_ezsignfoldertype_privacylevel){
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

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_create(
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplate_description,
    int pki_ezsigntemplate_id,
    int b_ezsigntemplate_isactive
    ) {
    ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_local_var = malloc(sizeof(ezsigntemplate_autocomplete_element_response_t));
    if (!ezsigntemplate_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezsigntemplate_autocomplete_element_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsigntemplate_autocomplete_element_response_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_autocomplete_element_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_autocomplete_element_response_local_var->b_ezsigntemplate_isactive = b_ezsigntemplate_isactive;

    return ezsigntemplate_autocomplete_element_response_local_var;
}


void ezsigntemplate_autocomplete_element_response_free(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response) {
    if(NULL == ezsigntemplate_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
        ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) {
        free(ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description);
        ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description = NULL;
    }
    free(ezsigntemplate_autocomplete_element_response);
}

cJSON *ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__NULL == ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description
    if (!ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id
    if (!ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive
    if (!ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateIsactive", ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplate_autocomplete_element_responseJSON){

    ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "pkiEzsigntemplateID");
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive
    cJSON *b_ezsigntemplate_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "bEzsigntemplateIsactive");
    if (!b_ezsigntemplate_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_isactive))
    {
    goto end; //Bool
    }


    ezsigntemplate_autocomplete_element_response_local_var = ezsigntemplate_autocomplete_element_response_create (
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsigntemplate_description->valuestring),
        pki_ezsigntemplate_id->valuedouble,
        b_ezsigntemplate_isactive->valueint
        );

    return ezsigntemplate_autocomplete_element_response_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    return NULL;

}
