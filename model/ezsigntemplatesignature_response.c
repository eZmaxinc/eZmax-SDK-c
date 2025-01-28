#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_response.h"



static ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_create_internal(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int fki_ezsigntemplatesigner_id_validation,
    int b_ezsigntemplatesignature_handwritten,
    int b_ezsigntemplatesignature_reason,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning,
    int i_ezsigntemplatedocumentpage_pagenumber,
    int i_ezsigntemplatesignature_x,
    int i_ezsigntemplatesignature_y,
    int i_ezsigntemplatesignature_width,
    int i_ezsigntemplatesignature_height,
    int i_ezsigntemplatesignature_step,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger,
    char *t_ezsigntemplatesignature_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font,
    int i_ezsigntemplatesignature_validationstep,
    char *s_ezsigntemplatesignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource,
    int b_ezsigntemplatesignature_required,
    int i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_defaultvalue,
    char *s_ezsigntemplatesignature_regexp,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation,
    char *s_ezsigntemplatesignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement,
    char *s_ezsigntemplatesignature_positioningpattern,
    int i_ezsigntemplatesignature_positioningoffsetx,
    int i_ezsigntemplatesignature_positioningoffsety,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence
    ) {
    ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_local_var = malloc(sizeof(ezsigntemplatesignature_response_t));
    if (!ezsigntemplatesignature_response_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_response_local_var->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatesignature_response_local_var->fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    ezsigntemplatesignature_response_local_var->b_ezsigntemplatesignature_handwritten = b_ezsigntemplatesignature_handwritten;
    ezsigntemplatesignature_response_local_var->b_ezsigntemplatesignature_reason = b_ezsigntemplatesignature_reason;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_positioning = e_ezsigntemplatesignature_positioning;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_width = i_ezsigntemplatesignature_width;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_height = i_ezsigntemplatesignature_height;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_consultationtrigger = e_ezsigntemplatesignature_consultationtrigger;
    ezsigntemplatesignature_response_local_var->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    ezsigntemplatesignature_response_local_var->b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_maxlength = i_ezsigntemplatesignature_maxlength;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_defaultvalue = s_ezsigntemplatesignature_defaultvalue;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_regexp = s_ezsigntemplatesignature_regexp;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_textvalidation = e_ezsigntemplatesignature_textvalidation;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_textvalidationcustommessage = s_ezsigntemplatesignature_textvalidationcustommessage;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_dependencyrequirement = e_ezsigntemplatesignature_dependencyrequirement;
    ezsigntemplatesignature_response_local_var->s_ezsigntemplatesignature_positioningpattern = s_ezsigntemplatesignature_positioningpattern;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_positioningoffsetx = i_ezsigntemplatesignature_positioningoffsetx;
    ezsigntemplatesignature_response_local_var->i_ezsigntemplatesignature_positioningoffsety = i_ezsigntemplatesignature_positioningoffsety;
    ezsigntemplatesignature_response_local_var->e_ezsigntemplatesignature_positioningoccurence = e_ezsigntemplatesignature_positioningoccurence;

    ezsigntemplatesignature_response_local_var->_library_owned = 1;
    return ezsigntemplatesignature_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignature_response_t *ezsigntemplatesignature_response_create(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int fki_ezsigntemplatesigner_id_validation,
    int b_ezsigntemplatesignature_handwritten,
    int b_ezsigntemplatesignature_reason,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning,
    int i_ezsigntemplatedocumentpage_pagenumber,
    int i_ezsigntemplatesignature_x,
    int i_ezsigntemplatesignature_y,
    int i_ezsigntemplatesignature_width,
    int i_ezsigntemplatesignature_height,
    int i_ezsigntemplatesignature_step,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger,
    char *t_ezsigntemplatesignature_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font,
    int i_ezsigntemplatesignature_validationstep,
    char *s_ezsigntemplatesignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource,
    int b_ezsigntemplatesignature_required,
    int i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_defaultvalue,
    char *s_ezsigntemplatesignature_regexp,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation,
    char *s_ezsigntemplatesignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement,
    char *s_ezsigntemplatesignature_positioningpattern,
    int i_ezsigntemplatesignature_positioningoffsetx,
    int i_ezsigntemplatesignature_positioningoffsety,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence
    ) {
    return ezsigntemplatesignature_response_create_internal (
        pki_ezsigntemplatesignature_id,
        fki_ezsigntemplatedocument_id,
        fki_ezsigntemplatesigner_id,
        fki_ezsigntemplatesigner_id_validation,
        b_ezsigntemplatesignature_handwritten,
        b_ezsigntemplatesignature_reason,
        e_ezsigntemplatesignature_positioning,
        i_ezsigntemplatedocumentpage_pagenumber,
        i_ezsigntemplatesignature_x,
        i_ezsigntemplatesignature_y,
        i_ezsigntemplatesignature_width,
        i_ezsigntemplatesignature_height,
        i_ezsigntemplatesignature_step,
        e_ezsigntemplatesignature_type,
        e_ezsigntemplatesignature_consultationtrigger,
        t_ezsigntemplatesignature_tooltip,
        e_ezsigntemplatesignature_tooltipposition,
        e_ezsigntemplatesignature_font,
        i_ezsigntemplatesignature_validationstep,
        s_ezsigntemplatesignature_attachmentdescription,
        e_ezsigntemplatesignature_attachmentnamesource,
        b_ezsigntemplatesignature_required,
        i_ezsigntemplatesignature_maxlength,
        s_ezsigntemplatesignature_defaultvalue,
        s_ezsigntemplatesignature_regexp,
        e_ezsigntemplatesignature_textvalidation,
        s_ezsigntemplatesignature_textvalidationcustommessage,
        e_ezsigntemplatesignature_dependencyrequirement,
        s_ezsigntemplatesignature_positioningpattern,
        i_ezsigntemplatesignature_positioningoffsetx,
        i_ezsigntemplatesignature_positioningoffsety,
        e_ezsigntemplatesignature_positioningoccurence
        );
}

void ezsigntemplatesignature_response_free(ezsigntemplatesignature_response_t *ezsigntemplatesignature_response) {
    if(NULL == ezsigntemplatesignature_response){
        return ;
    }
    if(ezsigntemplatesignature_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignature_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) {
        free(ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip);
        ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage = NULL;
    }
    if (ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern) {
        free(ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern);
        ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern = NULL;
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


    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_handwritten
    if(ezsigntemplatesignature_response->b_ezsigntemplatesignature_handwritten) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureHandwritten", ezsigntemplatesignature_response->b_ezsigntemplatesignature_handwritten) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_reason
    if(ezsigntemplatesignature_response->b_ezsigntemplatesignature_reason) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureReason", ezsigntemplatesignature_response->b_ezsigntemplatesignature_reason) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning != ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__NULL) {
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
    if (ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__NULL == ezsigntemplatesignature_response->e_ezsigntemplatesignature_type) {
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


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_consultationtrigger
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_consultationtrigger != ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__NULL) {
    cJSON *e_ezsigntemplatesignature_consultationtrigger_local_JSON = field_e_ezsigntemplatesignature_consultationtrigger_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_consultationtrigger);
    if(e_ezsigntemplatesignature_consultationtrigger_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureConsultationtrigger", e_ezsigntemplatesignature_consultationtrigger_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip
    if(ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignatureTooltip", ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition != ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__NULL) {
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
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_font != ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__NULL) {
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
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource != ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__NULL) {
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


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureDefaultvalue", ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureRegexp", ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsigntemplatesignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation);
    if(e_ezsigntemplatesignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTextvalidation", e_ezsigntemplatesignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage
    if(ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureTextvalidationcustommessage", ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement != ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__NULL) {
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
    if(ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence != ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__NULL) {
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
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_type
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_consultationtrigger
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_font
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence_local_nonprim = 0;

    // ezsigntemplatesignature_response->pki_ezsigntemplatesignature_id
    cJSON *pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "pkiEzsigntemplatesignatureID");
    if (cJSON_IsNull(pki_ezsigntemplatesignature_id)) {
        pki_ezsigntemplatesignature_id = NULL;
    }
    if (!pki_ezsigntemplatesignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(fki_ezsigntemplatedocument_id)) {
        fki_ezsigntemplatedocument_id = NULL;
    }
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatesignerID");
    if (cJSON_IsNull(fki_ezsigntemplatesigner_id)) {
        fki_ezsigntemplatesigner_id = NULL;
    }
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->fki_ezsigntemplatesigner_id_validation
    cJSON *fki_ezsigntemplatesigner_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "fkiEzsigntemplatesignerIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplatesigner_id_validation)) {
        fki_ezsigntemplatesigner_id_validation = NULL;
    }
    if (fki_ezsigntemplatesigner_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_handwritten
    cJSON *b_ezsigntemplatesignature_handwritten = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "bEzsigntemplatesignatureHandwritten");
    if (cJSON_IsNull(b_ezsigntemplatesignature_handwritten)) {
        b_ezsigntemplatesignature_handwritten = NULL;
    }
    if (b_ezsigntemplatesignature_handwritten) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_handwritten))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_reason
    cJSON *b_ezsigntemplatesignature_reason = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "bEzsigntemplatesignatureReason");
    if (cJSON_IsNull(b_ezsigntemplatesignature_reason)) {
        b_ezsigntemplatesignature_reason = NULL;
    }
    if (b_ezsigntemplatesignature_reason) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_reason))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioning
    cJSON *e_ezsigntemplatesignature_positioning = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignaturePositioning");
    if (cJSON_IsNull(e_ezsigntemplatesignature_positioning)) {
        e_ezsigntemplatesignature_positioning = NULL;
    }
    if (e_ezsigntemplatesignature_positioning) { 
    e_ezsigntemplatesignature_positioning_local_nonprim = field_e_ezsigntemplatesignature_positioning_parseFromJSON(e_ezsigntemplatesignature_positioning); //custom
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_pagenumber)) {
        i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_x
    cJSON *i_ezsigntemplatesignature_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureX");
    if (cJSON_IsNull(i_ezsigntemplatesignature_x)) {
        i_ezsigntemplatesignature_x = NULL;
    }
    if (i_ezsigntemplatesignature_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_y
    cJSON *i_ezsigntemplatesignature_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureY");
    if (cJSON_IsNull(i_ezsigntemplatesignature_y)) {
        i_ezsigntemplatesignature_y = NULL;
    }
    if (i_ezsigntemplatesignature_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_width
    cJSON *i_ezsigntemplatesignature_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureWidth");
    if (cJSON_IsNull(i_ezsigntemplatesignature_width)) {
        i_ezsigntemplatesignature_width = NULL;
    }
    if (i_ezsigntemplatesignature_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_height
    cJSON *i_ezsigntemplatesignature_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureHeight");
    if (cJSON_IsNull(i_ezsigntemplatesignature_height)) {
        i_ezsigntemplatesignature_height = NULL;
    }
    if (i_ezsigntemplatesignature_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_step
    cJSON *i_ezsigntemplatesignature_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureStep");
    if (cJSON_IsNull(i_ezsigntemplatesignature_step)) {
        i_ezsigntemplatesignature_step = NULL;
    }
    if (!i_ezsigntemplatesignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_type
    cJSON *e_ezsigntemplatesignature_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureType");
    if (cJSON_IsNull(e_ezsigntemplatesignature_type)) {
        e_ezsigntemplatesignature_type = NULL;
    }
    if (!e_ezsigntemplatesignature_type) {
        goto end;
    }

    
    e_ezsigntemplatesignature_type_local_nonprim = field_e_ezsigntemplatesignature_type_parseFromJSON(e_ezsigntemplatesignature_type); //custom

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_consultationtrigger
    cJSON *e_ezsigntemplatesignature_consultationtrigger = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureConsultationtrigger");
    if (cJSON_IsNull(e_ezsigntemplatesignature_consultationtrigger)) {
        e_ezsigntemplatesignature_consultationtrigger = NULL;
    }
    if (e_ezsigntemplatesignature_consultationtrigger) { 
    e_ezsigntemplatesignature_consultationtrigger_local_nonprim = field_e_ezsigntemplatesignature_consultationtrigger_parseFromJSON(e_ezsigntemplatesignature_consultationtrigger); //custom
    }

    // ezsigntemplatesignature_response->t_ezsigntemplatesignature_tooltip
    cJSON *t_ezsigntemplatesignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "tEzsigntemplatesignatureTooltip");
    if (cJSON_IsNull(t_ezsigntemplatesignature_tooltip)) {
        t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (t_ezsigntemplatesignature_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplatesignature_tooltip) && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_tooltipposition
    cJSON *e_ezsigntemplatesignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureTooltipposition");
    if (cJSON_IsNull(e_ezsigntemplatesignature_tooltipposition)) {
        e_ezsigntemplatesignature_tooltipposition = NULL;
    }
    if (e_ezsigntemplatesignature_tooltipposition) { 
    e_ezsigntemplatesignature_tooltipposition_local_nonprim = field_e_ezsigntemplatesignature_tooltipposition_parseFromJSON(e_ezsigntemplatesignature_tooltipposition); //custom
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_font
    cJSON *e_ezsigntemplatesignature_font = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureFont");
    if (cJSON_IsNull(e_ezsigntemplatesignature_font)) {
        e_ezsigntemplatesignature_font = NULL;
    }
    if (e_ezsigntemplatesignature_font) { 
    e_ezsigntemplatesignature_font_local_nonprim = field_e_ezsigntemplatesignature_font_parseFromJSON(e_ezsigntemplatesignature_font); //custom
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_validationstep
    cJSON *i_ezsigntemplatesignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureValidationstep");
    if (cJSON_IsNull(i_ezsigntemplatesignature_validationstep)) {
        i_ezsigntemplatesignature_validationstep = NULL;
    }
    if (i_ezsigntemplatesignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_attachmentdescription
    cJSON *s_ezsigntemplatesignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureAttachmentdescription");
    if (cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription)) {
        s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (s_ezsigntemplatesignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_attachmentdescription) && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_attachmentnamesource
    cJSON *e_ezsigntemplatesignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureAttachmentnamesource");
    if (cJSON_IsNull(e_ezsigntemplatesignature_attachmentnamesource)) {
        e_ezsigntemplatesignature_attachmentnamesource = NULL;
    }
    if (e_ezsigntemplatesignature_attachmentnamesource) { 
    e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(e_ezsigntemplatesignature_attachmentnamesource); //custom
    }

    // ezsigntemplatesignature_response->b_ezsigntemplatesignature_required
    cJSON *b_ezsigntemplatesignature_required = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "bEzsigntemplatesignatureRequired");
    if (cJSON_IsNull(b_ezsigntemplatesignature_required)) {
        b_ezsigntemplatesignature_required = NULL;
    }
    if (b_ezsigntemplatesignature_required) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_maxlength
    cJSON *i_ezsigntemplatesignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignatureMaxlength");
    if (cJSON_IsNull(i_ezsigntemplatesignature_maxlength)) {
        i_ezsigntemplatesignature_maxlength = NULL;
    }
    if (i_ezsigntemplatesignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_defaultvalue
    cJSON *s_ezsigntemplatesignature_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureDefaultvalue");
    if (cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue)) {
        s_ezsigntemplatesignature_defaultvalue = NULL;
    }
    if (s_ezsigntemplatesignature_defaultvalue) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_defaultvalue) && !cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_regexp
    cJSON *s_ezsigntemplatesignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureRegexp");
    if (cJSON_IsNull(s_ezsigntemplatesignature_regexp)) {
        s_ezsigntemplatesignature_regexp = NULL;
    }
    if (s_ezsigntemplatesignature_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_regexp) && !cJSON_IsNull(s_ezsigntemplatesignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_textvalidation
    cJSON *e_ezsigntemplatesignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureTextvalidation");
    if (cJSON_IsNull(e_ezsigntemplatesignature_textvalidation)) {
        e_ezsigntemplatesignature_textvalidation = NULL;
    }
    if (e_ezsigntemplatesignature_textvalidation) { 
    e_ezsigntemplatesignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplatesignature_textvalidation); //custom
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_textvalidationcustommessage
    cJSON *s_ezsigntemplatesignature_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignatureTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage)) {
        s_ezsigntemplatesignature_textvalidationcustommessage = NULL;
    }
    if (s_ezsigntemplatesignature_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_textvalidationcustommessage) && !cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_dependencyrequirement
    cJSON *e_ezsigntemplatesignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignatureDependencyrequirement");
    if (cJSON_IsNull(e_ezsigntemplatesignature_dependencyrequirement)) {
        e_ezsigntemplatesignature_dependencyrequirement = NULL;
    }
    if (e_ezsigntemplatesignature_dependencyrequirement) { 
    e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = field_e_ezsigntemplatesignature_dependencyrequirement_parseFromJSON(e_ezsigntemplatesignature_dependencyrequirement); //custom
    }

    // ezsigntemplatesignature_response->s_ezsigntemplatesignature_positioningpattern
    cJSON *s_ezsigntemplatesignature_positioningpattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "sEzsigntemplatesignaturePositioningpattern");
    if (cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern)) {
        s_ezsigntemplatesignature_positioningpattern = NULL;
    }
    if (s_ezsigntemplatesignature_positioningpattern) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_positioningpattern) && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsetx
    cJSON *i_ezsigntemplatesignature_positioningoffsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignaturePositioningoffsetx");
    if (cJSON_IsNull(i_ezsigntemplatesignature_positioningoffsetx)) {
        i_ezsigntemplatesignature_positioningoffsetx = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->i_ezsigntemplatesignature_positioningoffsety
    cJSON *i_ezsigntemplatesignature_positioningoffsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "iEzsigntemplatesignaturePositioningoffsety");
    if (cJSON_IsNull(i_ezsigntemplatesignature_positioningoffsety)) {
        i_ezsigntemplatesignature_positioningoffsety = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsety))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesignature_response->e_ezsigntemplatesignature_positioningoccurence
    cJSON *e_ezsigntemplatesignature_positioningoccurence = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_responseJSON, "eEzsigntemplatesignaturePositioningoccurence");
    if (cJSON_IsNull(e_ezsigntemplatesignature_positioningoccurence)) {
        e_ezsigntemplatesignature_positioningoccurence = NULL;
    }
    if (e_ezsigntemplatesignature_positioningoccurence) { 
    e_ezsigntemplatesignature_positioningoccurence_local_nonprim = field_e_ezsigntemplatesignature_positioningoccurence_parseFromJSON(e_ezsigntemplatesignature_positioningoccurence); //custom
    }


    ezsigntemplatesignature_response_local_var = ezsigntemplatesignature_response_create_internal (
        pki_ezsigntemplatesignature_id->valuedouble,
        fki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id_validation ? fki_ezsigntemplatesigner_id_validation->valuedouble : 0,
        b_ezsigntemplatesignature_handwritten ? b_ezsigntemplatesignature_handwritten->valueint : 0,
        b_ezsigntemplatesignature_reason ? b_ezsigntemplatesignature_reason->valueint : 0,
        e_ezsigntemplatesignature_positioning ? e_ezsigntemplatesignature_positioning_local_nonprim : 0,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        i_ezsigntemplatesignature_x ? i_ezsigntemplatesignature_x->valuedouble : 0,
        i_ezsigntemplatesignature_y ? i_ezsigntemplatesignature_y->valuedouble : 0,
        i_ezsigntemplatesignature_width ? i_ezsigntemplatesignature_width->valuedouble : 0,
        i_ezsigntemplatesignature_height ? i_ezsigntemplatesignature_height->valuedouble : 0,
        i_ezsigntemplatesignature_step->valuedouble,
        e_ezsigntemplatesignature_type_local_nonprim,
        e_ezsigntemplatesignature_consultationtrigger ? e_ezsigntemplatesignature_consultationtrigger_local_nonprim : 0,
        t_ezsigntemplatesignature_tooltip && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip) ? strdup(t_ezsigntemplatesignature_tooltip->valuestring) : NULL,
        e_ezsigntemplatesignature_tooltipposition ? e_ezsigntemplatesignature_tooltipposition_local_nonprim : 0,
        e_ezsigntemplatesignature_font ? e_ezsigntemplatesignature_font_local_nonprim : 0,
        i_ezsigntemplatesignature_validationstep ? i_ezsigntemplatesignature_validationstep->valuedouble : 0,
        s_ezsigntemplatesignature_attachmentdescription && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription) ? strdup(s_ezsigntemplatesignature_attachmentdescription->valuestring) : NULL,
        e_ezsigntemplatesignature_attachmentnamesource ? e_ezsigntemplatesignature_attachmentnamesource_local_nonprim : 0,
        b_ezsigntemplatesignature_required ? b_ezsigntemplatesignature_required->valueint : 0,
        i_ezsigntemplatesignature_maxlength ? i_ezsigntemplatesignature_maxlength->valuedouble : 0,
        s_ezsigntemplatesignature_defaultvalue && !cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue) ? strdup(s_ezsigntemplatesignature_defaultvalue->valuestring) : NULL,
        s_ezsigntemplatesignature_regexp && !cJSON_IsNull(s_ezsigntemplatesignature_regexp) ? strdup(s_ezsigntemplatesignature_regexp->valuestring) : NULL,
        e_ezsigntemplatesignature_textvalidation ? e_ezsigntemplatesignature_textvalidation_local_nonprim : 0,
        s_ezsigntemplatesignature_textvalidationcustommessage && !cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage) ? strdup(s_ezsigntemplatesignature_textvalidationcustommessage->valuestring) : NULL,
        e_ezsigntemplatesignature_dependencyrequirement ? e_ezsigntemplatesignature_dependencyrequirement_local_nonprim : 0,
        s_ezsigntemplatesignature_positioningpattern && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern) ? strdup(s_ezsigntemplatesignature_positioningpattern->valuestring) : NULL,
        i_ezsigntemplatesignature_positioningoffsetx ? i_ezsigntemplatesignature_positioningoffsetx->valuedouble : 0,
        i_ezsigntemplatesignature_positioningoffsety ? i_ezsigntemplatesignature_positioningoffsety->valuedouble : 0,
        e_ezsigntemplatesignature_positioningoccurence ? e_ezsigntemplatesignature_positioningoccurence_local_nonprim : 0
        );

    return ezsigntemplatesignature_response_local_var;
end:
    if (e_ezsigntemplatesignature_positioning_local_nonprim) {
        e_ezsigntemplatesignature_positioning_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_type_local_nonprim) {
        e_ezsigntemplatesignature_type_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_consultationtrigger_local_nonprim) {
        e_ezsigntemplatesignature_consultationtrigger_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_tooltipposition_local_nonprim) {
        e_ezsigntemplatesignature_tooltipposition_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_font_local_nonprim) {
        e_ezsigntemplatesignature_font_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_attachmentnamesource_local_nonprim) {
        e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_textvalidation_local_nonprim) {
        e_ezsigntemplatesignature_textvalidation_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_dependencyrequirement_local_nonprim) {
        e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_positioningoccurence_local_nonprim) {
        e_ezsigntemplatesignature_positioningoccurence_local_nonprim = 0;
    }
    return NULL;

}
