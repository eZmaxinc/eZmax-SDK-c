/*
 * ezsign_suggest_signers_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsign_suggest_signers_v1_response_all_of_H_
#define _ezsign_suggest_signers_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsign_suggest_signers_v1_response_all_of_t ezsign_suggest_signers_v1_response_all_of_t;

#include "ezsign_suggest_signers_v1_response_m_payload.h"



typedef struct ezsign_suggest_signers_v1_response_all_of_t {
    struct ezsign_suggest_signers_v1_response_m_payload_t *m_payload; //model

} ezsign_suggest_signers_v1_response_all_of_t;

ezsign_suggest_signers_v1_response_all_of_t *ezsign_suggest_signers_v1_response_all_of_create(
    ezsign_suggest_signers_v1_response_m_payload_t *m_payload
);

void ezsign_suggest_signers_v1_response_all_of_free(ezsign_suggest_signers_v1_response_all_of_t *ezsign_suggest_signers_v1_response_all_of);

ezsign_suggest_signers_v1_response_all_of_t *ezsign_suggest_signers_v1_response_all_of_parseFromJSON(cJSON *ezsign_suggest_signers_v1_response_all_ofJSON);

cJSON *ezsign_suggest_signers_v1_response_all_of_convertToJSON(ezsign_suggest_signers_v1_response_all_of_t *ezsign_suggest_signers_v1_response_all_of);

#endif /* _ezsign_suggest_signers_v1_response_all_of_H_ */

