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



typedef struct ezsignbulksend_response_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_isactive; //boolean
    struct common_audit_t *obj_audit; //model

} ezsignbulksend_response_t;

ezsignbulksend_response_t *ezsignbulksend_response_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit
);

void ezsignbulksend_response_free(ezsignbulksend_response_t *ezsignbulksend_response);

ezsignbulksend_response_t *ezsignbulksend_response_parseFromJSON(cJSON *ezsignbulksend_responseJSON);

cJSON *ezsignbulksend_response_convertToJSON(ezsignbulksend_response_t *ezsignbulksend_response);

#endif /* _ezsignbulksend_response_H_ */

