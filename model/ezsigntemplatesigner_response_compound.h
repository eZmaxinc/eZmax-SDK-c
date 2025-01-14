/*
 * ezsigntemplatesigner_response_compound.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_response_compound_H_
#define _ezsigntemplatesigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_response_compound_t ezsigntemplatesigner_response_compound_t;

#include "field_e_ezsigntemplatesigner_mapping.h"

// Enum  for ezsigntemplatesigner_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatesigner_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatesigner_response_compound__Manual, ezmax_api_definition__full_ezsigntemplatesigner_response_compound__Creator, ezmax_api_definition__full_ezsigntemplatesigner_response_compound__User, ezmax_api_definition__full_ezsigntemplatesigner_response_compound__Usergroup } ezmax_api_definition__full_ezsigntemplatesigner_response_compound__e;

char* ezsigntemplatesigner_response_compound_e_ezsigntemplatesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatesigner_response_compound__e e_ezsigntemplatesigner_mapping);

ezmax_api_definition__full_ezsigntemplatesigner_response_compound__e ezsigntemplatesigner_response_compound_e_ezsigntemplatesigner_mapping_FromString(char* e_ezsigntemplatesigner_mapping);



typedef struct ezsigntemplatesigner_response_compound_t {
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

} ezsigntemplatesigner_response_compound_t;

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_create(
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

void ezsigntemplatesigner_response_compound_free(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound);

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatesigner_response_compoundJSON);

cJSON *ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound);

#endif /* _ezsigntemplatesigner_response_compound_H_ */

