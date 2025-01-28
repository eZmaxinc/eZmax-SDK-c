/*
 * ezsigntemplatepackage_response.h
 *
 * A Ezsigntemplatepackage Object
 */

#ifndef _ezsigntemplatepackage_response_H_
#define _ezsigntemplatepackage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_response_t ezsigntemplatepackage_response_t;




typedef struct ezsigntemplatepackage_response_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    char *s_ezdoctemplatedocument_name_x; // string
    char *s_language_name_x; // string
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_adminonly; //boolean
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int b_ezsigntemplatepackage_isactive; //boolean
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsigntemplatepackage_editallowed; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_response_t;

__attribute__((deprecated)) ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_editallowed
);

void ezsigntemplatepackage_response_free(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response);

ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_parseFromJSON(cJSON *ezsigntemplatepackage_responseJSON);

cJSON *ezsigntemplatepackage_response_convertToJSON(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response);

#endif /* _ezsigntemplatepackage_response_H_ */

