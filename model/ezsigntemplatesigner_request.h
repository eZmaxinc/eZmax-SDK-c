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

// Enum  for ezsigntemplatesigner_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatesigner_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatesigner_request__Manual, ezmax_api_definition__full_ezsigntemplatesigner_request__Creator, ezmax_api_definition__full_ezsigntemplatesigner_request__User, ezmax_api_definition__full_ezsigntemplatesigner_request__Usergroup } ezmax_api_definition__full_ezsigntemplatesigner_request__e;

char* ezsigntemplatesigner_request_e_ezsigntemplatesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatesigner_request__e e_ezsigntemplatesigner_mapping);

ezmax_api_definition__full_ezsigntemplatesigner_request__e ezsigntemplatesigner_request_e_ezsigntemplatesigner_mapping_FromString(char* e_ezsigntemplatesigner_mapping);



typedef struct ezsigntemplatesigner_request_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int b_ezsigntemplatesigner_receivecopy; //boolean
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping; // custom
    char *s_ezsigntemplatesigner_description; // string

} ezsigntemplatesigner_request_t;

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_ezdoctemplatedocument_id,
    int b_ezsigntemplatesigner_receivecopy,
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_request_free(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_parseFromJSON(cJSON *ezsigntemplatesigner_requestJSON);

cJSON *ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

#endif /* _ezsigntemplatesigner_request_H_ */

