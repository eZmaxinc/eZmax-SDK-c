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

#include "enum_textvalidation.h"
#include "field_e_ezsigntemplatesignature_attachmentnamesource.h"
#include "field_e_ezsigntemplatesignature_consultationtrigger.h"
#include "field_e_ezsigntemplatesignature_dependencyrequirement.h"
#include "field_e_ezsigntemplatesignature_font.h"
#include "field_e_ezsigntemplatesignature_positioning.h"
#include "field_e_ezsigntemplatesignature_positioningoccurence.h"
#include "field_e_ezsigntemplatesignature_tooltipposition.h"
#include "field_e_ezsigntemplatesignature_type.h"



typedef struct ezsigntemplatesignature_request_t {
    int pki_ezsigntemplatesignature_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplatesigner_id_validation; //numeric
    int b_ezsigntemplatesignature_handwritten; //boolean
    int b_ezsigntemplatesignature_reason; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning; //referenced enum
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    int i_ezsigntemplatesignature_x; //numeric
    int i_ezsigntemplatesignature_y; //numeric
    int i_ezsigntemplatesignature_width; //numeric
    int i_ezsigntemplatesignature_height; //numeric
    int i_ezsigntemplatesignature_step; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger; //referenced enum
    char *t_ezsigntemplatesignature_tooltip; // string
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font; //referenced enum
    int b_ezsigntemplatesignature_required; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource; //referenced enum
    char *s_ezsigntemplatesignature_attachmentdescription; // string
    int i_ezsigntemplatesignature_validationstep; //numeric
    int i_ezsigntemplatesignature_maxlength; //numeric
    char *s_ezsigntemplatesignature_defaultvalue; // string
    char *s_ezsigntemplatesignature_regexp; // string
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation; //referenced enum
    char *s_ezsigntemplatesignature_textvalidationcustommessage; // string
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement; //referenced enum
    char *s_ezsigntemplatesignature_positioningpattern; // string
    int i_ezsigntemplatesignature_positioningoffsetx; //numeric
    int i_ezsigntemplatesignature_positioningoffsety; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignature_request_t;

__attribute__((deprecated)) ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_create(
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
    int b_ezsigntemplatesignature_required,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource,
    char *s_ezsigntemplatesignature_attachmentdescription,
    int i_ezsigntemplatesignature_validationstep,
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
);

void ezsigntemplatesignature_request_free(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request);

ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_parseFromJSON(cJSON *ezsigntemplatesignature_requestJSON);

cJSON *ezsigntemplatesignature_request_convertToJSON(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request);

#endif /* _ezsigntemplatesignature_request_H_ */

