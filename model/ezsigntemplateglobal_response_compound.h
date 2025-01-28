/*
 * ezsigntemplateglobal_response_compound.h
 *
 * A Ezsigntemplateglobal Object
 */

#ifndef _ezsigntemplateglobal_response_compound_H_
#define _ezsigntemplateglobal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_response_compound_t ezsigntemplateglobal_response_compound_t;

#include "ezsigntemplateglobaldocument_response.h"
#include "ezsigntemplateglobalsigner_response_compound.h"
#include "field_e_ezsigntemplateglobal_module.h"
#include "field_e_ezsigntemplateglobal_supplier.h"



typedef struct ezsigntemplateglobal_response_compound_t {
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
    struct ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument; //model
    list_t *a_obj_ezsigntemplateglobalsigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobal_response_compound_t;

__attribute__((deprecated)) ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_create(
    int pki_ezsigntemplateglobal_id,
    int fki_ezsigntemplateglobaldocument_id,
    int fki_module_id,
    char *s_module_name_x,
    int fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e e_ezsigntemplateglobal_module,
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description,
    ezsigntemplateglobaldocument_response_t *obj_ezsigntemplateglobaldocument,
    list_t *a_obj_ezsigntemplateglobalsigner
);

void ezsigntemplateglobal_response_compound_free(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound);

ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound_parseFromJSON(cJSON *ezsigntemplateglobal_response_compoundJSON);

cJSON *ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_response_compound_t *ezsigntemplateglobal_response_compound);

#endif /* _ezsigntemplateglobal_response_compound_H_ */

