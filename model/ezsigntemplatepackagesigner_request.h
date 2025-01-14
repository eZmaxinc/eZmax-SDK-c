/*
 * ezsigntemplatepackagesigner_request.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef _ezsigntemplatepackagesigner_request_H_
#define _ezsigntemplatepackagesigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_request_t ezsigntemplatepackagesigner_request_t;

#include "field_e_ezsigntemplatepackagesigner_mapping.h"

// Enum  for ezsigntemplatepackagesigner_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatepackagesigner_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatepackagesigner_request__Manual, ezmax_api_definition__full_ezsigntemplatepackagesigner_request__Creator, ezmax_api_definition__full_ezsigntemplatepackagesigner_request__User, ezmax_api_definition__full_ezsigntemplatepackagesigner_request__Usergroup } ezmax_api_definition__full_ezsigntemplatepackagesigner_request__e;

char* ezsigntemplatepackagesigner_request_e_ezsigntemplatepackagesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatepackagesigner_request__e e_ezsigntemplatepackagesigner_mapping);

ezmax_api_definition__full_ezsigntemplatepackagesigner_request__e ezsigntemplatepackagesigner_request_e_ezsigntemplatepackagesigner_mapping_FromString(char* e_ezsigntemplatepackagesigner_mapping);



typedef struct ezsigntemplatepackagesigner_request_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int b_ezsigntemplatepackagesigner_receivecopy; //boolean
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping; // custom
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_request_t;

ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_request_free(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request);

ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_requestJSON);

cJSON *ezsigntemplatepackagesigner_request_convertToJSON(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request);

#endif /* _ezsigntemplatepackagesigner_request_H_ */

