/*
 * ezsigntemplatesigner_request_v2.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_request_v2_H_
#define _ezsigntemplatesigner_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_request_v2_t ezsigntemplatesigner_request_v2_t;

#include "field_e_ezsigntemplatesigner_mapping.h"
#include "field_e_ezsigntemplatesigner_role.h"



typedef struct ezsigntemplatesigner_request_v2_t {
    int *pki_ezsigntemplatesigner_id; //numeric
    int *fki_ezsigntemplate_id; //numeric
    int *fki_user_id; //numeric
    int *fki_usergroup_id; //numeric
    int *fki_ezdoctemplatedocument_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_role__e e_ezsigntemplatesigner_role; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping; //referenced enum
    char *s_ezsigntemplatesigner_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_request_v2_t;

__attribute__((deprecated)) ezsigntemplatesigner_request_v2_t *ezsigntemplatesigner_request_v2_create(
    int *pki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplate_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_ezdoctemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_role__e e_ezsigntemplatesigner_role,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_request_v2_free(ezsigntemplatesigner_request_v2_t *ezsigntemplatesigner_request_v2);

ezsigntemplatesigner_request_v2_t *ezsigntemplatesigner_request_v2_parseFromJSON(cJSON *ezsigntemplatesigner_request_v2JSON);

cJSON *ezsigntemplatesigner_request_v2_convertToJSON(ezsigntemplatesigner_request_v2_t *ezsigntemplatesigner_request_v2);

#endif /* _ezsigntemplatesigner_request_v2_H_ */

