/*
 * ezsigntemplatesignature_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef _ezsigntemplatesignature_get_object_v1_response_m_payload_H_
#define _ezsigntemplatesignature_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_get_object_v1_response_m_payload_t ezsigntemplatesignature_get_object_v1_response_m_payload_t;

#include "ezsigntemplatesignature_response_compound.h"
#include "ezsigntemplatesignaturecustomdate_response_compound.h"
#include "field_e_ezsigntemplatesignature_attachmentnamesource.h"
#include "field_e_ezsigntemplatesignature_font.h"
#include "field_e_ezsigntemplatesignature_tooltipposition.h"
#include "field_e_ezsigntemplatesignature_type.h"

// Enum  for ezsigntemplatesignature_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Acknowledgement, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__City, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Handwritten, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Initials, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Name, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Attachments } ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e;

char* ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_type_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_type);

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_type_FromString(char* e_ezsigntemplatesignature_type);

// Enum  for ezsigntemplatesignature_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__TopLeft, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__TopCenter, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__TopRight, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__MiddleLeft, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__MiddleRight, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__BottomLeft, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__BottomCenter, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__BottomRight } ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e;

char* ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_tooltipposition);

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_tooltipposition_FromString(char* e_ezsigntemplatesignature_tooltipposition);

// Enum  for ezsigntemplatesignature_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Normal, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Cursive } ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e;

char* ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_font_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_font);

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_font_FromString(char* e_ezsigntemplatesignature_font);

// Enum  for ezsigntemplatesignature_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Description, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Customer, ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__DescriptionCustomer } ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e;

char* ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_attachmentnamesource);

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e ezsigntemplatesignature_get_object_v1_response_m_payload_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* e_ezsigntemplatesignature_attachmentnamesource);



typedef struct ezsigntemplatesignature_get_object_v1_response_m_payload_t {
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
    int i_ezsigntemplatesignature_validationstep; //numeric
    char *s_ezsigntemplatesignature_attachmentdescription; // string
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource; // custom
    int b_ezsigntemplatesignature_required; //boolean
    int b_ezsigntemplatesignature_customdate; //boolean
    list_t *a_obj_ezsigntemplatesignaturecustomdate; //nonprimitive container

} ezsigntemplatesignature_get_object_v1_response_m_payload_t;

ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_create(
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
    int i_ezsigntemplatesignature_validationstep,
    char *s_ezsigntemplatesignature_attachmentdescription,
    field_e_ezsigntemplatesignature_attachmentnamesource_t *e_ezsigntemplatesignature_attachmentnamesource,
    int b_ezsigntemplatesignature_required,
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate
);

void ezsigntemplatesignature_get_object_v1_response_m_payload_free(ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload);

ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatesignature_get_object_v1_response_m_payload_H_ */

