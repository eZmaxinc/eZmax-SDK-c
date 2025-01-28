/*
 * ezsigntemplatepackagesigner_request_compound.h
 *
 * A Ezsigntemplatepackagesigner Object and children
 */

#ifndef _ezsigntemplatepackagesigner_request_compound_H_
#define _ezsigntemplatepackagesigner_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_request_compound_t ezsigntemplatepackagesigner_request_compound_t;

#include "field_e_ezsigntemplatepackagesigner_mapping.h"



typedef struct ezsigntemplatepackagesigner_request_compound_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int b_ezsigntemplatepackagesigner_receivecopy; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping; //referenced enum
    char *s_ezsigntemplatepackagesigner_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_request_compound_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_compoundJSON);

cJSON *ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

#endif /* _ezsigntemplatepackagesigner_request_compound_H_ */

