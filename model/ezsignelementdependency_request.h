/*
 * ezsignelementdependency_request.h
 *
 * An Ezsignelementdependency Object
 */

#ifndef _ezsignelementdependency_request_H_
#define _ezsignelementdependency_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignelementdependency_request_t ezsignelementdependency_request_t;

#include "field_e_ezsignelementdependency_operator.h"
#include "field_e_ezsignelementdependency_validation.h"



typedef struct ezsignelementdependency_request_t {
    int pki_ezsignelementdependency_id; //numeric
    int fki_ezsignformfield_id_validation; //numeric
    int fki_ezsignformfieldgroup_id_validation; //numeric
    char *s_ezsignelementdependency_ezsignformfieldgrouplabel; // string
    char *s_ezsignelementdependency_ezsignformfieldlabel; // string
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation; //referenced enum
    int b_ezsignelementdependency_selected; //boolean
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator; //referenced enum
    char *s_ezsignelementdependency_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignelementdependency_request_t;

__attribute__((deprecated)) ezsignelementdependency_request_t *ezsignelementdependency_request_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    char *s_ezsignelementdependency_ezsignformfieldgrouplabel,
    char *s_ezsignelementdependency_ezsignformfieldlabel,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
);

void ezsignelementdependency_request_free(ezsignelementdependency_request_t *ezsignelementdependency_request);

ezsignelementdependency_request_t *ezsignelementdependency_request_parseFromJSON(cJSON *ezsignelementdependency_requestJSON);

cJSON *ezsignelementdependency_request_convertToJSON(ezsignelementdependency_request_t *ezsignelementdependency_request);

#endif /* _ezsignelementdependency_request_H_ */

