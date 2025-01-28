/*
 * ezsigntemplateglobal_response.h
 *
 * A Ezsigntemplateglobal Object
 */

#ifndef _ezsigntemplateglobal_response_H_
#define _ezsigntemplateglobal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_response_t ezsigntemplateglobal_response_t;

#include "field_e_ezsigntemplateglobal_module.h"
#include "field_e_ezsigntemplateglobal_supplier.h"



typedef struct ezsigntemplateglobal_response_t {
    int pki_ezsigntemplateglobal_id; //numeric
    int fki_ezsigntemplateglobaldocument_id; //numeric
    int fki_module_id; //numeric
    char *s_module_name_x; // string
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier; //referenced enum
    char *s_ezsigntemplateglobal_code; // string
    char *s_ezsigntemplateglobal_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobal_response_t;

__attribute__((deprecated)) ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_create(
    int pki_ezsigntemplateglobal_id,
    int fki_ezsigntemplateglobaldocument_id,
    int fki_module_id,
    char *s_module_name_x,
    int fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description
);

void ezsigntemplateglobal_response_free(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response);

ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_parseFromJSON(cJSON *ezsigntemplateglobal_responseJSON);

cJSON *ezsigntemplateglobal_response_convertToJSON(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response);

#endif /* _ezsigntemplateglobal_response_H_ */

