#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_request_compound.h"



static ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound_create_internal(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name
    ) {
    ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound_local_var = malloc(sizeof(ezdoctemplatedocument_request_compound_t));
    if (!ezdoctemplatedocument_request_compound_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_request_compound_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_request_compound_local_var->fki_language_id = fki_language_id;
    ezdoctemplatedocument_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezdoctemplatedocument_request_compound_local_var->fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    ezdoctemplatedocument_request_compound_local_var->fki_ezdoctemplatefieldtypecategory_id = fki_ezdoctemplatefieldtypecategory_id;
    ezdoctemplatedocument_request_compound_local_var->e_ezdoctemplatedocument_privacylevel = e_ezdoctemplatedocument_privacylevel;
    ezdoctemplatedocument_request_compound_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    ezdoctemplatedocument_request_compound_local_var->obj_ezdoctemplatedocument_name = obj_ezdoctemplatedocument_name;

    ezdoctemplatedocument_request_compound_local_var->_library_owned = 1;
    return ezdoctemplatedocument_request_compound_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name
    ) {
    return ezdoctemplatedocument_request_compound_create_internal (
        pki_ezdoctemplatedocument_id,
        fki_language_id,
        fki_ezsignfoldertype_id,
        fki_ezdoctemplatetype_id,
        fki_ezdoctemplatefieldtypecategory_id,
        e_ezdoctemplatedocument_privacylevel,
        b_ezdoctemplatedocument_isactive,
        obj_ezdoctemplatedocument_name
        );
}

void ezdoctemplatedocument_request_compound_free(ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound) {
    if(NULL == ezdoctemplatedocument_request_compound){
        return ;
    }
    if(ezdoctemplatedocument_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name) {
        multilingual_ezdoctemplatedocument_name_free(ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name);
        ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name = NULL;
    }
    free(ezdoctemplatedocument_request_compound);
}

cJSON *ezdoctemplatedocument_request_compound_convertToJSON(ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_request_compound->pki_ezdoctemplatedocument_id
    if(ezdoctemplatedocument_request_compound->pki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", ezdoctemplatedocument_request_compound->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_request_compound->fki_language_id
    if (!ezdoctemplatedocument_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezdoctemplatedocument_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request_compound->fki_ezsignfoldertype_id
    if(ezdoctemplatedocument_request_compound->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezdoctemplatedocument_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_request_compound->fki_ezdoctemplatetype_id
    if (!ezdoctemplatedocument_request_compound->fki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatetypeID", ezdoctemplatedocument_request_compound->fki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request_compound->fki_ezdoctemplatefieldtypecategory_id
    if (!ezdoctemplatedocument_request_compound->fki_ezdoctemplatefieldtypecategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatefieldtypecategoryID", ezdoctemplatedocument_request_compound->fki_ezdoctemplatefieldtypecategory_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_request_compound->e_ezdoctemplatedocument_privacylevel
    if(ezdoctemplatedocument_request_compound->e_ezdoctemplatedocument_privacylevel != ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__NULL) {
    cJSON *e_ezdoctemplatedocument_privacylevel_local_JSON = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(ezdoctemplatedocument_request_compound->e_ezdoctemplatedocument_privacylevel);
    if(e_ezdoctemplatedocument_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzdoctemplatedocumentPrivacylevel", e_ezdoctemplatedocument_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezdoctemplatedocument_request_compound->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_request_compound->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", ezdoctemplatedocument_request_compound->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name
    if (!ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_name_local_JSON = multilingual_ezdoctemplatedocument_name_convertToJSON(ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name);
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

ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound_parseFromJSON(cJSON *ezdoctemplatedocument_request_compoundJSON){

    ezdoctemplatedocument_request_compound_t *ezdoctemplatedocument_request_compound_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_request_compound->e_ezdoctemplatedocument_privacylevel
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel_local_nonprim = 0;

    // define the local variable for ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name_local_nonprim = NULL;

    // ezdoctemplatedocument_request_compound->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "pkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(pki_ezdoctemplatedocument_id)) {
        pki_ezdoctemplatedocument_id = NULL;
    }
    if (pki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_request_compound->fki_ezdoctemplatetype_id
    cJSON *fki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "fkiEzdoctemplatetypeID");
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

    // ezdoctemplatedocument_request_compound->fki_ezdoctemplatefieldtypecategory_id
    cJSON *fki_ezdoctemplatefieldtypecategory_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "fkiEzdoctemplatefieldtypecategoryID");
    if (cJSON_IsNull(fki_ezdoctemplatefieldtypecategory_id)) {
        fki_ezdoctemplatefieldtypecategory_id = NULL;
    }
    if (!fki_ezdoctemplatefieldtypecategory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezdoctemplatefieldtypecategory_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_request_compound->e_ezdoctemplatedocument_privacylevel
    cJSON *e_ezdoctemplatedocument_privacylevel = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "eEzdoctemplatedocumentPrivacylevel");
    if (cJSON_IsNull(e_ezdoctemplatedocument_privacylevel)) {
        e_ezdoctemplatedocument_privacylevel = NULL;
    }
    if (e_ezdoctemplatedocument_privacylevel) { 
    e_ezdoctemplatedocument_privacylevel_local_nonprim = field_e_ezdoctemplatedocument_privacylevel_parseFromJSON(e_ezdoctemplatedocument_privacylevel); //custom
    }

    // ezdoctemplatedocument_request_compound->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "bEzdoctemplatedocumentIsactive");
    if (cJSON_IsNull(b_ezdoctemplatedocument_isactive)) {
        b_ezdoctemplatedocument_isactive = NULL;
    }
    if (!b_ezdoctemplatedocument_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatedocument_isactive))
    {
    goto end; //Bool
    }

    // ezdoctemplatedocument_request_compound->obj_ezdoctemplatedocument_name
    cJSON *obj_ezdoctemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_request_compoundJSON, "objEzdoctemplatedocumentName");
    if (cJSON_IsNull(obj_ezdoctemplatedocument_name)) {
        obj_ezdoctemplatedocument_name = NULL;
    }
    if (!obj_ezdoctemplatedocument_name) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_name_local_nonprim = multilingual_ezdoctemplatedocument_name_parseFromJSON(obj_ezdoctemplatedocument_name); //nonprimitive


    ezdoctemplatedocument_request_compound_local_var = ezdoctemplatedocument_request_compound_create_internal (
        pki_ezdoctemplatedocument_id ? pki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_language_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_ezdoctemplatetype_id->valuedouble,
        fki_ezdoctemplatefieldtypecategory_id->valuedouble,
        e_ezdoctemplatedocument_privacylevel ? e_ezdoctemplatedocument_privacylevel_local_nonprim : 0,
        b_ezdoctemplatedocument_isactive->valueint,
        obj_ezdoctemplatedocument_name_local_nonprim
        );

    return ezdoctemplatedocument_request_compound_local_var;
end:
    if (e_ezdoctemplatedocument_privacylevel_local_nonprim) {
        e_ezdoctemplatedocument_privacylevel_local_nonprim = 0;
    }
    if (obj_ezdoctemplatedocument_name_local_nonprim) {
        multilingual_ezdoctemplatedocument_name_free(obj_ezdoctemplatedocument_name_local_nonprim);
        obj_ezdoctemplatedocument_name_local_nonprim = NULL;
    }
    return NULL;

}
