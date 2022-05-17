/*
 * ezsignsignature_request.h
 *
 * An Ezsignsignature Object
 */

#ifndef _ezsignsignature_request_H_
#define _ezsignsignature_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_t ezsignsignature_request_t;

#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_request

typedef enum  { ezmax_api_definition__full_ezsignsignature_request__NULL = 0, ezmax_api_definition__full_ezsignsignature_request__Acknowledgement, ezmax_api_definition__full_ezsignsignature_request__City, ezmax_api_definition__full_ezsignsignature_request__Handwritten, ezmax_api_definition__full_ezsignsignature_request__Initials, ezmax_api_definition__full_ezsignsignature_request__Name } ezmax_api_definition__full_ezsignsignature_request__e;

char* ezsignsignature_request_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_type);

ezmax_api_definition__full_ezsignsignature_request__e ezsignsignature_request_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);

// Enum  for ezsignsignature_request

typedef enum  { ezmax_api_definition__full_ezsignsignature_request__NULL = 0, ezmax_api_definition__full_ezsignsignature_request__TopLeft, ezmax_api_definition__full_ezsignsignature_request__TopCenter, ezmax_api_definition__full_ezsignsignature_request__TopRight, ezmax_api_definition__full_ezsignsignature_request__MiddleLeft, ezmax_api_definition__full_ezsignsignature_request__MiddleRight, ezmax_api_definition__full_ezsignsignature_request__BottomLeft, ezmax_api_definition__full_ezsignsignature_request__BottomCenter, ezmax_api_definition__full_ezsignsignature_request__BottomRight } ezmax_api_definition__full_ezsignsignature_request__e;

char* ezsignsignature_request_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_tooltipposition);

ezmax_api_definition__full_ezsignsignature_request__e ezsignsignature_request_e_ezsignsignature_tooltipposition_FromString(char* e_ezsignsignature_tooltipposition);

// Enum  for ezsignsignature_request

typedef enum  { ezmax_api_definition__full_ezsignsignature_request__NULL = 0, ezmax_api_definition__full_ezsignsignature_request__Normal, ezmax_api_definition__full_ezsignsignature_request__Cursive } ezmax_api_definition__full_ezsignsignature_request__e;

char* ezsignsignature_request_e_ezsignsignature_font_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_font);

ezmax_api_definition__full_ezsignsignature_request__e ezsignsignature_request_e_ezsignsignature_font_FromString(char* e_ezsignsignature_font);



typedef struct ezsignsignature_request_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_step; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    int fki_ezsigndocument_id; //numeric
    char *t_ezsignsignature_tooltip; // string
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition; // custom
    field_e_ezsignsignature_font_t *e_ezsignsignature_font; // custom

} ezsignsignature_request_t;

ezsignsignature_request_t *ezsignsignature_request_create(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font
);

void ezsignsignature_request_free(ezsignsignature_request_t *ezsignsignature_request);

ezsignsignature_request_t *ezsignsignature_request_parseFromJSON(cJSON *ezsignsignature_requestJSON);

cJSON *ezsignsignature_request_convertToJSON(ezsignsignature_request_t *ezsignsignature_request);

#endif /* _ezsignsignature_request_H_ */

