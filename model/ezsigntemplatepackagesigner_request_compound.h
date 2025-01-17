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

// Enum  for ezsigntemplatepackagesigner_request_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__Manual, ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__Creator, ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__User, ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__Usergroup } ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__e;

char* ezsigntemplatepackagesigner_request_compound_e_ezsigntemplatepackagesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__e e_ezsigntemplatepackagesigner_mapping);

ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__e ezsigntemplatepackagesigner_request_compound_e_ezsigntemplatepackagesigner_mapping_FromString(char* e_ezsigntemplatepackagesigner_mapping);



typedef struct ezsigntemplatepackagesigner_request_compound_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int b_ezsigntemplatepackagesigner_receivecopy; //boolean
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping; // custom
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_request_compound_t;

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_compoundJSON);

cJSON *ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

#endif /* _ezsigntemplatepackagesigner_request_compound_H_ */

