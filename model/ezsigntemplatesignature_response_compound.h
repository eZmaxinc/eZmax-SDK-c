/*
 * ezsigntemplatesignature_response_compound.h
 *
 * A Ezsigntemplatesignature Object
 */

#ifndef _ezsigntemplatesignature_response_compound_H_
#define _ezsigntemplatesignature_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_response_compound_t ezsigntemplatesignature_response_compound_t;

#include "enum_textvalidation.h"
#include "ezsigntemplateelementdependency_response_compound.h"
#include "ezsigntemplatesignaturecustomdate_response_compound.h"
#include "field_e_ezsigntemplatesignature_attachmentnamesource.h"
#include "field_e_ezsigntemplatesignature_dependencyrequirement.h"
#include "field_e_ezsigntemplatesignature_font.h"
#include "field_e_ezsigntemplatesignature_tooltipposition.h"
#include "field_e_ezsigntemplatesignature_type.h"

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Acknowledgement, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__City, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Handwritten, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Initials, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Name, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Attachments, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__FieldText, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__FieldTextarea } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_type_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_type);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_type_FromString(char* e_ezsigntemplatesignature_type);

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__TopLeft, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__TopCenter, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__TopRight, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__MiddleLeft, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__MiddleRight, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__BottomLeft, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__BottomCenter, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__BottomRight } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_tooltipposition);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_tooltipposition_FromString(char* e_ezsigntemplatesignature_tooltipposition);

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Normal, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Cursive } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_font_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_font);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_font_FromString(char* e_ezsigntemplatesignature_font);

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Description, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Customer, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__DescriptionCustomer } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_attachmentnamesource);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* e_ezsigntemplatesignature_attachmentnamesource);

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__None, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Date (MM/DD/YY), ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Date (DD/MM/YY), ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Email, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Letters, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Numbers, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Zip, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Zip+4, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__PostalCode, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__Custom } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_textvalidation_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_textvalidation);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_textvalidation_FromString(char* e_ezsigntemplatesignature_textvalidation);

// Enum  for ezsigntemplatesignature_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__AllOf, ezmax_api_definition__full_ezsigntemplatesignature_response_compound__AnyOf } ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e;

char* ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_dependencyrequirement_ToString(ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e e_ezsigntemplatesignature_dependencyrequirement);

ezmax_api_definition__full_ezsigntemplatesignature_response_compound__e ezsigntemplatesignature_response_compound_e_ezsigntemplatesignature_dependencyrequirement_FromString(char* e_ezsigntemplatesignature_dependencyrequirement);



typedef struct ezsigntemplatesignature_response_compound_t {
    int pki_ezsigntemplatesignature_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplatesigner_id_validation; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    int i_ezsigntemplatesignature_x; //numeric
    int i_ezsigntemplatesignature_y; //numeric
    int i_ezsigntemplatesignature_width; //numeric
    int i_ezsigntemplatesignature_height; //numeric
    int i_ezsigntemplatesignature_step; //numeric
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type; // custom
    char *t_ezsigntemplatesignature_tooltip; // string
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition; // custom
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font; // custom
    int i_ezsigntemplatesignature_validationstep; //numeric
    char *s_ezsigntemplatesignature_attachmentdescription; // string
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource; // custom
    int b_ezsigntemplatesignature_required; //boolean
    int i_ezsigntemplatesignature_maxlength; //numeric
    char *s_ezsigntemplatesignature_regexp; // string
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation; // custom
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement; // custom
    int b_ezsigntemplatesignature_customdate; //boolean
    list_t *a_obj_ezsigntemplatesignaturecustomdate; //nonprimitive container
    list_t *a_obj_ezsigntemplateelementdependency; //nonprimitive container

} ezsigntemplatesignature_response_compound_t;

ezsigntemplatesignature_response_compound_t *ezsigntemplatesignature_response_compound_create(
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
    int i_ezsigntemplatesignature_validationstep,
    char *s_ezsigntemplatesignature_attachmentdescription,
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource,
    int b_ezsigntemplatesignature_required,
    int i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_regexp,
    enum_textvalidation_t *e_ezsigntemplatesignature_textvalidation,
    field_e_ezsigntemplatesignature_dependencyrequirement_t *e_ezsigntemplatesignature_dependencyrequirement,
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate,
    list_t *a_obj_ezsigntemplateelementdependency
);

void ezsigntemplatesignature_response_compound_free(ezsigntemplatesignature_response_compound_t *ezsigntemplatesignature_response_compound);

ezsigntemplatesignature_response_compound_t *ezsigntemplatesignature_response_compound_parseFromJSON(cJSON *ezsigntemplatesignature_response_compoundJSON);

cJSON *ezsigntemplatesignature_response_compound_convertToJSON(ezsigntemplatesignature_response_compound_t *ezsigntemplatesignature_response_compound);

#endif /* _ezsigntemplatesignature_response_compound_H_ */

