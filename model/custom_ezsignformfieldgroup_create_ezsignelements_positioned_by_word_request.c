#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request.h"


char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_type) {
    char* e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox", "Number", "Date" };
    return e_ezsignformfieldgroup_typeArray[e_ezsignformfieldgroup_type];
}

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox", "Number", "Date" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_typeArray) / sizeof(e_ezsignformfieldgroup_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_type, e_ezsignformfieldgroup_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_signerrequirement) {
    char* e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    return e_ezsignformfieldgroup_signerrequirementArray[e_ezsignformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement){
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
char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_tooltipposition) {
    char* e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    return e_ezsignformfieldgroup_tooltippositionArray[e_ezsignformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition){
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
char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_textvalidation) {
    char* e_ezsignformfieldgroup_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    return e_ezsignformfieldgroup_textvalidationArray[e_ezsignformfieldgroup_textvalidation];
}

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_textvalidation_FromString(char* e_ezsignformfieldgroup_textvalidation){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_textvalidationArray) / sizeof(e_ezsignformfieldgroup_textvalidationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_textvalidation, e_ezsignformfieldgroup_textvalidationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_create(
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
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition,
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation,
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield,
    custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword
    ) {
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var = malloc(sizeof(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t));
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var) {
        return NULL;
    }
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignformfieldgroup_textvalidationcustommessage = s_ezsignformfieldgroup_textvalidationcustommessage;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignformfieldgroup_textvalidation = e_ezsignformfieldgroup_textvalidation;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var->obj_createezsignelementspositionedbyword = obj_createezsignelementspositionedbyword;

    return custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var;
}


void custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request) {
    if(NULL == custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type) {
        field_e_ezsignformfieldgroup_type_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement) {
        field_e_ezsignformfieldgroup_signerrequirement_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label) {
        free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue) {
        free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp) {
        free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage) {
        free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip) {
        free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition) {
        field_e_ezsignformfieldgroup_tooltipposition_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation) {
        enum_textvalidation_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner) {
        list_ForEach(listEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner) {
            ezsignformfieldgroupsigner_request_free(listEntry->data);
        }
        list_freeList(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element) {
        list_ForEach(listEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element) {
            custom_dropdown_element_request_free(listEntry->data);
        }
        list_freeList(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield) {
        list_ForEach(listEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield) {
            ezsignformfield_request_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield = NULL;
    }
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword) {
        custom_create_ezsignelements_positioned_by_word_request_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword);
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword = NULL;
    }
    free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request);
}

cJSON *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->pki_ezsignformfieldgroup_id
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->pki_ezsignformfieldgroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type
    if (ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL == custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_type_local_JSON = field_e_ezsignformfieldgroup_type_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type);
    if(e_ezsignformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupType", e_ezsignformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement != ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignformfieldgroup_signerrequirement_local_JSON = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement);
    if(e_ezsignformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupSignerrequirement", e_ezsignformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_step
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupStep", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupDefaultvalue", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmin
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmin", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmax
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmax", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_readonly
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupReadonly", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_maxlength
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupMaxlength", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_encrypted
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupEncrypted", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupRegexp", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupTextvalidationcustommessage", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignformfieldgroupTooltip", custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition != ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignformfieldgroup_tooltipposition_local_JSON = field_e_ezsignformfieldgroup_tooltipposition_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition);
    if(e_ezsignformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTooltipposition", e_ezsignformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation != ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignformfieldgroup_textvalidation_local_JSON = enum_textvalidation_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation);
    if(e_ezsignformfieldgroup_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTextvalidation", e_ezsignformfieldgroup_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroupsigner");
    if(a_obj_ezsignformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupsignerListEntry;
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner) {
    list_ForEach(a_obj_ezsignformfieldgroupsignerListEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner) {
    cJSON *itemLocal = ezsignformfieldgroupsigner_request_convertToJSON(a_obj_ezsignformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroupsigner, itemLocal);
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element
    if(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_request_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_request_compound_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }


    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    if (!custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword) {
        goto fail;
    }
    cJSON *obj_createezsignelementspositionedbyword_local_JSON = custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword);
    if(obj_createezsignelementspositionedbyword_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreateezsignelementspositionedbyword", obj_createezsignelementspositionedbyword_local_JSON);
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

custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_parseFromJSON(cJSON *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON){

    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var = NULL;

    // define the local variable for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition_local_nonprim = NULL;

    // define the local variable for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation_local_nonprim = NULL;

    // define the local list for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner
    list_t *a_obj_ezsignformfieldgroupsignerList = NULL;

    // define the local list for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield
    list_t *a_obj_ezsignformfieldList = NULL;

    // define the local variable for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword_local_nonprim = NULL;

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "pkiEzsignformfieldgroupID");
    if (pki_ezsignformfieldgroup_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_type
    cJSON *e_ezsignformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignformfieldgroupType");
    if (!e_ezsignformfieldgroup_type) {
        goto end;
    }

    
    e_ezsignformfieldgroup_type_local_nonprim = field_e_ezsignformfieldgroup_type_parseFromJSON(e_ezsignformfieldgroup_type); //custom

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_signerrequirement
    cJSON *e_ezsignformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignformfieldgroupSignerrequirement");
    if (e_ezsignformfieldgroup_signerrequirement) { 
    e_ezsignformfieldgroup_signerrequirement_local_nonprim = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(e_ezsignformfieldgroup_signerrequirement); //custom
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_step
    cJSON *i_ezsignformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignformfieldgroupStep");
    if (!i_ezsignformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_defaultvalue
    cJSON *s_ezsignformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignformfieldgroupDefaultvalue");
    if (s_ezsignformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_defaultvalue) && !cJSON_IsNull(s_ezsignformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmin
    cJSON *i_ezsignformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignformfieldgroupFilledmin");
    if (!i_ezsignformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_filledmax
    cJSON *i_ezsignformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignformfieldgroupFilledmax");
    if (!i_ezsignformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_readonly
    cJSON *b_ezsignformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "bEzsignformfieldgroupReadonly");
    if (!b_ezsignformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->i_ezsignformfieldgroup_maxlength
    cJSON *i_ezsignformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignformfieldgroupMaxlength");
    if (i_ezsignformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->b_ezsignformfieldgroup_encrypted
    cJSON *b_ezsignformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "bEzsignformfieldgroupEncrypted");
    if (b_ezsignformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsignformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_regexp
    cJSON *s_ezsignformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignformfieldgroupRegexp");
    if (s_ezsignformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_regexp) && !cJSON_IsNull(s_ezsignformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->s_ezsignformfieldgroup_textvalidationcustommessage
    cJSON *s_ezsignformfieldgroup_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignformfieldgroupTextvalidationcustommessage");
    if (s_ezsignformfieldgroup_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_textvalidationcustommessage) && !cJSON_IsNull(s_ezsignformfieldgroup_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->t_ezsignformfieldgroup_tooltip
    cJSON *t_ezsignformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "tEzsignformfieldgroupTooltip");
    if (t_ezsignformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsignformfieldgroup_tooltip) && !cJSON_IsNull(t_ezsignformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_tooltipposition
    cJSON *e_ezsignformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignformfieldgroupTooltipposition");
    if (e_ezsignformfieldgroup_tooltipposition) { 
    e_ezsignformfieldgroup_tooltipposition_local_nonprim = field_e_ezsignformfieldgroup_tooltipposition_parseFromJSON(e_ezsignformfieldgroup_tooltipposition); //custom
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->e_ezsignformfieldgroup_textvalidation
    cJSON *e_ezsignformfieldgroup_textvalidation = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignformfieldgroupTextvalidation");
    if (e_ezsignformfieldgroup_textvalidation) { 
    e_ezsignformfieldgroup_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignformfieldgroup_textvalidation); //custom
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfieldgroupsigner
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "a_objEzsignformfieldgroupsigner");
    if (!a_obj_ezsignformfieldgroupsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroupsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroupsigner_local_nonprimitive,a_obj_ezsignformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroupsigner_request_t *a_obj_ezsignformfieldgroupsignerItem = ezsignformfieldgroupsigner_request_parseFromJSON(a_obj_ezsignformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupsignerList, a_obj_ezsignformfieldgroupsignerItem);
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "a_objDropdownElement");
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

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        ezsignformfield_request_compound_t *a_obj_ezsignformfieldItem = ezsignformfield_request_compound_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }

    // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    cJSON *obj_createezsignelementspositionedbyword = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON, "objCreateezsignelementspositionedbyword");
    if (!obj_createezsignelementspositionedbyword) {
        goto end;
    }

    
    obj_createezsignelementspositionedbyword_local_nonprim = custom_create_ezsignelements_positioned_by_word_request_parseFromJSON(obj_createezsignelementspositionedbyword); //nonprimitive


    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_create (
        pki_ezsignformfieldgroup_id ? pki_ezsignformfieldgroup_id->valuedouble : 0,
        fki_ezsigndocument_id->valuedouble,
        e_ezsignformfieldgroup_type_local_nonprim,
        e_ezsignformfieldgroup_signerrequirement ? e_ezsignformfieldgroup_signerrequirement_local_nonprim : NULL,
        strdup(s_ezsignformfieldgroup_label->valuestring),
        i_ezsignformfieldgroup_step->valuedouble,
        s_ezsignformfieldgroup_defaultvalue && !cJSON_IsNull(s_ezsignformfieldgroup_defaultvalue) ? strdup(s_ezsignformfieldgroup_defaultvalue->valuestring) : NULL,
        i_ezsignformfieldgroup_filledmin->valuedouble,
        i_ezsignformfieldgroup_filledmax->valuedouble,
        b_ezsignformfieldgroup_readonly->valueint,
        i_ezsignformfieldgroup_maxlength ? i_ezsignformfieldgroup_maxlength->valuedouble : 0,
        b_ezsignformfieldgroup_encrypted ? b_ezsignformfieldgroup_encrypted->valueint : 0,
        s_ezsignformfieldgroup_regexp && !cJSON_IsNull(s_ezsignformfieldgroup_regexp) ? strdup(s_ezsignformfieldgroup_regexp->valuestring) : NULL,
        s_ezsignformfieldgroup_textvalidationcustommessage && !cJSON_IsNull(s_ezsignformfieldgroup_textvalidationcustommessage) ? strdup(s_ezsignformfieldgroup_textvalidationcustommessage->valuestring) : NULL,
        t_ezsignformfieldgroup_tooltip && !cJSON_IsNull(t_ezsignformfieldgroup_tooltip) ? strdup(t_ezsignformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsignformfieldgroup_tooltipposition ? e_ezsignformfieldgroup_tooltipposition_local_nonprim : NULL,
        e_ezsignformfieldgroup_textvalidation ? e_ezsignformfieldgroup_textvalidation_local_nonprim : NULL,
        a_obj_ezsignformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsignformfieldList,
        obj_createezsignelementspositionedbyword_local_nonprim
        );

    return custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_local_var;
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
    if (e_ezsignformfieldgroup_textvalidation_local_nonprim) {
        enum_textvalidation_free(e_ezsignformfieldgroup_textvalidation_local_nonprim);
        e_ezsignformfieldgroup_textvalidation_local_nonprim = NULL;
    }
    if (a_obj_ezsignformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupsignerList) {
            ezsignformfieldgroupsigner_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupsignerList);
        a_obj_ezsignformfieldgroupsignerList = NULL;
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
    if (a_obj_ezsignformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldList) {
            ezsignformfield_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldList);
        a_obj_ezsignformfieldList = NULL;
    }
    if (obj_createezsignelementspositionedbyword_local_nonprim) {
        custom_create_ezsignelements_positioned_by_word_request_free(obj_createezsignelementspositionedbyword_local_nonprim);
        obj_createezsignelementspositionedbyword_local_nonprim = NULL;
    }
    return NULL;

}
