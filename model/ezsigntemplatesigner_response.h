/*
 * ezsigntemplatesigner_response.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_response_H_
#define _ezsigntemplatesigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_response_t ezsigntemplatesigner_response_t;

#include "field_e_ezsigntemplatesigner_mapping.h"

// Enum  for ezsigntemplatesigner_response

typedef enum  { ezmax_api_definition__full_ezsigntemplatesigner_response__NULL = 0, ezmax_api_definition__full_ezsigntemplatesigner_response__Manual, ezmax_api_definition__full_ezsigntemplatesigner_response__Creator, ezmax_api_definition__full_ezsigntemplatesigner_response__User, ezmax_api_definition__full_ezsigntemplatesigner_response__Usergroup } ezmax_api_definition__full_ezsigntemplatesigner_response__e;

char* ezsigntemplatesigner_response_e_ezsigntemplatesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatesigner_response__e e_ezsigntemplatesigner_mapping);

ezmax_api_definition__full_ezsigntemplatesigner_response__e ezsigntemplatesigner_response_e_ezsigntemplatesigner_mapping_FromString(char* e_ezsigntemplatesigner_mapping);



typedef struct ezsigntemplatesigner_response_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int b_ezsigntemplatesigner_receivecopy; //boolean
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping; // custom
    char *s_ezsigntemplatesigner_description; // string
    char *s_user_name; // string
    char *s_usergroup_name_x; // string

} ezsigntemplatesigner_response_t;

ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_ezdoctemplatedocument_id,
    int b_ezsigntemplatesigner_receivecopy,
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
);

void ezsigntemplatesigner_response_free(ezsigntemplatesigner_response_t *ezsigntemplatesigner_response);

ezsigntemplatesigner_response_t *ezsigntemplatesigner_response_parseFromJSON(cJSON *ezsigntemplatesigner_responseJSON);

cJSON *ezsigntemplatesigner_response_convertToJSON(ezsigntemplatesigner_response_t *ezsigntemplatesigner_response);

#endif /* _ezsigntemplatesigner_response_H_ */

