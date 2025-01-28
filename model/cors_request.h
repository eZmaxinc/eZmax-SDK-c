/*
 * cors_request.h
 *
 * A Cors Object
 */

#ifndef _cors_request_H_
#define _cors_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_request_t cors_request_t;




typedef struct cors_request_t {
    int pki_cors_id; //numeric
    int fki_apikey_id; //numeric
    char *s_cors_entryurl; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cors_request_t;

__attribute__((deprecated)) cors_request_t *cors_request_create(
    int pki_cors_id,
    int fki_apikey_id,
    char *s_cors_entryurl
);

void cors_request_free(cors_request_t *cors_request);

cors_request_t *cors_request_parseFromJSON(cJSON *cors_requestJSON);

cJSON *cors_request_convertToJSON(cors_request_t *cors_request);

#endif /* _cors_request_H_ */

