#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_response.h"



static ezsignsignature_response_t *ezsignsignature_response_create_internal(
    int pki_ezsignsignature_id,
    int fki_ezsigndocument_id,
    int fki_ezsignfoldersignerassociation_id,
    int fki_ezsignsigningreason_id,
    int fki_font_id,
    char *s_ezsignsigningreason_description_x,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_height,
    int i_ezsignsignature_width,
    int i_ezsignsignature_step,
    int i_ezsignsignature_stepadjusted,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int i_ezsignsignature_validationstep,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    int fki_ezsignfoldersignerassociation_id_validation,
    char *dt_ezsignsignature_date,
    int i_ezsignsignatureattachment_count,
    char *s_ezsignsignature_description,
    int i_ezsignsignature_maxlength,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    char *s_ezsignsignature_defaultvalue,
    char *s_ezsignsignature_regexp,
    custom_contact_name_response_t *obj_contact_name,
    custom_contact_name_response_t *obj_contact_name_delegation,
    signature_response_compound_t *obj_signature
    ) {
    ezsignsignature_response_t *ezsignsignature_response_local_var = malloc(sizeof(ezsignsignature_response_t));
    if (!ezsignsignature_response_local_var) {
        return NULL;
    }
    ezsignsignature_response_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_response_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_response_local_var->fki_ezsignsigningreason_id = fki_ezsignsigningreason_id;
    ezsignsignature_response_local_var->fki_font_id = fki_font_id;
    ezsignsignature_response_local_var->s_ezsignsigningreason_description_x = s_ezsignsigningreason_description_x;
    ezsignsignature_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_response_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_response_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_response_local_var->i_ezsignsignature_height = i_ezsignsignature_height;
    ezsignsignature_response_local_var->i_ezsignsignature_width = i_ezsignsignature_width;
    ezsignsignature_response_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_response_local_var->i_ezsignsignature_stepadjusted = i_ezsignsignature_stepadjusted;
    ezsignsignature_response_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_response_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_response_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_response_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_response_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    ezsignsignature_response_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_response_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_response_local_var->e_ezsignsignature_consultationtrigger = e_ezsignsignature_consultationtrigger;
    ezsignsignature_response_local_var->b_ezsignsignature_handwritten = b_ezsignsignature_handwritten;
    ezsignsignature_response_local_var->b_ezsignsignature_reason = b_ezsignsignature_reason;
    ezsignsignature_response_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_response_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_response_local_var->dt_ezsignsignature_date = dt_ezsignsignature_date;
    ezsignsignature_response_local_var->i_ezsignsignatureattachment_count = i_ezsignsignatureattachment_count;
    ezsignsignature_response_local_var->s_ezsignsignature_description = s_ezsignsignature_description;
    ezsignsignature_response_local_var->i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    ezsignsignature_response_local_var->e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    ezsignsignature_response_local_var->s_ezsignsignature_textvalidationcustommessage = s_ezsignsignature_textvalidationcustommessage;
    ezsignsignature_response_local_var->e_ezsignsignature_dependencyrequirement = e_ezsignsignature_dependencyrequirement;
    ezsignsignature_response_local_var->s_ezsignsignature_defaultvalue = s_ezsignsignature_defaultvalue;
    ezsignsignature_response_local_var->s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    ezsignsignature_response_local_var->obj_contact_name = obj_contact_name;
    ezsignsignature_response_local_var->obj_contact_name_delegation = obj_contact_name_delegation;
    ezsignsignature_response_local_var->obj_signature = obj_signature;

    ezsignsignature_response_local_var->_library_owned = 1;
    return ezsignsignature_response_local_var;
}

__attribute__((deprecated)) ezsignsignature_response_t *ezsignsignature_response_create(
    int pki_ezsignsignature_id,
    int fki_ezsigndocument_id,
    int fki_ezsignfoldersignerassociation_id,
    int fki_ezsignsigningreason_id,
    int fki_font_id,
    char *s_ezsignsigningreason_description_x,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_height,
    int i_ezsignsignature_width,
    int i_ezsignsignature_step,
    int i_ezsignsignature_stepadjusted,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int i_ezsignsignature_validationstep,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    int fki_ezsignfoldersignerassociation_id_validation,
    char *dt_ezsignsignature_date,
    int i_ezsignsignatureattachment_count,
    char *s_ezsignsignature_description,
    int i_ezsignsignature_maxlength,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    char *s_ezsignsignature_defaultvalue,
    char *s_ezsignsignature_regexp,
    custom_contact_name_response_t *obj_contact_name,
    custom_contact_name_response_t *obj_contact_name_delegation,
    signature_response_compound_t *obj_signature
    ) {
    return ezsignsignature_response_create_internal (
        pki_ezsignsignature_id,
        fki_ezsigndocument_id,
        fki_ezsignfoldersignerassociation_id,
        fki_ezsignsigningreason_id,
        fki_font_id,
        s_ezsignsigningreason_description_x,
        i_ezsignpage_pagenumber,
        i_ezsignsignature_x,
        i_ezsignsignature_y,
        i_ezsignsignature_height,
        i_ezsignsignature_width,
        i_ezsignsignature_step,
        i_ezsignsignature_stepadjusted,
        e_ezsignsignature_type,
        t_ezsignsignature_tooltip,
        e_ezsignsignature_tooltipposition,
        e_ezsignsignature_font,
        i_ezsignsignature_validationstep,
        s_ezsignsignature_attachmentdescription,
        e_ezsignsignature_attachmentnamesource,
        e_ezsignsignature_consultationtrigger,
        b_ezsignsignature_handwritten,
        b_ezsignsignature_reason,
        b_ezsignsignature_required,
        fki_ezsignfoldersignerassociation_id_validation,
        dt_ezsignsignature_date,
        i_ezsignsignatureattachment_count,
        s_ezsignsignature_description,
        i_ezsignsignature_maxlength,
        e_ezsignsignature_textvalidation,
        s_ezsignsignature_textvalidationcustommessage,
        e_ezsignsignature_dependencyrequirement,
        s_ezsignsignature_defaultvalue,
        s_ezsignsignature_regexp,
        obj_contact_name,
        obj_contact_name_delegation,
        obj_signature
        );
}

void ezsignsignature_response_free(ezsignsignature_response_t *ezsignsignature_response) {
    if(NULL == ezsignsignature_response){
        return ;
    }
    if(ezsignsignature_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_response->s_ezsignsigningreason_description_x) {
        free(ezsignsignature_response->s_ezsignsigningreason_description_x);
        ezsignsignature_response->s_ezsignsigningreason_description_x = NULL;
    }
    if (ezsignsignature_response->t_ezsignsignature_tooltip) {
        free(ezsignsignature_response->t_ezsignsignature_tooltip);
        ezsignsignature_response->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_response->s_ezsignsignature_attachmentdescription);
        ezsignsignature_response->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (ezsignsignature_response->dt_ezsignsignature_date) {
        free(ezsignsignature_response->dt_ezsignsignature_date);
        ezsignsignature_response->dt_ezsignsignature_date = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_description) {
        free(ezsignsignature_response->s_ezsignsignature_description);
        ezsignsignature_response->s_ezsignsignature_description = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage) {
        free(ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage);
        ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_defaultvalue) {
        free(ezsignsignature_response->s_ezsignsignature_defaultvalue);
        ezsignsignature_response->s_ezsignsignature_defaultvalue = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_regexp) {
        free(ezsignsignature_response->s_ezsignsignature_regexp);
        ezsignsignature_response->s_ezsignsignature_regexp = NULL;
    }
    if (ezsignsignature_response->obj_contact_name) {
        custom_contact_name_response_free(ezsignsignature_response->obj_contact_name);
        ezsignsignature_response->obj_contact_name = NULL;
    }
    if (ezsignsignature_response->obj_contact_name_delegation) {
        custom_contact_name_response_free(ezsignsignature_response->obj_contact_name_delegation);
        ezsignsignature_response->obj_contact_name_delegation = NULL;
    }
    if (ezsignsignature_response->obj_signature) {
        signature_response_compound_free(ezsignsignature_response->obj_signature);
        ezsignsignature_response->obj_signature = NULL;
    }
    free(ezsignsignature_response);
}

cJSON *ezsignsignature_response_convertToJSON(ezsignsignature_response_t *ezsignsignature_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_response->pki_ezsignsignature_id
    if (!ezsignsignature_response->pki_ezsignsignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", ezsignsignature_response->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->fki_ezsigndocument_id
    if (!ezsignsignature_response->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignsignature_response->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_response->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignsignature_response->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->fki_ezsignsigningreason_id
    if(ezsignsignature_response->fki_ezsignsigningreason_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsigningreasonID", ezsignsignature_response->fki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->fki_font_id
    if(ezsignsignature_response->fki_font_id) {
    if(cJSON_AddNumberToObject(item, "fkiFontID", ezsignsignature_response->fki_font_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->s_ezsignsigningreason_description_x
    if(ezsignsignature_response->s_ezsignsigningreason_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsignsigningreasonDescriptionX", ezsignsignature_response->s_ezsignsigningreason_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->i_ezsignpage_pagenumber
    if (!ezsignsignature_response->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignsignature_response->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->i_ezsignsignature_x
    if (!ezsignsignature_response->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", ezsignsignature_response->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->i_ezsignsignature_y
    if (!ezsignsignature_response->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", ezsignsignature_response->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->i_ezsignsignature_height
    if(ezsignsignature_response->i_ezsignsignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureHeight", ezsignsignature_response->i_ezsignsignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->i_ezsignsignature_width
    if(ezsignsignature_response->i_ezsignsignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureWidth", ezsignsignature_response->i_ezsignsignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->i_ezsignsignature_step
    if (!ezsignsignature_response->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", ezsignsignature_response->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_response->i_ezsignsignature_stepadjusted
    if(ezsignsignature_response->i_ezsignsignature_stepadjusted) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStepadjusted", ezsignsignature_response->i_ezsignsignature_stepadjusted) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->e_ezsignsignature_type
    if (ezmax_api_definition__full_field_e_ezsignsignature_type__NULL == ezsignsignature_response->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_response->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_response->t_ezsignsignature_tooltip
    if(ezsignsignature_response->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", ezsignsignature_response->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->e_ezsignsignature_tooltipposition
    if(ezsignsignature_response->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(ezsignsignature_response->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->e_ezsignsignature_font
    if(ezsignsignature_response->e_ezsignsignature_font != ezmax_api_definition__full_field_e_ezsignsignature_font__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(ezsignsignature_response->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->i_ezsignsignature_validationstep
    if(ezsignsignature_response->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", ezsignsignature_response->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->s_ezsignsignature_attachmentdescription
    if(ezsignsignature_response->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", ezsignsignature_response->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->e_ezsignsignature_attachmentnamesource
    if(ezsignsignature_response->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_response->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->e_ezsignsignature_consultationtrigger
    if(ezsignsignature_response->e_ezsignsignature_consultationtrigger != ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__NULL) {
    cJSON *e_ezsignsignature_consultationtrigger_local_JSON = field_e_ezsignsignature_consultationtrigger_convertToJSON(ezsignsignature_response->e_ezsignsignature_consultationtrigger);
    if(e_ezsignsignature_consultationtrigger_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureConsultationtrigger", e_ezsignsignature_consultationtrigger_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->b_ezsignsignature_handwritten
    if(ezsignsignature_response->b_ezsignsignature_handwritten) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureHandwritten", ezsignsignature_response->b_ezsignsignature_handwritten) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_response->b_ezsignsignature_reason
    if(ezsignsignature_response->b_ezsignsignature_reason) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureReason", ezsignsignature_response->b_ezsignsignature_reason) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_response->b_ezsignsignature_required
    if(ezsignsignature_response->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", ezsignsignature_response->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id_validation
    if(ezsignsignature_response->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", ezsignsignature_response->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->dt_ezsignsignature_date
    if(ezsignsignature_response->dt_ezsignsignature_date) {
    if(cJSON_AddStringToObject(item, "dtEzsignsignatureDate", ezsignsignature_response->dt_ezsignsignature_date) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->i_ezsignsignatureattachment_count
    if(ezsignsignature_response->i_ezsignsignatureattachment_count) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureattachmentCount", ezsignsignature_response->i_ezsignsignatureattachment_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->s_ezsignsignature_description
    if(ezsignsignature_response->s_ezsignsignature_description) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureDescription", ezsignsignature_response->s_ezsignsignature_description) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->i_ezsignsignature_maxlength
    if(ezsignsignature_response->i_ezsignsignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureMaxlength", ezsignsignature_response->i_ezsignsignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_response->e_ezsignsignature_textvalidation
    if(ezsignsignature_response->e_ezsignsignature_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsignsignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsignsignature_response->e_ezsignsignature_textvalidation);
    if(e_ezsignsignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTextvalidation", e_ezsignsignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage
    if(ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureTextvalidationcustommessage", ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->e_ezsignsignature_dependencyrequirement
    if(ezsignsignature_response->e_ezsignsignature_dependencyrequirement != ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__NULL) {
    cJSON *e_ezsignsignature_dependencyrequirement_local_JSON = field_e_ezsignsignature_dependencyrequirement_convertToJSON(ezsignsignature_response->e_ezsignsignature_dependencyrequirement);
    if(e_ezsignsignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureDependencyrequirement", e_ezsignsignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_response->s_ezsignsignature_defaultvalue
    if(ezsignsignature_response->s_ezsignsignature_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureDefaultvalue", ezsignsignature_response->s_ezsignsignature_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->s_ezsignsignature_regexp
    if(ezsignsignature_response->s_ezsignsignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureRegexp", ezsignsignature_response->s_ezsignsignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_response->obj_contact_name
    if (!ezsignsignature_response->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezsignsignature_response->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignature_response->obj_contact_name_delegation
    if(ezsignsignature_response->obj_contact_name_delegation) {
    cJSON *obj_contact_name_delegation_local_JSON = custom_contact_name_response_convertToJSON(ezsignsignature_response->obj_contact_name_delegation);
    if(obj_contact_name_delegation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactNameDelegation", obj_contact_name_delegation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignsignature_response->obj_signature
    if(ezsignsignature_response->obj_signature) {
    cJSON *obj_signature_local_JSON = signature_response_compound_convertToJSON(ezsignsignature_response->obj_signature);
    if(obj_signature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSignature", obj_signature_local_JSON);
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

ezsignsignature_response_t *ezsignsignature_response_parseFromJSON(cJSON *ezsignsignature_responseJSON){

    ezsignsignature_response_t *ezsignsignature_response_local_var = NULL;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_type
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_tooltipposition
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_font
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_attachmentnamesource
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_consultationtrigger
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement_local_nonprim = 0;

    // define the local variable for ezsignsignature_response->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->obj_contact_name_delegation
    custom_contact_name_response_t *obj_contact_name_delegation_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->obj_signature
    signature_response_compound_t *obj_signature_local_nonprim = NULL;

    // ezsignsignature_response->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "pkiEzsignsignatureID");
    if (cJSON_IsNull(pki_ezsignsignature_id)) {
        pki_ezsignsignature_id = NULL;
    }
    if (!pki_ezsignsignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsigndocumentID");
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

    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsignfoldersignerassociationID");
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

    // ezsignsignature_response->fki_ezsignsigningreason_id
    cJSON *fki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsignsigningreasonID");
    if (cJSON_IsNull(fki_ezsignsigningreason_id)) {
        fki_ezsignsigningreason_id = NULL;
    }
    if (fki_ezsignsigningreason_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiFontID");
    if (cJSON_IsNull(fki_font_id)) {
        fki_font_id = NULL;
    }
    if (fki_font_id) { 
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->s_ezsignsigningreason_description_x
    cJSON *s_ezsignsigningreason_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsigningreasonDescriptionX");
    if (cJSON_IsNull(s_ezsignsigningreason_description_x)) {
        s_ezsignsigningreason_description_x = NULL;
    }
    if (s_ezsignsigningreason_description_x) { 
    if(!cJSON_IsString(s_ezsignsigningreason_description_x) && !cJSON_IsNull(s_ezsignsigningreason_description_x))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignpagePagenumber");
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

    // ezsignsignature_response->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureX");
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

    // ezsignsignature_response->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureY");
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

    // ezsignsignature_response->i_ezsignsignature_height
    cJSON *i_ezsignsignature_height = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureHeight");
    if (cJSON_IsNull(i_ezsignsignature_height)) {
        i_ezsignsignature_height = NULL;
    }
    if (i_ezsignsignature_height) { 
    if(!cJSON_IsNumber(i_ezsignsignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->i_ezsignsignature_width
    cJSON *i_ezsignsignature_width = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureWidth");
    if (cJSON_IsNull(i_ezsignsignature_width)) {
        i_ezsignsignature_width = NULL;
    }
    if (i_ezsignsignature_width) { 
    if(!cJSON_IsNumber(i_ezsignsignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureStep");
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

    // ezsignsignature_response->i_ezsignsignature_stepadjusted
    cJSON *i_ezsignsignature_stepadjusted = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureStepadjusted");
    if (cJSON_IsNull(i_ezsignsignature_stepadjusted)) {
        i_ezsignsignature_stepadjusted = NULL;
    }
    if (i_ezsignsignature_stepadjusted) { 
    if(!cJSON_IsNumber(i_ezsignsignature_stepadjusted))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureType");
    if (cJSON_IsNull(e_ezsignsignature_type)) {
        e_ezsignsignature_type = NULL;
    }
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_response->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "tEzsignsignatureTooltip");
    if (cJSON_IsNull(t_ezsignsignature_tooltip)) {
        t_ezsignsignature_tooltip = NULL;
    }
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureTooltipposition");
    if (cJSON_IsNull(e_ezsignsignature_tooltipposition)) {
        e_ezsignsignature_tooltipposition = NULL;
    }
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_response->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureFont");
    if (cJSON_IsNull(e_ezsignsignature_font)) {
        e_ezsignsignature_font = NULL;
    }
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_response->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureValidationstep");
    if (cJSON_IsNull(i_ezsignsignature_validationstep)) {
        i_ezsignsignature_validationstep = NULL;
    }
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureAttachmentdescription");
    if (cJSON_IsNull(s_ezsignsignature_attachmentdescription)) {
        s_ezsignsignature_attachmentdescription = NULL;
    }
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureAttachmentnamesource");
    if (cJSON_IsNull(e_ezsignsignature_attachmentnamesource)) {
        e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_response->e_ezsignsignature_consultationtrigger
    cJSON *e_ezsignsignature_consultationtrigger = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureConsultationtrigger");
    if (cJSON_IsNull(e_ezsignsignature_consultationtrigger)) {
        e_ezsignsignature_consultationtrigger = NULL;
    }
    if (e_ezsignsignature_consultationtrigger) { 
    e_ezsignsignature_consultationtrigger_local_nonprim = field_e_ezsignsignature_consultationtrigger_parseFromJSON(e_ezsignsignature_consultationtrigger); //custom
    }

    // ezsignsignature_response->b_ezsignsignature_handwritten
    cJSON *b_ezsignsignature_handwritten = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "bEzsignsignatureHandwritten");
    if (cJSON_IsNull(b_ezsignsignature_handwritten)) {
        b_ezsignsignature_handwritten = NULL;
    }
    if (b_ezsignsignature_handwritten) { 
    if(!cJSON_IsBool(b_ezsignsignature_handwritten))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_response->b_ezsignsignature_reason
    cJSON *b_ezsignsignature_reason = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "bEzsignsignatureReason");
    if (cJSON_IsNull(b_ezsignsignature_reason)) {
        b_ezsignsignature_reason = NULL;
    }
    if (b_ezsignsignature_reason) { 
    if(!cJSON_IsBool(b_ezsignsignature_reason))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_response->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "bEzsignsignatureRequired");
    if (cJSON_IsNull(b_ezsignsignature_required)) {
        b_ezsignsignature_required = NULL;
    }
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id_validation)) {
        fki_ezsignfoldersignerassociation_id_validation = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->dt_ezsignsignature_date
    cJSON *dt_ezsignsignature_date = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "dtEzsignsignatureDate");
    if (cJSON_IsNull(dt_ezsignsignature_date)) {
        dt_ezsignsignature_date = NULL;
    }
    if (dt_ezsignsignature_date) { 
    if(!cJSON_IsString(dt_ezsignsignature_date) && !cJSON_IsNull(dt_ezsignsignature_date))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->i_ezsignsignatureattachment_count
    cJSON *i_ezsignsignatureattachment_count = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureattachmentCount");
    if (cJSON_IsNull(i_ezsignsignatureattachment_count)) {
        i_ezsignsignatureattachment_count = NULL;
    }
    if (i_ezsignsignatureattachment_count) { 
    if(!cJSON_IsNumber(i_ezsignsignatureattachment_count))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->s_ezsignsignature_description
    cJSON *s_ezsignsignature_description = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureDescription");
    if (cJSON_IsNull(s_ezsignsignature_description)) {
        s_ezsignsignature_description = NULL;
    }
    if (s_ezsignsignature_description) { 
    if(!cJSON_IsString(s_ezsignsignature_description) && !cJSON_IsNull(s_ezsignsignature_description))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->i_ezsignsignature_maxlength
    cJSON *i_ezsignsignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureMaxlength");
    if (cJSON_IsNull(i_ezsignsignature_maxlength)) {
        i_ezsignsignature_maxlength = NULL;
    }
    if (i_ezsignsignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignsignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->e_ezsignsignature_textvalidation
    cJSON *e_ezsignsignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureTextvalidation");
    if (cJSON_IsNull(e_ezsignsignature_textvalidation)) {
        e_ezsignsignature_textvalidation = NULL;
    }
    if (e_ezsignsignature_textvalidation) { 
    e_ezsignsignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignsignature_textvalidation); //custom
    }

    // ezsignsignature_response->s_ezsignsignature_textvalidationcustommessage
    cJSON *s_ezsignsignature_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage)) {
        s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (s_ezsignsignature_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsignsignature_textvalidationcustommessage) && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->e_ezsignsignature_dependencyrequirement
    cJSON *e_ezsignsignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureDependencyrequirement");
    if (cJSON_IsNull(e_ezsignsignature_dependencyrequirement)) {
        e_ezsignsignature_dependencyrequirement = NULL;
    }
    if (e_ezsignsignature_dependencyrequirement) { 
    e_ezsignsignature_dependencyrequirement_local_nonprim = field_e_ezsignsignature_dependencyrequirement_parseFromJSON(e_ezsignsignature_dependencyrequirement); //custom
    }

    // ezsignsignature_response->s_ezsignsignature_defaultvalue
    cJSON *s_ezsignsignature_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureDefaultvalue");
    if (cJSON_IsNull(s_ezsignsignature_defaultvalue)) {
        s_ezsignsignature_defaultvalue = NULL;
    }
    if (s_ezsignsignature_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignsignature_defaultvalue) && !cJSON_IsNull(s_ezsignsignature_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->s_ezsignsignature_regexp
    cJSON *s_ezsignsignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureRegexp");
    if (cJSON_IsNull(s_ezsignsignature_regexp)) {
        s_ezsignsignature_regexp = NULL;
    }
    if (s_ezsignsignature_regexp) { 
    if(!cJSON_IsString(s_ezsignsignature_regexp) && !cJSON_IsNull(s_ezsignsignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // ezsignsignature_response->obj_contact_name_delegation
    cJSON *obj_contact_name_delegation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "objContactNameDelegation");
    if (cJSON_IsNull(obj_contact_name_delegation)) {
        obj_contact_name_delegation = NULL;
    }
    if (obj_contact_name_delegation) { 
    obj_contact_name_delegation_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name_delegation); //nonprimitive
    }

    // ezsignsignature_response->obj_signature
    cJSON *obj_signature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "objSignature");
    if (cJSON_IsNull(obj_signature)) {
        obj_signature = NULL;
    }
    if (obj_signature) { 
    obj_signature_local_nonprim = signature_response_compound_parseFromJSON(obj_signature); //nonprimitive
    }


    ezsignsignature_response_local_var = ezsignsignature_response_create_internal (
        pki_ezsignsignature_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignsigningreason_id ? fki_ezsignsigningreason_id->valuedouble : 0,
        fki_font_id ? fki_font_id->valuedouble : 0,
        s_ezsignsigningreason_description_x && !cJSON_IsNull(s_ezsignsigningreason_description_x) ? strdup(s_ezsignsigningreason_description_x->valuestring) : NULL,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_height ? i_ezsignsignature_height->valuedouble : 0,
        i_ezsignsignature_width ? i_ezsignsignature_width->valuedouble : 0,
        i_ezsignsignature_step->valuedouble,
        i_ezsignsignature_stepadjusted ? i_ezsignsignature_stepadjusted->valuedouble : 0,
        e_ezsignsignature_type_local_nonprim,
        t_ezsignsignature_tooltip && !cJSON_IsNull(t_ezsignsignature_tooltip) ? strdup(t_ezsignsignature_tooltip->valuestring) : NULL,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : 0,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : 0,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0,
        s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription) ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : 0,
        e_ezsignsignature_consultationtrigger ? e_ezsignsignature_consultationtrigger_local_nonprim : 0,
        b_ezsignsignature_handwritten ? b_ezsignsignature_handwritten->valueint : 0,
        b_ezsignsignature_reason ? b_ezsignsignature_reason->valueint : 0,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        dt_ezsignsignature_date && !cJSON_IsNull(dt_ezsignsignature_date) ? strdup(dt_ezsignsignature_date->valuestring) : NULL,
        i_ezsignsignatureattachment_count ? i_ezsignsignatureattachment_count->valuedouble : 0,
        s_ezsignsignature_description && !cJSON_IsNull(s_ezsignsignature_description) ? strdup(s_ezsignsignature_description->valuestring) : NULL,
        i_ezsignsignature_maxlength ? i_ezsignsignature_maxlength->valuedouble : 0,
        e_ezsignsignature_textvalidation ? e_ezsignsignature_textvalidation_local_nonprim : 0,
        s_ezsignsignature_textvalidationcustommessage && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage) ? strdup(s_ezsignsignature_textvalidationcustommessage->valuestring) : NULL,
        e_ezsignsignature_dependencyrequirement ? e_ezsignsignature_dependencyrequirement_local_nonprim : 0,
        s_ezsignsignature_defaultvalue && !cJSON_IsNull(s_ezsignsignature_defaultvalue) ? strdup(s_ezsignsignature_defaultvalue->valuestring) : NULL,
        s_ezsignsignature_regexp && !cJSON_IsNull(s_ezsignsignature_regexp) ? strdup(s_ezsignsignature_regexp->valuestring) : NULL,
        obj_contact_name_local_nonprim,
        obj_contact_name_delegation ? obj_contact_name_delegation_local_nonprim : NULL,
        obj_signature ? obj_signature_local_nonprim : NULL
        );

    return ezsignsignature_response_local_var;
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
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    if (obj_contact_name_delegation_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_delegation_local_nonprim);
        obj_contact_name_delegation_local_nonprim = NULL;
    }
    if (obj_signature_local_nonprim) {
        signature_response_compound_free(obj_signature_local_nonprim);
        obj_signature_local_nonprim = NULL;
    }
    return NULL;

}
