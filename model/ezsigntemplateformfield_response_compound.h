/*
 * ezsigntemplateformfield_response_compound.h
 *
 * An Ezsigntemplateformfield Object and children
 */

#ifndef _ezsigntemplateformfield_response_compound_H_
#define _ezsigntemplateformfield_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfield_response_compound_t ezsigntemplateformfield_response_compound_t;

#include "enum_horizontalalignment.h"
#include "ezsigntemplateelementdependency_response.h"
#include "ezsigntemplateformfield_response.h"
#include "field_e_ezsigntemplateformfield_dependencyrequirement.h"
#include "field_e_ezsigntemplateformfield_positioning.h"
#include "field_e_ezsigntemplateformfield_positioningoccurence.h"
#include "textstylestatic_response_compound.h"

// Enum  for ezsigntemplateformfield_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfield_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__PerCoordinates, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__PerPositioningPattern } ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e;

char* ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_positioning_ToString(ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_positioning);

ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_positioning_FromString(char* e_ezsigntemplateformfield_positioning);

// Enum  for ezsigntemplateformfield_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfield_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__AllOf, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__AnyOf } ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e;

char* ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_dependencyrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_dependencyrequirement);

ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_dependencyrequirement_FromString(char* e_ezsigntemplateformfield_dependencyrequirement);

// Enum  for ezsigntemplateformfield_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfield_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__All, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__First, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__Last } ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e;

char* ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_positioningoccurence_ToString(ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_positioningoccurence);

ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_positioningoccurence_FromString(char* e_ezsigntemplateformfield_positioningoccurence);

// Enum  for ezsigntemplateformfield_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfield_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__Center, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__Left, ezmax_api_definition__full_ezsigntemplateformfield_response_compound__Right } ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e;

char* ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_horizontalalignment_ToString(ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_horizontalalignment);

ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e ezsigntemplateformfield_response_compound_e_ezsigntemplateformfield_horizontalalignment_FromString(char* e_ezsigntemplateformfield_horizontalalignment);



typedef struct ezsigntemplateformfield_response_compound_t {
    int pki_ezsigntemplateformfield_id; //numeric
    field_e_ezsigntemplateformfield_positioning_t *e_ezsigntemplateformfield_positioning; // custom
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateformfield_label; // string
    char *s_ezsigntemplateformfield_value; // string
    int i_ezsigntemplateformfield_x; //numeric
    int i_ezsigntemplateformfield_y; //numeric
    int i_ezsigntemplateformfield_width; //numeric
    int i_ezsigntemplateformfield_height; //numeric
    int b_ezsigntemplateformfield_autocomplete; //boolean
    int b_ezsigntemplateformfield_selected; //boolean
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement; // custom
    char *s_ezsigntemplateformfield_positioningpattern; // string
    int i_ezsigntemplateformfield_positioningoffsetx; //numeric
    int i_ezsigntemplateformfield_positioningoffsety; //numeric
    field_e_ezsigntemplateformfield_positioningoccurence_t *e_ezsigntemplateformfield_positioningoccurence; // custom
    enum_horizontalalignment_t *e_ezsigntemplateformfield_horizontalalignment; // custom
    struct textstylestatic_response_compound_t *obj_textstylestatic; //model
    list_t *a_obj_ezsigntemplateelementdependency; //nonprimitive container

} ezsigntemplateformfield_response_compound_t;

ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_create(
    int pki_ezsigntemplateformfield_id,
    field_e_ezsigntemplateformfield_positioning_t *e_ezsigntemplateformfield_positioning,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_autocomplete,
    int b_ezsigntemplateformfield_selected,
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement,
    char *s_ezsigntemplateformfield_positioningpattern,
    int i_ezsigntemplateformfield_positioningoffsetx,
    int i_ezsigntemplateformfield_positioningoffsety,
    field_e_ezsigntemplateformfield_positioningoccurence_t *e_ezsigntemplateformfield_positioningoccurence,
    enum_horizontalalignment_t *e_ezsigntemplateformfield_horizontalalignment,
    textstylestatic_response_compound_t *obj_textstylestatic,
    list_t *a_obj_ezsigntemplateelementdependency
);

void ezsigntemplateformfield_response_compound_free(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound);

ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_parseFromJSON(cJSON *ezsigntemplateformfield_response_compoundJSON);

cJSON *ezsigntemplateformfield_response_compound_convertToJSON(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound);

#endif /* _ezsigntemplateformfield_response_compound_H_ */

