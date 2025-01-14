/*
 * custom_apikey.h
 *
 * A Custom Apikey Object
 */

#ifndef _custom_apikey_H_
#define _custom_apikey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_apikey_t custom_apikey_t;




typedef struct custom_apikey_t {
    char *s_apikey_key; // string
    char *s_apikey_secret; // string

} custom_apikey_t;

custom_apikey_t *custom_apikey_create(
    char *s_apikey_key,
    char *s_apikey_secret
);

void custom_apikey_free(custom_apikey_t *custom_apikey);

custom_apikey_t *custom_apikey_parseFromJSON(cJSON *custom_apikeyJSON);

cJSON *custom_apikey_convertToJSON(custom_apikey_t *custom_apikey);

#endif /* _custom_apikey_H_ */

