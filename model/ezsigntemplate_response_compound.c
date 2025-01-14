#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_response_compound.h"


char* ezsigntemplate_response_compound_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_response_compound__e e_ezsigntemplate_type) {
    char* e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company", "Ezsignfoldertype" };
    return e_ezsigntemplate_typeArray[e_ezsigntemplate_type];
}

ezmax_api_definition__full_ezsigntemplate_response_compound__e ezsigntemplate_response_compound_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type){
    int stringToReturn = 0;
    char *e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company", "Ezsignfoldertype" };
    size_t sizeofArray = sizeof(e_ezsigntemplate_typeArray) / sizeof(e_ezsigntemplate_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplate_type, e_ezsigntemplate_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    int fki_ezdoctemplatedocument_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
    ) {
    ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_local_var = malloc(sizeof(ezsigntemplate_response_compound_t));
    if (!ezsigntemplate_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplate_response_compound_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_response_compound_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplate_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_response_compound_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_response_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplate_response_compound_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplate_response_compound_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_response_compound_local_var->s_ezsigntemplate_externaldescription = s_ezsigntemplate_externaldescription;
    ezsigntemplate_response_compound_local_var->t_ezsigntemplate_comment = t_ezsigntemplate_comment;
    ezsigntemplate_response_compound_local_var->s_ezsigntemplate_filenamepattern = s_ezsigntemplate_filenamepattern;
    ezsigntemplate_response_compound_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_response_compound_local_var->obj_audit = obj_audit;
    ezsigntemplate_response_compound_local_var->b_ezsigntemplate_editallowed = b_ezsigntemplate_editallowed;
    ezsigntemplate_response_compound_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;
    ezsigntemplate_response_compound_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    ezsigntemplate_response_compound_local_var->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;

    return ezsigntemplate_response_compound_local_var;
}


void ezsigntemplate_response_compound_free(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound) {
    if(NULL == ezsigntemplate_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_response_compound->s_language_name_x) {
        free(ezsigntemplate_response_compound->s_language_name_x);
        ezsigntemplate_response_compound->s_language_name_x = NULL;
    }
    if (ezsigntemplate_response_compound->s_ezsigntemplate_description) {
        free(ezsigntemplate_response_compound->s_ezsigntemplate_description);
        ezsigntemplate_response_compound->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription) {
        free(ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription);
        ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription = NULL;
    }
    if (ezsigntemplate_response_compound->t_ezsigntemplate_comment) {
        free(ezsigntemplate_response_compound->t_ezsigntemplate_comment);
        ezsigntemplate_response_compound->t_ezsigntemplate_comment = NULL;
    }
    if (ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern) {
        free(ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern);
        ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern = NULL;
    }
    if (ezsigntemplate_response_compound->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_response_compound->s_ezsignfoldertype_name_x);
        ezsigntemplate_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplate_response_compound->obj_audit) {
        common_audit_free(ezsigntemplate_response_compound->obj_audit);
        ezsigntemplate_response_compound->obj_audit = NULL;
    }
    if (ezsigntemplate_response_compound->e_ezsigntemplate_type) {
        field_e_ezsigntemplate_type_free(ezsigntemplate_response_compound->e_ezsigntemplate_type);
        ezsigntemplate_response_compound->e_ezsigntemplate_type = NULL;
    }
    if (ezsigntemplate_response_compound->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_response_free(ezsigntemplate_response_compound->obj_ezsigntemplatedocument);
        ezsigntemplate_response_compound->obj_ezsigntemplatedocument = NULL;
    }
    if (ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner);
        ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplate_response_compound);
}

cJSON *ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_response_compound->pki_ezsigntemplate_id
    if (!ezsigntemplate_response_compound->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_response_compound->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response_compound->fki_ezsigntemplatedocument_id
    if(ezsigntemplate_response_compound->fki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplate_response_compound->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound->fki_ezsignfoldertype_id
    if(ezsigntemplate_response_compound->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound->fki_language_id
    if (!ezsigntemplate_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplate_response_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplate_response_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound->s_language_name_x
    if (!ezsigntemplate_response_compound->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplate_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response_compound->s_ezsigntemplate_description
    if (!ezsigntemplate_response_compound->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_response_compound->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription
    if(ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateExternaldescription", ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound->t_ezsigntemplate_comment
    if(ezsigntemplate_response_compound->t_ezsigntemplate_comment) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateComment", ezsigntemplate_response_compound->t_ezsigntemplate_comment) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern
    if(ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenamepattern", ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_response_compound->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_response_compound->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response_compound->s_ezsignfoldertype_name_x
    if(ezsigntemplate_response_compound->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound->obj_audit
    if (!ezsigntemplate_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigntemplate_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplate_response_compound->b_ezsigntemplate_editallowed
    if (!ezsigntemplate_response_compound->b_ezsigntemplate_editallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateEditallowed", ezsigntemplate_response_compound->b_ezsigntemplate_editallowed) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response_compound->e_ezsigntemplate_type
    if(ezsigntemplate_response_compound->e_ezsigntemplate_type != ezmax_api_definition__full_ezsigntemplate_response_compound__NULL) {
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_response_compound->e_ezsigntemplate_type);
    if(e_ezsigntemplate_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateType", e_ezsigntemplate_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplate_response_compound->obj_ezsigntemplatedocument
    if(ezsigntemplate_response_compound->obj_ezsigntemplatedocument) {
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_response_convertToJSON(ezsigntemplate_response_compound->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner
    if (!ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesigner");
    if(a_obj_ezsigntemplatesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignerListEntry;
    if (ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner) {
    list_ForEach(a_obj_ezsigntemplatesignerListEntry, ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner) {
    cJSON *itemLocal = ezsigntemplatesigner_response_compound_convertToJSON(a_obj_ezsigntemplatesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_parseFromJSON(cJSON *ezsigntemplate_response_compoundJSON){

    ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_response_compound->e_ezsigntemplate_type
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_response_compound->obj_ezsigntemplatedocument
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // define the local list for ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner
    list_t *a_obj_ezsigntemplatesignerList = NULL;

    // ezsigntemplate_response_compound->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "pkiEzsigntemplateID");
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response_compound->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "fkiEzsigntemplatedocumentID");
    if (fki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "fkiEzdoctemplatedocumentID");
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplate_response_compound->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_response_compound->s_ezsigntemplate_externaldescription
    cJSON *s_ezsigntemplate_externaldescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "sEzsigntemplateExternaldescription");
    if (s_ezsigntemplate_externaldescription) { 
    if(!cJSON_IsString(s_ezsigntemplate_externaldescription) && !cJSON_IsNull(s_ezsigntemplate_externaldescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound->t_ezsigntemplate_comment
    cJSON *t_ezsigntemplate_comment = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "tEzsigntemplateComment");
    if (t_ezsigntemplate_comment) { 
    if(!cJSON_IsString(t_ezsigntemplate_comment) && !cJSON_IsNull(t_ezsigntemplate_comment))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound->s_ezsigntemplate_filenamepattern
    cJSON *s_ezsigntemplate_filenamepattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "sEzsigntemplateFilenamepattern");
    if (s_ezsigntemplate_filenamepattern) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenamepattern) && !cJSON_IsNull(s_ezsigntemplate_filenamepattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "bEzsigntemplateAdminonly");
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplate_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "sEzsignfoldertypeNameX");
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsigntemplate_response_compound->b_ezsigntemplate_editallowed
    cJSON *b_ezsigntemplate_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "bEzsigntemplateEditallowed");
    if (!b_ezsigntemplate_editallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_editallowed))
    {
    goto end; //Bool
    }

    // ezsigntemplate_response_compound->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "eEzsigntemplateType");
    if (e_ezsigntemplate_type) { 
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom
    }

    // ezsigntemplate_response_compound->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "objEzsigntemplatedocument");
    if (obj_ezsigntemplatedocument) { 
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_response_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive
    }

    // ezsigntemplate_response_compound->a_obj_ezsigntemplatesigner
    cJSON *a_obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compoundJSON, "a_objEzsigntemplatesigner");
    if (!a_obj_ezsigntemplatesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesigner_local_nonprimitive,a_obj_ezsigntemplatesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesigner_response_compound_t *a_obj_ezsigntemplatesignerItem = ezsigntemplatesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignerList, a_obj_ezsigntemplatesignerItem);
    }


    ezsigntemplate_response_compound_local_var = ezsigntemplate_response_compound_create (
        pki_ezsigntemplate_id->valuedouble,
        fki_ezsigntemplatedocument_id ? fki_ezsigntemplatedocument_id->valuedouble : 0,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_language_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplate_description->valuestring),
        s_ezsigntemplate_externaldescription && !cJSON_IsNull(s_ezsigntemplate_externaldescription) ? strdup(s_ezsigntemplate_externaldescription->valuestring) : NULL,
        t_ezsigntemplate_comment && !cJSON_IsNull(t_ezsigntemplate_comment) ? strdup(t_ezsigntemplate_comment->valuestring) : NULL,
        s_ezsigntemplate_filenamepattern && !cJSON_IsNull(s_ezsigntemplate_filenamepattern) ? strdup(s_ezsigntemplate_filenamepattern->valuestring) : NULL,
        b_ezsigntemplate_adminonly->valueint,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        obj_audit_local_nonprim,
        b_ezsigntemplate_editallowed->valueint,
        e_ezsigntemplate_type ? e_ezsigntemplate_type_local_nonprim : NULL,
        obj_ezsigntemplatedocument ? obj_ezsigntemplatedocument_local_nonprim : NULL,
        a_obj_ezsigntemplatesignerList
        );

    return ezsigntemplate_response_compound_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (e_ezsigntemplate_type_local_nonprim) {
        field_e_ezsigntemplate_type_free(e_ezsigntemplate_type_local_nonprim);
        e_ezsigntemplate_type_local_nonprim = NULL;
    }
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_response_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignerList) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignerList);
        a_obj_ezsigntemplatesignerList = NULL;
    }
    return NULL;

}
