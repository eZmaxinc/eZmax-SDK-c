/*
 * ezsignannotation_response_compound.h
 *
 * A Ezsignannotation Object
 */

#ifndef _ezsignannotation_response_compound_H_
#define _ezsignannotation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_response_compound_t ezsignannotation_response_compound_t;

#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"
#include "field_e_ezsignannotation_type.h"
#include "textstylestatic_response_compound.h"

// Enum  for ezsignannotation_response_compound

typedef enum  { ezmax_api_definition__full_ezsignannotation_response_compound__NULL = 0, ezmax_api_definition__full_ezsignannotation_response_compound__Center, ezmax_api_definition__full_ezsignannotation_response_compound__Left, ezmax_api_definition__full_ezsignannotation_response_compound__Right } ezmax_api_definition__full_ezsignannotation_response_compound__e;

char* ezsignannotation_response_compound_e_ezsignannotation_horizontalalignment_ToString(ezmax_api_definition__full_ezsignannotation_response_compound__e e_ezsignannotation_horizontalalignment);

ezmax_api_definition__full_ezsignannotation_response_compound__e ezsignannotation_response_compound_e_ezsignannotation_horizontalalignment_FromString(char* e_ezsignannotation_horizontalalignment);

// Enum  for ezsignannotation_response_compound

typedef enum  { ezmax_api_definition__full_ezsignannotation_response_compound__NULL = 0, ezmax_api_definition__full_ezsignannotation_response_compound__Bottom, ezmax_api_definition__full_ezsignannotation_response_compound__Middle, ezmax_api_definition__full_ezsignannotation_response_compound__Top } ezmax_api_definition__full_ezsignannotation_response_compound__e;

char* ezsignannotation_response_compound_e_ezsignannotation_verticalalignment_ToString(ezmax_api_definition__full_ezsignannotation_response_compound__e e_ezsignannotation_verticalalignment);

ezmax_api_definition__full_ezsignannotation_response_compound__e ezsignannotation_response_compound_e_ezsignannotation_verticalalignment_FromString(char* e_ezsignannotation_verticalalignment);

// Enum  for ezsignannotation_response_compound

typedef enum  { ezmax_api_definition__full_ezsignannotation_response_compound__NULL = 0, ezmax_api_definition__full_ezsignannotation_response_compound__StrikethroughBlock, ezmax_api_definition__full_ezsignannotation_response_compound__StrikethroughLine, ezmax_api_definition__full_ezsignannotation_response_compound__Text } ezmax_api_definition__full_ezsignannotation_response_compound__e;

char* ezsignannotation_response_compound_e_ezsignannotation_type_ToString(ezmax_api_definition__full_ezsignannotation_response_compound__e e_ezsignannotation_type);

ezmax_api_definition__full_ezsignannotation_response_compound__e ezsignannotation_response_compound_e_ezsignannotation_type_FromString(char* e_ezsignannotation_type);



typedef struct ezsignannotation_response_compound_t {
    int pki_ezsignannotation_id; //numeric
    int fki_ezsigndocument_id; //numeric
    enum_horizontalalignment_t *e_ezsignannotation_horizontalalignment; // custom
    enum_verticalalignment_t *e_ezsignannotation_verticalalignment; // custom
    field_e_ezsignannotation_type_t *e_ezsignannotation_type; // custom
    int i_ezsignannotation_x; //numeric
    int i_ezsignannotation_y; //numeric
    int i_ezsignannotation_width; //numeric
    int i_ezsignannotation_height; //numeric
    char *s_ezsignannotation_text; // string
    int i_ezsignpage_pagenumber; //numeric
    struct textstylestatic_response_compound_t *obj_textstylestatic; //model

} ezsignannotation_response_compound_t;

ezsignannotation_response_compound_t *ezsignannotation_response_compound_create(
    int pki_ezsignannotation_id,
    int fki_ezsigndocument_id,
    enum_horizontalalignment_t *e_ezsignannotation_horizontalalignment,
    enum_verticalalignment_t *e_ezsignannotation_verticalalignment,
    field_e_ezsignannotation_type_t *e_ezsignannotation_type,
    int i_ezsignannotation_x,
    int i_ezsignannotation_y,
    int i_ezsignannotation_width,
    int i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int i_ezsignpage_pagenumber,
    textstylestatic_response_compound_t *obj_textstylestatic
);

void ezsignannotation_response_compound_free(ezsignannotation_response_compound_t *ezsignannotation_response_compound);

ezsignannotation_response_compound_t *ezsignannotation_response_compound_parseFromJSON(cJSON *ezsignannotation_response_compoundJSON);

cJSON *ezsignannotation_response_compound_convertToJSON(ezsignannotation_response_compound_t *ezsignannotation_response_compound);

#endif /* _ezsignannotation_response_compound_H_ */

