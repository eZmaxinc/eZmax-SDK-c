#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_list_element.h"



static ezsigntemplate_list_element_t *ezsigntemplate_list_element_create_internal(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplate_signaturetotal,
    int i_ezsigntemplate_formfieldtotal,
    int b_ezsigntemplate_incomplete,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    ezsigntemplate_list_element_t *ezsigntemplate_list_element_local_var = malloc(sizeof(ezsigntemplate_list_element_t));
    if (!ezsigntemplate_list_element_local_var) {
        return NULL;
    }
    ezsigntemplate_list_element_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_list_element_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_list_element_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_list_element_local_var->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    ezsigntemplate_list_element_local_var->i_ezsigntemplate_signaturetotal = i_ezsigntemplate_signaturetotal;
    ezsigntemplate_list_element_local_var->i_ezsigntemplate_formfieldtotal = i_ezsigntemplate_formfieldtotal;
    ezsigntemplate_list_element_local_var->b_ezsigntemplate_incomplete = b_ezsigntemplate_incomplete;
    ezsigntemplate_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_list_element_local_var->e_ezsigntemplate_type = e_ezsigntemplate_type;

    ezsigntemplate_list_element_local_var->_library_owned = 1;
    return ezsigntemplate_list_element_local_var;
}

__attribute__((deprecated)) ezsigntemplate_list_element_t *ezsigntemplate_list_element_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplate_signaturetotal,
    int i_ezsigntemplate_formfieldtotal,
    int b_ezsigntemplate_incomplete,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
    ) {
    return ezsigntemplate_list_element_create_internal (
        pki_ezsigntemplate_id,
        fki_ezsignfoldertype_id,
        fki_language_id,
        s_ezsigntemplate_description,
        i_ezsigntemplatedocument_pagetotal,
        i_ezsigntemplate_signaturetotal,
        i_ezsigntemplate_formfieldtotal,
        b_ezsigntemplate_incomplete,
        s_ezsignfoldertype_name_x,
        e_ezsigntemplate_type
        );
}

void ezsigntemplate_list_element_free(ezsigntemplate_list_element_t *ezsigntemplate_list_element) {
    if(NULL == ezsigntemplate_list_element){
        return ;
    }
    if(ezsigntemplate_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_list_element->s_ezsigntemplate_description) {
        free(ezsigntemplate_list_element->s_ezsigntemplate_description);
        ezsigntemplate_list_element->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_list_element->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_list_element->s_ezsignfoldertype_name_x);
        ezsigntemplate_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsigntemplate_list_element);
}

cJSON *ezsigntemplate_list_element_convertToJSON(ezsigntemplate_list_element_t *ezsigntemplate_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_list_element->pki_ezsigntemplate_id
    if (!ezsigntemplate_list_element->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_list_element->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_list_element->fki_ezsignfoldertype_id
    if(ezsigntemplate_list_element->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_list_element->fki_language_id
    if (!ezsigntemplate_list_element->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_list_element->s_ezsigntemplate_description
    if (!ezsigntemplate_list_element->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_list_element->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_list_element->i_ezsigntemplatedocument_pagetotal
    if(ezsigntemplate_list_element->i_ezsigntemplatedocument_pagetotal) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentPagetotal", ezsigntemplate_list_element->i_ezsigntemplatedocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_list_element->i_ezsigntemplate_signaturetotal
    if(ezsigntemplate_list_element->i_ezsigntemplate_signaturetotal) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateSignaturetotal", ezsigntemplate_list_element->i_ezsigntemplate_signaturetotal) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_list_element->i_ezsigntemplate_formfieldtotal
    if(ezsigntemplate_list_element->i_ezsigntemplate_formfieldtotal) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateFormfieldtotal", ezsigntemplate_list_element->i_ezsigntemplate_formfieldtotal) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_list_element->b_ezsigntemplate_incomplete
    if (!ezsigntemplate_list_element->b_ezsigntemplate_incomplete) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateIncomplete", ezsigntemplate_list_element->b_ezsigntemplate_incomplete) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_list_element->s_ezsignfoldertype_name_x
    if(ezsigntemplate_list_element->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_list_element->e_ezsigntemplate_type
    if (ezmax_api_definition__full_field_e_ezsigntemplate_type__NULL == ezsigntemplate_list_element->e_ezsigntemplate_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplate_type_local_JSON = field_e_ezsigntemplate_type_convertToJSON(ezsigntemplate_list_element->e_ezsigntemplate_type);
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

ezsigntemplate_list_element_t *ezsigntemplate_list_element_parseFromJSON(cJSON *ezsigntemplate_list_elementJSON){

    ezsigntemplate_list_element_t *ezsigntemplate_list_element_local_var = NULL;

    // define the local variable for ezsigntemplate_list_element->e_ezsigntemplate_type
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type_local_nonprim = 0;

    // ezsigntemplate_list_element->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "pkiEzsigntemplateID");
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

    // ezsigntemplate_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "fkiLanguageID");
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

    // ezsigntemplate_list_element->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "sEzsigntemplateDescription");
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

    // ezsigntemplate_list_element->i_ezsigntemplatedocument_pagetotal
    cJSON *i_ezsigntemplatedocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplatedocumentPagetotal");
    if (cJSON_IsNull(i_ezsigntemplatedocument_pagetotal)) {
        i_ezsigntemplatedocument_pagetotal = NULL;
    }
    if (i_ezsigntemplatedocument_pagetotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_pagetotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->i_ezsigntemplate_signaturetotal
    cJSON *i_ezsigntemplate_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplateSignaturetotal");
    if (cJSON_IsNull(i_ezsigntemplate_signaturetotal)) {
        i_ezsigntemplate_signaturetotal = NULL;
    }
    if (i_ezsigntemplate_signaturetotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplate_signaturetotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->i_ezsigntemplate_formfieldtotal
    cJSON *i_ezsigntemplate_formfieldtotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplateFormfieldtotal");
    if (cJSON_IsNull(i_ezsigntemplate_formfieldtotal)) {
        i_ezsigntemplate_formfieldtotal = NULL;
    }
    if (i_ezsigntemplate_formfieldtotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplate_formfieldtotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->b_ezsigntemplate_incomplete
    cJSON *b_ezsigntemplate_incomplete = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "bEzsigntemplateIncomplete");
    if (cJSON_IsNull(b_ezsigntemplate_incomplete)) {
        b_ezsigntemplate_incomplete = NULL;
    }
    if (!b_ezsigntemplate_incomplete) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_incomplete))
    {
    goto end; //Bool
    }

    // ezsigntemplate_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_list_element->e_ezsigntemplate_type
    cJSON *e_ezsigntemplate_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "eEzsigntemplateType");
    if (cJSON_IsNull(e_ezsigntemplate_type)) {
        e_ezsigntemplate_type = NULL;
    }
    if (!e_ezsigntemplate_type) {
        goto end;
    }

    
    e_ezsigntemplate_type_local_nonprim = field_e_ezsigntemplate_type_parseFromJSON(e_ezsigntemplate_type); //custom


    ezsigntemplate_list_element_local_var = ezsigntemplate_list_element_create_internal (
        pki_ezsigntemplate_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplate_description->valuestring),
        i_ezsigntemplatedocument_pagetotal ? i_ezsigntemplatedocument_pagetotal->valuedouble : 0,
        i_ezsigntemplate_signaturetotal ? i_ezsigntemplate_signaturetotal->valuedouble : 0,
        i_ezsigntemplate_formfieldtotal ? i_ezsigntemplate_formfieldtotal->valuedouble : 0,
        b_ezsigntemplate_incomplete->valueint,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        e_ezsigntemplate_type_local_nonprim
        );

    return ezsigntemplate_list_element_local_var;
end:
    if (e_ezsigntemplate_type_local_nonprim) {
        e_ezsigntemplate_type_local_nonprim = 0;
    }
    return NULL;

}
