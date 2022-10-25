#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_list_element.h"



ezsigntemplate_list_element_t *ezsigntemplate_list_element_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplate_signaturetotal,
    int i_ezsigntemplate_formfieldtotal,
    int b_ezsigntemplate_incomplete,
    char *s_ezsignfoldertype_name_x
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

    return ezsigntemplate_list_element_local_var;
}


void ezsigntemplate_list_element_free(ezsigntemplate_list_element_t *ezsigntemplate_list_element) {
    if(NULL == ezsigntemplate_list_element){
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
    if (!ezsigntemplate_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
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
    if (!ezsigntemplate_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
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

    // ezsigntemplate_list_element->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "pkiEzsigntemplateID");
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_list_element->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_list_element->i_ezsigntemplatedocument_pagetotal
    cJSON *i_ezsigntemplatedocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplatedocumentPagetotal");
    if (i_ezsigntemplatedocument_pagetotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_pagetotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->i_ezsigntemplate_signaturetotal
    cJSON *i_ezsigntemplate_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplateSignaturetotal");
    if (i_ezsigntemplate_signaturetotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplate_signaturetotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->i_ezsigntemplate_formfieldtotal
    cJSON *i_ezsigntemplate_formfieldtotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "iEzsigntemplateFormfieldtotal");
    if (i_ezsigntemplate_formfieldtotal) { 
    if(!cJSON_IsNumber(i_ezsigntemplate_formfieldtotal))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_list_element->b_ezsigntemplate_incomplete
    cJSON *b_ezsigntemplate_incomplete = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "bEzsigntemplateIncomplete");
    if (!b_ezsigntemplate_incomplete) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_incomplete))
    {
    goto end; //Bool
    }

    // ezsigntemplate_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_list_elementJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }


    ezsigntemplate_list_element_local_var = ezsigntemplate_list_element_create (
        pki_ezsigntemplate_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplate_description->valuestring),
        i_ezsigntemplatedocument_pagetotal ? i_ezsigntemplatedocument_pagetotal->valuedouble : 0,
        i_ezsigntemplate_signaturetotal ? i_ezsigntemplate_signaturetotal->valuedouble : 0,
        i_ezsigntemplate_formfieldtotal ? i_ezsigntemplate_formfieldtotal->valuedouble : 0,
        b_ezsigntemplate_incomplete->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring)
        );

    return ezsigntemplate_list_element_local_var;
end:
    return NULL;

}
