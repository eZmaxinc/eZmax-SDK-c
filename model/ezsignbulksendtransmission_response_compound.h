/*
 * ezsignbulksendtransmission_response_compound.h
 *
 * An Ezsignbulksendtransmission Object and children to create a complete structure
 */

#ifndef _ezsignbulksendtransmission_response_compound_H_
#define _ezsignbulksendtransmission_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_response_compound_t ezsignbulksendtransmission_response_compound_t;

#include "common_audit.h"
#include "ezsignbulksendtransmission_response.h"



typedef struct ezsignbulksendtransmission_response_compound_t {
    int pki_ezsignbulksendtransmission_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    char *s_ezsignbulksendtransmission_description; // string
    int i_ezsignbulksendtransmission_errors; //numeric
    struct common_audit_t *obj_audit; //model

} ezsignbulksendtransmission_response_compound_t;

ezsignbulksendtransmission_response_compound_t *ezsignbulksendtransmission_response_compound_create(
    int pki_ezsignbulksendtransmission_id,
    int fki_ezsignbulksend_id,
    char *s_ezsignbulksendtransmission_description,
    int i_ezsignbulksendtransmission_errors,
    common_audit_t *obj_audit
);

void ezsignbulksendtransmission_response_compound_free(ezsignbulksendtransmission_response_compound_t *ezsignbulksendtransmission_response_compound);

ezsignbulksendtransmission_response_compound_t *ezsignbulksendtransmission_response_compound_parseFromJSON(cJSON *ezsignbulksendtransmission_response_compoundJSON);

cJSON *ezsignbulksendtransmission_response_compound_convertToJSON(ezsignbulksendtransmission_response_compound_t *ezsignbulksendtransmission_response_compound);

#endif /* _ezsignbulksendtransmission_response_compound_H_ */

