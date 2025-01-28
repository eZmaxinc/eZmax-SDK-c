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
#include "ezsigntemplateelementdependency_response_compound.h"
#include "field_e_ezsigntemplateformfield_dependencyrequirement.h"
#include "field_e_ezsigntemplateformfield_positioning.h"
#include "field_e_ezsigntemplateformfield_positioningoccurence.h"
#include "textstylestatic_response_compound.h"



typedef struct ezsigntemplateformfield_response_compound_t {
    int pki_ezsigntemplateformfield_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e e_ezsigntemplateformfield_positioning; //referenced enum
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateformfield_label; // string
    char *s_ezsigntemplateformfield_value; // string
    int i_ezsigntemplateformfield_x; //numeric
    int i_ezsigntemplateformfield_y; //numeric
    int i_ezsigntemplateformfield_width; //numeric
    int i_ezsigntemplateformfield_height; //numeric
    int b_ezsigntemplateformfield_autocomplete; //boolean
    int b_ezsigntemplateformfield_selected; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_dependencyrequirement__e e_ezsigntemplateformfield_dependencyrequirement; //referenced enum
    char *s_ezsigntemplateformfield_positioningpattern; // string
    int i_ezsigntemplateformfield_positioningoffsetx; //numeric
    int i_ezsigntemplateformfield_positioningoffsety; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioningoccurence__e e_ezsigntemplateformfield_positioningoccurence; //referenced enum
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsigntemplateformfield_horizontalalignment; //referenced enum
    struct textstylestatic_response_compound_t *obj_textstylestatic; //model
    list_t *a_obj_ezsigntemplateelementdependency; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfield_response_compound_t;

__attribute__((deprecated)) ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_create(
    int pki_ezsigntemplateformfield_id,
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e e_ezsigntemplateformfield_positioning,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_autocomplete,
    int b_ezsigntemplateformfield_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_dependencyrequirement__e e_ezsigntemplateformfield_dependencyrequirement,
    char *s_ezsigntemplateformfield_positioningpattern,
    int i_ezsigntemplateformfield_positioningoffsetx,
    int i_ezsigntemplateformfield_positioningoffsety,
    ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioningoccurence__e e_ezsigntemplateformfield_positioningoccurence,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsigntemplateformfield_horizontalalignment,
    textstylestatic_response_compound_t *obj_textstylestatic,
    list_t *a_obj_ezsigntemplateelementdependency
);

void ezsigntemplateformfield_response_compound_free(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound);

ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_parseFromJSON(cJSON *ezsigntemplateformfield_response_compoundJSON);

cJSON *ezsigntemplateformfield_response_compound_convertToJSON(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound);

#endif /* _ezsigntemplateformfield_response_compound_H_ */

