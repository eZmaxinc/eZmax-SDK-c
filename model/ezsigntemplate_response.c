#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_response.h"



static ezsigntemplate_response_t *ezsigntemplate_response_create_internal(
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
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    ezsigntemplate_response_t *ezsigntemplate_response_local_var = malloc(sizeof(ezsigntemplate_response_t));
    if (!ezsigntemplate_response_local_var) {
        return NULL;
    }
    ezsigntemplate_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_response_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplate_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_response_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_response_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplate_response_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplate_response_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_response_local_var->s_ezsigntemplate_externaldescription = s_ezsigntemplate_externaldescription;
    ezsigntemplate_response_local_var->t_ezsigntemplate_comment = t_ezsigntemplate_comment;
    ezsigntemplate_response_local_var->s_ezsigntemplate_filenamepattern = s_ezsigntemplate_filenamepattern;
    ezsigntemplate_response_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_response_local_var->obj_audit = obj_audit;
    ezsigntemplate_response_local_var->b_ezsigntemplate_editallowed = b_ezsigntemplate_editallowed;
    ezsigntemplate_response_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;

    ezsigntemplate_response_local_var->_library_owned = 1;
    return ezsigntemplate_response_local_var;
}

__attribute__((deprecated)) ezsigntemplate_response_t *ezsigntemplate_response_create(
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
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    return ezsigntemplate_response_create_internal (
        pki_ezsigntemplate_id,
        fki_ezsigntemplatedocument_id,
        fki_ezsignfoldertype_id,
        fki_language_id,
        fki_ezdoctemplatedocument_id,
        s_language_name_x,
        s_ezsigntemplate_description,
        s_ezsigntemplate_externaldescription,
        t_ezsigntemplate_comment,
        s_ezsigntemplate_filenamepattern,
        b_ezsigntemplate_adminonly,
        s_ezsignfoldertype_name_x,
        obj_audit,
        b_ezsigntemplate_editallowed,
        e_ezsigntemplate_type
        );
}

void ezsigntemplate_response_free(ezsigntemplate_response_t *ezsigntemplate_response) {
    if(NULL == ezsigntemplate_response){
        return ;
    }
    if(ezsigntemplate_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_response->s_language_name_x) {
        free(ezsigntemplate_response->s_language_name_x);
        ezsigntemplate_response->s_language_name_x = NULL;
    }
    if (ezsigntemplate_response->s_ezsigntemplate_description) {
        free(ezsigntemplate_response->s_ezsigntemplate_description);
        ezsigntemplate_response->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_response->s_ezsigntemplate_externaldescription) {
        free(ezsigntemplate_response->s_ezsigntemplate_externaldescription);
        ezsigntemplate_response->s_ezsigntemplate_externaldescription = NULL;
    }
    if (ezsigntemplate_response->t_ezsigntemplate_comment) {
        free(ezsigntemplate_response->t_ezsigntemplate_comment);
        ezsigntemplate_response->t_ezsigntemplate_comment = NULL;
    }
    if (ezsigntemplate_response->s_ezsigntemplate_filenamepattern) {
        free(ezsigntemplate_response->s_ezsigntemplate_filenamepattern);
        ezsigntemplate_response->s_ezsigntemplate_filenamepattern = NULL;
    }
    if (ezsigntemplate_response->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_response->s_ezsignfoldertype_name_x);
        ezsigntemplate_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplate_response->obj_audit) {
        common_audit_free(ezsigntemplate_response->obj_audit);
        ezsigntemplate_response->obj_audit = NULL;
    }
    free(ezsigntemplate_response);
}

cJSON *ezsigntemplate_response_convertToJSON(ezsigntemplate_response_t *ezsigntemplate_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_response->pki_ezsigntemplate_id
    if (!ezsigntemplate_response->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response->fki_ezsigntemplatedocument_id
    if(ezsigntemplate_response->fki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplate_response->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response->fki_ezsignfoldertype_id
    if(ezsigntemplate_response->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response->fki_language_id
    if (!ezsigntemplate_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response->fki_ezdoctemplatedocument_id
    if(ezsigntemplate_response->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplate_response->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response->s_language_name_x
    if (!ezsigntemplate_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplate_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response->s_ezsigntemplate_description
    if (!ezsigntemplate_response->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_response->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response->s_ezsigntemplate_externaldescription
    if(ezsigntemplate_response->s_ezsigntemplate_externaldescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateExternaldescription", ezsigntemplate_response->s_ezsigntemplate_externaldescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response->t_ezsigntemplate_comment
    if(ezsigntemplate_response->t_ezsigntemplate_comment) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateComment", ezsigntemplate_response->t_ezsigntemplate_comment) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response->s_ezsigntemplate_filenamepattern
    if(ezsigntemplate_response->s_ezsigntemplate_filenamepattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenamepattern", ezsigntemplate_response->s_ezsigntemplate_filenamepattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_response->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_response->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response->s_ezsignfoldertype_name_x
    if(ezsigntemplate_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response->obj_audit
    if (!ezsigntemplate_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigntemplate_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplate_response->b_ezsigntemplate_editallowed
    if (!ezsigntemplate_response->b_ezsigntemplate_editallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateEditallowed", ezsigntemplate_response->b_ezsigntemplate_editallowed) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response->e_ezsigntemplate_type
    if(ezsigntemplate_response->e_ezsigntemplate_type != ezmax_api_definition__full_field_e_ezsigntemplate_type__NULL) {
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_response->e_ezsigntemplate_type);
    if(e_ezsigntemplate_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateType", e_ezsigntemplate_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_response_t *ezsigntemplate_response_parseFromJSON(cJSON *ezsigntemplate_responseJSON){

    ezsigntemplate_response_t *ezsigntemplate_response_local_var = NULL;

    // define the local variable for ezsigntemplate_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_response->e_ezsigntemplate_type
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type_local_nonprim = 0;

    // ezsigntemplate_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "pkiEzsigntemplateID");
    if (cJSON_IsNull(pki_ezsigntemplate_id)) {
        pki_ezsigntemplate_id = NULL;
    }
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(fki_ezsigntemplatedocument_id)) {
        fki_ezsigntemplatedocument_id = NULL;
    }
    if (fki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiLanguageID");
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

    // ezsigntemplate_response->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sLanguageNameX");
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

    // ezsigntemplate_response->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsigntemplateDescription");
    if (cJSON_IsNull(s_ezsigntemplate_description)) {
        s_ezsigntemplate_description = NULL;
    }
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_response->s_ezsigntemplate_externaldescription
    cJSON *s_ezsigntemplate_externaldescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsigntemplateExternaldescription");
    if (cJSON_IsNull(s_ezsigntemplate_externaldescription)) {
        s_ezsigntemplate_externaldescription = NULL;
    }
    if (s_ezsigntemplate_externaldescription) { 
    if(!cJSON_IsString(s_ezsigntemplate_externaldescription) && !cJSON_IsNull(s_ezsigntemplate_externaldescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response->t_ezsigntemplate_comment
    cJSON *t_ezsigntemplate_comment = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "tEzsigntemplateComment");
    if (cJSON_IsNull(t_ezsigntemplate_comment)) {
        t_ezsigntemplate_comment = NULL;
    }
    if (t_ezsigntemplate_comment) { 
    if(!cJSON_IsString(t_ezsigntemplate_comment) && !cJSON_IsNull(t_ezsigntemplate_comment))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response->s_ezsigntemplate_filenamepattern
    cJSON *s_ezsigntemplate_filenamepattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsigntemplateFilenamepattern");
    if (cJSON_IsNull(s_ezsigntemplate_filenamepattern)) {
        s_ezsigntemplate_filenamepattern = NULL;
    }
    if (s_ezsigntemplate_filenamepattern) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenamepattern) && !cJSON_IsNull(s_ezsigntemplate_filenamepattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "bEzsigntemplateAdminonly");
    if (cJSON_IsNull(b_ezsigntemplate_adminonly)) {
        b_ezsigntemplate_adminonly = NULL;
    }
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplate_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsigntemplate_response->b_ezsigntemplate_editallowed
    cJSON *b_ezsigntemplate_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "bEzsigntemplateEditallowed");
    if (cJSON_IsNull(b_ezsigntemplate_editallowed)) {
        b_ezsigntemplate_editallowed = NULL;
    }
    if (!b_ezsigntemplate_editallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_editallowed))
    {
    goto end; //Bool
    }

    // ezsigntemplate_response->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "eEzsigntemplateType");
    if (cJSON_IsNull(e_ezsigntemplate_type)) {
        e_ezsigntemplate_type = NULL;
    }
    if (e_ezsigntemplate_type) { 
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom
    }


    ezsigntemplate_response_local_var = ezsigntemplate_response_create_internal (
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
        e_ezsigntemplate_type ? e_ezsigntemplate_type_local_nonprim : 0
        );

    return ezsigntemplate_response_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (e_ezsigntemplate_type_local_nonprim) {
        e_ezsigntemplate_type_local_nonprim = 0;
    }
    return NULL;

}
