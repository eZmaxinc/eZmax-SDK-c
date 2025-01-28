#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_response_compound.h"



static ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound_create_internal(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_editallowed,
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound_local_var = malloc(sizeof(ezsigntemplatepackage_response_compound_t));
    if (!ezsigntemplatepackage_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_response_compound_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_response_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackage_response_compound_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_response_compound_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezsigntemplatepackage_response_compound_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplatepackage_response_compound_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_response_compound_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_response_compound_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackage_response_compound_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepackage_response_compound_local_var->b_ezsigntemplatepackage_editallowed = b_ezsigntemplatepackage_editallowed;
    ezsigntemplatepackage_response_compound_local_var->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;
    ezsigntemplatepackage_response_compound_local_var->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;

    ezsigntemplatepackage_response_compound_local_var->_library_owned = 1;
    return ezsigntemplatepackage_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_editallowed,
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    return ezsigntemplatepackage_response_compound_create_internal (
        pki_ezsigntemplatepackage_id,
        fki_ezsignfoldertype_id,
        fki_ezdoctemplatedocument_id,
        fki_language_id,
        s_ezdoctemplatedocument_name_x,
        s_language_name_x,
        s_ezsigntemplatepackage_description,
        b_ezsigntemplatepackage_adminonly,
        b_ezsigntemplatepackage_needvalidation,
        b_ezsigntemplatepackage_isactive,
        s_ezsignfoldertype_name_x,
        b_ezsigntemplatepackage_editallowed,
        a_obj_ezsigntemplatepackagesigner,
        a_obj_ezsigntemplatepackagemembership
        );
}

void ezsigntemplatepackage_response_compound_free(ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound) {
    if(NULL == ezsigntemplatepackage_response_compound){
        return ;
    }
    if(ezsigntemplatepackage_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x) {
        free(ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x);
        ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x = NULL;
    }
    if (ezsigntemplatepackage_response_compound->s_language_name_x) {
        free(ezsigntemplatepackage_response_compound->s_language_name_x);
        ezsigntemplatepackage_response_compound->s_language_name_x = NULL;
    }
    if (ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x);
        ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner) {
        list_ForEach(listEntry, ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner = NULL;
    }
    if (ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership) {
        list_ForEach(listEntry, ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership);
        ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership = NULL;
    }
    free(ezsigntemplatepackage_response_compound);
}

cJSON *ezsigntemplatepackage_response_compound_convertToJSON(ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_response_compound->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_response_compound->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_response_compound->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response_compound->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_response_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackage_response_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplatepackage_response_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_response_compound->fki_language_id
    if (!ezsigntemplatepackage_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x
    if(ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatepackage_response_compound->s_language_name_x
    if (!ezsigntemplatepackage_response_compound->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplatepackage_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_adminonly
    if (!ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_editallowed
    if (!ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_editallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageEditallowed", ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_editallowed) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesigner");
    if(a_obj_ezsigntemplatepackagesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignerListEntry;
    if (ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner) {
    list_ForEach(a_obj_ezsigntemplatepackagesignerListEntry, ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner) {
    cJSON *itemLocal = ezsigntemplatepackagesigner_response_compound_convertToJSON(a_obj_ezsigntemplatepackagesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesigner, itemLocal);
    }
    }


    // ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagemembership");
    if(a_obj_ezsigntemplatepackagemembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagemembershipListEntry;
    if (ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership) {
    list_ForEach(a_obj_ezsigntemplatepackagemembershipListEntry, ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership) {
    cJSON *itemLocal = ezsigntemplatepackagemembership_response_compound_convertToJSON(a_obj_ezsigntemplatepackagemembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagemembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound_parseFromJSON(cJSON *ezsigntemplatepackage_response_compoundJSON){

    ezsigntemplatepackage_response_compound_t *ezsigntemplatepackage_response_compound_local_var = NULL;

    // define the local list for ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner
    list_t *a_obj_ezsigntemplatepackagesignerList = NULL;

    // define the local list for ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership
    list_t *a_obj_ezsigntemplatepackagemembershipList = NULL;

    // ezsigntemplatepackage_response_compound->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "pkiEzsigntemplatepackageID");
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

    // ezsigntemplatepackage_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "fkiEzsignfoldertypeID");
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

    // ezsigntemplatepackage_response_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackage_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "fkiLanguageID");
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

    // ezsigntemplatepackage_response_compound->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "sEzdoctemplatedocumentNameX");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name_x)) {
        s_ezdoctemplatedocument_name_x = NULL;
    }
    if (s_ezdoctemplatedocument_name_x) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x) && !cJSON_IsNull(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplatepackage_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_response_compound->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "sEzsigntemplatepackageDescription");
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

    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "bEzsigntemplatepackageAdminonly");
    if (cJSON_IsNull(b_ezsigntemplatepackage_adminonly)) {
        b_ezsigntemplatepackage_adminonly = NULL;
    }
    if (!b_ezsigntemplatepackage_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "bEzsigntemplatepackageNeedvalidation");
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

    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "bEzsigntemplatepackageIsactive");
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

    // ezsigntemplatepackage_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "sEzsignfoldertypeNameX");
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

    // ezsigntemplatepackage_response_compound->b_ezsigntemplatepackage_editallowed
    cJSON *b_ezsigntemplatepackage_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "bEzsigntemplatepackageEditallowed");
    if (cJSON_IsNull(b_ezsigntemplatepackage_editallowed)) {
        b_ezsigntemplatepackage_editallowed = NULL;
    }
    if (!b_ezsigntemplatepackage_editallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_editallowed))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagesigner
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "a_objEzsigntemplatepackagesigner");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackagesigner)) {
        a_obj_ezsigntemplatepackagesigner = NULL;
    }
    if (!a_obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesigner_local_nonprimitive,a_obj_ezsigntemplatepackagesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesigner_response_compound_t *a_obj_ezsigntemplatepackagesignerItem = ezsigntemplatepackagesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignerList, a_obj_ezsigntemplatepackagesignerItem);
    }

    // ezsigntemplatepackage_response_compound->a_obj_ezsigntemplatepackagemembership
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_response_compoundJSON, "a_objEzsigntemplatepackagemembership");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackagemembership)) {
        a_obj_ezsigntemplatepackagemembership = NULL;
    }
    if (!a_obj_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagemembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagemembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagemembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagemembership_local_nonprimitive,a_obj_ezsigntemplatepackagemembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagemembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagemembership_response_compound_t *a_obj_ezsigntemplatepackagemembershipItem = ezsigntemplatepackagemembership_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagemembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagemembershipList, a_obj_ezsigntemplatepackagemembershipItem);
    }


    ezsigntemplatepackage_response_compound_local_var = ezsigntemplatepackage_response_compound_create_internal (
        pki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_language_id->valuedouble,
        s_ezdoctemplatedocument_name_x && !cJSON_IsNull(s_ezdoctemplatedocument_name_x) ? strdup(s_ezdoctemplatedocument_name_x->valuestring) : NULL,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_adminonly->valueint,
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsigntemplatepackage_isactive->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsigntemplatepackage_editallowed->valueint,
        a_obj_ezsigntemplatepackagesignerList,
        a_obj_ezsigntemplatepackagemembershipList
        );

    return ezsigntemplatepackage_response_compound_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignerList) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignerList);
        a_obj_ezsigntemplatepackagesignerList = NULL;
    }
    if (a_obj_ezsigntemplatepackagemembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagemembershipList) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagemembershipList);
        a_obj_ezsigntemplatepackagemembershipList = NULL;
    }
    return NULL;

}
