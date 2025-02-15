#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_list_element.h"



static ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_create_internal(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatetype_description_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    char *s_ezdoctemplatedocument_name_x
    ) {
    ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_local_var = malloc(sizeof(ezdoctemplatedocument_list_element_t));
    if (!ezdoctemplatedocument_list_element_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_list_element_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_list_element_local_var->fki_language_id = fki_language_id;
    ezdoctemplatedocument_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezdoctemplatedocument_list_element_local_var->fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    ezdoctemplatedocument_list_element_local_var->fki_ezdoctemplatefieldtypecategory_id = fki_ezdoctemplatefieldtypecategory_id;
    ezdoctemplatedocument_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezdoctemplatedocument_list_element_local_var->s_ezdoctemplatetype_description_x = s_ezdoctemplatetype_description_x;
    ezdoctemplatedocument_list_element_local_var->s_ezdoctemplatefieldtypecategory_description_x = s_ezdoctemplatefieldtypecategory_description_x;
    ezdoctemplatedocument_list_element_local_var->e_ezdoctemplatedocument_privacylevel = e_ezdoctemplatedocument_privacylevel;
    ezdoctemplatedocument_list_element_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    ezdoctemplatedocument_list_element_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;

    ezdoctemplatedocument_list_element_local_var->_library_owned = 1;
    return ezdoctemplatedocument_list_element_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatetype_description_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    char *s_ezdoctemplatedocument_name_x
    ) {
    return ezdoctemplatedocument_list_element_create_internal (
        pki_ezdoctemplatedocument_id,
        fki_language_id,
        fki_ezsignfoldertype_id,
        fki_ezdoctemplatetype_id,
        fki_ezdoctemplatefieldtypecategory_id,
        s_ezsignfoldertype_name_x,
        s_ezdoctemplatetype_description_x,
        s_ezdoctemplatefieldtypecategory_description_x,
        e_ezdoctemplatedocument_privacylevel,
        b_ezdoctemplatedocument_isactive,
        s_ezdoctemplatedocument_name_x
        );
}

void ezdoctemplatedocument_list_element_free(ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element) {
    if(NULL == ezdoctemplatedocument_list_element){
        return ;
    }
    if(ezdoctemplatedocument_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x) {
        free(ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x);
        ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x) {
        free(ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x);
        ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x = NULL;
    }
    if (ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x) {
        free(ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x);
        ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x = NULL;
    }
    if (ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x) {
        free(ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x);
        ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x = NULL;
    }
    free(ezdoctemplatedocument_list_element);
}

cJSON *ezdoctemplatedocument_list_element_convertToJSON(ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_list_element->pki_ezdoctemplatedocument_id
    if (!ezdoctemplatedocument_list_element->pki_ezdoctemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", ezdoctemplatedocument_list_element->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_list_element->fki_language_id
    if (!ezdoctemplatedocument_list_element->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezdoctemplatedocument_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_list_element->fki_ezsignfoldertype_id
    if(ezdoctemplatedocument_list_element->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezdoctemplatedocument_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezdoctemplatedocument_list_element->fki_ezdoctemplatetype_id
    if (!ezdoctemplatedocument_list_element->fki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatetypeID", ezdoctemplatedocument_list_element->fki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_list_element->fki_ezdoctemplatefieldtypecategory_id
    if (!ezdoctemplatedocument_list_element->fki_ezdoctemplatefieldtypecategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatefieldtypecategoryID", ezdoctemplatedocument_list_element->fki_ezdoctemplatefieldtypecategory_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x
    if(ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x
    if(ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatetypeDescriptionX", ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x
    if(ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatefieldtypecategoryDescriptionX", ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezdoctemplatedocument_list_element->e_ezdoctemplatedocument_privacylevel
    if(ezdoctemplatedocument_list_element->e_ezdoctemplatedocument_privacylevel != ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__NULL) {
    cJSON *e_ezdoctemplatedocument_privacylevel_local_JSON = field_e_ezdoctemplatedocument_privacylevel_convertToJSON(ezdoctemplatedocument_list_element->e_ezdoctemplatedocument_privacylevel);
    if(e_ezdoctemplatedocument_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzdoctemplatedocumentPrivacylevel", e_ezdoctemplatedocument_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezdoctemplatedocument_list_element->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_list_element->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", ezdoctemplatedocument_list_element->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x
    if (!ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_parseFromJSON(cJSON *ezdoctemplatedocument_list_elementJSON){

    ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_list_element->e_ezdoctemplatedocument_privacylevel
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel_local_nonprim = 0;

    // ezdoctemplatedocument_list_element->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "pkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(pki_ezdoctemplatedocument_id)) {
        pki_ezdoctemplatedocument_id = NULL;
    }
    if (!pki_ezdoctemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "fkiLanguageID");
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

    // ezdoctemplatedocument_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezdoctemplatedocument_list_element->fki_ezdoctemplatetype_id
    cJSON *fki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "fkiEzdoctemplatetypeID");
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

    // ezdoctemplatedocument_list_element->fki_ezdoctemplatefieldtypecategory_id
    cJSON *fki_ezdoctemplatefieldtypecategory_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "fkiEzdoctemplatefieldtypecategoryID");
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

    // ezdoctemplatedocument_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_list_element->s_ezdoctemplatetype_description_x
    cJSON *s_ezdoctemplatetype_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "sEzdoctemplatetypeDescriptionX");
    if (cJSON_IsNull(s_ezdoctemplatetype_description_x)) {
        s_ezdoctemplatetype_description_x = NULL;
    }
    if (s_ezdoctemplatetype_description_x) { 
    if(!cJSON_IsString(s_ezdoctemplatetype_description_x) && !cJSON_IsNull(s_ezdoctemplatetype_description_x))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_list_element->s_ezdoctemplatefieldtypecategory_description_x
    cJSON *s_ezdoctemplatefieldtypecategory_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "sEzdoctemplatefieldtypecategoryDescriptionX");
    if (cJSON_IsNull(s_ezdoctemplatefieldtypecategory_description_x)) {
        s_ezdoctemplatefieldtypecategory_description_x = NULL;
    }
    if (s_ezdoctemplatefieldtypecategory_description_x) { 
    if(!cJSON_IsString(s_ezdoctemplatefieldtypecategory_description_x) && !cJSON_IsNull(s_ezdoctemplatefieldtypecategory_description_x))
    {
    goto end; //String
    }
    }

    // ezdoctemplatedocument_list_element->e_ezdoctemplatedocument_privacylevel
    cJSON *e_ezdoctemplatedocument_privacylevel = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "eEzdoctemplatedocumentPrivacylevel");
    if (cJSON_IsNull(e_ezdoctemplatedocument_privacylevel)) {
        e_ezdoctemplatedocument_privacylevel = NULL;
    }
    if (e_ezdoctemplatedocument_privacylevel) { 
    e_ezdoctemplatedocument_privacylevel_local_nonprim = field_e_ezdoctemplatedocument_privacylevel_parseFromJSON(e_ezdoctemplatedocument_privacylevel); //custom
    }

    // ezdoctemplatedocument_list_element->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "bEzdoctemplatedocumentIsactive");
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

    // ezdoctemplatedocument_list_element->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_list_elementJSON, "sEzdoctemplatedocumentNameX");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name_x)) {
        s_ezdoctemplatedocument_name_x = NULL;
    }
    if (!s_ezdoctemplatedocument_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }


    ezdoctemplatedocument_list_element_local_var = ezdoctemplatedocument_list_element_create_internal (
        pki_ezdoctemplatedocument_id->valuedouble,
        fki_language_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_ezdoctemplatetype_id->valuedouble,
        fki_ezdoctemplatefieldtypecategory_id->valuedouble,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        s_ezdoctemplatetype_description_x && !cJSON_IsNull(s_ezdoctemplatetype_description_x) ? strdup(s_ezdoctemplatetype_description_x->valuestring) : NULL,
        s_ezdoctemplatefieldtypecategory_description_x && !cJSON_IsNull(s_ezdoctemplatefieldtypecategory_description_x) ? strdup(s_ezdoctemplatefieldtypecategory_description_x->valuestring) : NULL,
        e_ezdoctemplatedocument_privacylevel ? e_ezdoctemplatedocument_privacylevel_local_nonprim : 0,
        b_ezdoctemplatedocument_isactive->valueint,
        strdup(s_ezdoctemplatedocument_name_x->valuestring)
        );

    return ezdoctemplatedocument_list_element_local_var;
end:
    if (e_ezdoctemplatedocument_privacylevel_local_nonprim) {
        e_ezdoctemplatedocument_privacylevel_local_nonprim = 0;
    }
    return NULL;

}
