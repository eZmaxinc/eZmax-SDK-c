/*
 * cors_request_compound.h
 *
 * A Cors Object and children
 */

#ifndef _cors_request_compound_H_
#define _cors_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_request_compound_t cors_request_compound_t;




typedef struct cors_request_compound_t {
    int pki_cors_id; //numeric
    int fki_apikey_id; //numeric
    char *s_cors_entryurl; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cors_request_compound_t;

__attribute__((deprecated)) cors_request_compound_t *cors_request_compound_create(
    int pki_cors_id,
    int fki_apikey_id,
    char *s_cors_entryurl
);

void cors_request_compound_free(cors_request_compound_t *cors_request_compound);

cors_request_compound_t *cors_request_compound_parseFromJSON(cJSON *cors_request_compoundJSON);

cJSON *cors_request_compound_convertToJSON(cors_request_compound_t *cors_request_compound);

#endif /* _cors_request_compound_H_ */

