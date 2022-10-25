/*
 * ezsignfoldertype_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldertype_get_autocomplete_v2_response_all_of_H_
#define _ezsignfoldertype_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_autocomplete_v2_response_all_of_t ezsignfoldertype_get_autocomplete_v2_response_all_of_t;

#include "ezsignfoldertype_get_autocomplete_v2_response_m_payload.h"



typedef struct ezsignfoldertype_get_autocomplete_v2_response_all_of_t {
    struct ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezsignfoldertype_get_autocomplete_v2_response_all_of_t;

ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_create(
    ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezsignfoldertype_get_autocomplete_v2_response_all_of_free(ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of);

ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezsignfoldertype_get_autocomplete_v2_response_all_ofJSON);

cJSON *ezsignfoldertype_get_autocomplete_v2_response_all_of_convertToJSON(ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of);

#endif /* _ezsignfoldertype_get_autocomplete_v2_response_all_of_H_ */

