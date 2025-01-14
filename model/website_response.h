/*
 * website_response.h
 *
 * A Website Object
 */

#ifndef _website_response_H_
#define _website_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_response_t website_response_t;




typedef struct website_response_t {
    int pki_website_id; //numeric
    int fki_websitetype_id; //numeric
    char *s_website_address; // string

} website_response_t;

website_response_t *website_response_create(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
);

void website_response_free(website_response_t *website_response);

website_response_t *website_response_parseFromJSON(cJSON *website_responseJSON);

cJSON *website_response_convertToJSON(website_response_t *website_response);

#endif /* _website_response_H_ */

