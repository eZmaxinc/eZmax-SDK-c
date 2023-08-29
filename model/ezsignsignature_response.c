#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_response.h"


char* e_ezsignsignature_typeezsignsignature_response_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_type) {
    char* e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea" };
	return e_ezsignsignature_typeArray[e_ezsignsignature_type];
}

ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_typeezsignsignature_response_FromString(char* e_ezsignsignature_type){
    int stringToReturn = 0;
    char *e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea" };
    size_t sizeofArray = sizeof(e_ezsignsignature_typeArray) / sizeof(e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_type, e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_tooltippositionezsignsignature_response_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_tooltipposition) {
    char* e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignsignature_tooltippositionArray[e_ezsignsignature_tooltipposition];
}

ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_tooltippositionezsignsignature_response_FromString(char* e_ezsignsignature_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsignsignature_tooltippositionArray) / sizeof(e_ezsignsignature_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_tooltipposition, e_ezsignsignature_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_fontezsignsignature_response_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_font) {
    char* e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
	return e_ezsignsignature_fontArray[e_ezsignsignature_font];
}

ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_fontezsignsignature_response_FromString(char* e_ezsignsignature_font){
    int stringToReturn = 0;
    char *e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    size_t sizeofArray = sizeof(e_ezsignsignature_fontArray) / sizeof(e_ezsignsignature_fontArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_font, e_ezsignsignature_fontArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_attachmentnamesourceezsignsignature_response_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_attachmentnamesource) {
    char* e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
	return e_ezsignsignature_attachmentnamesourceArray[e_ezsignsignature_attachmentnamesource];
}

ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_attachmentnamesourceezsignsignature_response_FromString(char* e_ezsignsignature_attachmentnamesource){
    int stringToReturn = 0;
    char *e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    size_t sizeofArray = sizeof(e_ezsignsignature_attachmentnamesourceArray) / sizeof(e_ezsignsignature_attachmentnamesourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_attachmentnamesource, e_ezsignsignature_attachmentnamesourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_textvalidationezsignsignature_response_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_textvalidation) {
    char* e_ezsignsignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
	return e_ezsignsignature_textvalidationArray[e_ezsignsignature_textvalidation];
}

ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_textvalidationezsignsignature_response_FromString(char* e_ezsignsignature_textvalidation){
    int stringToReturn = 0;
    char *e_ezsignsignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    size_t sizeofArray = sizeof(e_ezsignsignature_textvalidationArray) / sizeof(e_ezsignsignature_textvalidationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_textvalidation, e_ezsignsignature_textvalidationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsignature_response_t *ezsignsignature_response_create(
    int pki_ezsignsignature_id,
    int fki_ezsigndocument_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_height,
    int i_ezsignsignature_width,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int i_ezsignsignature_validationstep,
    char *s_ezsignsignature_attachmentdescription,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    int b_ezsignsignature_required,
    int fki_ezsignfoldersignerassociation_id_validation,
    char *dt_ezsignsignature_date,
    int i_ezsignsignatureattachment_count,
    char *s_ezsignsignature_description,
    int i_ezsignsignature_maxlength,
    enum_textvalidation_t *e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_regexp,
    custom_contact_name_response_t *obj_contact_name,
    signature_response_compound_t *obj_signature
    ) {
    ezsignsignature_response_t *ezsignsignature_response_local_var = malloc(sizeof(ezsignsignature_response_t));
    if (!ezsignsignature_response_local_var) {
        return NULL;
    }
    ezsignsignature_response_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_response_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_response_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_response_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_response_local_var->i_ezsignsignature_height = i_ezsignsignature_height;
    ezsignsignature_response_local_var->i_ezsignsignature_width = i_ezsignsignature_width;
    ezsignsignature_response_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_response_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_response_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_response_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_response_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_response_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    ezsignsignature_response_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_response_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_response_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_response_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_response_local_var->dt_ezsignsignature_date = dt_ezsignsignature_date;
    ezsignsignature_response_local_var->i_ezsignsignatureattachment_count = i_ezsignsignatureattachment_count;
    ezsignsignature_response_local_var->s_ezsignsignature_description = s_ezsignsignature_description;
    ezsignsignature_response_local_var->i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    ezsignsignature_response_local_var->e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    ezsignsignature_response_local_var->s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    ezsignsignature_response_local_var->obj_contact_name = obj_contact_name;
    ezsignsignature_response_local_var->obj_signature = obj_signature;

    return ezsignsignature_response_local_var;
}


void ezsignsignature_response_free(ezsignsignature_response_t *ezsignsignature_response) {
    if(NULL == ezsignsignature_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_response->e_ezsignsignature_type) {
        field_e_ezsignsignature_type_free(ezsignsignature_response->e_ezsignsignature_type);
        ezsignsignature_response->e_ezsignsignature_type = NULL;
    }
    if (ezsignsignature_response->t_ezsignsignature_tooltip) {
        free(ezsignsignature_response->t_ezsignsignature_tooltip);
        ezsignsignature_response->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_response->e_ezsignsignature_tooltipposition) {
        field_e_ezsignsignature_tooltipposition_free(ezsignsignature_response->e_ezsignsignature_tooltipposition);
        ezsignsignature_response->e_ezsignsignature_tooltipposition = NULL;
    }
    if (ezsignsignature_response->e_ezsignsignature_font) {
        field_e_ezsignsignature_font_free(ezsignsignature_response->e_ezsignsignature_font);
        ezsignsignature_response->e_ezsignsignature_font = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_response->s_ezsignsignature_attachmentdescription);
        ezsignsignature_response->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (ezsignsignature_response->e_ezsignsignature_attachmentnamesource) {
        field_e_ezsignsignature_attachmentnamesource_free(ezsignsignature_response->e_ezsignsignature_attachmentnamesource);
        ezsignsignature_response->e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (ezsignsignature_response->dt_ezsignsignature_date) {
        free(ezsignsignature_response->dt_ezsignsignature_date);
        ezsignsignature_response->dt_ezsignsignature_date = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_description) {
        free(ezsignsignature_response->s_ezsignsignature_description);
        ezsignsignature_response->s_ezsignsignature_description = NULL;
    }
    if (ezsignsignature_response->e_ezsignsignature_textvalidation) {
        enum_textvalidation_free(ezsignsignature_response->e_ezsignsignature_textvalidation);
        ezsignsignature_response->e_ezsignsignature_textvalidation = NULL;
    }
    if (ezsignsignature_response->s_ezsignsignature_regexp) {
        free(ezsignsignature_response->s_ezsignsignature_regexp);
        ezsignsignature_response->s_ezsignsignature_regexp = NULL;
    }
    if (ezsignsignature_response->obj_contact_name) {
        custom_contact_name_response_free(ezsignsignature_response->obj_contact_name);
        ezsignsignature_response->obj_contact_name = NULL;
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


    // ezsignsignature_response->e_ezsignsignature_type
    if (ezmax_api_definition__full_ezsignsignature_response__NULL == ezsignsignature_response->e_ezsignsignature_type) {
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
    if(ezsignsignature_response->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_ezsignsignature_response__NULL) {
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
    if(ezsignsignature_response->e_ezsignsignature_font != ezmax_api_definition__full_ezsignsignature_response__NULL) {
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
    if(ezsignsignature_response->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_ezsignsignature_response__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_response->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
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
    if(ezsignsignature_response->e_ezsignsignature_textvalidation != ezmax_api_definition__full_ezsignsignature_response__NULL) {
    cJSON *e_ezsignsignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsignsignature_response->e_ezsignsignature_textvalidation);
    if(e_ezsignsignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTextvalidation", e_ezsignsignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
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
    field_e_ezsignsignature_type_t *e_ezsignsignature_type_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_tooltipposition
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_font
    field_e_ezsignsignature_font_t *e_ezsignsignature_font_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_attachmentnamesource
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->e_ezsignsignature_textvalidation
    enum_textvalidation_t *e_ezsignsignature_textvalidation_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // define the local variable for ezsignsignature_response->obj_signature
    signature_response_compound_t *obj_signature_local_nonprim = NULL;

    // ezsignsignature_response->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "pkiEzsignsignatureID");
    if (!pki_ezsignsignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureX");
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureY");
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->i_ezsignsignature_height
    cJSON *i_ezsignsignature_height = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureHeight");
    if (i_ezsignsignature_height) { 
    if(!cJSON_IsNumber(i_ezsignsignature_height))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->i_ezsignsignature_width
    cJSON *i_ezsignsignature_width = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureWidth");
    if (i_ezsignsignature_width) { 
    if(!cJSON_IsNumber(i_ezsignsignature_width))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureStep");
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // ezsignsignature_response->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureType");
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_response->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "tEzsignsignatureTooltip");
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureTooltipposition");
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_response->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureFont");
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_response->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureValidationstep");
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureAttachmentdescription");
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureAttachmentnamesource");
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_response->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "bEzsignsignatureRequired");
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_response->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->dt_ezsignsignature_date
    cJSON *dt_ezsignsignature_date = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "dtEzsignsignatureDate");
    if (dt_ezsignsignature_date) { 
    if(!cJSON_IsString(dt_ezsignsignature_date) && !cJSON_IsNull(dt_ezsignsignature_date))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->i_ezsignsignatureattachment_count
    cJSON *i_ezsignsignatureattachment_count = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureattachmentCount");
    if (i_ezsignsignatureattachment_count) { 
    if(!cJSON_IsNumber(i_ezsignsignatureattachment_count))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->s_ezsignsignature_description
    cJSON *s_ezsignsignature_description = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureDescription");
    if (s_ezsignsignature_description) { 
    if(!cJSON_IsString(s_ezsignsignature_description) && !cJSON_IsNull(s_ezsignsignature_description))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->i_ezsignsignature_maxlength
    cJSON *i_ezsignsignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "iEzsignsignatureMaxlength");
    if (i_ezsignsignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignsignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_response->e_ezsignsignature_textvalidation
    cJSON *e_ezsignsignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "eEzsignsignatureTextvalidation");
    if (e_ezsignsignature_textvalidation) { 
    e_ezsignsignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignsignature_textvalidation); //custom
    }

    // ezsignsignature_response->s_ezsignsignature_regexp
    cJSON *s_ezsignsignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "sEzsignsignatureRegexp");
    if (s_ezsignsignature_regexp) { 
    if(!cJSON_IsString(s_ezsignsignature_regexp) && !cJSON_IsNull(s_ezsignsignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsignsignature_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "objContactName");
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // ezsignsignature_response->obj_signature
    cJSON *obj_signature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_responseJSON, "objSignature");
    if (obj_signature) { 
    obj_signature_local_nonprim = signature_response_compound_parseFromJSON(obj_signature); //nonprimitive
    }


    ezsignsignature_response_local_var = ezsignsignature_response_create (
        pki_ezsignsignature_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_height ? i_ezsignsignature_height->valuedouble : 0,
        i_ezsignsignature_width ? i_ezsignsignature_width->valuedouble : 0,
        i_ezsignsignature_step->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        t_ezsignsignature_tooltip && !cJSON_IsNull(t_ezsignsignature_tooltip) ? strdup(t_ezsignsignature_tooltip->valuestring) : NULL,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : NULL,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : NULL,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0,
        s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription) ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : NULL,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        dt_ezsignsignature_date && !cJSON_IsNull(dt_ezsignsignature_date) ? strdup(dt_ezsignsignature_date->valuestring) : NULL,
        i_ezsignsignatureattachment_count ? i_ezsignsignatureattachment_count->valuedouble : 0,
        s_ezsignsignature_description && !cJSON_IsNull(s_ezsignsignature_description) ? strdup(s_ezsignsignature_description->valuestring) : NULL,
        i_ezsignsignature_maxlength ? i_ezsignsignature_maxlength->valuedouble : 0,
        e_ezsignsignature_textvalidation ? e_ezsignsignature_textvalidation_local_nonprim : NULL,
        s_ezsignsignature_regexp && !cJSON_IsNull(s_ezsignsignature_regexp) ? strdup(s_ezsignsignature_regexp->valuestring) : NULL,
        obj_contact_name_local_nonprim,
        obj_signature ? obj_signature_local_nonprim : NULL
        );

    return ezsignsignature_response_local_var;
end:
    if (e_ezsignsignature_type_local_nonprim) {
        field_e_ezsignsignature_type_free(e_ezsignsignature_type_local_nonprim);
        e_ezsignsignature_type_local_nonprim = NULL;
    }
    if (e_ezsignsignature_tooltipposition_local_nonprim) {
        field_e_ezsignsignature_tooltipposition_free(e_ezsignsignature_tooltipposition_local_nonprim);
        e_ezsignsignature_tooltipposition_local_nonprim = NULL;
    }
    if (e_ezsignsignature_font_local_nonprim) {
        field_e_ezsignsignature_font_free(e_ezsignsignature_font_local_nonprim);
        e_ezsignsignature_font_local_nonprim = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource_local_nonprim) {
        field_e_ezsignsignature_attachmentnamesource_free(e_ezsignsignature_attachmentnamesource_local_nonprim);
        e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;
    }
    if (e_ezsignsignature_textvalidation_local_nonprim) {
        enum_textvalidation_free(e_ezsignsignature_textvalidation_local_nonprim);
        e_ezsignsignature_textvalidation_local_nonprim = NULL;
    }
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    if (obj_signature_local_nonprim) {
        signature_response_compound_free(obj_signature_local_nonprim);
        obj_signature_local_nonprim = NULL;
    }
    return NULL;

}
