/*
 * ezsignsignature_response_compound_v3.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef _ezsignsignature_response_compound_v3_H_
#define _ezsignsignature_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_response_compound_v3_t ezsignsignature_response_compound_v3_t;

#include "custom_contact_name_response.h"
#include "custom_creditcardtransaction_response.h"
#include "enum_textvalidation.h"
#include "ezsignelementdependency_response.h"
#include "ezsignsignaturecustomdate_response_v2.h"
#include "field_e_ezsignsignature_attachmentnamesource.h"
#include "field_e_ezsignsignature_consultationtrigger.h"
#include "field_e_ezsignsignature_dependencyrequirement.h"
#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"
#include "signature_response_compound.h"

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Acknowledgement, ezmax_api_definition__full_ezsignsignature_response_compound_v3__City, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Handwritten, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Initials, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Name, ezmax_api_definition__full_ezsignsignature_response_compound_v3__NameReason, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Attachments, ezmax_api_definition__full_ezsignsignature_response_compound_v3__AttachmentsConfirmation, ezmax_api_definition__full_ezsignsignature_response_compound_v3__FieldText, ezmax_api_definition__full_ezsignsignature_response_compound_v3__FieldTextarea, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Consultation, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Signature } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_type);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__TopLeft, ezmax_api_definition__full_ezsignsignature_response_compound_v3__TopCenter, ezmax_api_definition__full_ezsignsignature_response_compound_v3__TopRight, ezmax_api_definition__full_ezsignsignature_response_compound_v3__MiddleLeft, ezmax_api_definition__full_ezsignsignature_response_compound_v3__MiddleRight, ezmax_api_definition__full_ezsignsignature_response_compound_v3__BottomLeft, ezmax_api_definition__full_ezsignsignature_response_compound_v3__BottomCenter, ezmax_api_definition__full_ezsignsignature_response_compound_v3__BottomRight } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_tooltipposition);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_tooltipposition_FromString(char* e_ezsignsignature_tooltipposition);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Normal, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Cursive } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_font_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_font);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_font_FromString(char* e_ezsignsignature_font);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Description, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Customer, ezmax_api_definition__full_ezsignsignature_response_compound_v3__DescriptionCustomer } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_attachmentnamesource);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_attachmentnamesource_FromString(char* e_ezsignsignature_attachmentnamesource);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Automatic, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Manual } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_consultationtrigger_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_consultationtrigger);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_consultationtrigger_FromString(char* e_ezsignsignature_consultationtrigger);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__None, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsignsignature_response_compound_v3__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsignsignature_response_compound_v3__Date (MM/DD/YY), ezmax_api_definition__full_ezsignsignature_response_compound_v3__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsignsignature_response_compound_v3__Date (DD/MM/YY), ezmax_api_definition__full_ezsignsignature_response_compound_v3__Email, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Letters, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Numbers, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Zip, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Zip+4, ezmax_api_definition__full_ezsignsignature_response_compound_v3__PostalCode, ezmax_api_definition__full_ezsignsignature_response_compound_v3__Custom } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_textvalidation_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_textvalidation);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_textvalidation_FromString(char* e_ezsignsignature_textvalidation);

// Enum  for ezsignsignature_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignsignature_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignsignature_response_compound_v3__AllOf, ezmax_api_definition__full_ezsignsignature_response_compound_v3__AnyOf } ezmax_api_definition__full_ezsignsignature_response_compound_v3__e;

char* ezsignsignature_response_compound_v3_e_ezsignsignature_dependencyrequirement_ToString(ezmax_api_definition__full_ezsignsignature_response_compound_v3__e e_ezsignsignature_dependencyrequirement);

ezmax_api_definition__full_ezsignsignature_response_compound_v3__e ezsignsignature_response_compound_v3_e_ezsignsignature_dependencyrequirement_FromString(char* e_ezsignsignature_dependencyrequirement);



typedef struct ezsignsignature_response_compound_v3_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignsigningreason_id; //numeric
    int fki_font_id; //numeric
    char *s_ezsignsigningreason_description_x; // string
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_height; //numeric
    int i_ezsignsignature_width; //numeric
    int i_ezsignsignature_step; //numeric
    int i_ezsignsignature_stepadjusted; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    char *t_ezsignsignature_tooltip; // string
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition; // custom
    field_e_ezsignsignature_font_t *e_ezsignsignature_font; // custom
    int i_ezsignsignature_validationstep; //numeric
    char *s_ezsignsignature_attachmentdescription; // string
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource; // custom
    field_e_ezsignsignature_consultationtrigger_t *e_ezsignsignature_consultationtrigger; // custom
    int b_ezsignsignature_handwritten; //boolean
    int b_ezsignsignature_reason; //boolean
    int b_ezsignsignature_required; //boolean
    int fki_ezsignfoldersignerassociation_id_validation; //numeric
    char *dt_ezsignsignature_date; // string
    int i_ezsignsignatureattachment_count; //numeric
    char *s_ezsignsignature_description; // string
    int i_ezsignsignature_maxlength; //numeric
    enum_textvalidation_t *e_ezsignsignature_textvalidation; // custom
    char *s_ezsignsignature_textvalidationcustommessage; // string
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement; // custom
    char *s_ezsignsignature_defaultvalue; // string
    char *s_ezsignsignature_regexp; // string
    struct custom_contact_name_response_t *obj_contact_name; //model
    struct custom_contact_name_response_t *obj_contact_name_delegation; //model
    struct signature_response_compound_t *obj_signature; //model
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container
    struct custom_creditcardtransaction_response_t *obj_creditcardtransaction; //model
    list_t *a_obj_ezsignelementdependency; //nonprimitive container

} ezsignsignature_response_compound_v3_t;

ezsignsignature_response_compound_v3_t *ezsignsignature_response_compound_v3_create(
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
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int i_ezsignsignature_validationstep,
    char *s_ezsignsignature_attachmentdescription,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    field_e_ezsignsignature_consultationtrigger_t *e_ezsignsignature_consultationtrigger,
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    int fki_ezsignfoldersignerassociation_id_validation,
    char *dt_ezsignsignature_date,
    int i_ezsignsignatureattachment_count,
    char *s_ezsignsignature_description,
    int i_ezsignsignature_maxlength,
    enum_textvalidation_t *e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement,
    char *s_ezsignsignature_defaultvalue,
    char *s_ezsignsignature_regexp,
    custom_contact_name_response_t *obj_contact_name,
    custom_contact_name_response_t *obj_contact_name_delegation,
    signature_response_compound_t *obj_signature,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    custom_creditcardtransaction_response_t *obj_creditcardtransaction,
    list_t *a_obj_ezsignelementdependency
);

void ezsignsignature_response_compound_v3_free(ezsignsignature_response_compound_v3_t *ezsignsignature_response_compound_v3);

ezsignsignature_response_compound_v3_t *ezsignsignature_response_compound_v3_parseFromJSON(cJSON *ezsignsignature_response_compound_v3JSON);

cJSON *ezsignsignature_response_compound_v3_convertToJSON(ezsignsignature_response_compound_v3_t *ezsignsignature_response_compound_v3);

#endif /* _ezsignsignature_response_compound_v3_H_ */

