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

#include "ezsignsignature_request.h"
#include "ezsignsignature_request_compound_all_of.h"
#include "ezsignsignaturecustomdate_request_compound.h"
#include "field_e_ezsignsignature_attachmentnamesource.h"
#include "field_e_ezsignsignature_font.h"
#include "field_e_ezsignsignature_tooltipposition.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition__full_ezsignsignature_request_compound__NULL = 0, ezmax_api_definition__full_ezsignsignature_request_compound__Acknowledgement, ezmax_api_definition__full_ezsignsignature_request_compound__City, ezmax_api_definition__full_ezsignsignature_request_compound__Handwritten, ezmax_api_definition__full_ezsignsignature_request_compound__Initials, ezmax_api_definition__full_ezsignsignature_request_compound__Name, ezmax_api_definition__full_ezsignsignature_request_compound__Attachments } ezmax_api_definition__full_ezsignsignature_request_compound__e;

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



typedef struct ezsignsignature_request_compound_t {
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
    int fki_user_id; //numeric
    int b_ezsignsignature_required; //boolean
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource; // custom
    char *s_ezsignsignature_attachmentdescription; // string
    int i_ezsignsignature_validationstep; //numeric
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container

} ezsignsignature_request_compound_t;

ezsignsignature_request_compound_t *ezsignsignature_request_compound_create(
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
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int fki_user_id,
    int b_ezsignsignature_required,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    int i_ezsignsignature_validationstep,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate
);

void ezsignsignature_request_compound_free(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

ezsignsignature_request_compound_t *ezsignsignature_request_compound_parseFromJSON(cJSON *ezsignsignature_request_compoundJSON);

cJSON *ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

#endif /* _ezsignsignature_request_compound_H_ */

