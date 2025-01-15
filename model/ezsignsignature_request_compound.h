/*
 * ezsignsignature_request_compound.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef _ezsignsignature_request_compound_H_
#define _ezsignsignature_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_compound_t ezsignsignature_request_compound_t;

#include "enum_textvalidation.h"
#include "ezsignelementdependency_request.h"
#include "ezsignsignaturecustomdate_request.h"
#include "field_e_ezsignsignature_attachmentnamesource.h"
#include "field_e_ezsignsignature_consultationtrigger.h"
#include "field_e_ezsignsignature_dependencyrequirement.h"
#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__Acknowledgement, ezmax_api_definition__full_ezsignsignature_request_compound__City, ezmax_api_definition__full_ezsignsignature_request_compound__Handwritten, ezmax_api_definition__full_ezsignsignature_request_compound__Initials, ezmax_api_definition__full_ezsignsignature_request_compound__Name, ezmax_api_definition__full_ezsignsignature_request_compound__NameReason, ezmax_api_definition__full_ezsignsignature_request_compound__Attachments, ezmax_api_definition__full_ezsignsignature_request_compound__AttachmentsConfirmation, ezmax_api_definition__full_ezsignsignature_request_compound__FieldText, ezmax_api_definition__full_ezsignsignature_request_compound__FieldTextarea, ezmax_api_definition__full_ezsignsignature_request_compound__Consultation, ezmax_api_definition__full_ezsignsignature_request_compound__Signature } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_type);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__TopLeft, ezmax_api_definition__full_ezsignsignature_request_compound__TopCenter, ezmax_api_definition__full_ezsignsignature_request_compound__TopRight, ezmax_api_definition__full_ezsignsignature_request_compound__MiddleLeft, ezmax_api_definition__full_ezsignsignature_request_compound__MiddleRight, ezmax_api_definition__full_ezsignsignature_request_compound__BottomLeft, ezmax_api_definition__full_ezsignsignature_request_compound__BottomCenter, ezmax_api_definition__full_ezsignsignature_request_compound__BottomRight } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_tooltipposition);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_tooltipposition_FromString(char* e_ezsignsignature_tooltipposition);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__Normal, ezmax_api_definition__full_ezsignsignature_request_compound__Cursive } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_font_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_font);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_font_FromString(char* e_ezsignsignature_font);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__Description, ezmax_api_definition__full_ezsignsignature_request_compound__Customer, ezmax_api_definition__full_ezsignsignature_request_compound__DescriptionCustomer } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_attachmentnamesource);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_attachmentnamesource_FromString(char* e_ezsignsignature_attachmentnamesource);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__Automatic, ezmax_api_definition__full_ezsignsignature_request_compound__Manual } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_consultationtrigger_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_consultationtrigger);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_consultationtrigger_FromString(char* e_ezsignsignature_consultationtrigger);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__None, ezmax_api_definition__full_ezsignsignature_request_compound__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsignsignature_request_compound__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsignsignature_request_compound__Date (MM/DD/YY), ezmax_api_definition__full_ezsignsignature_request_compound__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsignsignature_request_compound__Date (DD/MM/YY), ezmax_api_definition__full_ezsignsignature_request_compound__Email, ezmax_api_definition__full_ezsignsignature_request_compound__Letters, ezmax_api_definition__full_ezsignsignature_request_compound__Numbers, ezmax_api_definition__full_ezsignsignature_request_compound__Zip, ezmax_api_definition__full_ezsignsignature_request_compound__Zip+4, ezmax_api_definition__full_ezsignsignature_request_compound__PostalCode, ezmax_api_definition__full_ezsignsignature_request_compound__Custom } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_textvalidation_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_textvalidation);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_textvalidation_FromString(char* e_ezsignsignature_textvalidation);

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__AllOf, ezmax_api_definition__full_ezsignsignature_request_compound__AnyOf } ezmax_api_definition__full_ezsignsignature_request_compound__e;

char* ezsignsignature_request_compound_e_ezsignsignature_dependencyrequirement_ToString(ezmax_api_definition__full_ezsignsignature_request_compound__e e_ezsignsignature_dependencyrequirement);

ezmax_api_definition__full_ezsignsignature_request_compound__e ezsignsignature_request_compound_e_ezsignsignature_dependencyrequirement_FromString(char* e_ezsignsignature_dependencyrequirement);



typedef struct ezsignsignature_request_compound_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_width; //numeric
    int i_ezsignsignature_height; //numeric
    int i_ezsignsignature_step; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    int fki_ezsigndocument_id; //numeric
    char *t_ezsignsignature_tooltip; // string
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition; // custom
    field_e_ezsignsignature_font_t *e_ezsignsignature_font; // custom
    int fki_ezsignfoldersignerassociation_id_validation; //numeric
    int b_ezsignsignature_handwritten; //boolean
    int b_ezsignsignature_reason; //boolean
    int b_ezsignsignature_required; //boolean
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource; // custom
    char *s_ezsignsignature_attachmentdescription; // string
    field_e_ezsignsignature_consultationtrigger_t *e_ezsignsignature_consultationtrigger; // custom
    int i_ezsignsignature_validationstep; //numeric
    int i_ezsignsignature_maxlength; //numeric
    char *s_ezsignsignature_defaultvalue; // string
    enum_textvalidation_t *e_ezsignsignature_textvalidation; // custom
    char *s_ezsignsignature_textvalidationcustommessage; // string
    char *s_ezsignsignature_regexp; // string
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement; // custom
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container
    list_t *a_obj_ezsignelementdependency; //nonprimitive container

} ezsignsignature_request_compound_t;

ezsignsignature_request_compound_t *ezsignsignature_request_compound_create(
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
    int b_ezsignsignature_handwritten,
    int b_ezsignsignature_reason,
    int b_ezsignsignature_required,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    field_e_ezsignsignature_consultationtrigger_t *e_ezsignsignature_consultationtrigger,
    int i_ezsignsignature_validationstep,
    int i_ezsignsignature_maxlength,
    char *s_ezsignsignature_defaultvalue,
    enum_textvalidation_t *e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    char *s_ezsignsignature_regexp,
    field_e_ezsignsignature_dependencyrequirement_t *e_ezsignsignature_dependencyrequirement,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency
);

void ezsignsignature_request_compound_free(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

ezsignsignature_request_compound_t *ezsignsignature_request_compound_parseFromJSON(cJSON *ezsignsignature_request_compoundJSON);

cJSON *ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

#endif /* _ezsignsignature_request_compound_H_ */

