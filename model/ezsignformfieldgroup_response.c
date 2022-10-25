#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response.h"


char* e_ezsignformfieldgroup_typeezsignformfieldgroup_response_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_type) {
    char* e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
	return e_ezsignformfieldgroup_typeArray[e_ezsignformfieldgroup_type];
}

ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_typeezsignformfieldgroup_response_FromString(char* e_ezsignformfieldgroup_type){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_typeArray) / sizeof(e_ezsignformfieldgroup_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_type, e_ezsignformfieldgroup_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_response_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_signerrequirement) {
    char* e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
	return e_ezsignformfieldgroup_signerrequirementArray[e_ezsignformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_response_FromString(char* e_ezsignformfieldgroup_signerrequirement){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_signerrequirementArray) / sizeof(e_ezsignformfieldgroup_signerrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_signerrequirement, e_ezsignformfieldgroup_signerrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_response_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_tooltipposition) {
    char* e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignformfieldgroup_tooltippositionArray[e_ezsignformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_response_FromString(char* e_ezsignformfieldgroup_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_tooltippositionArray) / sizeof(e_ezsignformfieldgroup_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_tooltipposition, e_ezsignformfieldgroup_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_create(
    int pki_ezsignformfieldgroup_id,
    int fki_ezsigndocument_id,
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type,
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement,
    char *s_ezsignformfieldgroup_label,
    int i_ezsignformfieldgroup_step,
    char *s_ezsignformfieldgroup_defaultvalue,
    int i_ezsignformfieldgroup_filledmin,
    int i_ezsignformfieldgroup_filledmax,
    int b_ezsignformfieldgroup_readonly,
    int i_ezsignformfieldgroup_maxlength,
    int b_ezsignformfieldgroup_encrypted,
    char *s_ezsignformfieldgroup_regexp,
    char *t_ezsignformfieldgroup_tooltip,
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition
    ) {
    ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_local_var = malloc(sizeof(ezsignformfieldgroup_response_t));
    if (!ezsignformfieldgroup_response_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    ezsignformfieldgroup_response_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignformfieldgroup_response_local_var->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    ezsignformfieldgroup_response_local_var->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    ezsignformfieldgroup_response_local_var->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    ezsignformfieldgroup_response_local_var->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    ezsignformfieldgroup_response_local_var->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    ezsignformfieldgroup_response_local_var->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    ezsignformfieldgroup_response_local_var->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    ezsignformfieldgroup_response_local_var->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    ezsignformfieldgroup_response_local_var->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    ezsignformfieldgroup_response_local_var->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;

    return ezsignformfieldgroup_response_local_var;
}


void ezsignformfieldgroup_response_free(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response) {
    if(NULL == ezsignformfieldgroup_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response->e_ezsignformfieldgroup_type) {
        field_e_ezsignformfieldgroup_type_free(ezsignformfieldgroup_response->e_ezsignformfieldgroup_type);
        ezsignformfieldgroup_response->e_ezsignformfieldgroup_type = NULL;
    }
    if (ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement) {
        field_e_ezsignformfieldgroup_signerrequirement_free(ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement);
        ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement = NULL;
    }
    if (ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_response->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_response->s_ezsignformfieldgroup_label = NULL;
    }
    if (ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue) {
        free(ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue);
        ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp) {
        free(ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp);
        ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp = NULL;
    }
    if (ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip) {
        free(ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip);
        ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip = NULL;
    }
    if (ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition) {
        field_e_ezsignformfieldgroup_tooltipposition_free(ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition);
        ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition = NULL;
    }
    free(ezsignformfieldgroup_response);
}

cJSON *ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_response->pki_ezsignformfieldgroup_id
    if (!ezsignformfieldgroup_response->pki_ezsignformfieldgroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", ezsignformfieldgroup_response->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response->fki_ezsigndocument_id
    if (!ezsignformfieldgroup_response->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignformfieldgroup_response->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_type
    if (ezmax_api_definition__full_ezsignformfieldgroup_response__NULL == ezsignformfieldgroup_response->e_ezsignformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_type_local_JSON = field_e_ezsignformfieldgroup_type_convertToJSON(ezsignformfieldgroup_response->e_ezsignformfieldgroup_type);
    if(e_ezsignformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupType", e_ezsignformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement
    if (ezmax_api_definition__full_ezsignformfieldgroup_response__NULL == ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_signerrequirement_local_JSON = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement);
    if(e_ezsignformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupSignerrequirement", e_ezsignformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_step
    if (!ezsignformfieldgroup_response->i_ezsignformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupStep", ezsignformfieldgroup_response->i_ezsignformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue
    if(ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupDefaultvalue", ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmin
    if (!ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmin", ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmax
    if (!ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmax", ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response->b_ezsignformfieldgroup_readonly
    if (!ezsignformfieldgroup_response->b_ezsignformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupReadonly", ezsignformfieldgroup_response->b_ezsignformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_maxlength
    if(ezsignformfieldgroup_response->i_ezsignformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupMaxlength", ezsignformfieldgroup_response->i_ezsignformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfieldgroup_response->b_ezsignformfieldgroup_encrypted
    if(ezsignformfieldgroup_response->b_ezsignformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupEncrypted", ezsignformfieldgroup_response->b_ezsignformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp
    if(ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupRegexp", ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip
    if(ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignformfieldgroupTooltip", ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition
    if(ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition != ezmax_api_definition__full_ezsignformfieldgroup_response__NULL) {
    cJSON *e_ezsignformfieldgroup_tooltipposition_local_JSON = field_e_ezsignformfieldgroup_tooltipposition_convertToJSON(ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition);
    if(e_ezsignformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTooltipposition", e_ezsignformfieldgroup_tooltipposition_local_JSON);
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

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_parseFromJSON(cJSON *ezsignformfieldgroup_responseJSON){

    ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_response->e_ezsignformfieldgroup_type
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition_local_nonprim = NULL;

    // ezsignformfieldgroup_response->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "pkiEzsignformfieldgroupID");
    if (!pki_ezsignformfieldgroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_type
    cJSON *e_ezsignformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "eEzsignformfieldgroupType");
    if (!e_ezsignformfieldgroup_type) {
        goto end;
    }

    
    e_ezsignformfieldgroup_type_local_nonprim = field_e_ezsignformfieldgroup_type_parseFromJSON(e_ezsignformfieldgroup_type); //custom

    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_signerrequirement
    cJSON *e_ezsignformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "eEzsignformfieldgroupSignerrequirement");
    if (!e_ezsignformfieldgroup_signerrequirement) {
        goto end;
    }

    
    e_ezsignformfieldgroup_signerrequirement_local_nonprim = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(e_ezsignformfieldgroup_signerrequirement); //custom

    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_step
    cJSON *i_ezsignformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "iEzsignformfieldgroupStep");
    if (!i_ezsignformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_defaultvalue
    cJSON *s_ezsignformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupDefaultvalue");
    if (s_ezsignformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmin
    cJSON *i_ezsignformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "iEzsignformfieldgroupFilledmin");
    if (!i_ezsignformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_filledmax
    cJSON *i_ezsignformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "iEzsignformfieldgroupFilledmax");
    if (!i_ezsignformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response->b_ezsignformfieldgroup_readonly
    cJSON *b_ezsignformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "bEzsignformfieldgroupReadonly");
    if (!b_ezsignformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsignformfieldgroup_response->i_ezsignformfieldgroup_maxlength
    cJSON *i_ezsignformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "iEzsignformfieldgroupMaxlength");
    if (i_ezsignformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroup_response->b_ezsignformfieldgroup_encrypted
    cJSON *b_ezsignformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "bEzsignformfieldgroupEncrypted");
    if (b_ezsignformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsignformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsignformfieldgroup_response->s_ezsignformfieldgroup_regexp
    cJSON *s_ezsignformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupRegexp");
    if (s_ezsignformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response->t_ezsignformfieldgroup_tooltip
    cJSON *t_ezsignformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "tEzsignformfieldgroupTooltip");
    if (t_ezsignformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsignformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response->e_ezsignformfieldgroup_tooltipposition
    cJSON *e_ezsignformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_responseJSON, "eEzsignformfieldgroupTooltipposition");
    if (e_ezsignformfieldgroup_tooltipposition) { 
    e_ezsignformfieldgroup_tooltipposition_local_nonprim = field_e_ezsignformfieldgroup_tooltipposition_parseFromJSON(e_ezsignformfieldgroup_tooltipposition); //custom
    }


    ezsignformfieldgroup_response_local_var = ezsignformfieldgroup_response_create (
        pki_ezsignformfieldgroup_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        e_ezsignformfieldgroup_type_local_nonprim,
        e_ezsignformfieldgroup_signerrequirement_local_nonprim,
        strdup(s_ezsignformfieldgroup_label->valuestring),
        i_ezsignformfieldgroup_step->valuedouble,
        s_ezsignformfieldgroup_defaultvalue ? strdup(s_ezsignformfieldgroup_defaultvalue->valuestring) : NULL,
        i_ezsignformfieldgroup_filledmin->valuedouble,
        i_ezsignformfieldgroup_filledmax->valuedouble,
        b_ezsignformfieldgroup_readonly->valueint,
        i_ezsignformfieldgroup_maxlength ? i_ezsignformfieldgroup_maxlength->valuedouble : 0,
        b_ezsignformfieldgroup_encrypted ? b_ezsignformfieldgroup_encrypted->valueint : 0,
        s_ezsignformfieldgroup_regexp ? strdup(s_ezsignformfieldgroup_regexp->valuestring) : NULL,
        t_ezsignformfieldgroup_tooltip ? strdup(t_ezsignformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsignformfieldgroup_tooltipposition ? e_ezsignformfieldgroup_tooltipposition_local_nonprim : NULL
        );

    return ezsignformfieldgroup_response_local_var;
end:
    if (e_ezsignformfieldgroup_type_local_nonprim) {
        field_e_ezsignformfieldgroup_type_free(e_ezsignformfieldgroup_type_local_nonprim);
        e_ezsignformfieldgroup_type_local_nonprim = NULL;
    }
    if (e_ezsignformfieldgroup_signerrequirement_local_nonprim) {
        field_e_ezsignformfieldgroup_signerrequirement_free(e_ezsignformfieldgroup_signerrequirement_local_nonprim);
        e_ezsignformfieldgroup_signerrequirement_local_nonprim = NULL;
    }
    if (e_ezsignformfieldgroup_tooltipposition_local_nonprim) {
        field_e_ezsignformfieldgroup_tooltipposition_free(e_ezsignformfieldgroup_tooltipposition_local_nonprim);
        e_ezsignformfieldgroup_tooltipposition_local_nonprim = NULL;
    }
    return NULL;

}
