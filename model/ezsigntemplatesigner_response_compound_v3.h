/*
 * ezsigntemplatesigner_response_compound_v3.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_response_compound_v3_H_
#define _ezsigntemplatesigner_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_response_compound_v3_t ezsigntemplatesigner_response_compound_v3_t;

#include "field_e_ezsigntemplatesigner_mapping.h"
#include "field_e_ezsigntemplatesigner_role.h"



typedef struct ezsigntemplatesigner_response_compound_v3_t {
    int *pki_ezsigntemplatesigner_id; //numeric
    int *fki_ezsigntemplate_id; //numeric
    int *fki_user_id; //numeric
    int *fki_usergroup_id; //numeric
    int *fki_ezdoctemplatedocument_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_role__e e_ezsigntemplatesigner_role; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping; //referenced enum
    char *s_ezsigntemplatesigner_description; // string
    char *s_user_name; // string
    char *s_usergroup_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_response_compound_v3_t;

__attribute__((deprecated)) ezsigntemplatesigner_response_compound_v3_t *ezsigntemplatesigner_response_compound_v3_create(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_role__e e_ezsigntemplatesigner_role,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
);

void ezsigntemplatesigner_response_compound_v3_free(ezsigntemplatesigner_response_compound_v3_t *ezsigntemplatesigner_response_compound_v3);

ezsigntemplatesigner_response_compound_v3_t *ezsigntemplatesigner_response_compound_v3_parseFromJSON(cJSON *ezsigntemplatesigner_response_compound_v3JSON);

cJSON *ezsigntemplatesigner_response_compound_v3_convertToJSON(ezsigntemplatesigner_response_compound_v3_t *ezsigntemplatesigner_response_compound_v3);

#endif /* _ezsigntemplatesigner_response_compound_v3_H_ */

