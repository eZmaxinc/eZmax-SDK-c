#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_request.h"


char* e_ezsigntemplateformfieldgroup_typeezsigntemplateformfieldgroup_request_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_type) {
    char* e_ezsigntemplateformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
	return e_ezsigntemplateformfieldgroup_typeArray[e_ezsigntemplateformfieldgroup_type];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_typeezsigntemplateformfieldgroup_request_FromString(char* e_ezsigntemplateformfieldgroup_type){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfieldgroup_typeArray) / sizeof(e_ezsigntemplateformfieldgroup_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfieldgroup_type, e_ezsigntemplateformfieldgroup_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplateformfieldgroup_signerrequirementezsigntemplateformfieldgroup_request_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_signerrequirement) {
    char* e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
	return e_ezsigntemplateformfieldgroup_signerrequirementArray[e_ezsigntemplateformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_signerrequirementezsigntemplateformfieldgroup_request_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfieldgroup_signerrequirementArray) / sizeof(e_ezsigntemplateformfieldgroup_signerrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfieldgroup_signerrequirement, e_ezsigntemplateformfieldgroup_signerrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplateformfieldgroup_tooltippositionezsigntemplateformfieldgroup_request_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_tooltipposition) {
    char* e_ezsigntemplateformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsigntemplateformfieldgroup_tooltippositionArray[e_ezsigntemplateformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_tooltippositionezsigntemplateformfieldgroup_request_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfieldgroup_tooltippositionArray) / sizeof(e_ezsigntemplateformfieldgroup_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfieldgroup_tooltipposition, e_ezsigntemplateformfieldgroup_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_create(
    int pki_ezsigntemplateformfieldgroup_id,
    int fki_ezsigntemplatedocument_id,
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type,
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement,
    char *s_ezsigntemplateformfieldgroup_label,
    int i_ezsigntemplateformfieldgroup_step,
    char *s_ezsigntemplateformfieldgroup_defaultvalue,
    int i_ezsigntemplateformfieldgroup_filledmin,
    int i_ezsigntemplateformfieldgroup_filledmax,
    int b_ezsigntemplateformfieldgroup_readonly,
    int i_ezsigntemplateformfieldgroup_maxlength,
    int b_ezsigntemplateformfieldgroup_encrypted,
    char *s_ezsigntemplateformfieldgroup_regexp,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition
    ) {
    ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_request_t));
    if (!ezsigntemplateformfieldgroup_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_request_local_var->pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    ezsigntemplateformfieldgroup_request_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplateformfieldgroup_request_local_var->e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    ezsigntemplateformfieldgroup_request_local_var->e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    ezsigntemplateformfieldgroup_request_local_var->s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    ezsigntemplateformfieldgroup_request_local_var->i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    ezsigntemplateformfieldgroup_request_local_var->s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    ezsigntemplateformfieldgroup_request_local_var->i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    ezsigntemplateformfieldgroup_request_local_var->i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    ezsigntemplateformfieldgroup_request_local_var->b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    ezsigntemplateformfieldgroup_request_local_var->i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    ezsigntemplateformfieldgroup_request_local_var->b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    ezsigntemplateformfieldgroup_request_local_var->s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    ezsigntemplateformfieldgroup_request_local_var->t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    ezsigntemplateformfieldgroup_request_local_var->e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;

    return ezsigntemplateformfieldgroup_request_local_var;
}


void ezsigntemplateformfieldgroup_request_free(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request) {
    if(NULL == ezsigntemplateformfieldgroup_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type) {
        field_e_ezsigntemplateformfieldgroup_type_free(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type);
        ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement) {
        field_e_ezsigntemplateformfieldgroup_signerrequirement_free(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement);
        ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label) {
        free(ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label);
        ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue) {
        free(ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue);
        ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp) {
        free(ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp);
        ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip) {
        free(ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip);
        ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip = NULL;
    }
    if (ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition) {
        field_e_ezsigntemplateformfieldgroup_tooltipposition_free(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition);
        ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition = NULL;
    }
    free(ezsigntemplateformfieldgroup_request);
}

cJSON *ezsigntemplateformfieldgroup_request_convertToJSON(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_request->pki_ezsigntemplateformfieldgroup_id
    if(ezsigntemplateformfieldgroup_request->pki_ezsigntemplateformfieldgroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupID", ezsigntemplateformfieldgroup_request->pki_ezsigntemplateformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_request->fki_ezsigntemplatedocument_id
    if (!ezsigntemplateformfieldgroup_request->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplateformfieldgroup_request->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type
    if (ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL == ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_type_local_JSON = field_e_ezsigntemplateformfieldgroup_type_convertToJSON(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type);
    if(e_ezsigntemplateformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupType", e_ezsigntemplateformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement
    if (ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL == ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON = field_e_ezsigntemplateformfieldgroup_signerrequirement_convertToJSON(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement);
    if(e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupSignerrequirement", e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label
    if (!ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupLabel", ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_step
    if (!ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupStep", ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue
    if (!ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupDefaultvalue", ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmin
    if (!ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmin", ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmax
    if (!ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmax", ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_readonly
    if (!ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupReadonly", ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_maxlength
    if(ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupMaxlength", ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_encrypted
    if(ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupEncrypted", ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp
    if(ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupRegexp", ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip
    if(ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateformfieldgroupTooltip", ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition
    if(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition != ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON = field_e_ezsigntemplateformfieldgroup_tooltipposition_convertToJSON(ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition);
    if(e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTooltipposition", e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON);
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

ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_requestJSON){

    ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = NULL;

    // ezsigntemplateformfieldgroup_request->pki_ezsigntemplateformfieldgroup_id
    cJSON *pki_ezsigntemplateformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "pkiEzsigntemplateformfieldgroupID");
    if (pki_ezsigntemplateformfieldgroup_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroup_request->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_type
    cJSON *e_ezsigntemplateformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "eEzsigntemplateformfieldgroupType");
    if (!e_ezsigntemplateformfieldgroup_type) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_type_local_nonprim = field_e_ezsigntemplateformfieldgroup_type_parseFromJSON(e_ezsigntemplateformfieldgroup_type); //custom

    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_signerrequirement
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "eEzsigntemplateformfieldgroupSignerrequirement");
    if (!e_ezsigntemplateformfieldgroup_signerrequirement) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = field_e_ezsigntemplateformfieldgroup_signerrequirement_parseFromJSON(e_ezsigntemplateformfieldgroup_signerrequirement); //custom

    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_label
    cJSON *s_ezsigntemplateformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "sEzsigntemplateformfieldgroupLabel");
    if (!s_ezsigntemplateformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_step
    cJSON *i_ezsigntemplateformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "iEzsigntemplateformfieldgroupStep");
    if (!i_ezsigntemplateformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_defaultvalue
    cJSON *s_ezsigntemplateformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "sEzsigntemplateformfieldgroupDefaultvalue");
    if (!s_ezsigntemplateformfieldgroup_defaultvalue) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_defaultvalue))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmin
    cJSON *i_ezsigntemplateformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "iEzsigntemplateformfieldgroupFilledmin");
    if (!i_ezsigntemplateformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_filledmax
    cJSON *i_ezsigntemplateformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "iEzsigntemplateformfieldgroupFilledmax");
    if (!i_ezsigntemplateformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_readonly
    cJSON *b_ezsigntemplateformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "bEzsigntemplateformfieldgroupReadonly");
    if (!b_ezsigntemplateformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsigntemplateformfieldgroup_request->i_ezsigntemplateformfieldgroup_maxlength
    cJSON *i_ezsigntemplateformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "iEzsigntemplateformfieldgroupMaxlength");
    if (i_ezsigntemplateformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroup_request->b_ezsigntemplateformfieldgroup_encrypted
    cJSON *b_ezsigntemplateformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "bEzsigntemplateformfieldgroupEncrypted");
    if (b_ezsigntemplateformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfieldgroup_request->s_ezsigntemplateformfieldgroup_regexp
    cJSON *s_ezsigntemplateformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "sEzsigntemplateformfieldgroupRegexp");
    if (s_ezsigntemplateformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_request->t_ezsigntemplateformfieldgroup_tooltip
    cJSON *t_ezsigntemplateformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "tEzsigntemplateformfieldgroupTooltip");
    if (t_ezsigntemplateformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplateformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_request->e_ezsigntemplateformfieldgroup_tooltipposition
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_requestJSON, "eEzsigntemplateformfieldgroupTooltipposition");
    if (e_ezsigntemplateformfieldgroup_tooltipposition) { 
    e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = field_e_ezsigntemplateformfieldgroup_tooltipposition_parseFromJSON(e_ezsigntemplateformfieldgroup_tooltipposition); //custom
    }


    ezsigntemplateformfieldgroup_request_local_var = ezsigntemplateformfieldgroup_request_create (
        pki_ezsigntemplateformfieldgroup_id ? pki_ezsigntemplateformfieldgroup_id->valuedouble : 0,
        fki_ezsigntemplatedocument_id->valuedouble,
        e_ezsigntemplateformfieldgroup_type_local_nonprim,
        e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim,
        strdup(s_ezsigntemplateformfieldgroup_label->valuestring),
        i_ezsigntemplateformfieldgroup_step->valuedouble,
        strdup(s_ezsigntemplateformfieldgroup_defaultvalue->valuestring),
        i_ezsigntemplateformfieldgroup_filledmin->valuedouble,
        i_ezsigntemplateformfieldgroup_filledmax->valuedouble,
        b_ezsigntemplateformfieldgroup_readonly->valueint,
        i_ezsigntemplateformfieldgroup_maxlength ? i_ezsigntemplateformfieldgroup_maxlength->valuedouble : 0,
        b_ezsigntemplateformfieldgroup_encrypted ? b_ezsigntemplateformfieldgroup_encrypted->valueint : 0,
        s_ezsigntemplateformfieldgroup_regexp ? strdup(s_ezsigntemplateformfieldgroup_regexp->valuestring) : NULL,
        t_ezsigntemplateformfieldgroup_tooltip ? strdup(t_ezsigntemplateformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsigntemplateformfieldgroup_tooltipposition ? e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim : NULL
        );

    return ezsigntemplateformfieldgroup_request_local_var;
end:
    if (e_ezsigntemplateformfieldgroup_type_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_type_free(e_ezsigntemplateformfieldgroup_type_local_nonprim);
        e_ezsigntemplateformfieldgroup_type_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_signerrequirement_free(e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim);
        e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_tooltipposition_free(e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim);
        e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = NULL;
    }
    return NULL;

}
