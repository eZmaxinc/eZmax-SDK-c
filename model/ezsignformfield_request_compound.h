/*
 * ezsignformfield_request_compound.h
 *
 * An Ezsignformfield Object and children to create a complete structure
 */

#ifndef _ezsignformfield_request_compound_H_
#define _ezsignformfield_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_request_compound_t ezsignformfield_request_compound_t;

#include "enum_horizontalalignment.h"
#include "ezsignelementdependency_request_compound.h"
#include "field_e_ezsignformfield_dependencyrequirement.h"
#include "textstylestatic_request_compound.h"

// Enum  for ezsignformfield_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfield_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfield_request_compound__AllOf, ezmax_api_definition__full_ezsignformfield_request_compound__AnyOf } ezmax_api_definition__full_ezsignformfield_request_compound__e;

char* ezsignformfield_request_compound_e_ezsignformfield_dependencyrequirement_ToString(ezmax_api_definition__full_ezsignformfield_request_compound__e e_ezsignformfield_dependencyrequirement);

ezmax_api_definition__full_ezsignformfield_request_compound__e ezsignformfield_request_compound_e_ezsignformfield_dependencyrequirement_FromString(char* e_ezsignformfield_dependencyrequirement);

// Enum  for ezsignformfield_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfield_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfield_request_compound__Center, ezmax_api_definition__full_ezsignformfield_request_compound__Left, ezmax_api_definition__full_ezsignformfield_request_compound__Right } ezmax_api_definition__full_ezsignformfield_request_compound__e;

char* ezsignformfield_request_compound_e_ezsignformfield_horizontalalignment_ToString(ezmax_api_definition__full_ezsignformfield_request_compound__e e_ezsignformfield_horizontalalignment);

ezmax_api_definition__full_ezsignformfield_request_compound__e ezsignformfield_request_compound_e_ezsignformfield_horizontalalignment_FromString(char* e_ezsignformfield_horizontalalignment);



typedef struct ezsignformfield_request_compound_t {
    int pki_ezsignformfield_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string
    int i_ezsignformfield_x; //numeric
    int i_ezsignformfield_y; //numeric
    int i_ezsignformfield_width; //numeric
    int i_ezsignformfield_height; //numeric
    int b_ezsignformfield_autocomplete; //boolean
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement; // custom
    enum_horizontalalignment_t *e_ezsignformfield_horizontalalignment; // custom
    struct textstylestatic_request_compound_t *obj_textstylestatic; //model
    list_t *a_obj_ezsignelementdependency; //nonprimitive container

} ezsignformfield_request_compound_t;

ezsignformfield_request_compound_t *ezsignformfield_request_compound_create(
    int pki_ezsignformfield_id,
    int i_ezsignpage_pagenumber,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value,
    int i_ezsignformfield_x,
    int i_ezsignformfield_y,
    int i_ezsignformfield_width,
    int i_ezsignformfield_height,
    int b_ezsignformfield_autocomplete,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue,
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement,
    enum_horizontalalignment_t *e_ezsignformfield_horizontalalignment,
    textstylestatic_request_compound_t *obj_textstylestatic,
    list_t *a_obj_ezsignelementdependency
);

void ezsignformfield_request_compound_free(ezsignformfield_request_compound_t *ezsignformfield_request_compound);

ezsignformfield_request_compound_t *ezsignformfield_request_compound_parseFromJSON(cJSON *ezsignformfield_request_compoundJSON);

cJSON *ezsignformfield_request_compound_convertToJSON(ezsignformfield_request_compound_t *ezsignformfield_request_compound);

#endif /* _ezsignformfield_request_compound_H_ */

