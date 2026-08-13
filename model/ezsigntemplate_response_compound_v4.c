#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_response_compound_v4.h"



static ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4_create_internal(
    int *pki_ezsigntemplate_id,
    int *fki_ezsigntemplatedocument_id,
    int *fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_template_response_t *obj_ezsignfoldertype,
    int *fki_language_id,
    int *fki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int *b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int *b_ezsigntemplate_editallowed,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner,
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4_local_var = malloc(sizeof(ezsigntemplate_response_compound_v4_t));
    if (!ezsigntemplate_response_compound_v4_local_var) {
        return NULL;
    }
    memset(ezsigntemplate_response_compound_v4_local_var, 0, sizeof(ezsigntemplate_response_compound_v4_t));
    ezsigntemplate_response_compound_v4_local_var->_library_owned = 1;
    ezsigntemplate_response_compound_v4_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_response_compound_v4_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplate_response_compound_v4_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_response_compound_v4_local_var->obj_ezsignfoldertype = obj_ezsignfoldertype;
    ezsigntemplate_response_compound_v4_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_response_compound_v4_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplate_response_compound_v4_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezsigntemplate_response_compound_v4_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplate_response_compound_v4_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_response_compound_v4_local_var->s_ezsigntemplate_externaldescription = s_ezsigntemplate_externaldescription;
    ezsigntemplate_response_compound_v4_local_var->t_ezsigntemplate_comment = t_ezsigntemplate_comment;
    ezsigntemplate_response_compound_v4_local_var->e_ezsigntemplate_recognition = e_ezsigntemplate_recognition;
    ezsigntemplate_response_compound_v4_local_var->s_ezsigntemplate_filenameregexp = s_ezsigntemplate_filenameregexp;
    ezsigntemplate_response_compound_v4_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_response_compound_v4_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_response_compound_v4_local_var->obj_audit = obj_audit;
    ezsigntemplate_response_compound_v4_local_var->b_ezsigntemplate_editallowed = b_ezsigntemplate_editallowed;
    ezsigntemplate_response_compound_v4_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;
    ezsigntemplate_response_compound_v4_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    ezsigntemplate_response_compound_v4_local_var->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;
    ezsigntemplate_response_compound_v4_local_var->a_obj_ezsigntemplateannotation = a_obj_ezsigntemplateannotation;
    return ezsigntemplate_response_compound_v4_local_var;
}

__attribute__((deprecated)) ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4_create(
    int *pki_ezsigntemplate_id,
    int *fki_ezsigntemplatedocument_id,
    int *fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_template_response_t *obj_ezsignfoldertype,
    int *fki_language_id,
    int *fki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int *b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int *b_ezsigntemplate_editallowed,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner,
    list_t *a_obj_ezsigntemplateannotation
    ) {
    int *pki_ezsigntemplate_id_copy = NULL;
    if (pki_ezsigntemplate_id) {
        pki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplate_id_copy) *pki_ezsigntemplate_id_copy = *pki_ezsigntemplate_id;
    }
    int *fki_ezsigntemplatedocument_id_copy = NULL;
    if (fki_ezsigntemplatedocument_id) {
        fki_ezsigntemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatedocument_id_copy) *fki_ezsigntemplatedocument_id_copy = *fki_ezsigntemplatedocument_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *fki_ezdoctemplatedocument_id_copy = NULL;
    if (fki_ezdoctemplatedocument_id) {
        fki_ezdoctemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezdoctemplatedocument_id_copy) *fki_ezdoctemplatedocument_id_copy = *fki_ezdoctemplatedocument_id;
    }
    int *b_ezsigntemplate_adminonly_copy = NULL;
    if (b_ezsigntemplate_adminonly) {
        b_ezsigntemplate_adminonly_copy = malloc(sizeof(int));
        if (b_ezsigntemplate_adminonly_copy) *b_ezsigntemplate_adminonly_copy = *b_ezsigntemplate_adminonly;
    }
    int *b_ezsigntemplate_editallowed_copy = NULL;
    if (b_ezsigntemplate_editallowed) {
        b_ezsigntemplate_editallowed_copy = malloc(sizeof(int));
        if (b_ezsigntemplate_editallowed_copy) *b_ezsigntemplate_editallowed_copy = *b_ezsigntemplate_editallowed;
    }
    ezsigntemplate_response_compound_v4_t *result = ezsigntemplate_response_compound_v4_create_internal (
        pki_ezsigntemplate_id_copy,
        fki_ezsigntemplatedocument_id_copy,
        fki_ezsignfoldertype_id_copy,
        obj_ezsignfoldertype,
        fki_language_id_copy,
        fki_ezdoctemplatedocument_id_copy,
        s_ezdoctemplatedocument_name_x,
        s_language_name_x,
        s_ezsigntemplate_description,
        s_ezsigntemplate_externaldescription,
        t_ezsigntemplate_comment,
        e_ezsigntemplate_recognition,
        s_ezsigntemplate_filenameregexp,
        b_ezsigntemplate_adminonly_copy,
        s_ezsignfoldertype_name_x,
        obj_audit,
        b_ezsigntemplate_editallowed_copy,
        e_ezsigntemplate_type,
        obj_ezsigntemplatedocument,
        a_obj_ezsigntemplatesigner,
        a_obj_ezsigntemplateannotation
        );
    if (!result) {
        free(pki_ezsigntemplate_id_copy);
        free(fki_ezsigntemplatedocument_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_language_id_copy);
        free(fki_ezdoctemplatedocument_id_copy);
        free(b_ezsigntemplate_adminonly_copy);
        free(b_ezsigntemplate_editallowed_copy);
    }
    return result;
}

void ezsigntemplate_response_compound_v4_free(ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4) {
    if(NULL == ezsigntemplate_response_compound_v4){
        return ;
    }
    if(ezsigntemplate_response_compound_v4->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_response_compound_v4_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id) {
        free(ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id);
        ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id = NULL;
    }
    if (ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id) {
        free(ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id);
        ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id = NULL;
    }
    if (ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id) {
        free(ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id);
        ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsigntemplate_response_compound_v4->obj_ezsignfoldertype) {
        custom_ezsignfoldertype_template_response_free(ezsigntemplate_response_compound_v4->obj_ezsignfoldertype);
        ezsigntemplate_response_compound_v4->obj_ezsignfoldertype = NULL;
    }
    if (ezsigntemplate_response_compound_v4->fki_language_id) {
        free(ezsigntemplate_response_compound_v4->fki_language_id);
        ezsigntemplate_response_compound_v4->fki_language_id = NULL;
    }
    if (ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id) {
        free(ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id);
        ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x) {
        free(ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x);
        ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_language_name_x) {
        free(ezsigntemplate_response_compound_v4->s_language_name_x);
        ezsigntemplate_response_compound_v4->s_language_name_x = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_ezsigntemplate_description) {
        free(ezsigntemplate_response_compound_v4->s_ezsigntemplate_description);
        ezsigntemplate_response_compound_v4->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription) {
        free(ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription);
        ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription = NULL;
    }
    if (ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment) {
        free(ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment);
        ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp) {
        free(ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp);
        ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp = NULL;
    }
    if (ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly) {
        free(ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly);
        ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly = NULL;
    }
    if (ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x);
        ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplate_response_compound_v4->obj_audit) {
        common_audit_free(ezsigntemplate_response_compound_v4->obj_audit);
        ezsigntemplate_response_compound_v4->obj_audit = NULL;
    }
    if (ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed) {
        free(ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed);
        ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed = NULL;
    }
    if (ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_response_free(ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument);
        ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument = NULL;
    }
    if (ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner) {
            ezsigntemplatesigner_response_compound_v3_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner);
        ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner = NULL;
    }
    if (ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation) {
        list_ForEach(listEntry, ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation) {
            ezsigntemplateannotation_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation);
        ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplate_response_compound_v4);
}

cJSON *ezsigntemplate_response_compound_v4_convertToJSON(ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id
    if (!ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", *ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id
    if(ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", *ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id
    if(ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound_v4->obj_ezsignfoldertype
    if(ezsigntemplate_response_compound_v4->obj_ezsignfoldertype) {
    cJSON *obj_ezsignfoldertype_local_JSON = custom_ezsignfoldertype_template_response_convertToJSON(ezsigntemplate_response_compound_v4->obj_ezsignfoldertype);
    if(obj_ezsignfoldertype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertype", obj_ezsignfoldertype_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_response_compound_v4->fki_language_id
    if (!ezsigntemplate_response_compound_v4->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsigntemplate_response_compound_v4->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id
    if(ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", *ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x
    if(ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound_v4->s_language_name_x
    if (!ezsigntemplate_response_compound_v4->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplate_response_compound_v4->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_description
    if (!ezsigntemplate_response_compound_v4->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_response_compound_v4->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription
    if(ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateExternaldescription", ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment
    if(ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateComment", ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound_v4->e_ezsigntemplate_recognition
    if(ezsigntemplate_response_compound_v4->e_ezsigntemplate_recognition != ezmax_api_definition__full_field_e_ezsigntemplate_recognition__NULL) {
    cJSON *e_ezsigntemplate_recognition_local_JSON = field_e_ezsigntemplate_recognition_convertToJSON(ezsigntemplate_response_compound_v4->e_ezsigntemplate_recognition);
    if(e_ezsigntemplate_recognition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateRecognition", e_ezsigntemplate_recognition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp
    if(ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenameregexp", ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", *ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x
    if(ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_response_compound_v4->obj_audit
    if (!ezsigntemplate_response_compound_v4->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigntemplate_response_compound_v4->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed
    if (!ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateEditallowed", *ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response_compound_v4->e_ezsigntemplate_type
    if(ezsigntemplate_response_compound_v4->e_ezsigntemplate_type != ezmax_api_definition__full_field_e_ezsigntemplate_type__NULL) {
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_response_compound_v4->e_ezsigntemplate_type);
    if(e_ezsigntemplate_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateType", e_ezsigntemplate_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument
    if(ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument) {
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_response_convertToJSON(ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner
    if (!ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesigner");
    if(a_obj_ezsigntemplatesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignerListEntry;
    if (ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner) {
    list_ForEach(a_obj_ezsigntemplatesignerListEntry, ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner) {
    cJSON *itemLocal = ezsigntemplatesigner_response_compound_v3_convertToJSON(a_obj_ezsigntemplatesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesigner, itemLocal);
    }
    }


    // ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation
    if(ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation) {
    cJSON *a_obj_ezsigntemplateannotation = cJSON_AddArrayToObject(item, "a_objEzsigntemplateannotation");
    if(a_obj_ezsigntemplateannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateannotationListEntry;
    if (ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation) {
    list_ForEach(a_obj_ezsigntemplateannotationListEntry, ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation) {
    cJSON *itemLocal = ezsigntemplateannotation_response_compound_convertToJSON(a_obj_ezsigntemplateannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateannotation, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4_parseFromJSON(cJSON *ezsigntemplate_response_compound_v4JSON){

    ezsigntemplate_response_compound_v4_t *ezsigntemplate_response_compound_v4_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id
    int *pki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id
    int *fki_ezsigntemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->obj_ezsignfoldertype
    custom_ezsignfoldertype_template_response_t *obj_ezsignfoldertype_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->fki_language_id
    int *fki_language_id_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id
    int *fki_ezdoctemplatedocument_id_local_var = NULL;

    char *s_ezdoctemplatedocument_name_x_local_str = NULL;

    char *s_language_name_x_local_str = NULL;

    char *s_ezsigntemplate_description_local_str = NULL;

    char *s_ezsigntemplate_externaldescription_local_str = NULL;

    char *t_ezsigntemplate_comment_local_str = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->e_ezsigntemplate_recognition
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition_local_nonprim = 0;

    char *s_ezsigntemplate_filenameregexp_local_str = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly
    int *b_ezsigntemplate_adminonly_local_var = NULL;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed
    int *b_ezsigntemplate_editallowed_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_v4->e_ezsigntemplate_type
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type_local_nonprim = 0;

    // define the local variable for ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // define the local list for ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner
    list_t *a_obj_ezsigntemplatesignerList = NULL;

    // define the local list for ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation
    list_t *a_obj_ezsigntemplateannotationList = NULL;

    // ezsigntemplate_response_compound_v4->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "pkiEzsigntemplateID");
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
    pki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplate_id_local_var = pki_ezsigntemplate_id->valuedouble;

    // ezsigntemplate_response_compound_v4->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "fkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(fki_ezsigntemplatedocument_id)) {
        fki_ezsigntemplatedocument_id = NULL;
    }
    if (fki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatedocument_id_local_var = fki_ezsigntemplatedocument_id->valuedouble;
    }

    // ezsigntemplate_response_compound_v4->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;
    }

    // ezsigntemplate_response_compound_v4->obj_ezsignfoldertype
    cJSON *obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "objEzsignfoldertype");
    if (cJSON_IsNull(obj_ezsignfoldertype)) {
        obj_ezsignfoldertype = NULL;
    }
    if (obj_ezsignfoldertype) { 
    obj_ezsignfoldertype_local_nonprim = custom_ezsignfoldertype_template_response_parseFromJSON(obj_ezsignfoldertype); //nonprimitive
    }

    // ezsigntemplate_response_compound_v4->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "fkiLanguageID");
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
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // ezsigntemplate_response_compound_v4->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezdoctemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezdoctemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezdoctemplatedocument_id_local_var = fki_ezdoctemplatedocument_id->valuedouble;
    }

    // ezsigntemplate_response_compound_v4->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sEzdoctemplatedocumentNameX");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name_x)) {
        s_ezdoctemplatedocument_name_x = NULL;
    }
    if (s_ezdoctemplatedocument_name_x) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x) && !cJSON_IsNull(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound_v4->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sLanguageNameX");
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

    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sEzsigntemplateDescription");
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

    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_externaldescription
    cJSON *s_ezsigntemplate_externaldescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sEzsigntemplateExternaldescription");
    if (cJSON_IsNull(s_ezsigntemplate_externaldescription)) {
        s_ezsigntemplate_externaldescription = NULL;
    }
    if (s_ezsigntemplate_externaldescription) { 
    if(!cJSON_IsString(s_ezsigntemplate_externaldescription) && !cJSON_IsNull(s_ezsigntemplate_externaldescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound_v4->t_ezsigntemplate_comment
    cJSON *t_ezsigntemplate_comment = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "tEzsigntemplateComment");
    if (cJSON_IsNull(t_ezsigntemplate_comment)) {
        t_ezsigntemplate_comment = NULL;
    }
    if (t_ezsigntemplate_comment) { 
    if(!cJSON_IsString(t_ezsigntemplate_comment) && !cJSON_IsNull(t_ezsigntemplate_comment))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound_v4->e_ezsigntemplate_recognition
    cJSON *e_ezsigntemplate_recognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "eEzsigntemplateRecognition");
    if (cJSON_IsNull(e_ezsigntemplate_recognition)) {
        e_ezsigntemplate_recognition = NULL;
    }
    if (e_ezsigntemplate_recognition) { 
    e_ezsigntemplate_recognition_local_nonprim = field_e_ezsigntemplate_recognition_parseFromJSON(e_ezsigntemplate_recognition); //custom
    }

    // ezsigntemplate_response_compound_v4->s_ezsigntemplate_filenameregexp
    cJSON *s_ezsigntemplate_filenameregexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sEzsigntemplateFilenameregexp");
    if (cJSON_IsNull(s_ezsigntemplate_filenameregexp)) {
        s_ezsigntemplate_filenameregexp = NULL;
    }
    if (s_ezsigntemplate_filenameregexp) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenameregexp) && !cJSON_IsNull(s_ezsigntemplate_filenameregexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound_v4->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "bEzsigntemplateAdminonly");
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
    b_ezsigntemplate_adminonly_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplate_adminonly_local_var)
    {
        goto end;
    }
    *b_ezsigntemplate_adminonly_local_var = b_ezsigntemplate_adminonly->valueint;

    // ezsigntemplate_response_compound_v4->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_response_compound_v4->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsigntemplate_response_compound_v4->b_ezsigntemplate_editallowed
    cJSON *b_ezsigntemplate_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "bEzsigntemplateEditallowed");
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
    b_ezsigntemplate_editallowed_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplate_editallowed_local_var)
    {
        goto end;
    }
    *b_ezsigntemplate_editallowed_local_var = b_ezsigntemplate_editallowed->valueint;

    // ezsigntemplate_response_compound_v4->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "eEzsigntemplateType");
    if (cJSON_IsNull(e_ezsigntemplate_type)) {
        e_ezsigntemplate_type = NULL;
    }
    if (e_ezsigntemplate_type) { 
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom
    }

    // ezsigntemplate_response_compound_v4->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "objEzsigntemplatedocument");
    if (cJSON_IsNull(obj_ezsigntemplatedocument)) {
        obj_ezsigntemplatedocument = NULL;
    }
    if (obj_ezsigntemplatedocument) { 
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_response_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive
    }

    // ezsigntemplate_response_compound_v4->a_obj_ezsigntemplatesigner
    cJSON *a_obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "a_objEzsigntemplatesigner");
    if (cJSON_IsNull(a_obj_ezsigntemplatesigner)) {
        a_obj_ezsigntemplatesigner = NULL;
    }
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
        ezsigntemplatesigner_response_compound_v3_t *a_obj_ezsigntemplatesignerItem = ezsigntemplatesigner_response_compound_v3_parseFromJSON(a_obj_ezsigntemplatesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignerList, a_obj_ezsigntemplatesignerItem);
    }

    // ezsigntemplate_response_compound_v4->a_obj_ezsigntemplateannotation
    cJSON *a_obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_v4JSON, "a_objEzsigntemplateannotation");
    if (cJSON_IsNull(a_obj_ezsigntemplateannotation)) {
        a_obj_ezsigntemplateannotation = NULL;
    }
    if (a_obj_ezsigntemplateannotation) { 
    cJSON *a_obj_ezsigntemplateannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateannotation_local_nonprimitive,a_obj_ezsigntemplateannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateannotation_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateannotation_response_compound_t *a_obj_ezsigntemplateannotationItem = ezsigntemplateannotation_response_compound_parseFromJSON(a_obj_ezsigntemplateannotation_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateannotationList, a_obj_ezsigntemplateannotationItem);
    }
    }


    if (s_ezdoctemplatedocument_name_x && !cJSON_IsNull(s_ezdoctemplatedocument_name_x)) s_ezdoctemplatedocument_name_x_local_str = strdup(s_ezdoctemplatedocument_name_x->valuestring);
    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_ezsigntemplate_description && !cJSON_IsNull(s_ezsigntemplate_description)) s_ezsigntemplate_description_local_str = strdup(s_ezsigntemplate_description->valuestring);
    if (s_ezsigntemplate_externaldescription && !cJSON_IsNull(s_ezsigntemplate_externaldescription)) s_ezsigntemplate_externaldescription_local_str = strdup(s_ezsigntemplate_externaldescription->valuestring);
    if (t_ezsigntemplate_comment && !cJSON_IsNull(t_ezsigntemplate_comment)) t_ezsigntemplate_comment_local_str = strdup(t_ezsigntemplate_comment->valuestring);
    if (s_ezsigntemplate_filenameregexp && !cJSON_IsNull(s_ezsigntemplate_filenameregexp)) s_ezsigntemplate_filenameregexp_local_str = strdup(s_ezsigntemplate_filenameregexp->valuestring);
    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    ezsigntemplate_response_compound_v4_local_var = ezsigntemplate_response_compound_v4_create_internal (
        pki_ezsigntemplate_id_local_var,
        fki_ezsigntemplatedocument_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        obj_ezsignfoldertype ? obj_ezsignfoldertype_local_nonprim : NULL,
        fki_language_id_local_var,
        fki_ezdoctemplatedocument_id_local_var,
        s_ezdoctemplatedocument_name_x_local_str,
        s_language_name_x_local_str,
        s_ezsigntemplate_description_local_str,
        s_ezsigntemplate_externaldescription_local_str,
        t_ezsigntemplate_comment_local_str,
        e_ezsigntemplate_recognition ? e_ezsigntemplate_recognition_local_nonprim : 0,
        s_ezsigntemplate_filenameregexp_local_str,
        b_ezsigntemplate_adminonly_local_var,
        s_ezsignfoldertype_name_x_local_str,
        obj_audit_local_nonprim,
        b_ezsigntemplate_editallowed_local_var,
        e_ezsigntemplate_type ? e_ezsigntemplate_type_local_nonprim : 0,
        obj_ezsigntemplatedocument ? obj_ezsigntemplatedocument_local_nonprim : NULL,
        a_obj_ezsigntemplatesignerList,
        a_obj_ezsigntemplateannotation ? a_obj_ezsigntemplateannotationList : NULL
        );

    if (!ezsigntemplate_response_compound_v4_local_var) {
        goto end;
    }

    return ezsigntemplate_response_compound_v4_local_var;
end:
    if (pki_ezsigntemplate_id_local_var) {
        free(pki_ezsigntemplate_id_local_var);
        pki_ezsigntemplate_id_local_var = NULL;
    }
    if (fki_ezsigntemplatedocument_id_local_var) {
        free(fki_ezsigntemplatedocument_id_local_var);
        fki_ezsigntemplatedocument_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (obj_ezsignfoldertype_local_nonprim) {
        custom_ezsignfoldertype_template_response_free(obj_ezsignfoldertype_local_nonprim);
        obj_ezsignfoldertype_local_nonprim = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (fki_ezdoctemplatedocument_id_local_var) {
        free(fki_ezdoctemplatedocument_id_local_var);
        fki_ezdoctemplatedocument_id_local_var = NULL;
    }
    if (s_ezdoctemplatedocument_name_x_local_str) {
        free(s_ezdoctemplatedocument_name_x_local_str);
        s_ezdoctemplatedocument_name_x_local_str = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (s_ezsigntemplate_description_local_str) {
        free(s_ezsigntemplate_description_local_str);
        s_ezsigntemplate_description_local_str = NULL;
    }
    if (s_ezsigntemplate_externaldescription_local_str) {
        free(s_ezsigntemplate_externaldescription_local_str);
        s_ezsigntemplate_externaldescription_local_str = NULL;
    }
    if (t_ezsigntemplate_comment_local_str) {
        free(t_ezsigntemplate_comment_local_str);
        t_ezsigntemplate_comment_local_str = NULL;
    }
    if (e_ezsigntemplate_recognition_local_nonprim) {
        e_ezsigntemplate_recognition_local_nonprim = 0;
    }
    if (s_ezsigntemplate_filenameregexp_local_str) {
        free(s_ezsigntemplate_filenameregexp_local_str);
        s_ezsigntemplate_filenameregexp_local_str = NULL;
    }
    if (b_ezsigntemplate_adminonly_local_var) {
        free(b_ezsigntemplate_adminonly_local_var);
        b_ezsigntemplate_adminonly_local_var = NULL;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (b_ezsigntemplate_editallowed_local_var) {
        free(b_ezsigntemplate_editallowed_local_var);
        b_ezsigntemplate_editallowed_local_var = NULL;
    }
    if (e_ezsigntemplate_type_local_nonprim) {
        e_ezsigntemplate_type_local_nonprim = 0;
    }
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_response_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignerList) {
            ezsigntemplatesigner_response_compound_v3_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignerList);
        a_obj_ezsigntemplatesignerList = NULL;
    }
    if (a_obj_ezsigntemplateannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateannotationList) {
            ezsigntemplateannotation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateannotationList);
        a_obj_ezsigntemplateannotationList = NULL;
    }
    return NULL;

}
