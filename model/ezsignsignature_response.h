/*
 * ezsignsignature_response.h
 *
 * An Ezsignsignature Object
 */

#ifndef _ezsignsignature_response_H_
#define _ezsignsignature_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_response_t ezsignsignature_response_t;

#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_response

typedef enum  { ezmax_api_definition__full_ezsignsignature_response__NULL = 0, ezmax_api_definition__full_ezsignsignature_response__Acknowledgement, ezmax_api_definition__full_ezsignsignature_response__City, ezmax_api_definition__full_ezsignsignature_response__Handwritten, ezmax_api_definition__full_ezsignsignature_response__Initials, ezmax_api_definition__full_ezsignsignature_response__Name } ezmax_api_definition__full_ezsignsignature_response__e;

char* ezsignsignature_response_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_type);

ezmax_api_definition__full_ezsignsignature_response__e ezsignsignature_response_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);

// Enum  for ezsignsignature_response

typedef enum  { ezmax_api_definition__full_ezsignsignature_response__NULL = 0, ezmax_api_definition__full_ezsignsignature_response__TopLeft, ezmax_api_definition__full_ezsignsignature_response__TopCenter, ezmax_api_definition__full_ezsignsignature_response__TopRight, ezmax_api_definition__full_ezsignsignature_response__MiddleLeft, ezmax_api_definition__full_ezsignsignature_response__MiddleRight, ezmax_api_definition__full_ezsignsignature_response__BottomLeft, ezmax_api_definition__full_ezsignsignature_response__BottomCenter, ezmax_api_definition__full_ezsignsignature_response__BottomRight } ezmax_api_definition__full_ezsignsignature_response__e;

char* ezsignsignature_response_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_tooltipposition);

ezmax_api_definition__full_ezsignsignature_response__e ezsignsignature_response_e_ezsignsignature_tooltipposition_FromString(char* e_ezsignsignature_tooltipposition);

// Enum  for ezsignsignature_response

typedef enum  { ezmax_api_definition__full_ezsignsignature_response__NULL = 0, ezmax_api_definition__full_ezsignsignature_response__Normal, ezmax_api_definition__full_ezsignsignature_response__Cursive } ezmax_api_definition__full_ezsignsignature_response__e;

char* ezsignsignature_response_e_ezsignsignature_font_ToString(ezmax_api_definition__full_ezsignsignature_response__e e_ezsignsignature_font);

ezmax_api_definition__full_ezsignsignature_response__e ezsignsignature_response_e_ezsignsignature_font_FromString(char* e_ezsignsignature_font);



typedef struct ezsignsignature_response_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_step; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    char *t_ezsignsignature_tooltip; // string
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition; // custom
    field_e_ezsignsignature_font_t *e_ezsignsignature_font; // custom

} ezsignsignature_response_t;

ezsignsignature_response_t *ezsignsignature_response_create(
    int pki_ezsignsignature_id,
    int fki_ezsigndocument_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font
);

void ezsignsignature_response_free(ezsignsignature_response_t *ezsignsignature_response);

ezsignsignature_response_t *ezsignsignature_response_parseFromJSON(cJSON *ezsignsignature_responseJSON);

cJSON *ezsignsignature_response_convertToJSON(ezsignsignature_response_t *ezsignsignature_response);

#endif /* _ezsignsignature_response_H_ */

