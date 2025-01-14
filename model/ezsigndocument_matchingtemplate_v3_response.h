/*
 * ezsigndocument_matchingtemplate_v3_response.h
 *
 * A Ezsigndocument createObject Response
 */

#ifndef _ezsigndocument_matchingtemplate_v3_response_H_
#define _ezsigndocument_matchingtemplate_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_matchingtemplate_v3_response_t ezsigndocument_matchingtemplate_v3_response_t;




typedef struct ezsigndocument_matchingtemplate_v3_response_t {
    int pki_ezsigntemplate_id; //numeric
    int pki_ezsigntemplateglobal_id; //numeric

} ezsigndocument_matchingtemplate_v3_response_t;

ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_create(
    int pki_ezsigntemplate_id,
    int pki_ezsigntemplateglobal_id
);

void ezsigndocument_matchingtemplate_v3_response_free(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response);

ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response_parseFromJSON(cJSON *ezsigndocument_matchingtemplate_v3_responseJSON);

cJSON *ezsigndocument_matchingtemplate_v3_response_convertToJSON(ezsigndocument_matchingtemplate_v3_response_t *ezsigndocument_matchingtemplate_v3_response);

#endif /* _ezsigndocument_matchingtemplate_v3_response_H_ */

