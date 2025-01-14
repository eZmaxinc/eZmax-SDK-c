#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_request.h"


char* ezdoctemplatedocument_request_e_ezdoctemplatedocument_privacylevel_ToString(ezmax_api_definition__full_ezdoctemplatedocument_request__e e_ezdoctemplatedocument_privacylevel) {
    char* e_ezdoctemplatedocument_privacylevelArray[] =  { "NULL", "Company", "Ezsignfoldertype", "User" };
    return e_ezdoctemplatedocument_privacylevelArray[e_ezdoctemplatedocument_privacylevel];
}

ezmax_api_definition__full_ezdoctemplatedocument_request__e ezdoctemplatedocument_request_e_ezdoctemplatedocument_privacylevel_FromString(char* e_ezdoctemplatedocument_privacylevel){
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

ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name
    ) {
    ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_local_var = malloc(sizeof(ezdoctemplatedocument_request_t));
    if (!ezdoctemplatedocument_request_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_request_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_request_local_var->fki_language_id = fki_language_id;
    ezdoctemplatedocument_request_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezdoctemplatedocument_request_local_var->fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    ezdoctemplatedocument_request_local_var->fki_ezdoctemplatefieldtypecategory_id = fki_ezdoctemplatefieldtypecategory_id;
    ezdoctemplatedocument_request_local_var->e_ezdoctemplatedocument_privacylevel = e_ezdoctemplatedocument_privacylevel;
    ezdoctemplatedocument_request_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    ezdoctemplatedocument_request_local_var->obj_ezdoctemplatedocument_name = obj_ezdoctemplatedocument_name;

    return ezdoctemplatedocument_request_local_var;
}


void ezdoctemplatedocument_request_free(ezdoctemplatedocument_request_t *ezdoctemplatedocument_request) {
    if(NULL == ezdoctemplatedocument_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel) {
        field_e_ezdoctemplatedocument_privacylevel_free(ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel);
        ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel = NULL;
    }
    if (ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name) {
        multilingual_ezdoctemplatedocument_name_free(ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name);
        ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name = NULL;
    }
    free(ezdoctemplatedocument_request);
}

cJSON *ezdoctemplatedocument_request_convertToJSON(ezdoctemplatedocument_request_t *ezdoctemplatedocument_request) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_request->pki_ezdoctemplatedocument_id
    if(ezdoctemplatedocument_request->pki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", ezdoctemplatedocument_request->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_request->fki_language_id
    if (!ezdoctemplatedocument_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezdoctemplatedocument_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request->fki_ezsignfoldertype_id
    if(ezdoctemplatedocument_request->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezdoctemplatedocument_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_request->fki_ezdoctemplatetype_id
    if (!ezdoctemplatedocument_request->fki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatetypeID", ezdoctemplatedocument_request->fki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request->fki_ezdoctemplatefieldtypecategory_id
    if (!ezdoctemplatedocument_request->fki_ezdoctemplatefieldtypecategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatefieldtypecategoryID", ezdoctemplatedocument_request->fki_ezdoctemplatefieldtypecategory_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel
    if(ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel != ezmax_api_definition__full_ezdoctemplatedocument_request__NULL) {
    cJSON *e_ezdoctemplatedocument_privacylevel_local_JSON = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel);
    if(e_ezdoctemplatedocument_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzdoctemplatedocumentPrivacylevel", e_ezdoctemplatedocument_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezdoctemplatedocument_request->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_request->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", ezdoctemplatedocument_request->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name
    if (!ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_name_local_JSON = multilingual_ezdoctemplatedocument_name_convertToJSON(ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name);
    if(obj_ezdoctemplatedocument_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzdoctemplatedocumentName", obj_ezdoctemplatedocument_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_parseFromJSON(cJSON *ezdoctemplatedocument_requestJSON){

    ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel_local_nonprim = NULL;

    // define the local variable for ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name_local_nonprim = NULL;

    // ezdoctemplatedocument_request->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "pkiEzdoctemplatedocumentID");
    if (pki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_request->fki_ezdoctemplatetype_id
    cJSON *fki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "fkiEzdoctemplatetypeID");
    if (!fki_ezdoctemplatetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatetype_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_request->fki_ezdoctemplatefieldtypecategory_id
    cJSON *fki_ezdoctemplatefieldtypecategory_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "fkiEzdoctemplatefieldtypecategoryID");
    if (!fki_ezdoctemplatefieldtypecategory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatefieldtypecategory_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_request->e_ezdoctemplatedocument_privacylevel
    cJSON *e_ezdoctemplatedocument_privacylevel = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "eEzdoctemplatedocumentPrivacylevel");
    if (e_ezdoctemplatedocument_privacylevel) { 
    e_ezdoctemplatedocument_privacylevel_local_nonprim = field_e_ezdoctemplatedocument_privacylevel_parseFromJSON(e_ezdoctemplatedocument_privacylevel); //custom
    }

    // ezdoctemplatedocument_request->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "bEzdoctemplatedocumentIsactive");
    if (!b_ezdoctemplatedocument_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatedocument_isactive))
    {
    goto end; //Bool
    }

    // ezdoctemplatedocument_request->obj_ezdoctemplatedocument_name
    cJSON *obj_ezdoctemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_requestJSON, "objEzdoctemplatedocumentName");
    if (!obj_ezdoctemplatedocument_name) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_name_local_nonprim = multilingual_ezdoctemplatedocument_name_parseFromJSON(obj_ezdoctemplatedocument_name); //nonprimitive


    ezdoctemplatedocument_request_local_var = ezdoctemplatedocument_request_create (
        pki_ezdoctemplatedocument_id ? pki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_language_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_ezdoctemplatetype_id->valuedouble,
        fki_ezdoctemplatefieldtypecategory_id->valuedouble,
        e_ezdoctemplatedocument_privacylevel ? e_ezdoctemplatedocument_privacylevel_local_nonprim : NULL,
        b_ezdoctemplatedocument_isactive->valueint,
        obj_ezdoctemplatedocument_name_local_nonprim
        );

    return ezdoctemplatedocument_request_local_var;
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
