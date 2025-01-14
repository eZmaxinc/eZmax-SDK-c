#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_response.h"


char* ezdoctemplatedocument_response_e_ezdoctemplatedocument_privacylevel_ToString(ezmax_api_definition__full_ezdoctemplatedocument_response__e e_ezdoctemplatedocument_privacylevel) {
    char* e_ezdoctemplatedocument_privacylevelArray[] =  { "NULL", "Company", "Ezsignfoldertype", "User" };
    return e_ezdoctemplatedocument_privacylevelArray[e_ezdoctemplatedocument_privacylevel];
}

ezmax_api_definition__full_ezdoctemplatedocument_response__e ezdoctemplatedocument_response_e_ezdoctemplatedocument_privacylevel_FromString(char* e_ezdoctemplatedocument_privacylevel){
    int stringToReturn = 0;
    char *e_ezdoctemplatedocument_privacylevelArray[] =  { "NULL", "Company", "Ezsignfoldertype", "User" };
    size_t sizeofArray = sizeof(e_ezdoctemplatedocument_privacylevelArray) / sizeof(e_ezdoctemplatedocument_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezdoctemplatedocument_privacylevel, e_ezdoctemplatedocument_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name,
    char *s_ezdoctemplatedocument_name_x,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    char *s_ezdoctemplatetype_description_x
    ) {
    ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_local_var = malloc(sizeof(ezdoctemplatedocument_response_t));
    if (!ezdoctemplatedocument_response_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_response_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_response_local_var->fki_language_id = fki_language_id;
    ezdoctemplatedocument_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezdoctemplatedocument_response_local_var->fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    ezdoctemplatedocument_response_local_var->fki_ezdoctemplatefieldtypecategory_id = fki_ezdoctemplatefieldtypecategory_id;
    ezdoctemplatedocument_response_local_var->e_ezdoctemplatedocument_privacylevel = e_ezdoctemplatedocument_privacylevel;
    ezdoctemplatedocument_response_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    ezdoctemplatedocument_response_local_var->obj_ezdoctemplatedocument_name = obj_ezdoctemplatedocument_name;
    ezdoctemplatedocument_response_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezdoctemplatedocument_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezdoctemplatedocument_response_local_var->s_ezdoctemplatefieldtypecategory_description_x = s_ezdoctemplatefieldtypecategory_description_x;
    ezdoctemplatedocument_response_local_var->s_ezdoctemplatetype_description_x = s_ezdoctemplatetype_description_x;

    return ezdoctemplatedocument_response_local_var;
}


void ezdoctemplatedocument_response_free(ezdoctemplatedocument_response_t *ezdoctemplatedocument_response) {
    if(NULL == ezdoctemplatedocument_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel) {
        field_e_ezdoctemplatedocument_privacylevel_free(ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel);
        ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel = NULL;
    }
    if (ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name) {
        multilingual_ezdoctemplatedocument_name_free(ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name);
        ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name = NULL;
    }
    if (ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x) {
        free(ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x);
        ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x = NULL;
    }
    if (ezdoctemplatedocument_response->s_ezsignfoldertype_name_x) {
        free(ezdoctemplatedocument_response->s_ezsignfoldertype_name_x);
        ezdoctemplatedocument_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x) {
        free(ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x);
        ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x = NULL;
    }
    if (ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x) {
        free(ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x);
        ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x = NULL;
    }
    free(ezdoctemplatedocument_response);
}

cJSON *ezdoctemplatedocument_response_convertToJSON(ezdoctemplatedocument_response_t *ezdoctemplatedocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_response->pki_ezdoctemplatedocument_id
    if (!ezdoctemplatedocument_response->pki_ezdoctemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", ezdoctemplatedocument_response->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_response->fki_language_id
    if (!ezdoctemplatedocument_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezdoctemplatedocument_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_response->fki_ezsignfoldertype_id
    if(ezdoctemplatedocument_response->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezdoctemplatedocument_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_response->fki_ezdoctemplatetype_id
    if (!ezdoctemplatedocument_response->fki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatetypeID", ezdoctemplatedocument_response->fki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_response->fki_ezdoctemplatefieldtypecategory_id
    if (!ezdoctemplatedocument_response->fki_ezdoctemplatefieldtypecategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatefieldtypecategoryID", ezdoctemplatedocument_response->fki_ezdoctemplatefieldtypecategory_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel
    if(ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel != ezmax_api_definition__full_ezdoctemplatedocument_response__NULL) {
    cJSON *e_ezdoctemplatedocument_privacylevel_local_JSON = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel);
    if(e_ezdoctemplatedocument_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzdoctemplatedocumentPrivacylevel", e_ezdoctemplatedocument_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezdoctemplatedocument_response->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_response->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", ezdoctemplatedocument_response->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name
    if (!ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_name_local_JSON = multilingual_ezdoctemplatedocument_name_convertToJSON(ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name);
    if(obj_ezdoctemplatedocument_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzdoctemplatedocumentName", obj_ezdoctemplatedocument_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x
    if(ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_response->s_ezsignfoldertype_name_x
    if(ezdoctemplatedocument_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezdoctemplatedocument_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x
    if (!ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatefieldtypecategoryDescriptionX", ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x
    if (!ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatetypeDescriptionX", ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_parseFromJSON(cJSON *ezdoctemplatedocument_responseJSON){

    ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel_local_nonprim = NULL;

    // define the local variable for ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name_local_nonprim = NULL;

    // ezdoctemplatedocument_response->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "pkiEzdoctemplatedocumentID");
    if (!pki_ezdoctemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_response->fki_ezdoctemplatetype_id
    cJSON *fki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "fkiEzdoctemplatetypeID");
    if (!fki_ezdoctemplatetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatetype_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_response->fki_ezdoctemplatefieldtypecategory_id
    cJSON *fki_ezdoctemplatefieldtypecategory_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "fkiEzdoctemplatefieldtypecategoryID");
    if (!fki_ezdoctemplatefieldtypecategory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatefieldtypecategory_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_response->e_ezdoctemplatedocument_privacylevel
    cJSON *e_ezdoctemplatedocument_privacylevel = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "eEzdoctemplatedocumentPrivacylevel");
    if (e_ezdoctemplatedocument_privacylevel) { 
    e_ezdoctemplatedocument_privacylevel_local_nonprim = field_e_ezdoctemplatedocument_privacylevel_parseFromJSON(e_ezdoctemplatedocument_privacylevel); //custom
    }

    // ezdoctemplatedocument_response->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "bEzdoctemplatedocumentIsactive");
    if (!b_ezdoctemplatedocument_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatedocument_isactive))
    {
    goto end; //Bool
    }

    // ezdoctemplatedocument_response->obj_ezdoctemplatedocument_name
    cJSON *obj_ezdoctemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "objEzdoctemplatedocumentName");
    if (!obj_ezdoctemplatedocument_name) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_name_local_nonprim = multilingual_ezdoctemplatedocument_name_parseFromJSON(obj_ezdoctemplatedocument_name); //nonprimitive

    // ezdoctemplatedocument_response->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "sEzdoctemplatedocumentNameX");
    if (s_ezdoctemplatedocument_name_x) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x) && !cJSON_IsNull(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "sEzsignfoldertypeNameX");
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_response->s_ezdoctemplatefieldtypecategory_description_x
    cJSON *s_ezdoctemplatefieldtypecategory_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "sEzdoctemplatefieldtypecategoryDescriptionX");
    if (!s_ezdoctemplatefieldtypecategory_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatefieldtypecategory_description_x))
    {
    goto end; //String
    }

    // ezdoctemplatedocument_response->s_ezdoctemplatetype_description_x
    cJSON *s_ezdoctemplatetype_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_responseJSON, "sEzdoctemplatetypeDescriptionX");
    if (!s_ezdoctemplatetype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatetype_description_x))
    {
    goto end; //String
    }


    ezdoctemplatedocument_response_local_var = ezdoctemplatedocument_response_create (
        pki_ezdoctemplatedocument_id->valuedouble,
        fki_language_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_ezdoctemplatetype_id->valuedouble,
        fki_ezdoctemplatefieldtypecategory_id->valuedouble,
        e_ezdoctemplatedocument_privacylevel ? e_ezdoctemplatedocument_privacylevel_local_nonprim : NULL,
        b_ezdoctemplatedocument_isactive->valueint,
        obj_ezdoctemplatedocument_name_local_nonprim,
        s_ezdoctemplatedocument_name_x && !cJSON_IsNull(s_ezdoctemplatedocument_name_x) ? strdup(s_ezdoctemplatedocument_name_x->valuestring) : NULL,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        strdup(s_ezdoctemplatefieldtypecategory_description_x->valuestring),
        strdup(s_ezdoctemplatetype_description_x->valuestring)
        );

    return ezdoctemplatedocument_response_local_var;
end:
    if (e_ezdoctemplatedocument_privacylevel_local_nonprim) {
        field_e_ezdoctemplatedocument_privacylevel_free(e_ezdoctemplatedocument_privacylevel_local_nonprim);
        e_ezdoctemplatedocument_privacylevel_local_nonprim = NULL;
    }
    if (obj_ezdoctemplatedocument_name_local_nonprim) {
        multilingual_ezdoctemplatedocument_name_free(obj_ezdoctemplatedocument_name_local_nonprim);
        obj_ezdoctemplatedocument_name_local_nonprim = NULL;
    }
    return NULL;

}
