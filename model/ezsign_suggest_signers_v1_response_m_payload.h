/*
 * ezsign_suggest_signers_v1_response_m_payload.h
 *
 * Payload for GET /1/module/ezsign/suggestSigners
 */

#ifndef _ezsign_suggest_signers_v1_response_m_payload_H_
#define _ezsign_suggest_signers_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsign_suggest_signers_v1_response_m_payload_t ezsign_suggest_signers_v1_response_m_payload_t;

#include "custom_user_response.h"
#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct ezsign_suggest_signers_v1_response_m_payload_t {
    list_t *a_obj_ezsignfoldersignerassociation; //nonprimitive container
    list_t *a_obj_user_team; //nonprimitive container
    list_t *a_obj_user; //nonprimitive container

} ezsign_suggest_signers_v1_response_m_payload_t;

ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_create(
    list_t *a_obj_ezsignfoldersignerassociation,
    list_t *a_obj_user_team,
    list_t *a_obj_user
);

void ezsign_suggest_signers_v1_response_m_payload_free(ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload);

ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload_parseFromJSON(cJSON *ezsign_suggest_signers_v1_response_m_payloadJSON);

cJSON *ezsign_suggest_signers_v1_response_m_payload_convertToJSON(ezsign_suggest_signers_v1_response_m_payload_t *ezsign_suggest_signers_v1_response_m_payload);

#endif /* _ezsign_suggest_signers_v1_response_m_payload_H_ */

