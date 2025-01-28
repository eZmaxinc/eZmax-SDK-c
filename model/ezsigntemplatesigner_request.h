/*
 * ezsigntemplatesigner_request.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_request_H_
#define _ezsigntemplatesigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_request_t ezsigntemplatesigner_request_t;

#include "field_e_ezsigntemplatesigner_mapping.h"



typedef struct ezsigntemplatesigner_request_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int b_ezsigntemplatesigner_receivecopy; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping; //referenced enum
    char *s_ezsigntemplatesigner_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_request_t;

__attribute__((deprecated)) ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_ezdoctemplatedocument_id,
    int b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_request_free(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_parseFromJSON(cJSON *ezsigntemplatesigner_requestJSON);

cJSON *ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

#endif /* _ezsigntemplatesigner_request_H_ */

