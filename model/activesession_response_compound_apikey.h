/*
 * activesession_response_compound_apikey.h
 *
 * An Activesession-&gt;Apikey object and children to create a complete structure
 */

#ifndef _activesession_response_compound_apikey_H_
#define _activesession_response_compound_apikey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_apikey_t activesession_response_compound_apikey_t;




typedef struct activesession_response_compound_apikey_t {
    int pki_apikey_id; //numeric
    char *s_apikey_description_x; // string

} activesession_response_compound_apikey_t;

activesession_response_compound_apikey_t *activesession_response_compound_apikey_create(
    int pki_apikey_id,
    char *s_apikey_description_x
);

void activesession_response_compound_apikey_free(activesession_response_compound_apikey_t *activesession_response_compound_apikey);

activesession_response_compound_apikey_t *activesession_response_compound_apikey_parseFromJSON(cJSON *activesession_response_compound_apikeyJSON);

cJSON *activesession_response_compound_apikey_convertToJSON(activesession_response_compound_apikey_t *activesession_response_compound_apikey);

#endif /* _activesession_response_compound_apikey_H_ */

