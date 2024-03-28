#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignsignature_create_ezsignelements_positioned_by_word_request.h"


char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_type_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_type) {
    char* e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    return e_ezsignsignature_typeArray[e_ezsignsignature_type];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type){
    int stringToReturn = 0;
    char *e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    size_t sizeofArray = sizeof(e_ezsignsignature_typeArray) / sizeof(e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_type, e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_tooltipposition) {
    char* e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    return e_ezsignsignature_tooltippositionArray[e_ezsignsignature_tooltipposition];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_tooltipposition_FromString(char* e_ezsignsignature_tooltipposition){
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
char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_font_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_font) {
    char* e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    return e_ezsignsignature_fontArray[e_ezsignsignature_font];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_font_FromString(char* e_ezsignsignature_font){
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
char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_attachmentnamesource_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_attachmentnamesource) {
    char* e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    return e_ezsignsignature_attachmentnamesourceArray[e_ezsignsignature_attachmentnamesource];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_attachmentnamesource_FromString(char* e_ezsignsignature_attachmentnamesource){
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
char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_textvalidation_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_textvalidation) {
    char* e_ezsignsignature_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    return e_ezsignsignature_textvalidationArray[e_ezsignsignature_textvalidation];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_textvalidation_FromString(char* e_ezsignsignature_textvalidation){
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
char* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_dependencyrequirement_ToString(ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e e_ezsignsignature_dependencyrequirement) {
    char* e_ezsignsignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    return e_ezsignsignature_dependencyrequirementArray[e_ezsignsignature_dependencyrequirement];
}

ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__e custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_e_ezsignsignature_dependencyrequirement_FromString(char* e_ezsignsignature_dependencyrequirement){
    int stringToReturn = 0;
    char *e_ezsignsignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(e_ezsignsignature_dependencyrequirementArray) / sizeof(e_ezsignsignature_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_dependencyrequirement, e_ezsignsignature_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_create(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_width,
    int i_ezsignsignature_height,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int fki_ezsignfoldersignerassociation_id_validation,
    int b_ezsignsignature_required,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    int i_ezsignsignature_validationstep,
    int i_ezsignsignature_maxlength,
    enum_textvalidation_t *e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_regexp,
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency,
    custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword
    ) {
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var = malloc(sizeof(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t));
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var) {
        return NULL;
    }
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_width = i_ezsignsignature_width;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_height = i_ezsignsignature_height;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->e_ezsignsignature_dependencyrequirement = e_ezsignsignature_dependencyrequirement;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->a_obj_ezsignelementdependency = a_obj_ezsignelementdependency;
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var->obj_createezsignelementspositionedbyword = obj_createezsignelementspositionedbyword;

    return custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var;
}


void custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request) {
    if(NULL == custom_ezsignsignature_create_ezsignelements_positioned_by_word_request){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type) {
        field_e_ezsignsignature_type_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip) {
        free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition) {
        field_e_ezsignsignature_tooltipposition_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font) {
        field_e_ezsignsignature_font_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource) {
        field_e_ezsignsignature_attachmentnamesource_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription) {
        free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation) {
        enum_textvalidation_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp) {
        free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement) {
        field_e_ezsignsignature_dependencyrequirement_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_request_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency) {
        list_ForEach(listEntry, custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency) {
            ezsignelementdependency_request_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency = NULL;
    }
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword) {
        custom_create_ezsignelements_positioned_by_word_request_free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword);
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword = NULL;
    }
    free(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request);
}

cJSON *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->pki_ezsignsignature_id
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignpage_pagenumber
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_x
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_y
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_width
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureWidth", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_height
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureHeight", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_step
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type
    if (ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL == custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font != ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id_validation
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_required
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_validationstep
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_maxlength
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureMaxlength", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation != ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignsignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation);
    if(e_ezsignsignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTextvalidation", e_ezsignsignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureRegexp", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement != ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__NULL) {
    cJSON *e_ezsignsignature_dependencyrequirement_local_JSON = field_e_ezsignsignature_dependencyrequirement_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement);
    if(e_ezsignsignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureDependencyrequirement", e_ezsignsignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_customdate
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate) {
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_request_compound_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
    }
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency
    if(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency) {
    cJSON *a_obj_ezsignelementdependency = cJSON_AddArrayToObject(item, "a_objEzsignelementdependency");
    if(a_obj_ezsignelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignelementdependencyListEntry;
    if (custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency) {
    list_ForEach(a_obj_ezsignelementdependencyListEntry, custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency) {
    cJSON *itemLocal = ezsignelementdependency_request_compound_convertToJSON(a_obj_ezsignelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignelementdependency, itemLocal);
    }
    }
    }


    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    if (!custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword) {
        goto fail;
    }
    cJSON *obj_createezsignelementspositionedbyword_local_JSON = custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword);
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

custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_parseFromJSON(cJSON *custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON){

    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type
    field_e_ezsignsignature_type_t *e_ezsignsignature_type_local_nonprim = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font
    field_e_ezsignsignature_font_t *e_ezsignsignature_font_local_nonprim = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation
    enum_textvalidation_t *e_ezsignsignature_textvalidation_local_nonprim = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement_local_nonprim = NULL;

    // define the local list for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate
    list_t *a_obj_ezsignsignaturecustomdateList = NULL;

    // define the local list for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency
    list_t *a_obj_ezsignelementdependencyList = NULL;

    // define the local variable for custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword_local_nonprim = NULL;

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "pkiEzsignsignatureID");
    if (pki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureX");
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureY");
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_width
    cJSON *i_ezsignsignature_width = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureWidth");
    if (i_ezsignsignature_width) { 
    if(!cJSON_IsNumber(i_ezsignsignature_width))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_height
    cJSON *i_ezsignsignature_height = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureHeight");
    if (i_ezsignsignature_height) { 
    if(!cJSON_IsNumber(i_ezsignsignature_height))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureStep");
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureType");
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "tEzsignsignatureTooltip");
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureTooltipposition");
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureFont");
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "bEzsignsignatureRequired");
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureAttachmentnamesource");
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignsignatureAttachmentdescription");
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureValidationstep");
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->i_ezsignsignature_maxlength
    cJSON *i_ezsignsignature_maxlength = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "iEzsignsignatureMaxlength");
    if (i_ezsignsignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignsignature_maxlength))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_textvalidation
    cJSON *e_ezsignsignature_textvalidation = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureTextvalidation");
    if (e_ezsignsignature_textvalidation) { 
    e_ezsignsignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignsignature_textvalidation); //custom
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->s_ezsignsignature_regexp
    cJSON *s_ezsignsignature_regexp = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "sEzsignsignatureRegexp");
    if (s_ezsignsignature_regexp) { 
    if(!cJSON_IsString(s_ezsignsignature_regexp) && !cJSON_IsNull(s_ezsignsignature_regexp))
    {
    goto end; //String
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->e_ezsignsignature_dependencyrequirement
    cJSON *e_ezsignsignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "eEzsignsignatureDependencyrequirement");
    if (e_ezsignsignature_dependencyrequirement) { 
    e_ezsignsignature_dependencyrequirement_local_nonprim = field_e_ezsignsignature_dependencyrequirement_parseFromJSON(e_ezsignsignature_dependencyrequirement); //custom
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "bEzsignsignatureCustomdate");
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "a_objEzsignsignaturecustomdate");
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

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->a_obj_ezsignelementdependency
    cJSON *a_obj_ezsignelementdependency = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "a_objEzsignelementdependency");
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

    // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request->obj_createezsignelementspositionedbyword
    cJSON *obj_createezsignelementspositionedbyword = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignature_create_ezsignelements_positioned_by_word_requestJSON, "objCreateezsignelementspositionedbyword");
    if (!obj_createezsignelementspositionedbyword) {
        goto end;
    }

    
    obj_createezsignelementspositionedbyword_local_nonprim = custom_create_ezsignelements_positioned_by_word_request_parseFromJSON(obj_createezsignelementspositionedbyword); //nonprimitive


    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_create (
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
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : NULL,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : NULL,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : NULL,
        s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription) ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0,
        i_ezsignsignature_maxlength ? i_ezsignsignature_maxlength->valuedouble : 0,
        e_ezsignsignature_textvalidation ? e_ezsignsignature_textvalidation_local_nonprim : NULL,
        s_ezsignsignature_regexp && !cJSON_IsNull(s_ezsignsignature_regexp) ? strdup(s_ezsignsignature_regexp->valuestring) : NULL,
        e_ezsignsignature_dependencyrequirement ? e_ezsignsignature_dependencyrequirement_local_nonprim : NULL,
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL,
        a_obj_ezsignelementdependency ? a_obj_ezsignelementdependencyList : NULL,
        obj_createezsignelementspositionedbyword_local_nonprim
        );

    return custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_local_var;
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
    if (e_ezsignsignature_dependencyrequirement_local_nonprim) {
        field_e_ezsignsignature_dependencyrequirement_free(e_ezsignsignature_dependencyrequirement_local_nonprim);
        e_ezsignsignature_dependencyrequirement_local_nonprim = NULL;
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
    if (obj_createezsignelementspositionedbyword_local_nonprim) {
        custom_create_ezsignelements_positioned_by_word_request_free(obj_createezsignelementspositionedbyword_local_nonprim);
        obj_createezsignelementspositionedbyword_local_nonprim = NULL;
    }
    return NULL;

}
