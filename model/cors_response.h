/*
 * cors_response.h
 *
 * A Cors Object
 */

#ifndef _cors_response_H_
#define _cors_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_response_t cors_response_t;




typedef struct cors_response_t {
    int pki_cors_id; //numeric
    int fki_apikey_id; //numeric
    char *s_cors_entryurl; // string

} cors_response_t;

cors_response_t *cors_response_create(
    int pki_cors_id,
    int fki_apikey_id,
    char *s_cors_entryurl
);

void cors_response_free(cors_response_t *cors_response);

cors_response_t *cors_response_parseFromJSON(cJSON *cors_responseJSON);

cJSON *cors_response_convertToJSON(cors_response_t *cors_response);

#endif /* _cors_response_H_ */

