/*
 * ezsigndiscussion_request.h
 *
 * An Ezsigndiscussion Object
 */

#ifndef _ezsigndiscussion_request_H_
#define _ezsigndiscussion_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_request_t ezsigndiscussion_request_t;

#include "discussion_request.h"



typedef struct ezsigndiscussion_request_t {
    int pki_ezsigndiscussion_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int i_ezsigndiscussion_pagenumber; //numeric
    int i_ezsigndiscussion_x; //numeric
    int i_ezsigndiscussion_y; //numeric
    struct discussion_request_t *obj_discussion; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndiscussion_request_t;

__attribute__((deprecated)) ezsigndiscussion_request_t *ezsigndiscussion_request_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsigndocument_id,
    int i_ezsigndiscussion_pagenumber,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    discussion_request_t *obj_discussion
);

void ezsigndiscussion_request_free(ezsigndiscussion_request_t *ezsigndiscussion_request);

ezsigndiscussion_request_t *ezsigndiscussion_request_parseFromJSON(cJSON *ezsigndiscussion_requestJSON);

cJSON *ezsigndiscussion_request_convertToJSON(ezsigndiscussion_request_t *ezsigndiscussion_request);

#endif /* _ezsigndiscussion_request_H_ */

