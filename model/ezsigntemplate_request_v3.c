#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_request_v3.h"



static ezsigntemplate_request_v3_t *ezsigntemplate_request_v3_create_internal(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    int fki_ezdoctemplatedocument_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int b_ezsigntemplate_adminonly,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    ezsigntemplate_request_v3_t *ezsigntemplate_request_v3_local_var = malloc(sizeof(ezsigntemplate_request_v3_t));
    if (!ezsigntemplate_request_v3_local_var) {
        return NULL;
    }
    ezsigntemplate_request_v3_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_request_v3_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_request_v3_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_request_v3_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplate_request_v3_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_request_v3_local_var->s_ezsigntemplate_externaldescription = s_ezsigntemplate_externaldescription;
    ezsigntemplate_request_v3_local_var->t_ezsigntemplate_comment = t_ezsigntemplate_comment;
    ezsigntemplate_request_v3_local_var->e_ezsigntemplate_recognition = e_ezsigntemplate_recognition;
    ezsigntemplate_request_v3_local_var->s_ezsigntemplate_filenameregexp = s_ezsigntemplate_filenameregexp;
    ezsigntemplate_request_v3_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_request_v3_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;

    ezsigntemplate_request_v3_local_var->_library_owned = 1;
    return ezsigntemplate_request_v3_local_var;
}

__attribute__((deprecated)) ezsigntemplate_request_v3_t *ezsigntemplate_request_v3_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    int fki_ezdoctemplatedocument_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int b_ezsigntemplate_adminonly,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    return ezsigntemplate_request_v3_create_internal (
        pki_ezsigntemplate_id,
        fki_ezsignfoldertype_id,
        fki_language_id,
        fki_ezdoctemplatedocument_id,
        s_ezsigntemplate_description,
        s_ezsigntemplate_externaldescription,
        t_ezsigntemplate_comment,
        e_ezsigntemplate_recognition,
        s_ezsigntemplate_filenameregexp,
        b_ezsigntemplate_adminonly,
        e_ezsigntemplate_type
        );
}

void ezsigntemplate_request_v3_free(ezsigntemplate_request_v3_t *ezsigntemplate_request_v3) {
    if(NULL == ezsigntemplate_request_v3){
        return ;
    }
    if(ezsigntemplate_request_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_request_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_request_v3->s_ezsigntemplate_description) {
        free(ezsigntemplate_request_v3->s_ezsigntemplate_description);
        ezsigntemplate_request_v3->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription) {
        free(ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription);
        ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription = NULL;
    }
    if (ezsigntemplate_request_v3->t_ezsigntemplate_comment) {
        free(ezsigntemplate_request_v3->t_ezsigntemplate_comment);
        ezsigntemplate_request_v3->t_ezsigntemplate_comment = NULL;
    }
    if (ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp) {
        free(ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp);
        ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp = NULL;
    }
    free(ezsigntemplate_request_v3);
}

cJSON *ezsigntemplate_request_v3_convertToJSON(ezsigntemplate_request_v3_t *ezsigntemplate_request_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_request_v3->pki_ezsigntemplate_id
    if(ezsigntemplate_request_v3->pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_request_v3->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_v3->fki_ezsignfoldertype_id
    if(ezsigntemplate_request_v3->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_request_v3->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_v3->fki_language_id
    if (!ezsigntemplate_request_v3->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_request_v3->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_request_v3->fki_ezdoctemplatedocument_id
    if(ezsigntemplate_request_v3->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplate_request_v3->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_v3->s_ezsigntemplate_description
    if (!ezsigntemplate_request_v3->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_request_v3->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription
    if(ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateExternaldescription", ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_request_v3->t_ezsigntemplate_comment
    if(ezsigntemplate_request_v3->t_ezsigntemplate_comment) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateComment", ezsigntemplate_request_v3->t_ezsigntemplate_comment) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_request_v3->e_ezsigntemplate_recognition
    if(ezsigntemplate_request_v3->e_ezsigntemplate_recognition != ezmax_api_definition__full_field_e_ezsigntemplate_recognition__NULL) {
    cJSON *e_ezsigntemplate_recognition_local_JSON = field_e_ezsigntemplate_recognition_convertToJSON(ezsigntemplate_request_v3->e_ezsigntemplate_recognition);
    if(e_ezsigntemplate_recognition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateRecognition", e_ezsigntemplate_recognition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp
    if(ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenameregexp", ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_request_v3->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_request_v3->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_request_v3->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_request_v3->e_ezsigntemplate_type
    if (ezmax_api_definition__full_field_e_ezsigntemplate_type__NULL == ezsigntemplate_request_v3->e_ezsigntemplate_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_request_v3->e_ezsigntemplate_type);
    if(e_ezsigntemplate_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateType", e_ezsigntemplate_type_local_JSON);
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

ezsigntemplate_request_v3_t *ezsigntemplate_request_v3_parseFromJSON(cJSON *ezsigntemplate_request_v3JSON){

    ezsigntemplate_request_v3_t *ezsigntemplate_request_v3_local_var = NULL;

    // define the local variable for ezsigntemplate_request_v3->e_ezsigntemplate_recognition
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition_local_nonprim = 0;

    // define the local variable for ezsigntemplate_request_v3->e_ezsigntemplate_type
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type_local_nonprim = 0;

    // ezsigntemplate_request_v3->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "pkiEzsigntemplateID");
    if (cJSON_IsNull(pki_ezsigntemplate_id)) {
        pki_ezsigntemplate_id = NULL;
    }
    if (pki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_v3->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_v3->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "fkiLanguageID");
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

    // ezsigntemplate_request_v3->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_v3->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "sEzsigntemplateDescription");
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

    // ezsigntemplate_request_v3->s_ezsigntemplate_externaldescription
    cJSON *s_ezsigntemplate_externaldescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "sEzsigntemplateExternaldescription");
    if (cJSON_IsNull(s_ezsigntemplate_externaldescription)) {
        s_ezsigntemplate_externaldescription = NULL;
    }
    if (s_ezsigntemplate_externaldescription) { 
    if(!cJSON_IsString(s_ezsigntemplate_externaldescription) && !cJSON_IsNull(s_ezsigntemplate_externaldescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_request_v3->t_ezsigntemplate_comment
    cJSON *t_ezsigntemplate_comment = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "tEzsigntemplateComment");
    if (cJSON_IsNull(t_ezsigntemplate_comment)) {
        t_ezsigntemplate_comment = NULL;
    }
    if (t_ezsigntemplate_comment) { 
    if(!cJSON_IsString(t_ezsigntemplate_comment) && !cJSON_IsNull(t_ezsigntemplate_comment))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_request_v3->e_ezsigntemplate_recognition
    cJSON *e_ezsigntemplate_recognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "eEzsigntemplateRecognition");
    if (cJSON_IsNull(e_ezsigntemplate_recognition)) {
        e_ezsigntemplate_recognition = NULL;
    }
    if (e_ezsigntemplate_recognition) { 
    e_ezsigntemplate_recognition_local_nonprim = field_e_ezsigntemplate_recognition_parseFromJSON(e_ezsigntemplate_recognition); //custom
    }

    // ezsigntemplate_request_v3->s_ezsigntemplate_filenameregexp
    cJSON *s_ezsigntemplate_filenameregexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "sEzsigntemplateFilenameregexp");
    if (cJSON_IsNull(s_ezsigntemplate_filenameregexp)) {
        s_ezsigntemplate_filenameregexp = NULL;
    }
    if (s_ezsigntemplate_filenameregexp) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenameregexp) && !cJSON_IsNull(s_ezsigntemplate_filenameregexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_request_v3->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "bEzsigntemplateAdminonly");
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

    // ezsigntemplate_request_v3->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_v3JSON, "eEzsigntemplateType");
    if (cJSON_IsNull(e_ezsigntemplate_type)) {
        e_ezsigntemplate_type = NULL;
    }
    if (!e_ezsigntemplate_type) {
        goto end;
    }

    
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom


    ezsigntemplate_request_v3_local_var = ezsigntemplate_request_v3_create_internal (
        pki_ezsigntemplate_id ? pki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_language_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        strdup(s_ezsigntemplate_description->valuestring),
        s_ezsigntemplate_externaldescription && !cJSON_IsNull(s_ezsigntemplate_externaldescription) ? strdup(s_ezsigntemplate_externaldescription->valuestring) : NULL,
        t_ezsigntemplate_comment && !cJSON_IsNull(t_ezsigntemplate_comment) ? strdup(t_ezsigntemplate_comment->valuestring) : NULL,
        e_ezsigntemplate_recognition ? e_ezsigntemplate_recognition_local_nonprim : 0,
        s_ezsigntemplate_filenameregexp && !cJSON_IsNull(s_ezsigntemplate_filenameregexp) ? strdup(s_ezsigntemplate_filenameregexp->valuestring) : NULL,
        b_ezsigntemplate_adminonly->valueint,
        e_ezsigntemplate_type_local_nonprim
        );

    return ezsigntemplate_request_v3_local_var;
end:
    if (e_ezsigntemplate_recognition_local_nonprim) {
        e_ezsigntemplate_recognition_local_nonprim = 0;
    }
    if (e_ezsigntemplate_type_local_nonprim) {
        e_ezsigntemplate_type_local_nonprim = 0;
    }
    return NULL;

}
