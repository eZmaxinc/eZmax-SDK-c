/*
 * website_request.h
 *
 * A Website Object
 */

#ifndef _website_request_H_
#define _website_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_request_t website_request_t;




typedef struct website_request_t {
    int fki_websitetype_id; //numeric
    char *s_website_address; // string

} website_request_t;

website_request_t *website_request_create(
    int fki_websitetype_id,
    char *s_website_address
);

void website_request_free(website_request_t *website_request);

website_request_t *website_request_parseFromJSON(cJSON *website_requestJSON);

cJSON *website_request_convertToJSON(website_request_t *website_request);

#endif /* _website_request_H_ */

