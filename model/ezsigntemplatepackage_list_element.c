#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_list_element.h"



static ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_create_internal(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_needvalidation,
    int i_ezsigntemplatepackagemembership,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_isactive
    ) {
    ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_local_var = malloc(sizeof(ezsigntemplatepackage_list_element_t));
    if (!ezsigntemplatepackage_list_element_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_list_element_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_list_element_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_list_element_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_list_element_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackage_list_element_local_var->i_ezsigntemplatepackagemembership = i_ezsigntemplatepackagemembership;
    ezsigntemplatepackage_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepackage_list_element_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;

    ezsigntemplatepackage_list_element_local_var->_library_owned = 1;
    return ezsigntemplatepackage_list_element_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_needvalidation,
    int i_ezsigntemplatepackagemembership,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_isactive
    ) {
    return ezsigntemplatepackage_list_element_create_internal (
        pki_ezsigntemplatepackage_id,
        fki_ezsignfoldertype_id,
        fki_language_id,
        s_ezsigntemplatepackage_description,
        b_ezsigntemplatepackage_needvalidation,
        i_ezsigntemplatepackagemembership,
        s_ezsignfoldertype_name_x,
        b_ezsigntemplatepackage_isactive
        );
}

void ezsigntemplatepackage_list_element_free(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element) {
    if(NULL == ezsigntemplatepackage_list_element){
        return ;
    }
    if(ezsigntemplatepackage_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x);
        ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsigntemplatepackage_list_element);
}

cJSON *ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->fki_language_id
    if (!ezsigntemplatepackage_list_element->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagemembership", ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_parseFromJSON(cJSON *ezsigntemplatepackage_list_elementJSON){

    ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_local_var = NULL;

    // ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "pkiEzsigntemplatepackageID");
    if (cJSON_IsNull(pki_ezsigntemplatepackage_id)) {
        pki_ezsigntemplatepackage_id = NULL;
    }
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiLanguageID");
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

    // ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "sEzsigntemplatepackageDescription");
    if (cJSON_IsNull(s_ezsigntemplatepackage_description)) {
        s_ezsigntemplatepackage_description = NULL;
    }
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "bEzsigntemplatepackageNeedvalidation");
    if (cJSON_IsNull(b_ezsigntemplatepackage_needvalidation)) {
        b_ezsigntemplatepackage_needvalidation = NULL;
    }
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership
    cJSON *i_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "iEzsigntemplatepackagemembership");
    if (cJSON_IsNull(i_ezsigntemplatepackagemembership)) {
        i_ezsigntemplatepackagemembership = NULL;
    }
    if (!i_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepackagemembership))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "bEzsigntemplatepackageIsactive");
    if (cJSON_IsNull(b_ezsigntemplatepackage_isactive)) {
        b_ezsigntemplatepackage_isactive = NULL;
    }
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }


    ezsigntemplatepackage_list_element_local_var = ezsigntemplatepackage_list_element_create_internal (
        pki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_needvalidation->valueint,
        i_ezsigntemplatepackagemembership->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsigntemplatepackage_isactive->valueint
        );

    return ezsigntemplatepackage_list_element_local_var;
end:
    return NULL;

}
