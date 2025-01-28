/*
 * ezsigntemplateelementdependency_request.h
 *
 * An Ezsigntemplateelementdependency Object
 */

#ifndef _ezsigntemplateelementdependency_request_H_
#define _ezsigntemplateelementdependency_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateelementdependency_request_t ezsigntemplateelementdependency_request_t;

#include "field_e_ezsigntemplateelementdependency_operator.h"
#include "field_e_ezsigntemplateelementdependency_validation.h"



typedef struct ezsigntemplateelementdependency_request_t {
    int pki_ezsigntemplateelementdependency_id; //numeric
    int fki_ezsigntemplateformfield_id_validation; //numeric
    int fki_ezsigntemplateformfieldgroup_id_validation; //numeric
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel; // string
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel; // string
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation; //referenced enum
    int b_ezsigntemplateelementdependency_selected; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator; //referenced enum
    char *s_ezsigntemplateelementdependency_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateelementdependency_request_t;

__attribute__((deprecated)) ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_create(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
);

void ezsigntemplateelementdependency_request_free(ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request);

ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_parseFromJSON(cJSON *ezsigntemplateelementdependency_requestJSON);

cJSON *ezsigntemplateelementdependency_request_convertToJSON(ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request);

#endif /* _ezsigntemplateelementdependency_request_H_ */

