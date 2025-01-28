/*
 * ezsignelementdependency_response.h
 *
 * An Ezsignelementdependency Object
 */

#ifndef _ezsignelementdependency_response_H_
#define _ezsignelementdependency_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignelementdependency_response_t ezsignelementdependency_response_t;

#include "field_e_ezsignelementdependency_operator.h"
#include "field_e_ezsignelementdependency_validation.h"



typedef struct ezsignelementdependency_response_t {
    int pki_ezsignelementdependency_id; //numeric
    int fki_ezsignformfield_id; //numeric
    int fki_ezsignsignature_id; //numeric
    int fki_ezsignformfield_id_validation; //numeric
    int fki_ezsignformfieldgroup_id_validation; //numeric
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation; //referenced enum
    int b_ezsignelementdependency_selected; //boolean
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator; //referenced enum
    char *s_ezsignelementdependency_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignelementdependency_response_t;

__attribute__((deprecated)) ezsignelementdependency_response_t *ezsignelementdependency_response_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id,
    int fki_ezsignsignature_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
);

void ezsignelementdependency_response_free(ezsignelementdependency_response_t *ezsignelementdependency_response);

ezsignelementdependency_response_t *ezsignelementdependency_response_parseFromJSON(cJSON *ezsignelementdependency_responseJSON);

cJSON *ezsignelementdependency_response_convertToJSON(ezsignelementdependency_response_t *ezsignelementdependency_response);

#endif /* _ezsignelementdependency_response_H_ */

