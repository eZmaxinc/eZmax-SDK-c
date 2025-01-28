/*
 * ezsigndiscussion_response_compound.h
 *
 * A Ezsigndiscussion Object
 */

#ifndef _ezsigndiscussion_response_compound_H_
#define _ezsigndiscussion_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_response_compound_t ezsigndiscussion_response_compound_t;

#include "discussion_response_compound.h"



typedef struct ezsigndiscussion_response_compound_t {
    int pki_ezsigndiscussion_id; //numeric
    int fki_ezsignpage_id; //numeric
    int fki_discussion_id; //numeric
    int i_ezsigndiscussion_x; //numeric
    int i_ezsigndiscussion_y; //numeric
    int i_ezsigndiscussion_pagenumber; //numeric
    struct discussion_response_compound_t *obj_discussion; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndiscussion_response_compound_t;

__attribute__((deprecated)) ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsignpage_id,
    int fki_discussion_id,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    int i_ezsigndiscussion_pagenumber,
    discussion_response_compound_t *obj_discussion
);

void ezsigndiscussion_response_compound_free(ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound);

ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_parseFromJSON(cJSON *ezsigndiscussion_response_compoundJSON);

cJSON *ezsigndiscussion_response_compound_convertToJSON(ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound);

#endif /* _ezsigndiscussion_response_compound_H_ */

