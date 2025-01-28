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



typedef struct ezsigntemplatesigner_response_compound_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int b_ezsigntemplatesigner_receivecopy; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping; //referenced enum
    char *s_ezsigntemplatesigner_description; // string
    char *s_user_name; // string
    char *s_usergroup_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_response_compound_t;

__attribute__((deprecated)) ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_ezdoctemplatedocument_id,
    int b_ezsigntemplatesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatesigner_mapping__e e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
);

void ezsigntemplatesigner_response_compound_free(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound);

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatesigner_response_compoundJSON);

cJSON *ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound);

#endif /* _ezsigntemplatesigner_response_compound_H_ */

