#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_list_element.h"



static ezsignbulksend_list_element_t *ezsignbulksend_list_element_create_internal(
    int *pki_ezsignbulksend_id,
    int *fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignbulksend_needvalidation,
    int *i_ezsignbulksendtransmission,
    int *i_ezsignfolder,
    int *i_ezsigndocument,
    int *i_ezsignsignature,
    int *i_ezsignsignature_signed,
    int *b_ezsignbulksend_isactive
    ) {
    ezsignbulksend_list_element_t *ezsignbulksend_list_element_local_var = malloc(sizeof(ezsignbulksend_list_element_t));
    if (!ezsignbulksend_list_element_local_var) {
        return NULL;
    }
    memset(ezsignbulksend_list_element_local_var, 0, sizeof(ezsignbulksend_list_element_t));
    ezsignbulksend_list_element_local_var->_library_owned = 1;
    ezsignbulksend_list_element_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_list_element_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignbulksend_list_element_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    ezsignbulksend_list_element_local_var->i_ezsignbulksendtransmission = i_ezsignbulksendtransmission;
    ezsignbulksend_list_element_local_var->i_ezsignfolder = i_ezsignfolder;
    ezsignbulksend_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsignbulksend_list_element_local_var->i_ezsignsignature = i_ezsignsignature;
    ezsignbulksend_list_element_local_var->i_ezsignsignature_signed = i_ezsignsignature_signed;
    ezsignbulksend_list_element_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    return ezsignbulksend_list_element_local_var;
}

__attribute__((deprecated)) ezsignbulksend_list_element_t *ezsignbulksend_list_element_create(
    int *pki_ezsignbulksend_id,
    int *fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignbulksend_needvalidation,
    int *i_ezsignbulksendtransmission,
    int *i_ezsignfolder,
    int *i_ezsigndocument,
    int *i_ezsignsignature,
    int *i_ezsignsignature_signed,
    int *b_ezsignbulksend_isactive
    ) {
    int *pki_ezsignbulksend_id_copy = NULL;
    if (pki_ezsignbulksend_id) {
        pki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (pki_ezsignbulksend_id_copy) *pki_ezsignbulksend_id_copy = *pki_ezsignbulksend_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *b_ezsignbulksend_needvalidation_copy = NULL;
    if (b_ezsignbulksend_needvalidation) {
        b_ezsignbulksend_needvalidation_copy = malloc(sizeof(int));
        if (b_ezsignbulksend_needvalidation_copy) *b_ezsignbulksend_needvalidation_copy = *b_ezsignbulksend_needvalidation;
    }
    int *i_ezsignbulksendtransmission_copy = NULL;
    if (i_ezsignbulksendtransmission) {
        i_ezsignbulksendtransmission_copy = malloc(sizeof(int));
        if (i_ezsignbulksendtransmission_copy) *i_ezsignbulksendtransmission_copy = *i_ezsignbulksendtransmission;
    }
    int *i_ezsignfolder_copy = NULL;
    if (i_ezsignfolder) {
        i_ezsignfolder_copy = malloc(sizeof(int));
        if (i_ezsignfolder_copy) *i_ezsignfolder_copy = *i_ezsignfolder;
    }
    int *i_ezsigndocument_copy = NULL;
    if (i_ezsigndocument) {
        i_ezsigndocument_copy = malloc(sizeof(int));
        if (i_ezsigndocument_copy) *i_ezsigndocument_copy = *i_ezsigndocument;
    }
    int *i_ezsignsignature_copy = NULL;
    if (i_ezsignsignature) {
        i_ezsignsignature_copy = malloc(sizeof(int));
        if (i_ezsignsignature_copy) *i_ezsignsignature_copy = *i_ezsignsignature;
    }
    int *i_ezsignsignature_signed_copy = NULL;
    if (i_ezsignsignature_signed) {
        i_ezsignsignature_signed_copy = malloc(sizeof(int));
        if (i_ezsignsignature_signed_copy) *i_ezsignsignature_signed_copy = *i_ezsignsignature_signed;
    }
    int *b_ezsignbulksend_isactive_copy = NULL;
    if (b_ezsignbulksend_isactive) {
        b_ezsignbulksend_isactive_copy = malloc(sizeof(int));
        if (b_ezsignbulksend_isactive_copy) *b_ezsignbulksend_isactive_copy = *b_ezsignbulksend_isactive;
    }
    ezsignbulksend_list_element_t *result = ezsignbulksend_list_element_create_internal (
        pki_ezsignbulksend_id_copy,
        fki_ezsignfoldertype_id_copy,
        s_ezsignbulksend_description,
        s_ezsignfoldertype_name_x,
        b_ezsignbulksend_needvalidation_copy,
        i_ezsignbulksendtransmission_copy,
        i_ezsignfolder_copy,
        i_ezsigndocument_copy,
        i_ezsignsignature_copy,
        i_ezsignsignature_signed_copy,
        b_ezsignbulksend_isactive_copy
        );
    if (!result) {
        free(pki_ezsignbulksend_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(b_ezsignbulksend_needvalidation_copy);
        free(i_ezsignbulksendtransmission_copy);
        free(i_ezsignfolder_copy);
        free(i_ezsigndocument_copy);
        free(i_ezsignsignature_copy);
        free(i_ezsignsignature_signed_copy);
        free(b_ezsignbulksend_isactive_copy);
    }
    return result;
}

void ezsignbulksend_list_element_free(ezsignbulksend_list_element_t *ezsignbulksend_list_element) {
    if(NULL == ezsignbulksend_list_element){
        return ;
    }
    if(ezsignbulksend_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_list_element->pki_ezsignbulksend_id) {
        free(ezsignbulksend_list_element->pki_ezsignbulksend_id);
        ezsignbulksend_list_element->pki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksend_list_element->fki_ezsignfoldertype_id) {
        free(ezsignbulksend_list_element->fki_ezsignfoldertype_id);
        ezsignbulksend_list_element->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsignbulksend_list_element->s_ezsignbulksend_description) {
        free(ezsignbulksend_list_element->s_ezsignbulksend_description);
        ezsignbulksend_list_element->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignbulksend_list_element->s_ezsignfoldertype_name_x);
        ezsignbulksend_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignbulksend_list_element->b_ezsignbulksend_needvalidation) {
        free(ezsignbulksend_list_element->b_ezsignbulksend_needvalidation);
        ezsignbulksend_list_element->b_ezsignbulksend_needvalidation = NULL;
    }
    if (ezsignbulksend_list_element->i_ezsignbulksendtransmission) {
        free(ezsignbulksend_list_element->i_ezsignbulksendtransmission);
        ezsignbulksend_list_element->i_ezsignbulksendtransmission = NULL;
    }
    if (ezsignbulksend_list_element->i_ezsignfolder) {
        free(ezsignbulksend_list_element->i_ezsignfolder);
        ezsignbulksend_list_element->i_ezsignfolder = NULL;
    }
    if (ezsignbulksend_list_element->i_ezsigndocument) {
        free(ezsignbulksend_list_element->i_ezsigndocument);
        ezsignbulksend_list_element->i_ezsigndocument = NULL;
    }
    if (ezsignbulksend_list_element->i_ezsignsignature) {
        free(ezsignbulksend_list_element->i_ezsignsignature);
        ezsignbulksend_list_element->i_ezsignsignature = NULL;
    }
    if (ezsignbulksend_list_element->i_ezsignsignature_signed) {
        free(ezsignbulksend_list_element->i_ezsignsignature_signed);
        ezsignbulksend_list_element->i_ezsignsignature_signed = NULL;
    }
    if (ezsignbulksend_list_element->b_ezsignbulksend_isactive) {
        free(ezsignbulksend_list_element->b_ezsignbulksend_isactive);
        ezsignbulksend_list_element->b_ezsignbulksend_isactive = NULL;
    }
    free(ezsignbulksend_list_element);
}

cJSON *ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_t *ezsignbulksend_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_list_element->pki_ezsignbulksend_id
    if (!ezsignbulksend_list_element->pki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", *ezsignbulksend_list_element->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->fki_ezsignfoldertype_id
    if (!ezsignbulksend_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsignbulksend_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->s_ezsignbulksend_description
    if (!ezsignbulksend_list_element->s_ezsignbulksend_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_list_element->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_list_element->s_ezsignfoldertype_name_x
    if (!ezsignbulksend_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignbulksend_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_list_element->b_ezsignbulksend_needvalidation
    if (!ezsignbulksend_list_element->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", *ezsignbulksend_list_element->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_list_element->i_ezsignbulksendtransmission
    if (!ezsignbulksend_list_element->i_ezsignbulksendtransmission) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksendtransmission", *ezsignbulksend_list_element->i_ezsignbulksendtransmission) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignfolder
    if (!ezsignbulksend_list_element->i_ezsignfolder) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolder", *ezsignbulksend_list_element->i_ezsignfolder) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsigndocument
    if (!ezsignbulksend_list_element->i_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", *ezsignbulksend_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature
    if (!ezsignbulksend_list_element->i_ezsignsignature) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignature", *ezsignbulksend_list_element->i_ezsignsignature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature_signed
    if (!ezsignbulksend_list_element->i_ezsignsignature_signed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureSigned", *ezsignbulksend_list_element->i_ezsignsignature_signed) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->b_ezsignbulksend_isactive
    if (!ezsignbulksend_list_element->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", *ezsignbulksend_list_element->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_list_element_t *ezsignbulksend_list_element_parseFromJSON(cJSON *ezsignbulksend_list_elementJSON){

    ezsignbulksend_list_element_t *ezsignbulksend_list_element_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->pki_ezsignbulksend_id
    int *pki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    char *s_ezsignbulksend_description_local_str = NULL;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsignbulksend_list_element->b_ezsignbulksend_needvalidation
    int *b_ezsignbulksend_needvalidation_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->i_ezsignbulksendtransmission
    int *i_ezsignbulksendtransmission_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->i_ezsignfolder
    int *i_ezsignfolder_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->i_ezsigndocument
    int *i_ezsigndocument_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->i_ezsignsignature
    int *i_ezsignsignature_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->i_ezsignsignature_signed
    int *i_ezsignsignature_signed_local_var = NULL;

    // define the local variable for ezsignbulksend_list_element->b_ezsignbulksend_isactive
    int *b_ezsignbulksend_isactive_local_var = NULL;

    // ezsignbulksend_list_element->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "pkiEzsignbulksendID");
    if (cJSON_IsNull(pki_ezsignbulksend_id)) {
        pki_ezsignbulksend_id = NULL;
    }
    if (!pki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    pki_ezsignbulksend_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignbulksend_id_local_var)
    {
        goto end;
    }
    *pki_ezsignbulksend_id_local_var = pki_ezsignbulksend_id->valuedouble;

    // ezsignbulksend_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "fkiEzsignfoldertypeID");
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
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;

    // ezsignbulksend_list_element->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "sEzsignbulksendDescription");
    if (cJSON_IsNull(s_ezsignbulksend_description)) {
        s_ezsignbulksend_description = NULL;
    }
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "sEzsignfoldertypeNameX");
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

    // ezsignbulksend_list_element->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "bEzsignbulksendNeedvalidation");
    if (cJSON_IsNull(b_ezsignbulksend_needvalidation)) {
        b_ezsignbulksend_needvalidation = NULL;
    }
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }
    b_ezsignbulksend_needvalidation_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksend_needvalidation_local_var)
    {
        goto end;
    }
    *b_ezsignbulksend_needvalidation_local_var = b_ezsignbulksend_needvalidation->valueint;

    // ezsignbulksend_list_element->i_ezsignbulksendtransmission
    cJSON *i_ezsignbulksendtransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignbulksendtransmission");
    if (cJSON_IsNull(i_ezsignbulksendtransmission)) {
        i_ezsignbulksendtransmission = NULL;
    }
    if (!i_ezsignbulksendtransmission) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksendtransmission))
    {
    goto end; //Numeric
    }
    i_ezsignbulksendtransmission_local_var = malloc(sizeof(int));
    if(!i_ezsignbulksendtransmission_local_var)
    {
        goto end;
    }
    *i_ezsignbulksendtransmission_local_var = i_ezsignbulksendtransmission->valuedouble;

    // ezsignbulksend_list_element->i_ezsignfolder
    cJSON *i_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignfolder");
    if (cJSON_IsNull(i_ezsignfolder)) {
        i_ezsignfolder = NULL;
    }
    if (!i_ezsignfolder) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder))
    {
    goto end; //Numeric
    }
    i_ezsignfolder_local_var = malloc(sizeof(int));
    if(!i_ezsignfolder_local_var)
    {
        goto end;
    }
    *i_ezsignfolder_local_var = i_ezsignfolder->valuedouble;

    // ezsignbulksend_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsigndocument");
    if (cJSON_IsNull(i_ezsigndocument)) {
        i_ezsigndocument = NULL;
    }
    if (!i_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_local_var = i_ezsigndocument->valuedouble;

    // ezsignbulksend_list_element->i_ezsignsignature
    cJSON *i_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignsignature");
    if (cJSON_IsNull(i_ezsignsignature)) {
        i_ezsignsignature = NULL;
    }
    if (!i_ezsignsignature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_local_var = i_ezsignsignature->valuedouble;

    // ezsignbulksend_list_element->i_ezsignsignature_signed
    cJSON *i_ezsignsignature_signed = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignsignatureSigned");
    if (cJSON_IsNull(i_ezsignsignature_signed)) {
        i_ezsignsignature_signed = NULL;
    }
    if (!i_ezsignsignature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_signed))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_signed_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_signed_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_signed_local_var = i_ezsignsignature_signed->valuedouble;

    // ezsignbulksend_list_element->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "bEzsignbulksendIsactive");
    if (cJSON_IsNull(b_ezsignbulksend_isactive)) {
        b_ezsignbulksend_isactive = NULL;
    }
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }
    b_ezsignbulksend_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksend_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignbulksend_isactive_local_var = b_ezsignbulksend_isactive->valueint;


    if (s_ezsignbulksend_description && !cJSON_IsNull(s_ezsignbulksend_description)) s_ezsignbulksend_description_local_str = strdup(s_ezsignbulksend_description->valuestring);
    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    ezsignbulksend_list_element_local_var = ezsignbulksend_list_element_create_internal (
        pki_ezsignbulksend_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        s_ezsignbulksend_description_local_str,
        s_ezsignfoldertype_name_x_local_str,
        b_ezsignbulksend_needvalidation_local_var,
        i_ezsignbulksendtransmission_local_var,
        i_ezsignfolder_local_var,
        i_ezsigndocument_local_var,
        i_ezsignsignature_local_var,
        i_ezsignsignature_signed_local_var,
        b_ezsignbulksend_isactive_local_var
        );

    if (!ezsignbulksend_list_element_local_var) {
        goto end;
    }

    return ezsignbulksend_list_element_local_var;
end:
    if (pki_ezsignbulksend_id_local_var) {
        free(pki_ezsignbulksend_id_local_var);
        pki_ezsignbulksend_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (s_ezsignbulksend_description_local_str) {
        free(s_ezsignbulksend_description_local_str);
        s_ezsignbulksend_description_local_str = NULL;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (b_ezsignbulksend_needvalidation_local_var) {
        free(b_ezsignbulksend_needvalidation_local_var);
        b_ezsignbulksend_needvalidation_local_var = NULL;
    }
    if (i_ezsignbulksendtransmission_local_var) {
        free(i_ezsignbulksendtransmission_local_var);
        i_ezsignbulksendtransmission_local_var = NULL;
    }
    if (i_ezsignfolder_local_var) {
        free(i_ezsignfolder_local_var);
        i_ezsignfolder_local_var = NULL;
    }
    if (i_ezsigndocument_local_var) {
        free(i_ezsigndocument_local_var);
        i_ezsigndocument_local_var = NULL;
    }
    if (i_ezsignsignature_local_var) {
        free(i_ezsignsignature_local_var);
        i_ezsignsignature_local_var = NULL;
    }
    if (i_ezsignsignature_signed_local_var) {
        free(i_ezsignsignature_signed_local_var);
        i_ezsignsignature_signed_local_var = NULL;
    }
    if (b_ezsignbulksend_isactive_local_var) {
        free(b_ezsignbulksend_isactive_local_var);
        b_ezsignbulksend_isactive_local_var = NULL;
    }
    return NULL;

}
