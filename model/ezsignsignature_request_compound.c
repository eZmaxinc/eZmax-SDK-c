#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_request_compound.h"



static ezsignsignature_request_compound_t *ezsignsignature_request_compound_create_internal(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_width,
    int i_ezsignsignature_height,
    int i_ezsignsignature_step,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    int fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int fki_ezsignfoldersignerassociation_id_validation,
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int i_ezsignsignature_validationstep,
    int i_ezsignsignature_maxlength,
    char *s_ezsignsignature_defaultvalue,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    char *s_ezsignsignature_regexp,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency
    ) {
    ezsignsignature_request_compound_t *ezsignsignature_request_compound_local_var = malloc(sizeof(ezsignsignature_request_compound_t));
    if (!ezsignsignature_request_compound_local_var) {
        return NULL;
    }
    ezsignsignature_request_compound_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_request_compound_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_request_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_width = i_ezsignsignature_width;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_height = i_ezsignsignature_height;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_request_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_request_compound_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_request_compound_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_request_compound_local_var->b_ezsignsignature_handwritten = b_ezsignsignature_handwritten;
    ezsignsignature_request_compound_local_var->b_ezsignsignature_reason = b_ezsignsignature_reason;
    ezsignsignature_request_compound_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_request_compound_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_consultationtrigger = e_ezsignsignature_consultationtrigger;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    ezsignsignature_request_compound_local_var->s_ezsignsignature_defaultvalue = s_ezsignsignature_defaultvalue;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    ezsignsignature_request_compound_local_var->s_ezsignsignature_textvalidationcustommessage = s_ezsignsignature_textvalidationcustommessage;
    ezsignsignature_request_compound_local_var->s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_dependencyrequirement = e_ezsignsignature_dependencyrequirement;
    ezsignsignature_request_compound_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_request_compound_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    ezsignsignature_request_compound_local_var->a_obj_ezsignelementdependency = a_obj_ezsignelementdependency;

    ezsignsignature_request_compound_local_var->_library_owned = 1;
    return ezsignsignature_request_compound_local_var;
}

__attribute__((deprecated)) ezsignsignature_request_compound_t *ezsignsignature_request_compound_create(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_width,
    int i_ezsignsignature_height,
    int i_ezsignsignature_step,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    int fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int fki_ezsignfoldersignerassociation_id_validation,
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int i_ezsignsignature_validationstep,
    int i_ezsignsignature_maxlength,
    char *s_ezsignsignature_defaultvalue,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    char *s_ezsignsignature_regexp,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency
    ) {
    return ezsignsignature_request_compound_create_internal (
        pki_ezsignsignature_id,
        fki_ezsignfoldersignerassociation_id,
        i_ezsignpage_pagenumber,
        i_ezsignsignature_x,
        i_ezsignsignature_y,
        i_ezsignsignature_width,
        i_ezsignsignature_height,
        i_ezsignsignature_step,
        e_ezsignsignature_type,
        fki_ezsigndocument_id,
        t_ezsignsignature_tooltip,
        e_ezsignsignature_tooltipposition,
        e_ezsignsignature_font,
        fki_ezsignfoldersignerassociation_id_validation,
        b_ezsignsignature_handwritten,
        b_ezsignsignature_reason,
        b_ezsignsignature_required,
        e_ezsignsignature_attachmentnamesource,
        s_ezsignsignature_attachmentdescription,
        e_ezsignsignature_consultationtrigger,
        i_ezsignsignature_validationstep,
        i_ezsignsignature_maxlength,
        s_ezsignsignature_defaultvalue,
        e_ezsignsignature_textvalidation,
        s_ezsignsignature_textvalidationcustommessage,
        s_ezsignsignature_regexp,
        e_ezsignsignature_dependencyrequirement,
        b_ezsignsignature_customdate,
        a_obj_ezsignsignaturecustomdate,
        a_obj_ezsignelementdependency
        );
}

void ezsignsignature_request_compound_free(ezsignsignature_request_compound_t *ezsignsignature_request_compound) {
    if(NULL == ezsignsignature_request_compound){
        return ;
    }
    if(ezsignsignature_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_request_compound->t_ezsignsignature_tooltip) {
        free(ezsignsignature_request_compound->t_ezsignsignature_tooltip);
        ezsignsignature_request_compound->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription);
        ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (ezsignsignature_request_compound->s_ezsignsignature_defaultvalue) {
        free(ezsignsignature_request_compound->s_ezsignsignature_defaultvalue);
        ezsignsignature_request_compound->s_ezsignsignature_defaultvalue = NULL;
    }
    if (ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage) {
        free(ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage);
        ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (ezsignsignature_request_compound->s_ezsignsignature_regexp) {
        free(ezsignsignature_request_compound->s_ezsignsignature_regexp);
        ezsignsignature_request_compound->s_ezsignsignature_regexp = NULL;
    }
    if (ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (ezsignsignature_request_compound->a_obj_ezsignelementdependency) {
        list_ForEach(listEntry, ezsignsignature_request_compound->a_obj_ezsignelementdependency) {
            ezsignelementdependency_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound->a_obj_ezsignelementdependency);
        ezsignsignature_request_compound->a_obj_ezsignelementdependency = NULL;
    }
    free(ezsignsignature_request_compound);
}

cJSON *ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_t *ezsignsignature_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_request_compound->pki_ezsignsignature_id
    if(ezsignsignature_request_compound->pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", ezsignsignature_request_compound->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignpage_pagenumber
    if (!ezsignsignature_request_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignsignature_request_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_x
    if (!ezsignsignature_request_compound->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", ezsignsignature_request_compound->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_y
    if (!ezsignsignature_request_compound->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", ezsignsignature_request_compound->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_width
    if(ezsignsignature_request_compound->i_ezsignsignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureWidth", ezsignsignature_request_compound->i_ezsignsignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->i_ezsignsignature_height
    if(ezsignsignature_request_compound->i_ezsignsignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureHeight", ezsignsignature_request_compound->i_ezsignsignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->i_ezsignsignature_step
    if (!ezsignsignature_request_compound->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", ezsignsignature_request_compound->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->e_ezsignsignature_type
    if (ezmax_api_definition__full_field_e_ezsignsignature_type__NULL == ezsignsignature_request_compound->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_request_compound->fki_ezsigndocument_id
    if (!ezsignsignature_request_compound->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignsignature_request_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->t_ezsignsignature_tooltip
    if(ezsignsignature_request_compound->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", ezsignsignature_request_compound->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_tooltipposition
    if(ezsignsignature_request_compound->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_font
    if(ezsignsignature_request_compound->e_ezsignsignature_font != ezmax_api_definition__full_field_e_ezsignsignature_font__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id_validation
    if(ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->b_ezsignsignature_handwritten
    if(ezsignsignature_request_compound->b_ezsignsignature_handwritten) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureHandwritten", ezsignsignature_request_compound->b_ezsignsignature_handwritten) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound->b_ezsignsignature_reason
    if(ezsignsignature_request_compound->b_ezsignsignature_reason) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureReason", ezsignsignature_request_compound->b_ezsignsignature_reason) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound->b_ezsignsignature_required
    if(ezsignsignature_request_compound->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", ezsignsignature_request_compound->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_attachmentnamesource
    if(ezsignsignature_request_compound->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription
    if(ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_consultationtrigger
    if(ezsignsignature_request_compound->e_ezsignsignature_consultationtrigger != ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__NULL) {
    cJSON *e_ezsignsignature_consultationtrigger_local_JSON = field_e_ezsignsignature_consultationtrigger_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_consultationtrigger);
    if(e_ezsignsignature_consultationtrigger_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureConsultationtrigger", e_ezsignsignature_consultationtrigger_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->i_ezsignsignature_validationstep
    if(ezsignsignature_request_compound->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", ezsignsignature_request_compound->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->i_ezsignsignature_maxlength
    if(ezsignsignature_request_compound->i_ezsignsignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureMaxlength", ezsignsignature_request_compound->i_ezsignsignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound->s_ezsignsignature_defaultvalue
    if(ezsignsignature_request_compound->s_ezsignsignature_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureDefaultvalue", ezsignsignature_request_compound->s_ezsignsignature_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_textvalidation
    if(ezsignsignature_request_compound->e_ezsignsignature_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsignsignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_textvalidation);
    if(e_ezsignsignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTextvalidation", e_ezsignsignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage
    if(ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureTextvalidationcustommessage", ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound->s_ezsignsignature_regexp
    if(ezsignsignature_request_compound->s_ezsignsignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureRegexp", ezsignsignature_request_compound->s_ezsignsignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound->e_ezsignsignature_dependencyrequirement
    if(ezsignsignature_request_compound->e_ezsignsignature_dependencyrequirement != ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__NULL) {
    cJSON *e_ezsignsignature_dependencyrequirement_local_JSON = field_e_ezsignsignature_dependencyrequirement_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_dependencyrequirement);
    if(e_ezsignsignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureDependencyrequirement", e_ezsignsignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound->b_ezsignsignature_customdate
    if(ezsignsignature_request_compound->b_ezsignsignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", ezsignsignature_request_compound->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_request_compound_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
    }
    }
    }


    // ezsignsignature_request_compound->a_obj_ezsignelementdependency
    if(ezsignsignature_request_compound->a_obj_ezsignelementdependency) {
    cJSON *a_obj_ezsignelementdependency = cJSON_AddArrayToObject(item, "a_objEzsignelementdependency");
    if(a_obj_ezsignelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignelementdependencyListEntry;
    if (ezsignsignature_request_compound->a_obj_ezsignelementdependency) {
    list_ForEach(a_obj_ezsignelementdependencyListEntry, ezsignsignature_request_compound->a_obj_ezsignelementdependency) {
    cJSON *itemLocal = ezsignelementdependency_request_compound_convertToJSON(a_obj_ezsignelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignelementdependency, itemLocal);
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

ezsignsignature_request_compound_t *ezsignsignature_request_compound_parseFromJSON(cJSON *ezsignsignature_request_compoundJSON){

    ezsignsignature_request_compound_t *ezsignsignature_request_compound_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_type
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_tooltipposition
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_font
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_attachmentnamesource
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_consultationtrigger
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement_local_nonprim = 0;

    // define the local list for ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate
    list_t *a_obj_ezsignsignaturecustomdateList = NULL;

    // define the local list for ezsignsignature_request_compound->a_obj_ezsignelementdependency
    list_t *a_obj_ezsignelementdependencyList = NULL;

    // ezsignsignature_request_compound->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "pkiEzsignsignatureID");
    if (cJSON_IsNull(pki_ezsignsignature_id)) {
        pki_ezsignsignature_id = NULL;
    }
    if (pki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "fkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id)) {
        fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureX");
    if (cJSON_IsNull(i_ezsignsignature_x)) {
        i_ezsignsignature_x = NULL;
    }
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureY");
    if (cJSON_IsNull(i_ezsignsignature_y)) {
        i_ezsignsignature_y = NULL;
    }
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_width
    cJSON *i_ezsignsignature_width = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureWidth");
    if (cJSON_IsNull(i_ezsignsignature_width)) {
        i_ezsignsignature_width = NULL;
    }
    if (i_ezsignsignature_width) { 
    if(!cJSON_IsNumber(i_ezsignsignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->i_ezsignsignature_height
    cJSON *i_ezsignsignature_height = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureHeight");
    if (cJSON_IsNull(i_ezsignsignature_height)) {
        i_ezsignsignature_height = NULL;
    }
    if (i_ezsignsignature_height) { 
    if(!cJSON_IsNumber(i_ezsignsignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureStep");
    if (cJSON_IsNull(i_ezsignsignature_step)) {
        i_ezsignsignature_step = NULL;
    }
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureType");
    if (cJSON_IsNull(e_ezsignsignature_type)) {
        e_ezsignsignature_type = NULL;
    }
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_request_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "tEzsignsignatureTooltip");
    if (cJSON_IsNull(t_ezsignsignature_tooltip)) {
        t_ezsignsignature_tooltip = NULL;
    }
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureTooltipposition");
    if (cJSON_IsNull(e_ezsignsignature_tooltipposition)) {
        e_ezsignsignature_tooltipposition = NULL;
    }
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_request_compound->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureFont");
    if (cJSON_IsNull(e_ezsignsignature_font)) {
        e_ezsignsignature_font = NULL;
    }
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id_validation)) {
        fki_ezsignfoldersignerassociation_id_validation = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->b_ezsignsignature_handwritten
    cJSON *b_ezsignsignature_handwritten = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "bEzsignsignatureHandwritten");
    if (cJSON_IsNull(b_ezsignsignature_handwritten)) {
        b_ezsignsignature_handwritten = NULL;
    }
    if (b_ezsignsignature_handwritten) { 
    if(!cJSON_IsBool(b_ezsignsignature_handwritten))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound->b_ezsignsignature_reason
    cJSON *b_ezsignsignature_reason = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "bEzsignsignatureReason");
    if (cJSON_IsNull(b_ezsignsignature_reason)) {
        b_ezsignsignature_reason = NULL;
    }
    if (b_ezsignsignature_reason) { 
    if(!cJSON_IsBool(b_ezsignsignature_reason))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "bEzsignsignatureRequired");
    if (cJSON_IsNull(b_ezsignsignature_required)) {
        b_ezsignsignature_required = NULL;
    }
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureAttachmentnamesource");
    if (cJSON_IsNull(e_ezsignsignature_attachmentnamesource)) {
        e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_request_compound->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "sEzsignsignatureAttachmentdescription");
    if (cJSON_IsNull(s_ezsignsignature_attachmentdescription)) {
        s_ezsignsignature_attachmentdescription = NULL;
    }
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound->e_ezsignsignature_consultationtrigger
    cJSON *e_ezsignsignature_consultationtrigger = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureConsultationtrigger");
    if (cJSON_IsNull(e_ezsignsignature_consultationtrigger)) {
        e_ezsignsignature_consultationtrigger = NULL;
    }
    if (e_ezsignsignature_consultationtrigger) { 
    e_ezsignsignature_consultationtrigger_local_nonprim = field_e_ezsignsignature_consultationtrigger_parseFromJSON(e_ezsignsignature_consultationtrigger); //custom
    }

    // ezsignsignature_request_compound->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureValidationstep");
    if (cJSON_IsNull(i_ezsignsignature_validationstep)) {
        i_ezsignsignature_validationstep = NULL;
    }
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->i_ezsignsignature_maxlength
    cJSON *i_ezsignsignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureMaxlength");
    if (cJSON_IsNull(i_ezsignsignature_maxlength)) {
        i_ezsignsignature_maxlength = NULL;
    }
    if (i_ezsignsignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignsignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request_compound->s_ezsignsignature_defaultvalue
    cJSON *s_ezsignsignature_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "sEzsignsignatureDefaultvalue");
    if (cJSON_IsNull(s_ezsignsignature_defaultvalue)) {
        s_ezsignsignature_defaultvalue = NULL;
    }
    if (s_ezsignsignature_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignsignature_defaultvalue) && !cJSON_IsNull(s_ezsignsignature_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound->e_ezsignsignature_textvalidation
    cJSON *e_ezsignsignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureTextvalidation");
    if (cJSON_IsNull(e_ezsignsignature_textvalidation)) {
        e_ezsignsignature_textvalidation = NULL;
    }
    if (e_ezsignsignature_textvalidation) { 
    e_ezsignsignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignsignature_textvalidation); //custom
    }

    // ezsignsignature_request_compound->s_ezsignsignature_textvalidationcustommessage
    cJSON *s_ezsignsignature_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "sEzsignsignatureTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage)) {
        s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (s_ezsignsignature_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsignsignature_textvalidationcustommessage) && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound->s_ezsignsignature_regexp
    cJSON *s_ezsignsignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "sEzsignsignatureRegexp");
    if (cJSON_IsNull(s_ezsignsignature_regexp)) {
        s_ezsignsignature_regexp = NULL;
    }
    if (s_ezsignsignature_regexp) { 
    if(!cJSON_IsString(s_ezsignsignature_regexp) && !cJSON_IsNull(s_ezsignsignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound->e_ezsignsignature_dependencyrequirement
    cJSON *e_ezsignsignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureDependencyrequirement");
    if (cJSON_IsNull(e_ezsignsignature_dependencyrequirement)) {
        e_ezsignsignature_dependencyrequirement = NULL;
    }
    if (e_ezsignsignature_dependencyrequirement) { 
    e_ezsignsignature_dependencyrequirement_local_nonprim = field_e_ezsignsignature_dependencyrequirement_parseFromJSON(e_ezsignsignature_dependencyrequirement); //custom
    }

    // ezsignsignature_request_compound->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "bEzsignsignatureCustomdate");
    if (cJSON_IsNull(b_ezsignsignature_customdate)) {
        b_ezsignsignature_customdate = NULL;
    }
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "a_objEzsignsignaturecustomdate");
    if (cJSON_IsNull(a_obj_ezsignsignaturecustomdate)) {
        a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_request_compound_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_request_compound_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }

    // ezsignsignature_request_compound->a_obj_ezsignelementdependency
    cJSON *a_obj_ezsignelementdependency = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "a_objEzsignelementdependency");
    if (cJSON_IsNull(a_obj_ezsignelementdependency)) {
        a_obj_ezsignelementdependency = NULL;
    }
    if (a_obj_ezsignelementdependency) { 
    cJSON *a_obj_ezsignelementdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignelementdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignelementdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignelementdependency_local_nonprimitive,a_obj_ezsignelementdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsignelementdependency_local_nonprimitive)){
            goto end;
        }
        ezsignelementdependency_request_compound_t *a_obj_ezsignelementdependencyItem = ezsignelementdependency_request_compound_parseFromJSON(a_obj_ezsignelementdependency_local_nonprimitive);

        list_addElement(a_obj_ezsignelementdependencyList, a_obj_ezsignelementdependencyItem);
    }
    }


    ezsignsignature_request_compound_local_var = ezsignsignature_request_compound_create_internal (
        pki_ezsignsignature_id ? pki_ezsignsignature_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_width ? i_ezsignsignature_width->valuedouble : 0,
        i_ezsignsignature_height ? i_ezsignsignature_height->valuedouble : 0,
        i_ezsignsignature_step->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        fki_ezsigndocument_id->valuedouble,
        t_ezsignsignature_tooltip && !cJSON_IsNull(t_ezsignsignature_tooltip) ? strdup(t_ezsignsignature_tooltip->valuestring) : NULL,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : 0,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : 0,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        b_ezsignsignature_handwritten ? b_ezsignsignature_handwritten->valueint : 0,
        b_ezsignsignature_reason ? b_ezsignsignature_reason->valueint : 0,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : 0,
        s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription) ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        e_ezsignsignature_consultationtrigger ? e_ezsignsignature_consultationtrigger_local_nonprim : 0,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0,
        i_ezsignsignature_maxlength ? i_ezsignsignature_maxlength->valuedouble : 0,
        s_ezsignsignature_defaultvalue && !cJSON_IsNull(s_ezsignsignature_defaultvalue) ? strdup(s_ezsignsignature_defaultvalue->valuestring) : NULL,
        e_ezsignsignature_textvalidation ? e_ezsignsignature_textvalidation_local_nonprim : 0,
        s_ezsignsignature_textvalidationcustommessage && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage) ? strdup(s_ezsignsignature_textvalidationcustommessage->valuestring) : NULL,
        s_ezsignsignature_regexp && !cJSON_IsNull(s_ezsignsignature_regexp) ? strdup(s_ezsignsignature_regexp->valuestring) : NULL,
        e_ezsignsignature_dependencyrequirement ? e_ezsignsignature_dependencyrequirement_local_nonprim : 0,
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL,
        a_obj_ezsignelementdependency ? a_obj_ezsignelementdependencyList : NULL
        );

    return ezsignsignature_request_compound_local_var;
end:
    if (e_ezsignsignature_type_local_nonprim) {
        e_ezsignsignature_type_local_nonprim = 0;
    }
    if (e_ezsignsignature_tooltipposition_local_nonprim) {
        e_ezsignsignature_tooltipposition_local_nonprim = 0;
    }
    if (e_ezsignsignature_font_local_nonprim) {
        e_ezsignsignature_font_local_nonprim = 0;
    }
    if (e_ezsignsignature_attachmentnamesource_local_nonprim) {
        e_ezsignsignature_attachmentnamesource_local_nonprim = 0;
    }
    if (e_ezsignsignature_consultationtrigger_local_nonprim) {
        e_ezsignsignature_consultationtrigger_local_nonprim = 0;
    }
    if (e_ezsignsignature_textvalidation_local_nonprim) {
        e_ezsignsignature_textvalidation_local_nonprim = 0;
    }
    if (e_ezsignsignature_dependencyrequirement_local_nonprim) {
        e_ezsignsignature_dependencyrequirement_local_nonprim = 0;
    }
    if (a_obj_ezsignsignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturecustomdateList) {
            ezsignsignaturecustomdate_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturecustomdateList);
        a_obj_ezsignsignaturecustomdateList = NULL;
    }
    if (a_obj_ezsignelementdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignelementdependencyList) {
            ezsignelementdependency_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignelementdependencyList);
        a_obj_ezsignelementdependencyList = NULL;
    }
    return NULL;

}
