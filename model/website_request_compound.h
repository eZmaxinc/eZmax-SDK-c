/*
 * website_request_compound.h
 *
 * A Website Object and children to create a complete structure
 */

#ifndef _website_request_compound_H_
#define _website_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_request_compound_t website_request_compound_t;




typedef struct website_request_compound_t {
    int pki_website_id; //numeric
    int fki_websitetype_id; //numeric
    char *s_website_address; // string

} website_request_compound_t;

website_request_compound_t *website_request_compound_create(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
);

void website_request_compound_free(website_request_compound_t *website_request_compound);

website_request_compound_t *website_request_compound_parseFromJSON(cJSON *website_request_compoundJSON);

cJSON *website_request_compound_convertToJSON(website_request_compound_t *website_request_compound);

#endif /* _website_request_compound_H_ */

