/*
 * ezsignannotation_request.h
 *
 * A Ezsignannotation Object
 */

#ifndef _ezsignannotation_request_H_
#define _ezsignannotation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_request_t ezsignannotation_request_t;

#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"
#include "field_e_ezsignannotation_type.h"

// Enum  for ezsignannotation_request

typedef enum  { ezmax_api_definition__full_ezsignannotation_request__NULL = 0, ezmax_api_definition__full_ezsignannotation_request__Center, ezmax_api_definition__full_ezsignannotation_request__Left, ezmax_api_definition__full_ezsignannotation_request__Right } ezmax_api_definition__full_ezsignannotation_request__e;

char* ezsignannotation_request_e_ezsignannotation_horizontalalignment_ToString(ezmax_api_definition__full_ezsignannotation_request__e e_ezsignannotation_horizontalalignment);

ezmax_api_definition__full_ezsignannotation_request__e ezsignannotation_request_e_ezsignannotation_horizontalalignment_FromString(char* e_ezsignannotation_horizontalalignment);

// Enum  for ezsignannotation_request

typedef enum  { ezmax_api_definition__full_ezsignannotation_request__NULL = 0, ezmax_api_definition__full_ezsignannotation_request__Bottom, ezmax_api_definition__full_ezsignannotation_request__Middle, ezmax_api_definition__full_ezsignannotation_request__Top } ezmax_api_definition__full_ezsignannotation_request__e;

char* ezsignannotation_request_e_ezsignannotation_verticalalignment_ToString(ezmax_api_definition__full_ezsignannotation_request__e e_ezsignannotation_verticalalignment);

ezmax_api_definition__full_ezsignannotation_request__e ezsignannotation_request_e_ezsignannotation_verticalalignment_FromString(char* e_ezsignannotation_verticalalignment);

// Enum  for ezsignannotation_request

typedef enum  { ezmax_api_definition__full_ezsignannotation_request__NULL = 0, ezmax_api_definition__full_ezsignannotation_request__StrikethroughBlock, ezmax_api_definition__full_ezsignannotation_request__StrikethroughLine, ezmax_api_definition__full_ezsignannotation_request__Text } ezmax_api_definition__full_ezsignannotation_request__e;

char* ezsignannotation_request_e_ezsignannotation_type_ToString(ezmax_api_definition__full_ezsignannotation_request__e e_ezsignannotation_type);

ezmax_api_definition__full_ezsignannotation_request__e ezsignannotation_request_e_ezsignannotation_type_FromString(char* e_ezsignannotation_type);



typedef struct ezsignannotation_request_t {
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

} ezsignannotation_request_t;

ezsignannotation_request_t *ezsignannotation_request_create(
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
    int i_ezsignpage_pagenumber
);

void ezsignannotation_request_free(ezsignannotation_request_t *ezsignannotation_request);

ezsignannotation_request_t *ezsignannotation_request_parseFromJSON(cJSON *ezsignannotation_requestJSON);

cJSON *ezsignannotation_request_convertToJSON(ezsignannotation_request_t *ezsignannotation_request);

#endif /* _ezsignannotation_request_H_ */

