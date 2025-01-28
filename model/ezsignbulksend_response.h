/*
 * ezsignbulksend_response.h
 *
 * An Ezsignbulksend Object
 */

#ifndef _ezsignbulksend_response_H_
#define _ezsignbulksend_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_response_t ezsignbulksend_response_t;

#include "common_audit.h"
#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsignbulksend_response_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_response_t;

__attribute__((deprecated)) ezsignbulksend_response_t *ezsignbulksend_response_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit
);

void ezsignbulksend_response_free(ezsignbulksend_response_t *ezsignbulksend_response);

ezsignbulksend_response_t *ezsignbulksend_response_parseFromJSON(cJSON *ezsignbulksend_responseJSON);

cJSON *ezsignbulksend_response_convertToJSON(ezsignbulksend_response_t *ezsignbulksend_response);

#endif /* _ezsignbulksend_response_H_ */

