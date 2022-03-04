#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_get_object_v1_response_m_payload.h"


char* e_ezsignformfieldgroup_typeezsignformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_type) {
    char* e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
	return e_ezsignformfieldgroup_typeArray[e_ezsignformfieldgroup_type];
}

ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_typeezsignformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsignformfieldgroup_type){
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
char* e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_signerrequirement) {
    char* e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
	return e_ezsignformfieldgroup_signerrequirementArray[e_ezsignformfieldgroup_signerrequirement];
}

ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsignformfieldgroup_signerrequirement){
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
char* e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_tooltipposition) {
    char* e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleCenter", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignformfieldgroup_tooltippositionArray[e_ezsignformfieldgroup_tooltipposition];
}

ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__e e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_get_object_v1_response_m_payload_FromString(char* e_ezsignformfieldgroup_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleCenter", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsignformfieldgroup_tooltippositionArray) / sizeof(e_ezsignformfieldgroup_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfieldgroup_tooltipposition, e_ezsignformfieldgroup_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload_create(
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
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition,
    list_t *a_obj_ezsignformfield,
    list_t *a_obj_dropdown_element,
    ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsigner
    ) {
    ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignformfieldgroup_get_object_v1_response_m_payload_t));
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;

    return ezsignformfieldgroup_get_object_v1_response_m_payload_local_var;
}


void ezsignformfieldgroup_get_object_v1_response_m_payload_free(ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload) {
    if(NULL == ezsignformfieldgroup_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type) {
        field_e_ezsignformfieldgroup_type_free(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type);
        ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement) {
        field_e_ezsignformfieldgroup_signerrequirement_free(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement);
        ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue) {
        free(ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue);
        ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp) {
        free(ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp);
        ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip) {
        free(ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip);
        ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition) {
        field_e_ezsignformfieldgroup_tooltipposition_free(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition);
        ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield) {
            ezsignformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield);
        ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element);
        ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element = NULL;
    }
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner) {
        ezsignformfieldgroupsigner_response_compound_free(ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner);
        ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner = NULL;
    }
    free(ezsignformfieldgroup_get_object_v1_response_m_payload);
}

cJSON *ezsignformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_get_object_v1_response_m_payload->pki_ezsignformfieldgroup_id
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->pki_ezsignformfieldgroup_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", ezsignformfieldgroup_get_object_v1_response_m_payload->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->fki_ezsigndocument_id
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->fki_ezsigndocument_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignformfieldgroup_get_object_v1_response_m_payload->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type
    
    cJSON *e_ezsignformfieldgroup_type_local_JSON = field_e_ezsignformfieldgroup_type_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type);
    if(e_ezsignformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupType", e_ezsignformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement
    
    cJSON *e_ezsignformfieldgroup_signerrequirement_local_JSON = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement);
    if(e_ezsignformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupSignerrequirement", e_ezsignformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_step
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_step) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupStep", ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupDefaultvalue", ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmin
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmin) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmin", ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmax
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmax) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmax", ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_readonly
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_readonly) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupReadonly", ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_maxlength
    if(ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_maxlength) { 
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupMaxlength", ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
     } 


    // ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_encrypted
    if(ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_encrypted) { 
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupEncrypted", ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
     } 


    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp
    if(ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp) { 
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupRegexp", ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
     } 


    // ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip
    if(ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip) { 
    if(cJSON_AddStringToObject(item, "tEzsignformfieldgroupTooltip", ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
     } 


    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition
    
    cJSON *e_ezsignformfieldgroup_tooltipposition_local_JSON = field_e_ezsignformfieldgroup_tooltipposition_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition);
    if(e_ezsignformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTooltipposition", e_ezsignformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    


    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_response_compound_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }


    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element
    if(ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
     } 


    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner
    if (!ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfieldgroupsigner_local_JSON = ezsignformfieldgroupsigner_response_compound_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner);
    if(a_obj_ezsignformfieldgroupsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "a_objEzsignformfieldgroupsigner", a_obj_ezsignformfieldgroupsigner_local_JSON);
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

ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v1_response_m_payloadJSON){

    ezsignformfieldgroup_get_object_v1_response_m_payload_t *ezsignformfieldgroup_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner
    ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsigner_local_nonprim = NULL;

    // ezsignformfieldgroup_get_object_v1_response_m_payload->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "pkiEzsignformfieldgroupID");
    if (!pki_ezsignformfieldgroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_type
    cJSON *e_ezsignformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsignformfieldgroupType");
    if (!e_ezsignformfieldgroup_type) {
        goto end;
    }

    
    e_ezsignformfieldgroup_type_local_nonprim = field_e_ezsignformfieldgroup_type_parseFromJSON(e_ezsignformfieldgroup_type); //custom

    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_signerrequirement
    cJSON *e_ezsignformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsignformfieldgroupSignerrequirement");
    if (!e_ezsignformfieldgroup_signerrequirement) {
        goto end;
    }

    
    e_ezsignformfieldgroup_signerrequirement_local_nonprim = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(e_ezsignformfieldgroup_signerrequirement); //custom

    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_step
    cJSON *i_ezsignformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsignformfieldgroupStep");
    if (!i_ezsignformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_defaultvalue
    cJSON *s_ezsignformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsignformfieldgroupDefaultvalue");
    if (!s_ezsignformfieldgroup_defaultvalue) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_defaultvalue))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmin
    cJSON *i_ezsignformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsignformfieldgroupFilledmin");
    if (!i_ezsignformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_filledmax
    cJSON *i_ezsignformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsignformfieldgroupFilledmax");
    if (!i_ezsignformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_readonly
    cJSON *b_ezsignformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "bEzsignformfieldgroupReadonly");
    if (!b_ezsignformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->i_ezsignformfieldgroup_maxlength
    cJSON *i_ezsignformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "iEzsignformfieldgroupMaxlength");
    if (i_ezsignformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->b_ezsignformfieldgroup_encrypted
    cJSON *b_ezsignformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "bEzsignformfieldgroupEncrypted");
    if (b_ezsignformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsignformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->s_ezsignformfieldgroup_regexp
    cJSON *s_ezsignformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "sEzsignformfieldgroupRegexp");
    if (s_ezsignformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->t_ezsignformfieldgroup_tooltip
    cJSON *t_ezsignformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "tEzsignformfieldgroupTooltip");
    if (t_ezsignformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsignformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->e_ezsignformfieldgroup_tooltipposition
    cJSON *e_ezsignformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "eEzsignformfieldgroupTooltipposition");
    if (e_ezsignformfieldgroup_tooltipposition) { 
    e_ezsignformfieldgroup_tooltipposition_local_nonprim = field_e_ezsignformfieldgroup_tooltipposition_parseFromJSON(e_ezsignformfieldgroup_tooltipposition); //custom
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldList;
    
    cJSON *a_obj_ezsignformfield_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        ezsignformfield_response_compound_t *a_obj_ezsignformfieldItem = ezsignformfield_response_compound_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }

    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objDropdownElement");
    list_t *a_obj_dropdown_elementList;
    if (a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element_local_nonprimitive;
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

    // ezsignformfieldgroup_get_object_v1_response_m_payload->a_obj_ezsignformfieldgroupsigner
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v1_response_m_payloadJSON, "a_objEzsignformfieldgroupsigner");
    if (!a_obj_ezsignformfieldgroupsigner) {
        goto end;
    }

    
    a_obj_ezsignformfieldgroupsigner_local_nonprim = ezsignformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsignformfieldgroupsigner); //nonprimitive


    ezsignformfieldgroup_get_object_v1_response_m_payload_local_var = ezsignformfieldgroup_get_object_v1_response_m_payload_create (
        pki_ezsignformfieldgroup_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        e_ezsignformfieldgroup_type_local_nonprim,
        e_ezsignformfieldgroup_signerrequirement_local_nonprim,
        strdup(s_ezsignformfieldgroup_label->valuestring),
        i_ezsignformfieldgroup_step->valuedouble,
        strdup(s_ezsignformfieldgroup_defaultvalue->valuestring),
        i_ezsignformfieldgroup_filledmin->valuedouble,
        i_ezsignformfieldgroup_filledmax->valuedouble,
        b_ezsignformfieldgroup_readonly->valueint,
        i_ezsignformfieldgroup_maxlength ? i_ezsignformfieldgroup_maxlength->valuedouble : 0,
        b_ezsignformfieldgroup_encrypted ? b_ezsignformfieldgroup_encrypted->valueint : 0,
        s_ezsignformfieldgroup_regexp ? strdup(s_ezsignformfieldgroup_regexp->valuestring) : NULL,
        t_ezsignformfieldgroup_tooltip ? strdup(t_ezsignformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsignformfieldgroup_tooltipposition ? e_ezsignformfieldgroup_tooltipposition_local_nonprim : NULL,
        a_obj_ezsignformfieldList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsignformfieldgroupsigner_local_nonprim
        );

    return ezsignformfieldgroup_get_object_v1_response_m_payload_local_var;
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
    if (a_obj_ezsignformfieldgroupsigner_local_nonprim) {
        ezsignformfieldgroupsigner_response_compound_free(a_obj_ezsignformfieldgroupsigner_local_nonprim);
        a_obj_ezsignformfieldgroupsigner_local_nonprim = NULL;
    }
    return NULL;

}
