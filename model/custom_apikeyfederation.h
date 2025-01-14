/*
 * custom_apikeyfederation.h
 *
 * A Custom Apikeyfederation Object
 */

#ifndef _custom_apikeyfederation_H_
#define _custom_apikeyfederation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_apikeyfederation_t custom_apikeyfederation_t;




typedef struct custom_apikeyfederation_t {
    char *s_apikeyfederation_key; // string
    char *s_apikeyfederation_secret; // string

} custom_apikeyfederation_t;

custom_apikeyfederation_t *custom_apikeyfederation_create(
    char *s_apikeyfederation_key,
    char *s_apikeyfederation_secret
);

void custom_apikeyfederation_free(custom_apikeyfederation_t *custom_apikeyfederation);

custom_apikeyfederation_t *custom_apikeyfederation_parseFromJSON(cJSON *custom_apikeyfederationJSON);

cJSON *custom_apikeyfederation_convertToJSON(custom_apikeyfederation_t *custom_apikeyfederation);

#endif /* _custom_apikeyfederation_H_ */

