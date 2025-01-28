/*
 * ezsignbulksendtransmission_response.h
 *
 * An Ezsignbulksendtransmission Object
 */

#ifndef _ezsignbulksendtransmission_response_H_
#define _ezsignbulksendtransmission_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_response_t ezsignbulksendtransmission_response_t;

#include "common_audit.h"



typedef struct ezsignbulksendtransmission_response_t {
    int pki_ezsignbulksendtransmission_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    char *s_ezsignbulksendtransmission_description; // string
    int i_ezsignbulksendtransmission_errors; //numeric
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendtransmission_response_t;

__attribute__((deprecated)) ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_create(
    int pki_ezsignbulksendtransmission_id,
    int fki_ezsignbulksend_id,
    char *s_ezsignbulksendtransmission_description,
    int i_ezsignbulksendtransmission_errors,
    common_audit_t *obj_audit
);

void ezsignbulksendtransmission_response_free(ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response);

ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_parseFromJSON(cJSON *ezsignbulksendtransmission_responseJSON);

cJSON *ezsignbulksendtransmission_response_convertToJSON(ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response);

#endif /* _ezsignbulksendtransmission_response_H_ */

