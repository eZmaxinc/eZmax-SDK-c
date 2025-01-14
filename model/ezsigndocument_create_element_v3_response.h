/*
 * ezsigndocument_create_element_v3_response.h
 *
 * A Ezsigndocument createObject Response
 */

#ifndef _ezsigndocument_create_element_v3_response_H_
#define _ezsigndocument_create_element_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_element_v3_response_t ezsigndocument_create_element_v3_response_t;

#include "ezsigndocument_matchingtemplate_v3_response.h"



typedef struct ezsigndocument_create_element_v3_response_t {
    int pki_ezsigndocument_id; //numeric
    list_t *a_obj_matchingtemplate; //nonprimitive container

} ezsigndocument_create_element_v3_response_t;

ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_create(
    int pki_ezsigndocument_id,
    list_t *a_obj_matchingtemplate
);

void ezsigndocument_create_element_v3_response_free(ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response);

ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response_parseFromJSON(cJSON *ezsigndocument_create_element_v3_responseJSON);

cJSON *ezsigndocument_create_element_v3_response_convertToJSON(ezsigndocument_create_element_v3_response_t *ezsigndocument_create_element_v3_response);

#endif /* _ezsigndocument_create_element_v3_response_H_ */

