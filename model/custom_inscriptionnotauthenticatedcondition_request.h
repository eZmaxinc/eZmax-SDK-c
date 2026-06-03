/*
 * custom_inscriptionnotauthenticatedcondition_request.h
 *
 * A custom Inscriptionnotauthenticatedcondition object
 */

#ifndef _custom_inscriptionnotauthenticatedcondition_request_H_
#define _custom_inscriptionnotauthenticatedcondition_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_inscriptionnotauthenticatedcondition_request_t custom_inscriptionnotauthenticatedcondition_request_t;




typedef struct custom_inscriptionnotauthenticatedcondition_request_t {
    int *pki_inscriptionnotauthenticatedcondition_id; //numeric
    char *dt_inscriptionnotauthenticatedcondition_completed; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_inscriptionnotauthenticatedcondition_request_t;

__attribute__((deprecated)) custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_create(
    int *pki_inscriptionnotauthenticatedcondition_id,
    char *dt_inscriptionnotauthenticatedcondition_completed
);

void custom_inscriptionnotauthenticatedcondition_request_free(custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request);

custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request_parseFromJSON(cJSON *custom_inscriptionnotauthenticatedcondition_requestJSON);

cJSON *custom_inscriptionnotauthenticatedcondition_request_convertToJSON(custom_inscriptionnotauthenticatedcondition_request_t *custom_inscriptionnotauthenticatedcondition_request);

#endif /* _custom_inscriptionnotauthenticatedcondition_request_H_ */

