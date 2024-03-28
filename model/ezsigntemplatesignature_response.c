#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_response.h"


char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_positioning_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_positioning) {
    char* e_ezsigntemplatesignature_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    return e_ezsigntemplatesignature_positioningArray[e_ezsigntemplatesignature_positioning];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_positioning_FromString(char* e_ezsigntemplatesignature_positioning){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_positioningArray) / sizeof(e_ezsigntemplatesignature_positioningArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_positioning, e_ezsigntemplatesignature_positioningArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_type_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_type) {
    char* e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "FieldText", "FieldTextarea", "Consultation" };
    return e_ezsigntemplatesignature_typeArray[e_ezsigntemplatesignature_type];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_type_FromString(char* e_ezsigntemplatesignature_type){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "FieldText", "FieldTextarea", "Consultation" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_typeArray) / sizeof(e_ezsigntemplatesignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_type, e_ezsigntemplatesignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_tooltipposition) {
    char* e_ezsigntemplatesignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    return e_ezsigntemplatesignature_tooltippositionArray[e_ezsigntemplatesignature_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_tooltipposition_FromString(char* e_ezsigntemplatesignature_tooltipposition){
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
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_font_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_font) {
    char* e_ezsigntemplatesignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    return e_ezsigntemplatesignature_fontArray[e_ezsigntemplatesignature_font];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_font_FromString(char* e_ezsigntemplatesignature_font){
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
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_attachmentnamesource) {
    char* e_ezsigntemplatesignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    return e_ezsigntemplatesignature_attachmentnamesourceArray[e_ezsigntemplatesignature_attachmentnamesource];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* e_ezsigntemplatesignature_attachmentnamesource){
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
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_textvalidation_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_textvalidation) {
    char* e_ezsigntemplatesignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    return e_ezsigntemplatesignature_textvalidationArray[e_ezsigntemplatesignature_textvalidation];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_textvalidation_FromString(char* e_ezsigntemplatesignature_textvalidation){
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
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_dependencyrequirement_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_dependencyrequirement) {
    char* e_ezsigntemplatesignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    return e_ezsigntemplatesignature_dependencyrequirementArray[e_ezsigntemplatesignature_dependencyrequirement];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_dependencyrequirement_FromString(char* e_ezsigntemplatesignature_dependencyrequirement){
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
char* ezsigntemplatesignature_response_e_ezsigntemplatesignature_positioningoccurence_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response__e e_ezsigntemplatesignature_positioningoccurence) {
    char* e_ezsigntemplatesignature_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    return e_ezsigntemplatesignature_positioningoccurenceArray[e_ezsigntemplatesignature_positioningoccurence];
}

ezmax_api_definition__full_ezsigntemplatesignature_response__e ezsigntemplatesignature_response_e_ezsigntemplatesignature_positioningoccurence_FromString(char* e_ezsigntemplatesignature_positioningoccurence){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_positioningoccurenceArray) / sizeof(e_ezsigntemplatesignature_positioningoccurenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_positioningoccurence, e_ezsigntemplatesignature_positioningoccurenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_create(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int fki_ezsigntemplatesigner_id_validation,
    field_e_ezsigntemplatesignature_positioning_t *e_ezsigntemplatesignature_positioning,
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
    int i_ezsigntemplatesignature_validationstep,
    char *s_ezsigntemplatesignature_attachmentdescription,
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource,
    int b_ezsigntemplatesignature_required,
    int i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_regexp,
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation,
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement,
    char *s_ezsigntemplatesignature_positioningpattern,
    int i_ezsigntemplatesignature_positioningoffsetx,
    int i_ezsigntemplatesignature_positioningoffsety,
    field_e_ezsigntemplatesignature_positioningoccurence_t *e_ezsigntemplatesignature_positioningoccurence
    ) {
    ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_local_var = malloc(sizeof(ezsigntemplatesignature_response_t));
    if (!ezsigntemplatesignature_response_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_response_local_var->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_positioning = e_ezsigntemplatesignature_positioning;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_width = i_ezsigntemplatesignature_width;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_height = i_ezsigntemplatesignature_height;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    ezsigntemplatesignature_response_local_var->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    ezsigntemplatesignature_response_local_var->b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_maxlength = i_ezsigntemplatesignature_maxlength;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_regexp = s_ezsigntemplatesignature_regexp;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_textvalidation = e_ezsigntemplatesignature_textvalidation;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_dependencyrequirement = e_ezsigntemplatesignature_dependencyrequirement;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_positioningpattern = s_ezsigntemplatesignature_positioningpattern;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_positioningoffsetx = i_ezsigntemplatesignature_positioningoffsetx;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_positioningoffsety = i_ezsigntemplatesignature_positioningoffsety;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_positioningoccurence = e_ezsigntemplatesignature_positioningoccurence;

    return ezsigntemplatesignature_response_local_var;
}


void ezsigntemplatesignature_response_free(ezsigntemplatesignature_response_t *ezsigntemplatesignature_response) {
    if(NULL == ezsigntemplatesignature_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning) {
        field_e_ezsigntemplatesignature_positioning_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_type) {
        field_e_ezsigntemplatesignature_type_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_type);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_type = NULL;
    }
    if (ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) {
        free(ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip);
        ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition) {
        field_e_ezsigntemplatesignature_tooltipposition_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_font) {
        field_e_ezsigntemplatesignature_font_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_font);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_font = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource) {
        field_e_ezsigntemplatesignature_attachmentnamesource_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation) {
        enum_textvalidation_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement) {
        field_e_ezsigntemplatesignature_dependencyrequirement_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern = NULL;
    }
    if (ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence) {
        field_e_ezsigntemplatesignature_positioningoccurence_free(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence);
        ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence = NULL;
    }
    free(ezsigntemplatesignature_response);
}

cJSON *ezsigntemplatesignature_response_convertToJSON(ezsigntemplatesignature_response_t *ezsigntemplatesignature_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_response->pki_ezsigntemplatesignature_id
    if (!ezsigntemplatesignature_response->pki_ezsigntemplatesignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignatureID", ezsigntemplatesignature_response->pki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_response->fki_ezsigntemplatedocument_id
    if (!ezsigntemplatesignature_response->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplatesignature_response->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id_validation
    if(ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerIDValidation", ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_positioning_local_JSON = field_e_ezsigntemplatesignature_positioning_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning);
    if(e_ezsigntemplatesignature_positioning_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignaturePositioning", e_ezsigntemplatesignature_positioning_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatesignature_response->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplatesignature_response->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_x
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureX", ezsigntemplatesignature_response->i_ezsigntemplatesignature_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_y
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureY", ezsigntemplatesignature_response->i_ezsigntemplatesignature_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_width
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureWidth", ezsigntemplatesignature_response->i_ezsigntemplatesignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_height
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureHeight", ezsigntemplatesignature_response->i_ezsigntemplatesignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_step
    if (!ezsigntemplatesignature_response->i_ezsigntemplatesignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureStep", ezsigntemplatesignature_response->i_ezsigntemplatesignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_type
    if (ezmax_api_definition__full_ezsigntemplatesignature_response__NULL == ezsigntemplatesignature_response->e_ezsigntemplatesignature_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplatesignature_type_local_JSON = field_e_ezsigntemplatesignature_type_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_type);
    if(e_ezsigntemplatesignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureType", e_ezsigntemplatesignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip
    if(ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignatureTooltip", ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_tooltipposition_local_JSON = field_e_ezsigntemplatesignature_tooltipposition_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition);
    if(e_ezsigntemplatesignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTooltipposition", e_ezsigntemplatesignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_font
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_font != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_font_local_JSON = field_e_ezsigntemplatesignature_font_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_font);
    if(e_ezsigntemplatesignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureFont", e_ezsigntemplatesignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_validationstep
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureValidationstep", ezsigntemplatesignature_response->i_ezsigntemplatesignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureAttachmentdescription", ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_attachmentnamesource_local_JSON = field_e_ezsigntemplatesignature_attachmentnamesource_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource);
    if(e_ezsigntemplatesignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureAttachmentnamesource", e_ezsigntemplatesignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_required
    if(ezsigntemplatesignature_response->b_ezsigntemplatesignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureRequired", ezsigntemplatesignature_response->b_ezsigntemplatesignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_maxlength
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureMaxlength", ezsigntemplatesignature_response->i_ezsigntemplatesignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureRegexp", ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation);
    if(e_ezsigntemplatesignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTextvalidation", e_ezsigntemplatesignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_dependencyrequirement_local_JSON = field_e_ezsigntemplatesignature_dependencyrequirement_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement);
    if(e_ezsigntemplatesignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureDependencyrequirement", e_ezsigntemplatesignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturePositioningpattern", ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsetx
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturePositioningoffsetx", ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsety
    if(ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsety) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturePositioningoffsety", ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence != ezmax_api_definition__full_ezsigntemplatesignature_response__NULL) {
    cJSON *e_ezsigntemplatesignature_positioningoccurence_local_JSON = field_e_ezsigntemplatesignature_positioningoccurence_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence);
    if(e_ezsigntemplatesignature_positioningoccurence_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignaturePositioningoccurence", e_ezsigntemplatesignature_positioningoccurence_local_JSON);
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

ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_parseFromJSON(cJSON *ezsigntemplatesignature_responseJSON){

    ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning
    field_e_ezsigntemplatesignature_positioning_t *e_ezsigntemplatesignature_positioning_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_type
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_font
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence
    field_e_ezsigntemplatesignature_positioningoccurence_t *e_ezsigntemplatesignature_positioningoccurence_local_nonprim = NULL;

    // ezsigntemplatesignature_response->pki_ezsigntemplatesignature_id
    cJSON *pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "pkiEzsigntemplatesignatureID");
    if (!pki_ezsigntemplatesignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id_validation
    cJSON *fki_ezsigntemplatesigner_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatesignerIDValidation");
    if (fki_ezsigntemplatesigner_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning
    cJSON *e_ezsigntemplatesignature_positioning = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignaturePositioning");
    if (e_ezsigntemplatesignature_positioning) { 
    e_ezsigntemplatesignature_positioning_local_nonprim = field_e_ezsigntemplatesignature_positioning_parseFromJSON(e_ezsigntemplatesignature_positioning); //custom
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_x
    cJSON *i_ezsigntemplatesignature_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureX");
    if (i_ezsigntemplatesignature_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_y
    cJSON *i_ezsigntemplatesignature_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureY");
    if (i_ezsigntemplatesignature_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_width
    cJSON *i_ezsigntemplatesignature_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureWidth");
    if (i_ezsigntemplatesignature_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_height
    cJSON *i_ezsigntemplatesignature_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureHeight");
    if (i_ezsigntemplatesignature_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_step
    cJSON *i_ezsigntemplatesignature_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureStep");
    if (!i_ezsigntemplatesignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_type
    cJSON *e_ezsigntemplatesignature_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureType");
    if (!e_ezsigntemplatesignature_type) {
        goto end;
    }

    
    e_ezsigntemplatesignature_type_local_nonprim = field_e_ezsigntemplatesignature_type_parseFromJSON(e_ezsigntemplatesignature_type); //custom

    // ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip
    cJSON *t_ezsigntemplatesignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "tEzsigntemplatesignatureTooltip");
    if (t_ezsigntemplatesignature_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplatesignature_tooltip) && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    cJSON *e_ezsigntemplatesignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureTooltipposition");
    if (e_ezsigntemplatesignature_tooltipposition) { 
    e_ezsigntemplatesignature_tooltipposition_local_nonprim = field_e_ezsigntemplatesignature_tooltipposition_parseFromJSON(e_ezsigntemplatesignature_tooltipposition); //custom
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_font
    cJSON *e_ezsigntemplatesignature_font = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureFont");
    if (e_ezsigntemplatesignature_font) { 
    e_ezsigntemplatesignature_font_local_nonprim = field_e_ezsigntemplatesignature_font_parseFromJSON(e_ezsigntemplatesignature_font); //custom
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_validationstep
    cJSON *i_ezsigntemplatesignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureValidationstep");
    if (i_ezsigntemplatesignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription
    cJSON *s_ezsigntemplatesignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureAttachmentdescription");
    if (s_ezsigntemplatesignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_attachmentdescription) && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource
    cJSON *e_ezsigntemplatesignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureAttachmentnamesource");
    if (e_ezsigntemplatesignature_attachmentnamesource) { 
    e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(e_ezsigntemplatesignature_attachmentnamesource); //custom
    }

    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_required
    cJSON *b_ezsigntemplatesignature_required = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "bEzsigntemplatesignatureRequired");
    if (b_ezsigntemplatesignature_required) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_maxlength
    cJSON *i_ezsigntemplatesignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureMaxlength");
    if (i_ezsigntemplatesignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp
    cJSON *s_ezsigntemplatesignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureRegexp");
    if (s_ezsigntemplatesignature_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_regexp) && !cJSON_IsNull(s_ezsigntemplatesignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    cJSON *e_ezsigntemplatesignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureTextvalidation");
    if (e_ezsigntemplatesignature_textvalidation) { 
    e_ezsigntemplatesignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplatesignature_textvalidation); //custom
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    cJSON *e_ezsigntemplatesignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureDependencyrequirement");
    if (e_ezsigntemplatesignature_dependencyrequirement) { 
    e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = field_e_ezsigntemplatesignature_dependencyrequirement_parseFromJSON(e_ezsigntemplatesignature_dependencyrequirement); //custom
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern
    cJSON *s_ezsigntemplatesignature_positioningpattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignaturePositioningpattern");
    if (s_ezsigntemplatesignature_positioningpattern) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_positioningpattern) && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsetx
    cJSON *i_ezsigntemplatesignature_positioningoffsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignaturePositioningoffsetx");
    if (i_ezsigntemplatesignature_positioningoffsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsety
    cJSON *i_ezsigntemplatesignature_positioningoffsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignaturePositioningoffsety");
    if (i_ezsigntemplatesignature_positioningoffsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsety))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence
    cJSON *e_ezsigntemplatesignature_positioningoccurence = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignaturePositioningoccurence");
    if (e_ezsigntemplatesignature_positioningoccurence) { 
    e_ezsigntemplatesignature_positioningoccurence_local_nonprim = field_e_ezsigntemplatesignature_positioningoccurence_parseFromJSON(e_ezsigntemplatesignature_positioningoccurence); //custom
    }


    ezsigntemplatesignature_response_local_var = ezsigntemplatesignature_response_create (
        pki_ezsigntemplatesignature_id->valuedouble,
        fki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id_validation ? fki_ezsigntemplatesigner_id_validation->valuedouble : 0,
        e_ezsigntemplatesignature_positioning ? e_ezsigntemplatesignature_positioning_local_nonprim : NULL,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        i_ezsigntemplatesignature_x ? i_ezsigntemplatesignature_x->valuedouble : 0,
        i_ezsigntemplatesignature_y ? i_ezsigntemplatesignature_y->valuedouble : 0,
        i_ezsigntemplatesignature_width ? i_ezsigntemplatesignature_width->valuedouble : 0,
        i_ezsigntemplatesignature_height ? i_ezsigntemplatesignature_height->valuedouble : 0,
        i_ezsigntemplatesignature_step->valuedouble,
        e_ezsigntemplatesignature_type_local_nonprim,
        t_ezsigntemplatesignature_tooltip && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip) ? strdup(t_ezsigntemplatesignature_tooltip->valuestring) : NULL,
        e_ezsigntemplatesignature_tooltipposition ? e_ezsigntemplatesignature_tooltipposition_local_nonprim : NULL,
        e_ezsigntemplatesignature_font ? e_ezsigntemplatesignature_font_local_nonprim : NULL,
        i_ezsigntemplatesignature_validationstep ? i_ezsigntemplatesignature_validationstep->valuedouble : 0,
        s_ezsigntemplatesignature_attachmentdescription && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription) ? strdup(s_ezsigntemplatesignature_attachmentdescription->valuestring) : NULL,
        e_ezsigntemplatesignature_attachmentnamesource ? e_ezsigntemplatesignature_attachmentnamesource_local_nonprim : NULL,
        b_ezsigntemplatesignature_required ? b_ezsigntemplatesignature_required->valueint : 0,
        i_ezsigntemplatesignature_maxlength ? i_ezsigntemplatesignature_maxlength->valuedouble : 0,
        s_ezsigntemplatesignature_regexp && !cJSON_IsNull(s_ezsigntemplatesignature_regexp) ? strdup(s_ezsigntemplatesignature_regexp->valuestring) : NULL,
        e_ezsigntemplatesignature_textvalidation ? e_ezsigntemplatesignature_textvalidation_local_nonprim : NULL,
        e_ezsigntemplatesignature_dependencyrequirement ? e_ezsigntemplatesignature_dependencyrequirement_local_nonprim : NULL,
        s_ezsigntemplatesignature_positioningpattern && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern) ? strdup(s_ezsigntemplatesignature_positioningpattern->valuestring) : NULL,
        i_ezsigntemplatesignature_positioningoffsetx ? i_ezsigntemplatesignature_positioningoffsetx->valuedouble : 0,
        i_ezsigntemplatesignature_positioningoffsety ? i_ezsigntemplatesignature_positioningoffsety->valuedouble : 0,
        e_ezsigntemplatesignature_positioningoccurence ? e_ezsigntemplatesignature_positioningoccurence_local_nonprim : NULL
        );

    return ezsigntemplatesignature_response_local_var;
end:
    if (e_ezsigntemplatesignature_positioning_local_nonprim) {
        field_e_ezsigntemplatesignature_positioning_free(e_ezsigntemplatesignature_positioning_local_nonprim);
        e_ezsigntemplatesignature_positioning_local_nonprim = NULL;
    }
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
    if (e_ezsigntemplatesignature_positioningoccurence_local_nonprim) {
        field_e_ezsigntemplatesignature_positioningoccurence_free(e_ezsigntemplatesignature_positioningoccurence_local_nonprim);
        e_ezsigntemplatesignature_positioningoccurence_local_nonprim = NULL;
    }
    return NULL;

}
