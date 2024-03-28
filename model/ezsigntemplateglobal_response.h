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

// Enum  for ezsigntemplateglobal_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateglobal_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateglobal_response__All, ezmax_api_definition__full_ezsigntemplateglobal_response__Inscription } ezmax_api_definition__full_ezsigntemplateglobal_response__e;

char* ezsigntemplateglobal_response_e_ezsigntemplateglobal_module_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response__e e_ezsigntemplateglobal_module);

ezmax_api_definition__full_ezsigntemplateglobal_response__e ezsigntemplateglobal_response_e_ezsigntemplateglobal_module_FromString(char* e_ezsigntemplateglobal_module);

// Enum  for ezsigntemplateglobal_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateglobal_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateglobal_response__Centris, ezmax_api_definition__full_ezsigntemplateglobal_response__Webforms, ezmax_api_definition__full_ezsigntemplateglobal_response__GHACQ } ezmax_api_definition__full_ezsigntemplateglobal_response__e;

char* ezsigntemplateglobal_response_e_ezsigntemplateglobal_supplier_ToString(ezmax_api_definition__full_ezsigntemplateglobal_response__e e_ezsigntemplateglobal_supplier);

ezmax_api_definition__full_ezsigntemplateglobal_response__e ezsigntemplateglobal_response_e_ezsigntemplateglobal_supplier_FromString(char* e_ezsigntemplateglobal_supplier);



typedef struct ezsigntemplateglobal_response_t {
    int pki_ezsigntemplateglobal_id; //numeric
    int fki_ezsigntemplateglobaldocument_id; //numeric
    int fki_module_id; //numeric
    char *s_module_name_x; // string
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module; // custom
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier; // custom
    char *s_ezsigntemplateglobal_code; // string
    char *s_ezsigntemplateglobal_description; // string

} ezsigntemplateglobal_response_t;

ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_create(
    int pki_ezsigntemplateglobal_id,
    int fki_ezsigntemplateglobaldocument_id,
    int fki_module_id,
    char *s_module_name_x,
    int fki_language_id,
    char *s_language_name_x,
    field_e_ezsigntemplateglobal_module_t *e_ezsigntemplateglobal_module,
    field_e_ezsigntemplateglobal_supplier_t *e_ezsigntemplateglobal_supplier,
    char *s_ezsigntemplateglobal_code,
    char *s_ezsigntemplateglobal_description
);

void ezsigntemplateglobal_response_free(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response);

ezsigntemplateglobal_response_t *ezsigntemplateglobal_response_parseFromJSON(cJSON *ezsigntemplateglobal_responseJSON);

cJSON *ezsigntemplateglobal_response_convertToJSON(ezsigntemplateglobal_response_t *ezsigntemplateglobal_response);

#endif /* _ezsigntemplateglobal_response_H_ */

