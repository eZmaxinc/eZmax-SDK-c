#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_get_object_v1_response_m_payload.h"


char* e_ezsigntemplateformfieldgroup_typeezsigntemplateformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_type) {
    char* e_ezsigntemplateformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
	return e_ezsigntemplateformfieldgroup_typeArray[e_ezsigntemplateformfieldgroup_type];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_typeezsigntemplateformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplateformfieldgroup_type){
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
char* e_ezsigntemplateformfieldgroup_signerrequirementezsigntemplateformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_signerrequirement) {
    char* e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
	return e_ezsigntemplateformfieldgroup_signerrequirementArray[e_ezsigntemplateformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_signerrequirementezsigntemplateformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement){
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
char* e_ezsigntemplateformfieldgroup_tooltippositionezsigntemplateformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_tooltipposition) {
    char* e_ezsigntemplateformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsigntemplateformfieldgroup_tooltippositionArray[e_ezsigntemplateformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__e e_ezsigntemplateformfieldgroup_tooltippositionezsigntemplateformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition){
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

ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_create(
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
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
    ) {
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t));
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;

    return ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplateformfieldgroup_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type) {
        field_e_ezsigntemplateformfieldgroup_type_free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement) {
        field_e_ezsigntemplateformfieldgroup_signerrequirement_free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label) {
        free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue) {
        free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp) {
        free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip) {
        free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition) {
        field_e_ezsigntemplateformfieldgroup_tooltipposition_free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element = NULL;
    }
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield);
        ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield = NULL;
    }
    free(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->pki_ezsigntemplateformfieldgroup_id
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->pki_ezsigntemplateformfieldgroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupID", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->pki_ezsigntemplateformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type
    if (ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__NULL == ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_type_local_JSON = field_e_ezsigntemplateformfieldgroup_type_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type);
    if(e_ezsigntemplateformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupType", e_ezsigntemplateformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement
    if (ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__NULL == ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON = field_e_ezsigntemplateformfieldgroup_signerrequirement_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement);
    if(e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupSignerrequirement", e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupLabel", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_step
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupStep", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupDefaultvalue", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmin
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmin", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmax
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmax", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_readonly
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupReadonly", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_maxlength
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupMaxlength", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_encrypted
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupEncrypted", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupRegexp", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateformfieldgroupTooltip", ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition != ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON = field_e_ezsigntemplateformfieldgroup_tooltipposition_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition);
    if(e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTooltipposition", e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroupsigner");
    if(a_obj_ezsigntemplateformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupsignerListEntry;
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupsignerListEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner) {
    cJSON *itemLocal = ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroupsigner, itemLocal);
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element
    if(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield
    if (!ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfield = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfield");
    if(a_obj_ezsigntemplateformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldListEntry;
    if (ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield) {
    list_ForEach(a_obj_ezsigntemplateformfieldListEntry, ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield) {
    cJSON *itemLocal = ezsigntemplateformfield_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldListEntry->data);
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

ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON){

    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = NULL;

    // define the local list for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner
    list_t *a_obj_ezsigntemplateformfieldgroupsignerList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield
    list_t *a_obj_ezsigntemplateformfieldList = NULL;

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->pki_ezsigntemplateformfieldgroup_id
    cJSON *pki_ezsigntemplateformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplateformfieldgroupID");
    if (!pki_ezsigntemplateformfieldgroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroup_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_type
    cJSON *e_ezsigntemplateformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsigntemplateformfieldgroupType");
    if (!e_ezsigntemplateformfieldgroup_type) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_type_local_nonprim = field_e_ezsigntemplateformfieldgroup_type_parseFromJSON(e_ezsigntemplateformfieldgroup_type); //custom

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_signerrequirement
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsigntemplateformfieldgroupSignerrequirement");
    if (!e_ezsigntemplateformfieldgroup_signerrequirement) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = field_e_ezsigntemplateformfieldgroup_signerrequirement_parseFromJSON(e_ezsigntemplateformfieldgroup_signerrequirement); //custom

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_label
    cJSON *s_ezsigntemplateformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsigntemplateformfieldgroupLabel");
    if (!s_ezsigntemplateformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_step
    cJSON *i_ezsigntemplateformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsigntemplateformfieldgroupStep");
    if (!i_ezsigntemplateformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_defaultvalue
    cJSON *s_ezsigntemplateformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsigntemplateformfieldgroupDefaultvalue");
    if (s_ezsigntemplateformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmin
    cJSON *i_ezsigntemplateformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsigntemplateformfieldgroupFilledmin");
    if (!i_ezsigntemplateformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_filledmax
    cJSON *i_ezsigntemplateformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsigntemplateformfieldgroupFilledmax");
    if (!i_ezsigntemplateformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_readonly
    cJSON *b_ezsigntemplateformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "bEzsigntemplateformfieldgroupReadonly");
    if (!b_ezsigntemplateformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->i_ezsigntemplateformfieldgroup_maxlength
    cJSON *i_ezsigntemplateformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsigntemplateformfieldgroupMaxlength");
    if (i_ezsigntemplateformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->b_ezsigntemplateformfieldgroup_encrypted
    cJSON *b_ezsigntemplateformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "bEzsigntemplateformfieldgroupEncrypted");
    if (b_ezsigntemplateformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->s_ezsigntemplateformfieldgroup_regexp
    cJSON *s_ezsigntemplateformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsigntemplateformfieldgroupRegexp");
    if (s_ezsigntemplateformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->t_ezsigntemplateformfieldgroup_tooltip
    cJSON *t_ezsigntemplateformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "tEzsigntemplateformfieldgroupTooltip");
    if (t_ezsigntemplateformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplateformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->e_ezsigntemplateformfieldgroup_tooltipposition
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsigntemplateformfieldgroupTooltipposition");
    if (e_ezsigntemplateformfieldgroup_tooltipposition) { 
    e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = field_e_ezsigntemplateformfieldgroup_tooltipposition_parseFromJSON(e_ezsigntemplateformfieldgroup_tooltipposition); //custom
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroupsigner
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplateformfieldgroupsigner");
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
        ezsigntemplateformfieldgroupsigner_response_compound_t *a_obj_ezsigntemplateformfieldgroupsignerItem = ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupsignerList, a_obj_ezsigntemplateformfieldgroupsignerItem);
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objDropdownElement");
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
        custom_dropdown_element_response_compound_t *a_obj_dropdown_elementItem = custom_dropdown_element_response_compound_parseFromJSON(a_obj_dropdown_element_local_nonprimitive);

        list_addElement(a_obj_dropdown_elementList, a_obj_dropdown_elementItem);
    }
    }

    // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsigntemplateformfield
    cJSON *a_obj_ezsigntemplateformfield = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplateformfield");
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
        ezsigntemplateformfield_response_compound_t *a_obj_ezsigntemplateformfieldItem = ezsigntemplateformfield_response_compound_parseFromJSON(a_obj_ezsigntemplateformfield_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldList, a_obj_ezsigntemplateformfieldItem);
    }


    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_create (
        pki_ezsigntemplateformfieldgroup_id->valuedouble,
        fki_ezsigntemplatedocument_id->valuedouble,
        e_ezsigntemplateformfieldgroup_type_local_nonprim,
        e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim,
        strdup(s_ezsigntemplateformfieldgroup_label->valuestring),
        i_ezsigntemplateformfieldgroup_step->valuedouble,
        s_ezsigntemplateformfieldgroup_defaultvalue ? strdup(s_ezsigntemplateformfieldgroup_defaultvalue->valuestring) : NULL,
        i_ezsigntemplateformfieldgroup_filledmin->valuedouble,
        i_ezsigntemplateformfieldgroup_filledmax->valuedouble,
        b_ezsigntemplateformfieldgroup_readonly->valueint,
        i_ezsigntemplateformfieldgroup_maxlength ? i_ezsigntemplateformfieldgroup_maxlength->valuedouble : 0,
        b_ezsigntemplateformfieldgroup_encrypted ? b_ezsigntemplateformfieldgroup_encrypted->valueint : 0,
        s_ezsigntemplateformfieldgroup_regexp ? strdup(s_ezsigntemplateformfieldgroup_regexp->valuestring) : NULL,
        t_ezsigntemplateformfieldgroup_tooltip ? strdup(t_ezsigntemplateformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsigntemplateformfieldgroup_tooltipposition ? e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim : NULL,
        a_obj_ezsigntemplateformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsigntemplateformfieldList
        );

    return ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_local_var;
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
    if (a_obj_ezsigntemplateformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupsignerList) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupsignerList);
        a_obj_ezsigntemplateformfieldgroupsignerList = NULL;
    }
    if (a_obj_dropdown_elementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_dropdown_elementList) {
            custom_dropdown_element_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_dropdown_elementList);
        a_obj_dropdown_elementList = NULL;
    }
    if (a_obj_ezsigntemplateformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldList) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldList);
        a_obj_ezsigntemplateformfieldList = NULL;
    }
    return NULL;

}
