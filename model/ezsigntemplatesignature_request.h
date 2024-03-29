/*
 * ezsigntemplatesignature_request.h
 *
 * A Ezsigntemplatesignature Object
 */

#ifndef _ezsigntemplatesignature_request_H_
#define _ezsigntemplatesignature_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_request_t ezsigntemplatesignature_request_t;

#include "field_e_ezsigntemplatesignature_attachmentnamesource.h"
#include "field_e_ezsigntemplatesignature_font.h"
#include "field_e_ezsigntemplatesignature_tooltipposition.h"
#include "field_e_ezsigntemplatesignature_type.h"

// Enum  for ezsigntemplatesignature_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_request__Acknowledgement, ezmax_api_definition__full_ezsigntemplatesignature_request__City, ezmax_api_definition__full_ezsigntemplatesignature_request__Handwritten, ezmax_api_definition__full_ezsigntemplatesignature_request__Initials, ezmax_api_definition__full_ezsigntemplatesignature_request__Name, ezmax_api_definition__full_ezsigntemplatesignature_request__Attachments } ezmax_api_definition__full_ezsigntemplatesignature_request__e;

char* ezsigntemplatesignature_request_e_ezsigntemplatesignature_type_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request__e e_ezsigntemplatesignature_type);

ezmax_api_definition__full_ezsigntemplatesignature_request__e ezsigntemplatesignature_request_e_ezsigntemplatesignature_type_FromString(char* e_ezsigntemplatesignature_type);

// Enum  for ezsigntemplatesignature_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_request__TopLeft, ezmax_api_definition__full_ezsigntemplatesignature_request__TopCenter, ezmax_api_definition__full_ezsigntemplatesignature_request__TopRight, ezmax_api_definition__full_ezsigntemplatesignature_request__MiddleLeft, ezmax_api_definition__full_ezsigntemplatesignature_request__MiddleRight, ezmax_api_definition__full_ezsigntemplatesignature_request__BottomLeft, ezmax_api_definition__full_ezsigntemplatesignature_request__BottomCenter, ezmax_api_definition__full_ezsigntemplatesignature_request__BottomRight } ezmax_api_definition__full_ezsigntemplatesignature_request__e;

char* ezsigntemplatesignature_request_e_ezsigntemplatesignature_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request__e e_ezsigntemplatesignature_tooltipposition);

ezmax_api_definition__full_ezsigntemplatesignature_request__e ezsigntemplatesignature_request_e_ezsigntemplatesignature_tooltipposition_FromString(char* e_ezsigntemplatesignature_tooltipposition);

// Enum  for ezsigntemplatesignature_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_request__Normal, ezmax_api_definition__full_ezsigntemplatesignature_request__Cursive } ezmax_api_definition__full_ezsigntemplatesignature_request__e;

char* ezsigntemplatesignature_request_e_ezsigntemplatesignature_font_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request__e e_ezsigntemplatesignature_font);

ezmax_api_definition__full_ezsigntemplatesignature_request__e ezsigntemplatesignature_request_e_ezsigntemplatesignature_font_FromString(char* e_ezsigntemplatesignature_font);

// Enum  for ezsigntemplatesignature_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_request__Description, ezmax_api_definition__full_ezsigntemplatesignature_request__Customer, ezmax_api_definition__full_ezsigntemplatesignature_request__DescriptionCustomer } ezmax_api_definition__full_ezsigntemplatesignature_request__e;

char* ezsigntemplatesignature_request_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsigntemplatesignature_request__e e_ezsigntemplatesignature_attachmentnamesource);

ezmax_api_definition__full_ezsigntemplatesignature_request__e ezsigntemplatesignature_request_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* e_ezsigntemplatesignature_attachmentnamesource);



typedef struct ezsigntemplatesignature_request_t {
    int pki_ezsigntemplatesignature_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplatesigner_id_validation; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    int i_ezsigntemplatesignature_x; //numeric
    int i_ezsigntemplatesignature_y; //numeric
    int i_ezsigntemplatesignature_step; //numeric
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type; // custom
    char *t_ezsigntemplatesignature_tooltip; // string
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition; // custom
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font; // custom
    int b_ezsigntemplatesignature_required; //boolean
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource; // custom
    char *s_ezsigntemplatesignature_attachmentdescription; // string
    int i_ezsigntemplatesignature_validationstep; //numeric

} ezsigntemplatesignature_request_t;

ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_create(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int fki_ezsigntemplatesigner_id_validation,
    int i_ezsigntemplatedocumentpage_pagenumber,
    int i_ezsigntemplatesignature_x,
    int i_ezsigntemplatesignature_y,
    int i_ezsigntemplatesignature_step,
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type,
    char *t_ezsigntemplatesignature_tooltip,
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition,
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font,
    int b_ezsigntemplatesignature_required,
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource,
    char *s_ezsigntemplatesignature_attachmentdescription,
    int i_ezsigntemplatesignature_validationstep
);

void ezsigntemplatesignature_request_free(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request);

ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_parseFromJSON(cJSON *ezsigntemplatesignature_requestJSON);

cJSON *ezsigntemplatesignature_request_convertToJSON(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request);

#endif /* _ezsigntemplatesignature_request_H_ */

