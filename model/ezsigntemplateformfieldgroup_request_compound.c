#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_request_compound.h"


char* ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_type_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e e_ezsigntemplateformfieldgroup_type) {
    char* e_ezsigntemplateformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox", "Number", "Date" };
    return e_ezsigntemplateformfieldgroup_typeArray[e_ezsigntemplateformfieldgroup_type];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_type_FromString(char* e_ezsigntemplateformfieldgroup_type){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox", "Number", "Date" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfieldgroup_typeArray) / sizeof(e_ezsigntemplateformfieldgroup_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfieldgroup_type, e_ezsigntemplateformfieldgroup_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e e_ezsigntemplateformfieldgroup_signerrequirement) {
    char* e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    return e_ezsigntemplateformfieldgroup_signerrequirementArray[e_ezsigntemplateformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement){
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
char* ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e e_ezsigntemplateformfieldgroup_textvalidation) {
    char* e_ezsigntemplateformfieldgroup_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    return e_ezsigntemplateformfieldgroup_textvalidationArray[e_ezsigntemplateformfieldgroup_textvalidation];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_textvalidation_FromString(char* e_ezsigntemplateformfieldgroup_textvalidation){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfieldgroup_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfieldgroup_textvalidationArray) / sizeof(e_ezsigntemplateformfieldgroup_textvalidationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfieldgroup_textvalidation, e_ezsigntemplateformfieldgroup_textvalidationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e e_ezsigntemplateformfieldgroup_tooltipposition) {
    char* e_ezsigntemplateformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    return e_ezsigntemplateformfieldgroup_tooltippositionArray[e_ezsigntemplateformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__e ezsigntemplateformfieldgroup_request_compound_e_ezsigntemplateformfieldgroup_tooltipposition_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition){
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

ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound_create(
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
    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage,
    enum_textvalidation_t *e_ezsigntemplateformfieldgroup_textvalidation,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
    ) {
    ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_request_compound_t));
    if (!ezsigntemplateformfieldgroup_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_request_compound_local_var->pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    ezsigntemplateformfieldgroup_request_compound_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplateformfieldgroup_request_compound_local_var->e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    ezsigntemplateformfieldgroup_request_compound_local_var->e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    ezsigntemplateformfieldgroup_request_compound_local_var->s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    ezsigntemplateformfieldgroup_request_compound_local_var->i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    ezsigntemplateformfieldgroup_request_compound_local_var->s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    ezsigntemplateformfieldgroup_request_compound_local_var->i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    ezsigntemplateformfieldgroup_request_compound_local_var->i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    ezsigntemplateformfieldgroup_request_compound_local_var->b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    ezsigntemplateformfieldgroup_request_compound_local_var->i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    ezsigntemplateformfieldgroup_request_compound_local_var->b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    ezsigntemplateformfieldgroup_request_compound_local_var->s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    ezsigntemplateformfieldgroup_request_compound_local_var->s_ezsigntemplateformfieldgroup_textvalidationcustommessage = s_ezsigntemplateformfieldgroup_textvalidationcustommessage;
    ezsigntemplateformfieldgroup_request_compound_local_var->e_ezsigntemplateformfieldgroup_textvalidation = e_ezsigntemplateformfieldgroup_textvalidation;
    ezsigntemplateformfieldgroup_request_compound_local_var->t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    ezsigntemplateformfieldgroup_request_compound_local_var->e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    ezsigntemplateformfieldgroup_request_compound_local_var->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    ezsigntemplateformfieldgroup_request_compound_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsigntemplateformfieldgroup_request_compound_local_var->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;

    return ezsigntemplateformfieldgroup_request_compound_local_var;
}


void ezsigntemplateformfieldgroup_request_compound_free(ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound) {
    if(NULL == ezsigntemplateformfieldgroup_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type) {
        field_e_ezsigntemplateformfieldgroup_type_free(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type);
        ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement) {
        field_e_ezsigntemplateformfieldgroup_signerrequirement_free(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement);
        ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label) {
        free(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label);
        ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue) {
        free(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue);
        ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp) {
        free(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp);
        ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) {
        free(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage);
        ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation) {
        enum_textvalidation_free(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation);
        ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip) {
        free(ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip);
        ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition) {
        field_e_ezsigntemplateformfieldgroup_tooltipposition_free(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition);
        ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
            ezsigntemplateformfieldgroupsigner_request_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner);
        ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element) {
            custom_dropdown_element_request_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element);
        ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element = NULL;
    }
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield) {
            ezsigntemplateformfield_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield);
        ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield = NULL;
    }
    free(ezsigntemplateformfieldgroup_request_compound);
}

cJSON *ezsigntemplateformfieldgroup_request_compound_convertToJSON(ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_request_compound->pki_ezsigntemplateformfieldgroup_id
    if(ezsigntemplateformfieldgroup_request_compound->pki_ezsigntemplateformfieldgroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupID", ezsigntemplateformfieldgroup_request_compound->pki_ezsigntemplateformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->fki_ezsigntemplatedocument_id
    if (!ezsigntemplateformfieldgroup_request_compound->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplateformfieldgroup_request_compound->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type
    if (ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__NULL == ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_type_local_JSON = field_e_ezsigntemplateformfieldgroup_type_convertToJSON(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type);
    if(e_ezsigntemplateformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupType", e_ezsigntemplateformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    if(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement != ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON = field_e_ezsigntemplateformfieldgroup_signerrequirement_convertToJSON(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement);
    if(e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupSignerrequirement", e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label
    if (!ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupLabel", ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_step
    if (!ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupStep", ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue
    if (!ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupDefaultvalue", ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmin
    if (!ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmin", ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmax
    if (!ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmax", ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_readonly
    if (!ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupReadonly", ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_maxlength
    if(ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupMaxlength", ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_encrypted
    if(ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupEncrypted", ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp
    if(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupRegexp", ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage
    if(ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupTextvalidationcustommessage", ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation
    if(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation != ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation);
    if(e_ezsigntemplateformfieldgroup_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTextvalidation", e_ezsigntemplateformfieldgroup_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip
    if(ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateformfieldgroupTooltip", ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    if(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition != ezmax_api_definition__full_ezsigntemplateformfieldgroup_request_compound__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON = field_e_ezsigntemplateformfieldgroup_tooltipposition_convertToJSON(ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition);
    if(e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTooltipposition", e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner
    if (!ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroupsigner");
    if(a_obj_ezsigntemplateformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupsignerListEntry;
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupsignerListEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
    cJSON *itemLocal = ezsigntemplateformfieldgroupsigner_request_convertToJSON(a_obj_ezsigntemplateformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroupsigner, itemLocal);
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element
    if(ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_request_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield
    if (!ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfield = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfield");
    if(a_obj_ezsigntemplateformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldListEntry;
    if (ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield) {
    list_ForEach(a_obj_ezsigntemplateformfieldListEntry, ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield) {
    cJSON *itemLocal = ezsigntemplateformfield_request_compound_convertToJSON(a_obj_ezsigntemplateformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfield, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_request_compoundJSON){

    ezsigntemplateformfieldgroup_request_compound_t *ezsigntemplateformfieldgroup_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation
    enum_textvalidation_t *e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = NULL;

    // define the local list for ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner
    list_t *a_obj_ezsigntemplateformfieldgroupsignerList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield
    list_t *a_obj_ezsigntemplateformfieldList = NULL;

    // ezsigntemplateformfieldgroup_request_compound->pki_ezsigntemplateformfieldgroup_id
    cJSON *pki_ezsigntemplateformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "pkiEzsigntemplateformfieldgroupID");
    if (pki_ezsigntemplateformfieldgroup_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_type
    cJSON *e_ezsigntemplateformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "eEzsigntemplateformfieldgroupType");
    if (!e_ezsigntemplateformfieldgroup_type) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_type_local_nonprim = field_e_ezsigntemplateformfieldgroup_type_parseFromJSON(e_ezsigntemplateformfieldgroup_type); //custom

    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "eEzsigntemplateformfieldgroupSignerrequirement");
    if (e_ezsigntemplateformfieldgroup_signerrequirement) { 
    e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = field_e_ezsigntemplateformfieldgroup_signerrequirement_parseFromJSON(e_ezsigntemplateformfieldgroup_signerrequirement); //custom
    }

    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_label
    cJSON *s_ezsigntemplateformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "sEzsigntemplateformfieldgroupLabel");
    if (!s_ezsigntemplateformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_step
    cJSON *i_ezsigntemplateformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "iEzsigntemplateformfieldgroupStep");
    if (!i_ezsigntemplateformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_defaultvalue
    cJSON *s_ezsigntemplateformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "sEzsigntemplateformfieldgroupDefaultvalue");
    if (!s_ezsigntemplateformfieldgroup_defaultvalue) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_defaultvalue))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmin
    cJSON *i_ezsigntemplateformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "iEzsigntemplateformfieldgroupFilledmin");
    if (!i_ezsigntemplateformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_filledmax
    cJSON *i_ezsigntemplateformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "iEzsigntemplateformfieldgroupFilledmax");
    if (!i_ezsigntemplateformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_readonly
    cJSON *b_ezsigntemplateformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "bEzsigntemplateformfieldgroupReadonly");
    if (!b_ezsigntemplateformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsigntemplateformfieldgroup_request_compound->i_ezsigntemplateformfieldgroup_maxlength
    cJSON *i_ezsigntemplateformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "iEzsigntemplateformfieldgroupMaxlength");
    if (i_ezsigntemplateformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->b_ezsigntemplateformfieldgroup_encrypted
    cJSON *b_ezsigntemplateformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "bEzsigntemplateformfieldgroupEncrypted");
    if (b_ezsigntemplateformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_regexp
    cJSON *s_ezsigntemplateformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "sEzsigntemplateformfieldgroupRegexp");
    if (s_ezsigntemplateformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_regexp) && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage
    cJSON *s_ezsigntemplateformfieldgroup_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "sEzsigntemplateformfieldgroupTextvalidationcustommessage");
    if (s_ezsigntemplateformfieldgroup_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_textvalidationcustommessage) && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_textvalidation
    cJSON *e_ezsigntemplateformfieldgroup_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "eEzsigntemplateformfieldgroupTextvalidation");
    if (e_ezsigntemplateformfieldgroup_textvalidation) { 
    e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplateformfieldgroup_textvalidation); //custom
    }

    // ezsigntemplateformfieldgroup_request_compound->t_ezsigntemplateformfieldgroup_tooltip
    cJSON *t_ezsigntemplateformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "tEzsigntemplateformfieldgroupTooltip");
    if (t_ezsigntemplateformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplateformfieldgroup_tooltip) && !cJSON_IsNull(t_ezsigntemplateformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "eEzsigntemplateformfieldgroupTooltipposition");
    if (e_ezsigntemplateformfieldgroup_tooltipposition) { 
    e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = field_e_ezsigntemplateformfieldgroup_tooltipposition_parseFromJSON(e_ezsigntemplateformfieldgroup_tooltipposition); //custom
    }

    // ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfieldgroupsigner
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "a_objEzsigntemplateformfieldgroupsigner");
    if (!a_obj_ezsigntemplateformfieldgroupsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive,a_obj_ezsigntemplateformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroupsigner_request_t *a_obj_ezsigntemplateformfieldgroupsignerItem = ezsigntemplateformfieldgroupsigner_request_parseFromJSON(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupsignerList, a_obj_ezsigntemplateformfieldgroupsignerItem);
    }

    // ezsigntemplateformfieldgroup_request_compound->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "a_objDropdownElement");
    if (a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_dropdown_element)){
        goto end; //nonprimitive container
    }

    a_obj_dropdown_elementList = list_createList();

    cJSON_ArrayForEach(a_obj_dropdown_element_local_nonprimitive,a_obj_dropdown_element )
    {
        if(!cJSON_IsObject(a_obj_dropdown_element_local_nonprimitive)){
            goto end;
        }
        custom_dropdown_element_request_t *a_obj_dropdown_elementItem = custom_dropdown_element_request_parseFromJSON(a_obj_dropdown_element_local_nonprimitive);

        list_addElement(a_obj_dropdown_elementList, a_obj_dropdown_elementItem);
    }
    }

    // ezsigntemplateformfieldgroup_request_compound->a_obj_ezsigntemplateformfield
    cJSON *a_obj_ezsigntemplateformfield = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_request_compoundJSON, "a_objEzsigntemplateformfield");
    if (!a_obj_ezsigntemplateformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfield_local_nonprimitive,a_obj_ezsigntemplateformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfield_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfield_request_compound_t *a_obj_ezsigntemplateformfieldItem = ezsigntemplateformfield_request_compound_parseFromJSON(a_obj_ezsigntemplateformfield_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldList, a_obj_ezsigntemplateformfieldItem);
    }


    ezsigntemplateformfieldgroup_request_compound_local_var = ezsigntemplateformfieldgroup_request_compound_create (
        pki_ezsigntemplateformfieldgroup_id ? pki_ezsigntemplateformfieldgroup_id->valuedouble : 0,
        fki_ezsigntemplatedocument_id->valuedouble,
        e_ezsigntemplateformfieldgroup_type_local_nonprim,
        e_ezsigntemplateformfieldgroup_signerrequirement ? e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim : NULL,
        strdup(s_ezsigntemplateformfieldgroup_label->valuestring),
        i_ezsigntemplateformfieldgroup_step->valuedouble,
        strdup(s_ezsigntemplateformfieldgroup_defaultvalue->valuestring),
        i_ezsigntemplateformfieldgroup_filledmin->valuedouble,
        i_ezsigntemplateformfieldgroup_filledmax->valuedouble,
        b_ezsigntemplateformfieldgroup_readonly->valueint,
        i_ezsigntemplateformfieldgroup_maxlength ? i_ezsigntemplateformfieldgroup_maxlength->valuedouble : 0,
        b_ezsigntemplateformfieldgroup_encrypted ? b_ezsigntemplateformfieldgroup_encrypted->valueint : 0,
        s_ezsigntemplateformfieldgroup_regexp && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_regexp) ? strdup(s_ezsigntemplateformfieldgroup_regexp->valuestring) : NULL,
        s_ezsigntemplateformfieldgroup_textvalidationcustommessage && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_textvalidationcustommessage) ? strdup(s_ezsigntemplateformfieldgroup_textvalidationcustommessage->valuestring) : NULL,
        e_ezsigntemplateformfieldgroup_textvalidation ? e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim : NULL,
        t_ezsigntemplateformfieldgroup_tooltip && !cJSON_IsNull(t_ezsigntemplateformfieldgroup_tooltip) ? strdup(t_ezsigntemplateformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsigntemplateformfieldgroup_tooltipposition ? e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim : NULL,
        a_obj_ezsigntemplateformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsigntemplateformfieldList
        );

    return ezsigntemplateformfieldgroup_request_compound_local_var;
end:
    if (e_ezsigntemplateformfieldgroup_type_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_type_free(e_ezsigntemplateformfieldgroup_type_local_nonprim);
        e_ezsigntemplateformfieldgroup_type_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_signerrequirement_free(e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim);
        e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim) {
        enum_textvalidation_free(e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim);
        e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim) {
        field_e_ezsigntemplateformfieldgroup_tooltipposition_free(e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim);
        e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplateformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupsignerList) {
            ezsigntemplateformfieldgroupsigner_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupsignerList);
        a_obj_ezsigntemplateformfieldgroupsignerList = NULL;
    }
    if (a_obj_dropdown_elementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_dropdown_elementList) {
            custom_dropdown_element_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_dropdown_elementList);
        a_obj_dropdown_elementList = NULL;
    }
    if (a_obj_ezsigntemplateformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldList) {
            ezsigntemplateformfield_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldList);
        a_obj_ezsigntemplateformfieldList = NULL;
    }
    return NULL;

}
