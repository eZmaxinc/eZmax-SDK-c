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
#include "ezsignelementdependency_response_compound.h"
#include "ezsignsignaturecustomdate_response_compound_v2.h"
#include "field_e_ezsignsignature_attachmentnamesource.h"
#include "field_e_ezsignsignature_consultationtrigger.h"
#include "field_e_ezsignsignature_dependencyrequirement.h"
#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"
#include "signature_response_compound.h"



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
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type; //referenced enum
    char *t_ezsignsignature_tooltip; // string
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition; //referenced enum
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font; //referenced enum
    int i_ezsignsignature_validationstep; //numeric
    char *s_ezsignsignature_attachmentdescription; // string
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource; //referenced enum
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger; //referenced enum
    int b_ezsignsignature_handwritten; //boolean
    int b_ezsignsignature_reason; //boolean
    int b_ezsignsignature_required; //boolean
    int fki_ezsignfoldersignerassociation_id_validation; //numeric
    char *dt_ezsignsignature_date; // string
    int i_ezsignsignatureattachment_count; //numeric
    char *s_ezsignsignature_description; // string
    int i_ezsignsignature_maxlength; //numeric
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation; //referenced enum
    char *s_ezsignsignature_textvalidationcustommessage; // string
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement; //referenced enum
    char *s_ezsignsignature_defaultvalue; // string
    char *s_ezsignsignature_regexp; // string
    struct custom_contact_name_response_t *obj_contact_name; //model
    struct custom_contact_name_response_t *obj_contact_name_delegation; //model
    struct signature_response_compound_t *obj_signature; //model
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container
    struct custom_creditcardtransaction_response_t *obj_creditcardtransaction; //model
    list_t *a_obj_ezsignelementdependency; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_response_compound_v3_t;

__attribute__((deprecated)) ezsignsignature_response_compound_v3_t *ezsignsignature_response_compound_v3_create(
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

