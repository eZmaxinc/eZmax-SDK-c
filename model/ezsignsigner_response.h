/*
 * ezsignsigner_response.h
 *
 * An Ezsignsigner Object
 */

#ifndef _ezsignsigner_response_H_
#define _ezsignsigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_response_t ezsignsigner_response_t;




typedef struct ezsignsigner_response_t {
    int pki_ezsignsigner_id; //numeric
    int fki_taxassignment_id; //numeric
    int fki_secretquestion_id; //numeric
    int fki_userlogintype_id; //numeric
    char *s_userlogintype_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigner_response_t;

__attribute__((deprecated)) ezsignsigner_response_t *ezsignsigner_response_create(
    int pki_ezsignsigner_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x
);

void ezsignsigner_response_free(ezsignsigner_response_t *ezsignsigner_response);

ezsignsigner_response_t *ezsignsigner_response_parseFromJSON(cJSON *ezsignsigner_responseJSON);

cJSON *ezsignsigner_response_convertToJSON(ezsignsigner_response_t *ezsignsigner_response);

#endif /* _ezsignsigner_response_H_ */

