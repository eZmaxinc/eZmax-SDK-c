/*
 * ezsigntemplatepackagesigner_response_compound.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef _ezsigntemplatepackagesigner_response_compound_H_
#define _ezsigntemplatepackagesigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_response_compound_t ezsigntemplatepackagesigner_response_compound_t;

#include "field_e_ezsigntemplatepackagesigner_mapping.h"



typedef struct ezsigntemplatepackagesigner_response_compound_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    char *s_ezdoctemplatedocument_name_x; // string
    int b_ezsigntemplatepackagesigner_receivecopy; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping; //referenced enum
    char *s_ezsigntemplatepackagesigner_description; // string
    char *s_user_name; // string
    char *s_usergroup_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_response_compound_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    char *s_ezdoctemplatedocument_name_x,
    int b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
);

void ezsigntemplatepackagesigner_response_compound_free(ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound);

ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_response_compoundJSON);

cJSON *ezsigntemplatepackagesigner_response_compound_convertToJSON(ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound);

#endif /* _ezsigntemplatepackagesigner_response_compound_H_ */

