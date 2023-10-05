#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_request_compound.h"


char* e_ezsigntemplatesignature_typeezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_type) {
    char* e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments", "FieldText", "FieldTextarea" };
	return e_ezsigntemplatesignature_typeArray[e_ezsigntemplatesignature_type];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_typeezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_type){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments", "FieldText", "FieldTextarea" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_typeArray) / sizeof(e_ezsigntemplatesignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_type, e_ezsigntemplatesignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_tooltippositionezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_tooltipposition) {
    char* e_ezsigntemplatesignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsigntemplatesignature_tooltippositionArray[e_ezsigntemplatesignature_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_tooltippositionezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_tooltippositionArray) / sizeof(e_ezsigntemplatesignature_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_tooltipposition, e_ezsigntemplatesignature_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_fontezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_font) {
    char* e_ezsigntemplatesignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
	return e_ezsigntemplatesignature_fontArray[e_ezsigntemplatesignature_font];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_fontezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_font){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_fontArray) / sizeof(e_ezsigntemplatesignature_fontArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_font, e_ezsigntemplatesignature_fontArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_attachmentnamesourceezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_attachmentnamesource) {
    char* e_ezsigntemplatesignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
	return e_ezsigntemplatesignature_attachmentnamesourceArray[e_ezsigntemplatesignature_attachmentnamesource];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_attachmentnamesourceezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_attachmentnamesource){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_attachmentnamesourceArray) / sizeof(e_ezsigntemplatesignature_attachmentnamesourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_attachmentnamesource, e_ezsigntemplatesignature_attachmentnamesourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_textvalidationezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_textvalidation) {
    char* e_ezsigntemplatesignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
	return e_ezsigntemplatesignature_textvalidationArray[e_ezsigntemplatesignature_textvalidation];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_textvalidationezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_textvalidation){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_textvalidationArray) / sizeof(e_ezsigntemplatesignature_textvalidationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_textvalidation, e_ezsigntemplatesignature_textvalidationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_dependencyrequirementezsigntemplatesignature_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_dependencyrequirement) {
    char* e_ezsigntemplatesignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
	return e_ezsigntemplatesignature_dependencyrequirementArray[e_ezsigntemplatesignature_dependencyrequirement];
}

ezmax_api_definition__full_ezsigntemplatesignature_request_compound__e e_ezsigntemplatesignature_dependencyrequirementezsigntemplatesignature_request_compound_FromString(char* e_ezsigntemplatesignature_dependencyrequirement){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_dependencyrequirementArray) / sizeof(e_ezsigntemplatesignature_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_dependencyrequirement, e_ezsigntemplatesignature_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound_create(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int fki_ezsigntemplatesigner_id_validation,
    int i_ezsigntemplatedocumentpage_pagenumber,
    int i_ezsigntemplatesignature_x,
    int i_ezsigntemplatesignature_y,
    int i_ezsigntemplatesignature_width,
    int i_ezsigntemplatesignature_height,
    int i_ezsigntemplatesignature_step,
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type,
    char *t_ezsigntemplatesignature_tooltip,
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition,
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font,
    int b_ezsigntemplatesignature_required,
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource,
    char *s_ezsigntemplatesignature_attachmentdescription,
    int i_ezsigntemplatesignature_validationstep,
    int i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_regexp,
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation,
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement,
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate,
    list_t *a_obj_ezsigntemplateelementdependency
    ) {
    ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound_local_var = malloc(sizeof(ezsigntemplatesignature_request_compound_t));
    if (!ezsigntemplatesignature_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_request_compound_local_var->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    ezsigntemplatesignature_request_compound_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplatesignature_request_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatesignature_request_compound_local_var->fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_width = i_ezsigntemplatesignature_width;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_height = i_ezsigntemplatesignature_height;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    ezsigntemplatesignature_request_compound_local_var->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    ezsigntemplatesignature_request_compound_local_var->b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    ezsigntemplatesignature_request_compound_local_var->s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    ezsigntemplatesignature_request_compound_local_var->i_ezsigntemplatesignature_maxlength = i_ezsigntemplatesignature_maxlength;
    ezsigntemplatesignature_request_compound_local_var->s_ezsigntemplatesignature_regexp = s_ezsigntemplatesignature_regexp;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_textvalidation = e_ezsigntemplatesignature_textvalidation;
    ezsigntemplatesignature_request_compound_local_var->e_ezsigntemplatesignature_dependencyrequirement = e_ezsigntemplatesignature_dependencyrequirement;
    ezsigntemplatesignature_request_compound_local_var->b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    ezsigntemplatesignature_request_compound_local_var->a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;
    ezsigntemplatesignature_request_compound_local_var->a_obj_ezsigntemplateelementdependency = a_obj_ezsigntemplateelementdependency;

    return ezsigntemplatesignature_request_compound_local_var;
}


void ezsigntemplatesignature_request_compound_free(ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound) {
    if(NULL == ezsigntemplatesignature_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type) {
        field_e_ezsigntemplatesignature_type_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type = NULL;
    }
    if (ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip) {
        free(ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip);
        ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition) {
        field_e_ezsigntemplatesignature_tooltipposition_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition = NULL;
    }
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font) {
        field_e_ezsigntemplatesignature_font_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font = NULL;
    }
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource) {
        field_e_ezsigntemplatesignature_attachmentnamesource_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource = NULL;
    }
    if (ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription) {
        free(ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription);
        ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp) {
        free(ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp);
        ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp = NULL;
    }
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation) {
        enum_textvalidation_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation = NULL;
    }
    if (ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement) {
        field_e_ezsigntemplatesignature_dependencyrequirement_free(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement);
        ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement = NULL;
    }
    if (ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate) {
        list_ForEach(listEntry, ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate) {
            ezsigntemplatesignaturecustomdate_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate);
        ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate = NULL;
    }
    if (ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency) {
        list_ForEach(listEntry, ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency) {
            ezsigntemplateelementdependency_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency);
        ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency = NULL;
    }
    free(ezsigntemplatesignature_request_compound);
}

cJSON *ezsigntemplatesignature_request_compound_convertToJSON(ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_request_compound->pki_ezsigntemplatesignature_id
    if(ezsigntemplatesignature_request_compound->pki_ezsigntemplatesignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignatureID", ezsigntemplatesignature_request_compound->pki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatedocument_id
    if (!ezsigntemplatesignature_request_compound->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplatesignature_request_compound->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id_validation
    if(ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerIDValidation", ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatesignature_request_compound->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplatesignature_request_compound->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_x
    if (!ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureX", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_y
    if (!ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureY", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_width
    if(ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureWidth", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_height
    if(ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureHeight", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_step
    if (!ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureStep", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type
    if (ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL == ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplatesignature_type_local_JSON = field_e_ezsigntemplatesignature_type_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type);
    if(e_ezsigntemplatesignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureType", e_ezsigntemplatesignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip
    if(ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignatureTooltip", ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition
    if(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition != ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL) {
    cJSON *e_ezsigntemplatesignature_tooltipposition_local_JSON = field_e_ezsigntemplatesignature_tooltipposition_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition);
    if(e_ezsigntemplatesignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTooltipposition", e_ezsigntemplatesignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font
    if(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font != ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL) {
    cJSON *e_ezsigntemplatesignature_font_local_JSON = field_e_ezsigntemplatesignature_font_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font);
    if(e_ezsigntemplatesignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureFont", e_ezsigntemplatesignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_required
    if(ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureRequired", ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource
    if(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource != ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL) {
    cJSON *e_ezsigntemplatesignature_attachmentnamesource_local_JSON = field_e_ezsigntemplatesignature_attachmentnamesource_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource);
    if(e_ezsigntemplatesignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureAttachmentnamesource", e_ezsigntemplatesignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription
    if(ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureAttachmentdescription", ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_validationstep
    if(ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureValidationstep", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_maxlength
    if(ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureMaxlength", ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp
    if(ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureRegexp", ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation
    if(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation != ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL) {
    cJSON *e_ezsigntemplatesignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation);
    if(e_ezsigntemplatesignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTextvalidation", e_ezsigntemplatesignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement
    if(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement != ezmax_api_definition__full_ezsigntemplatesignature_request_compound__NULL) {
    cJSON *e_ezsigntemplatesignature_dependencyrequirement_local_JSON = field_e_ezsigntemplatesignature_dependencyrequirement_convertToJSON(ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement);
    if(e_ezsigntemplatesignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureDependencyrequirement", e_ezsigntemplatesignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_customdate
    if(ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureCustomdate", ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate
    if(ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignaturecustomdate");
    if(a_obj_ezsigntemplatesignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignaturecustomdateListEntry;
    if (ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate) {
    list_ForEach(a_obj_ezsigntemplatesignaturecustomdateListEntry, ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *itemLocal = ezsigntemplatesignaturecustomdate_request_compound_convertToJSON(a_obj_ezsigntemplatesignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesignaturecustomdate, itemLocal);
    }
    }
    }


    // ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency
    if(ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency) {
    cJSON *a_obj_ezsigntemplateelementdependency = cJSON_AddArrayToObject(item, "a_objEzsigntemplateelementdependency");
    if(a_obj_ezsigntemplateelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateelementdependencyListEntry;
    if (ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency) {
    list_ForEach(a_obj_ezsigntemplateelementdependencyListEntry, ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency) {
    cJSON *itemLocal = ezsigntemplateelementdependency_request_compound_convertToJSON(a_obj_ezsigntemplateelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateelementdependency, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound_parseFromJSON(cJSON *ezsigntemplatesignature_request_compoundJSON){

    ezsigntemplatesignature_request_compound_t *ezsigntemplatesignature_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = NULL;

    // define the local list for ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate
    list_t *a_obj_ezsigntemplatesignaturecustomdateList = NULL;

    // define the local list for ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency
    list_t *a_obj_ezsigntemplateelementdependencyList = NULL;

    // ezsigntemplatesignature_request_compound->pki_ezsigntemplatesignature_id
    cJSON *pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "pkiEzsigntemplatesignatureID");
    if (pki_ezsigntemplatesignature_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->fki_ezsigntemplatesigner_id_validation
    cJSON *fki_ezsigntemplatesigner_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "fkiEzsigntemplatesignerIDValidation");
    if (fki_ezsigntemplatesigner_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_x
    cJSON *i_ezsigntemplatesignature_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureX");
    if (!i_ezsigntemplatesignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_y
    cJSON *i_ezsigntemplatesignature_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureY");
    if (!i_ezsigntemplatesignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_width
    cJSON *i_ezsigntemplatesignature_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureWidth");
    if (i_ezsigntemplatesignature_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_height
    cJSON *i_ezsigntemplatesignature_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureHeight");
    if (i_ezsigntemplatesignature_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_step
    cJSON *i_ezsigntemplatesignature_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureStep");
    if (!i_ezsigntemplatesignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_type
    cJSON *e_ezsigntemplatesignature_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureType");
    if (!e_ezsigntemplatesignature_type) {
        goto end;
    }

    
    e_ezsigntemplatesignature_type_local_nonprim = field_e_ezsigntemplatesignature_type_parseFromJSON(e_ezsigntemplatesignature_type); //custom

    // ezsigntemplatesignature_request_compound->t_ezsigntemplatesignature_tooltip
    cJSON *t_ezsigntemplatesignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "tEzsigntemplatesignatureTooltip");
    if (t_ezsigntemplatesignature_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplatesignature_tooltip) && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_tooltipposition
    cJSON *e_ezsigntemplatesignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureTooltipposition");
    if (e_ezsigntemplatesignature_tooltipposition) { 
    e_ezsigntemplatesignature_tooltipposition_local_nonprim = field_e_ezsigntemplatesignature_tooltipposition_parseFromJSON(e_ezsigntemplatesignature_tooltipposition); //custom
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_font
    cJSON *e_ezsigntemplatesignature_font = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureFont");
    if (e_ezsigntemplatesignature_font) { 
    e_ezsigntemplatesignature_font_local_nonprim = field_e_ezsigntemplatesignature_font_parseFromJSON(e_ezsigntemplatesignature_font); //custom
    }

    // ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_required
    cJSON *b_ezsigntemplatesignature_required = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "bEzsigntemplatesignatureRequired");
    if (b_ezsigntemplatesignature_required) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_attachmentnamesource
    cJSON *e_ezsigntemplatesignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureAttachmentnamesource");
    if (e_ezsigntemplatesignature_attachmentnamesource) { 
    e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(e_ezsigntemplatesignature_attachmentnamesource); //custom
    }

    // ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_attachmentdescription
    cJSON *s_ezsigntemplatesignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "sEzsigntemplatesignatureAttachmentdescription");
    if (s_ezsigntemplatesignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_attachmentdescription) && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_validationstep
    cJSON *i_ezsigntemplatesignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureValidationstep");
    if (i_ezsigntemplatesignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->i_ezsigntemplatesignature_maxlength
    cJSON *i_ezsigntemplatesignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "iEzsigntemplatesignatureMaxlength");
    if (i_ezsigntemplatesignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_request_compound->s_ezsigntemplatesignature_regexp
    cJSON *s_ezsigntemplatesignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "sEzsigntemplatesignatureRegexp");
    if (s_ezsigntemplatesignature_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_regexp) && !cJSON_IsNull(s_ezsigntemplatesignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_textvalidation
    cJSON *e_ezsigntemplatesignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureTextvalidation");
    if (e_ezsigntemplatesignature_textvalidation) { 
    e_ezsigntemplatesignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplatesignature_textvalidation); //custom
    }

    // ezsigntemplatesignature_request_compound->e_ezsigntemplatesignature_dependencyrequirement
    cJSON *e_ezsigntemplatesignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "eEzsigntemplatesignatureDependencyrequirement");
    if (e_ezsigntemplatesignature_dependencyrequirement) { 
    e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = field_e_ezsigntemplatesignature_dependencyrequirement_parseFromJSON(e_ezsigntemplatesignature_dependencyrequirement); //custom
    }

    // ezsigntemplatesignature_request_compound->b_ezsigntemplatesignature_customdate
    cJSON *b_ezsigntemplatesignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "bEzsigntemplatesignatureCustomdate");
    if (b_ezsigntemplatesignature_customdate) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_request_compound->a_obj_ezsigntemplatesignaturecustomdate
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "a_objEzsigntemplatesignaturecustomdate");
    if (a_obj_ezsigntemplatesignaturecustomdate) { 
    cJSON *a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive,a_obj_ezsigntemplatesignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesignaturecustomdate_request_compound_t *a_obj_ezsigntemplatesignaturecustomdateItem = ezsigntemplatesignaturecustomdate_request_compound_parseFromJSON(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignaturecustomdateList, a_obj_ezsigntemplatesignaturecustomdateItem);
    }
    }

    // ezsigntemplatesignature_request_compound->a_obj_ezsigntemplateelementdependency
    cJSON *a_obj_ezsigntemplateelementdependency = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_request_compoundJSON, "a_objEzsigntemplateelementdependency");
    if (a_obj_ezsigntemplateelementdependency) { 
    cJSON *a_obj_ezsigntemplateelementdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateelementdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateelementdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateelementdependency_local_nonprimitive,a_obj_ezsigntemplateelementdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateelementdependency_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateelementdependency_request_compound_t *a_obj_ezsigntemplateelementdependencyItem = ezsigntemplateelementdependency_request_compound_parseFromJSON(a_obj_ezsigntemplateelementdependency_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateelementdependencyList, a_obj_ezsigntemplateelementdependencyItem);
    }
    }


    ezsigntemplatesignature_request_compound_local_var = ezsigntemplatesignature_request_compound_create (
        pki_ezsigntemplatesignature_id ? pki_ezsigntemplatesignature_id->valuedouble : 0,
        fki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id_validation ? fki_ezsigntemplatesigner_id_validation->valuedouble : 0,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        i_ezsigntemplatesignature_x->valuedouble,
        i_ezsigntemplatesignature_y->valuedouble,
        i_ezsigntemplatesignature_width ? i_ezsigntemplatesignature_width->valuedouble : 0,
        i_ezsigntemplatesignature_height ? i_ezsigntemplatesignature_height->valuedouble : 0,
        i_ezsigntemplatesignature_step->valuedouble,
        e_ezsigntemplatesignature_type_local_nonprim,
        t_ezsigntemplatesignature_tooltip && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip) ? strdup(t_ezsigntemplatesignature_tooltip->valuestring) : NULL,
        e_ezsigntemplatesignature_tooltipposition ? e_ezsigntemplatesignature_tooltipposition_local_nonprim : NULL,
        e_ezsigntemplatesignature_font ? e_ezsigntemplatesignature_font_local_nonprim : NULL,
        b_ezsigntemplatesignature_required ? b_ezsigntemplatesignature_required->valueint : 0,
        e_ezsigntemplatesignature_attachmentnamesource ? e_ezsigntemplatesignature_attachmentnamesource_local_nonprim : NULL,
        s_ezsigntemplatesignature_attachmentdescription && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription) ? strdup(s_ezsigntemplatesignature_attachmentdescription->valuestring) : NULL,
        i_ezsigntemplatesignature_validationstep ? i_ezsigntemplatesignature_validationstep->valuedouble : 0,
        i_ezsigntemplatesignature_maxlength ? i_ezsigntemplatesignature_maxlength->valuedouble : 0,
        s_ezsigntemplatesignature_regexp && !cJSON_IsNull(s_ezsigntemplatesignature_regexp) ? strdup(s_ezsigntemplatesignature_regexp->valuestring) : NULL,
        e_ezsigntemplatesignature_textvalidation ? e_ezsigntemplatesignature_textvalidation_local_nonprim : NULL,
        e_ezsigntemplatesignature_dependencyrequirement ? e_ezsigntemplatesignature_dependencyrequirement_local_nonprim : NULL,
        b_ezsigntemplatesignature_customdate ? b_ezsigntemplatesignature_customdate->valueint : 0,
        a_obj_ezsigntemplatesignaturecustomdate ? a_obj_ezsigntemplatesignaturecustomdateList : NULL,
        a_obj_ezsigntemplateelementdependency ? a_obj_ezsigntemplateelementdependencyList : NULL
        );

    return ezsigntemplatesignature_request_compound_local_var;
end:
    if (e_ezsigntemplatesignature_type_local_nonprim) {
        field_e_ezsigntemplatesignature_type_free(e_ezsigntemplatesignature_type_local_nonprim);
        e_ezsigntemplatesignature_type_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_tooltipposition_local_nonprim) {
        field_e_ezsigntemplatesignature_tooltipposition_free(e_ezsigntemplatesignature_tooltipposition_local_nonprim);
        e_ezsigntemplatesignature_tooltipposition_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_font_local_nonprim) {
        field_e_ezsigntemplatesignature_font_free(e_ezsigntemplatesignature_font_local_nonprim);
        e_ezsigntemplatesignature_font_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_attachmentnamesource_local_nonprim) {
        field_e_ezsigntemplatesignature_attachmentnamesource_free(e_ezsigntemplatesignature_attachmentnamesource_local_nonprim);
        e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_textvalidation_local_nonprim) {
        enum_textvalidation_free(e_ezsigntemplatesignature_textvalidation_local_nonprim);
        e_ezsigntemplatesignature_textvalidation_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_dependencyrequirement_local_nonprim) {
        field_e_ezsigntemplatesignature_dependencyrequirement_free(e_ezsigntemplatesignature_dependencyrequirement_local_nonprim);
        e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignaturecustomdateList) {
            ezsigntemplatesignaturecustomdate_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignaturecustomdateList);
        a_obj_ezsigntemplatesignaturecustomdateList = NULL;
    }
    if (a_obj_ezsigntemplateelementdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateelementdependencyList) {
            ezsigntemplateelementdependency_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateelementdependencyList);
        a_obj_ezsigntemplateelementdependencyList = NULL;
    }
    return NULL;

}
