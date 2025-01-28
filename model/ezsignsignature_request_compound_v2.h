/*
 * ezsignsignature_request_compound_v2.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef _ezsignsignature_request_compound_v2_H_
#define _ezsignsignature_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_compound_v2_t ezsignsignature_request_compound_v2_t;

#include "enum_textvalidation.h"
#include "ezsignelementdependency_request_compound.h"
#include "ezsignsignaturecustomdate_request_compound_v2.h"
#include "field_e_ezsignsignature_attachmentnamesource.h"
#include "field_e_ezsignsignature_consultationtrigger.h"
#include "field_e_ezsignsignature_dependencyrequirement.h"
#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"



typedef struct ezsignsignature_request_compound_v2_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_width; //numeric
    int i_ezsignsignature_height; //numeric
    int i_ezsignsignature_step; //numeric
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type; //referenced enum
    int fki_ezsigndocument_id; //numeric
    char *t_ezsignsignature_tooltip; // string
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition; //referenced enum
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font; //referenced enum
    int fki_ezsignfoldersignerassociation_id_validation; //numeric
    int b_ezsignsignature_handwritten; //boolean
    int b_ezsignsignature_reason; //boolean
    int b_ezsignsignature_required; //boolean
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource; //referenced enum
    char *s_ezsignsignature_attachmentdescription; // string
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger; //referenced enum
    int i_ezsignsignature_validationstep; //numeric
    int i_ezsignsignature_maxlength; //numeric
    char *s_ezsignsignature_defaultvalue; // string
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation; //referenced enum
    char *s_ezsignsignature_textvalidationcustommessage; // string
    char *s_ezsignsignature_regexp; // string
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement; //referenced enum
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container
    list_t *a_obj_ezsignelementdependency; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_request_compound_v2_t;

__attribute__((deprecated)) ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_create(
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
);

void ezsignsignature_request_compound_v2_free(ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2);

ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_parseFromJSON(cJSON *ezsignsignature_request_compound_v2JSON);

cJSON *ezsignsignature_request_compound_v2_convertToJSON(ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2);

#endif /* _ezsignsignature_request_compound_v2_H_ */

