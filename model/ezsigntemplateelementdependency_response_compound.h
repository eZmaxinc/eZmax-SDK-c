/*
 * ezsigntemplateelementdependency_response_compound.h
 *
 * An Ezsigntemplateelementdependency Object and children to create a complete structure
 */

#ifndef _ezsigntemplateelementdependency_response_compound_H_
#define _ezsigntemplateelementdependency_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateelementdependency_response_compound_t ezsigntemplateelementdependency_response_compound_t;

#include "field_e_ezsigntemplateelementdependency_operator.h"
#include "field_e_ezsigntemplateelementdependency_validation.h"



typedef struct ezsigntemplateelementdependency_response_compound_t {
    int pki_ezsigntemplateelementdependency_id; //numeric
    int fki_ezsigntemplateformfield_id; //numeric
    int fki_ezsigntemplatesignature_id; //numeric
    int fki_ezsigntemplateformfield_id_validation; //numeric
    int fki_ezsigntemplateformfieldgroup_id_validation; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation; //referenced enum
    int b_ezsigntemplateelementdependency_selected; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator; //referenced enum
    char *s_ezsigntemplateelementdependency_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateelementdependency_response_compound_t;

__attribute__((deprecated)) ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_create(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id,
    int fki_ezsigntemplatesignature_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
);

void ezsigntemplateelementdependency_response_compound_free(ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound);

ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_parseFromJSON(cJSON *ezsigntemplateelementdependency_response_compoundJSON);

cJSON *ezsigntemplateelementdependency_response_compound_convertToJSON(ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound);

#endif /* _ezsigntemplateelementdependency_response_compound_H_ */

