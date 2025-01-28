/*
 * ezsignelementdependency_response_compound.h
 *
 * An Ezsignelementdependency Object and children to create a complete structure
 */

#ifndef _ezsignelementdependency_response_compound_H_
#define _ezsignelementdependency_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignelementdependency_response_compound_t ezsignelementdependency_response_compound_t;

#include "field_e_ezsignelementdependency_operator.h"
#include "field_e_ezsignelementdependency_validation.h"



typedef struct ezsignelementdependency_response_compound_t {
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
} ezsignelementdependency_response_compound_t;

__attribute__((deprecated)) ezsignelementdependency_response_compound_t *ezsignelementdependency_response_compound_create(
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

void ezsignelementdependency_response_compound_free(ezsignelementdependency_response_compound_t *ezsignelementdependency_response_compound);

ezsignelementdependency_response_compound_t *ezsignelementdependency_response_compound_parseFromJSON(cJSON *ezsignelementdependency_response_compoundJSON);

cJSON *ezsignelementdependency_response_compound_convertToJSON(ezsignelementdependency_response_compound_t *ezsignelementdependency_response_compound);

#endif /* _ezsignelementdependency_response_compound_H_ */

