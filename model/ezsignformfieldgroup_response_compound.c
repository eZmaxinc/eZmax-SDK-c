#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response_compound.h"


char* e_ezsignformfieldgroup_typeezsignformfieldgroup_response_compound_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_type) {
    char* e_ezsignformfieldgroup_typeArray[] =  { "NULL", "Text", "Textarea", "Dropdown", "Radio", "Checkbox" };
	return e_ezsignformfieldgroup_typeArray[e_ezsignformfieldgroup_type];
}

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_typeezsignformfieldgroup_response_compound_FromString(char* e_ezsignformfieldgroup_type){
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
char* e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_response_compound_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_signerrequirement) {
    char* e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
	return e_ezsignformfieldgroup_signerrequirementArray[e_ezsignformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_signerrequirementezsignformfieldgroup_response_compound_FromString(char* e_ezsignformfieldgroup_signerrequirement){
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
char* e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_response_compound_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_tooltipposition) {
    char* e_ezsignformfieldgroup_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignformfieldgroup_tooltippositionArray[e_ezsignformfieldgroup_tooltipposition];
}

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_tooltippositionezsignformfieldgroup_response_compound_FromString(char* e_ezsignformfieldgroup_tooltipposition){
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

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_create(
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
    list_t *a_obj_ezsignformfieldgroupsigner
    ) {
    ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_local_var = malloc(sizeof(ezsignformfieldgroup_response_compound_t));
    if (!ezsignformfieldgroup_response_compound_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_compound_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    ezsignformfieldgroup_response_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignformfieldgroup_response_compound_local_var->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    ezsignformfieldgroup_response_compound_local_var->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    ezsignformfieldgroup_response_compound_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    ezsignformfieldgroup_response_compound_local_var->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    ezsignformfieldgroup_response_compound_local_var->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    ezsignformfieldgroup_response_compound_local_var->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    ezsignformfieldgroup_response_compound_local_var->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    ezsignformfieldgroup_response_compound_local_var->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    ezsignformfieldgroup_response_compound_local_var->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    ezsignformfieldgroup_response_compound_local_var->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    ezsignformfieldgroup_response_compound_local_var->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    ezsignformfieldgroup_response_compound_local_var->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    ezsignformfieldgroup_response_compound_local_var->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    ezsignformfieldgroup_response_compound_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;
    ezsignformfieldgroup_response_compound_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsignformfieldgroup_response_compound_local_var->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;

    return ezsignformfieldgroup_response_compound_local_var;
}


void ezsignformfieldgroup_response_compound_free(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound) {
    if(NULL == ezsignformfieldgroup_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type) {
        field_e_ezsignformfieldgroup_type_free(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type);
        ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type = NULL;
    }
    if (ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement) {
        field_e_ezsignformfieldgroup_signerrequirement_free(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement);
        ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement = NULL;
    }
    if (ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label = NULL;
    }
    if (ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue) {
        free(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue);
        ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp) {
        free(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp);
        ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp = NULL;
    }
    if (ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip) {
        free(ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip);
        ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip = NULL;
    }
    if (ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition) {
        field_e_ezsignformfieldgroup_tooltipposition_free(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition);
        ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition = NULL;
    }
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
            ezsignformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound->a_obj_ezsignformfield);
        ezsignformfieldgroup_response_compound->a_obj_ezsignformfield = NULL;
    }
    if (ezsignformfieldgroup_response_compound->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound->a_obj_dropdown_element);
        ezsignformfieldgroup_response_compound->a_obj_dropdown_element = NULL;
    }
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner) {
            ezsignformfieldgroupsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner);
        ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner = NULL;
    }
    free(ezsignformfieldgroup_response_compound);
}

cJSON *ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_response_compound->pki_ezsignformfieldgroup_id
    if (!ezsignformfieldgroup_response_compound->pki_ezsignformfieldgroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", ezsignformfieldgroup_response_compound->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response_compound->fki_ezsigndocument_id
    if (!ezsignformfieldgroup_response_compound->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignformfieldgroup_response_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type
    if (ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL == ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_type_local_JSON = field_e_ezsignformfieldgroup_type_convertToJSON(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type);
    if(e_ezsignformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupType", e_ezsignformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement
    if (ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL == ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_signerrequirement_local_JSON = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement);
    if(e_ezsignformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupSignerrequirement", e_ezsignformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_step
    if (!ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupStep", ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue
    if(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupDefaultvalue", ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmin
    if (!ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmin", ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmax
    if (!ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmax", ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_readonly
    if (!ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupReadonly", ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_maxlength
    if(ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupMaxlength", ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_encrypted
    if(ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupEncrypted", ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp
    if(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupRegexp", ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip
    if(ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignformfieldgroupTooltip", ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition
    if(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition != ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL) {
    cJSON *e_ezsignformfieldgroup_tooltipposition_local_JSON = field_e_ezsignformfieldgroup_tooltipposition_convertToJSON(ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition);
    if(e_ezsignformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTooltipposition", e_ezsignformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfield
    if (!ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_response_compound_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }


    // ezsignformfieldgroup_response_compound->a_obj_dropdown_element
    if(ezsignformfieldgroup_response_compound->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsignformfieldgroup_response_compound->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsignformfieldgroup_response_compound->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner
    if (!ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroupsigner");
    if(a_obj_ezsignformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupsignerListEntry;
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner) {
    list_ForEach(a_obj_ezsignformfieldgroupsignerListEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner) {
    cJSON *itemLocal = ezsignformfieldgroupsigner_response_compound_convertToJSON(a_obj_ezsignformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroupsigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_parseFromJSON(cJSON *ezsignformfieldgroup_response_compoundJSON){

    ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement_local_nonprim = NULL;

    // define the local variable for ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition_local_nonprim = NULL;

    // define the local list for ezsignformfieldgroup_response_compound->a_obj_ezsignformfield
    list_t *a_obj_ezsignformfieldList = NULL;

    // define the local list for ezsignformfieldgroup_response_compound->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner
    list_t *a_obj_ezsignformfieldgroupsignerList = NULL;

    // ezsignformfieldgroup_response_compound->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "pkiEzsignformfieldgroupID");
    if (!pki_ezsignformfieldgroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_type
    cJSON *e_ezsignformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "eEzsignformfieldgroupType");
    if (!e_ezsignformfieldgroup_type) {
        goto end;
    }

    
    e_ezsignformfieldgroup_type_local_nonprim = field_e_ezsignformfieldgroup_type_parseFromJSON(e_ezsignformfieldgroup_type); //custom

    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_signerrequirement
    cJSON *e_ezsignformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "eEzsignformfieldgroupSignerrequirement");
    if (!e_ezsignformfieldgroup_signerrequirement) {
        goto end;
    }

    
    e_ezsignformfieldgroup_signerrequirement_local_nonprim = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(e_ezsignformfieldgroup_signerrequirement); //custom

    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_step
    cJSON *i_ezsignformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "iEzsignformfieldgroupStep");
    if (!i_ezsignformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_defaultvalue
    cJSON *s_ezsignformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "sEzsignformfieldgroupDefaultvalue");
    if (s_ezsignformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmin
    cJSON *i_ezsignformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "iEzsignformfieldgroupFilledmin");
    if (!i_ezsignformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_filledmax
    cJSON *i_ezsignformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "iEzsignformfieldgroupFilledmax");
    if (!i_ezsignformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_readonly
    cJSON *b_ezsignformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "bEzsignformfieldgroupReadonly");
    if (!b_ezsignformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsignformfieldgroup_response_compound->i_ezsignformfieldgroup_maxlength
    cJSON *i_ezsignformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "iEzsignformfieldgroupMaxlength");
    if (i_ezsignformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroup_response_compound->b_ezsignformfieldgroup_encrypted
    cJSON *b_ezsignformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "bEzsignformfieldgroupEncrypted");
    if (b_ezsignformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsignformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_regexp
    cJSON *s_ezsignformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "sEzsignformfieldgroupRegexp");
    if (s_ezsignformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response_compound->t_ezsignformfieldgroup_tooltip
    cJSON *t_ezsignformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "tEzsignformfieldgroupTooltip");
    if (t_ezsignformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsignformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_response_compound->e_ezsignformfieldgroup_tooltipposition
    cJSON *e_ezsignformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "eEzsignformfieldgroupTooltipposition");
    if (e_ezsignformfieldgroup_tooltipposition) { 
    e_ezsignformfieldgroup_tooltipposition_local_nonprim = field_e_ezsignformfieldgroup_tooltipposition_parseFromJSON(e_ezsignformfieldgroup_tooltipposition); //custom
    }

    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "a_objEzsignformfield");
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
        ezsignformfield_response_compound_t *a_obj_ezsignformfieldItem = ezsignformfield_response_compound_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }

    // ezsignformfieldgroup_response_compound->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "a_objDropdownElement");
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

    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfieldgroupsigner
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "a_objEzsignformfieldgroupsigner");
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
        ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsignerItem = ezsignformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsignformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupsignerList, a_obj_ezsignformfieldgroupsignerItem);
    }


    ezsignformfieldgroup_response_compound_local_var = ezsignformfieldgroup_response_compound_create (
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
        e_ezsignformfieldgroup_tooltipposition ? e_ezsignformfieldgroup_tooltipposition_local_nonprim : NULL,
        a_obj_ezsignformfieldList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsignformfieldgroupsignerList
        );

    return ezsignformfieldgroup_response_compound_local_var;
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
    if (a_obj_ezsignformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldList) {
            ezsignformfield_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldList);
        a_obj_ezsignformfieldList = NULL;
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
    if (a_obj_ezsignformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupsignerList) {
            ezsignformfieldgroupsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupsignerList);
        a_obj_ezsignformfieldgroupsignerList = NULL;
    }
    return NULL;

}
