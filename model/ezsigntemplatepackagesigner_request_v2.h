/*
 * ezsigntemplatepackagesigner_request_v2.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef _ezsigntemplatepackagesigner_request_v2_H_
#define _ezsigntemplatepackagesigner_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_request_v2_t ezsigntemplatepackagesigner_request_v2_t;

#include "field_e_ezsigntemplatepackagesigner_mapping.h"
#include "field_e_ezsigntemplatepackagesigner_role.h"



typedef struct ezsigntemplatepackagesigner_request_v2_t {
    int *pki_ezsigntemplatepackagesigner_id; //numeric
    int *fki_ezsigntemplatepackage_id; //numeric
    int *fki_ezdoctemplatedocument_id; //numeric
    int *fki_user_id; //numeric
    int *fki_usergroup_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_role__e e_ezsigntemplatepackagesigner_role; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping; //referenced enum
    char *s_ezsigntemplatepackagesigner_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_request_v2_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_request_v2_t *ezsigntemplatepackagesigner_request_v2_create(
    int *pki_ezsigntemplatepackagesigner_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezdoctemplatedocument_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_role__e e_ezsigntemplatepackagesigner_role,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_request_v2_free(ezsigntemplatepackagesigner_request_v2_t *ezsigntemplatepackagesigner_request_v2);

ezsigntemplatepackagesigner_request_v2_t *ezsigntemplatepackagesigner_request_v2_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_v2JSON);

cJSON *ezsigntemplatepackagesigner_request_v2_convertToJSON(ezsigntemplatepackagesigner_request_v2_t *ezsigntemplatepackagesigner_request_v2);

#endif /* _ezsigntemplatepackagesigner_request_v2_H_ */

