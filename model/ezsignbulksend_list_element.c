#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_list_element.h"



static ezsignbulksend_list_element_t *ezsignbulksend_list_element_create_internal(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignbulksend_needvalidation,
    int i_ezsignbulksendtransmission,
    int i_ezsignfolder,
    int i_ezsigndocument,
    int i_ezsignsignature,
    int i_ezsignsignature_signed,
    int b_ezsignbulksend_isactive
    ) {
    ezsignbulksend_list_element_t *ezsignbulksend_list_element_local_var = malloc(sizeof(ezsignbulksend_list_element_t));
    if (!ezsignbulksend_list_element_local_var) {
        return NULL;
    }
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

    ezsignbulksend_list_element_local_var->_library_owned = 1;
    return ezsignbulksend_list_element_local_var;
}

__attribute__((deprecated)) ezsignbulksend_list_element_t *ezsignbulksend_list_element_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignbulksend_needvalidation,
    int i_ezsignbulksendtransmission,
    int i_ezsignfolder,
    int i_ezsigndocument,
    int i_ezsignsignature,
    int i_ezsignsignature_signed,
    int b_ezsignbulksend_isactive
    ) {
    return ezsignbulksend_list_element_create_internal (
        pki_ezsignbulksend_id,
        fki_ezsignfoldertype_id,
        s_ezsignbulksend_description,
        s_ezsignfoldertype_name_x,
        b_ezsignbulksend_needvalidation,
        i_ezsignbulksendtransmission,
        i_ezsignfolder,
        i_ezsigndocument,
        i_ezsignsignature,
        i_ezsignsignature_signed,
        b_ezsignbulksend_isactive
        );
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
    if (ezsignbulksend_list_element->s_ezsignbulksend_description) {
        free(ezsignbulksend_list_element->s_ezsignbulksend_description);
        ezsignbulksend_list_element->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignbulksend_list_element->s_ezsignfoldertype_name_x);
        ezsignbulksend_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsignbulksend_list_element);
}

cJSON *ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_t *ezsignbulksend_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_list_element->pki_ezsignbulksend_id
    if (!ezsignbulksend_list_element->pki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_list_element->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->fki_ezsignfoldertype_id
    if (!ezsignbulksend_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_list_element->fki_ezsignfoldertype_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsignbulksend_list_element->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_list_element->i_ezsignbulksendtransmission
    if (!ezsignbulksend_list_element->i_ezsignbulksendtransmission) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksendtransmission", ezsignbulksend_list_element->i_ezsignbulksendtransmission) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignfolder
    if (!ezsignbulksend_list_element->i_ezsignfolder) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolder", ezsignbulksend_list_element->i_ezsignfolder) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsigndocument
    if (!ezsignbulksend_list_element->i_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", ezsignbulksend_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature
    if (!ezsignbulksend_list_element->i_ezsignsignature) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignature", ezsignbulksend_list_element->i_ezsignsignature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature_signed
    if (!ezsignbulksend_list_element->i_ezsignsignature_signed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureSigned", ezsignbulksend_list_element->i_ezsignsignature_signed) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->b_ezsignbulksend_isactive
    if (!ezsignbulksend_list_element->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_list_element->b_ezsignbulksend_isactive) == NULL) {
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


    ezsignbulksend_list_element_local_var = ezsignbulksend_list_element_create_internal (
        pki_ezsignbulksend_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsignbulksend_needvalidation->valueint,
        i_ezsignbulksendtransmission->valuedouble,
        i_ezsignfolder->valuedouble,
        i_ezsigndocument->valuedouble,
        i_ezsignsignature->valuedouble,
        i_ezsignsignature_signed->valuedouble,
        b_ezsignbulksend_isactive->valueint
        );

    return ezsignbulksend_list_element_local_var;
end:
    return NULL;

}
