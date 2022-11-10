/*
 * custom_ezmaxpricing_response.h
 *
 * A Custom Ezmaxpricing Object
 */

#ifndef _custom_ezmaxpricing_response_H_
#define _custom_ezmaxpricing_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxpricing_response_t custom_ezmaxpricing_response_t;




typedef struct custom_ezmaxpricing_response_t {
    int pki_ezmaxpricing_id; //numeric
    char *d_ezmaxpricing_rebateezsignallagents; // string
    char *dt_ezmaxpricing_start; // string
    char *dt_ezmaxpricing_end; // string

} custom_ezmaxpricing_response_t;

custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_create(
    int pki_ezmaxpricing_id,
    char *d_ezmaxpricing_rebateezsignallagents,
    char *dt_ezmaxpricing_start,
    char *dt_ezmaxpricing_end
);

void custom_ezmaxpricing_response_free(custom_ezmaxpricing_response_t *custom_ezmaxpricing_response);

custom_ezmaxpricing_response_t *custom_ezmaxpricing_response_parseFromJSON(cJSON *custom_ezmaxpricing_responseJSON);

cJSON *custom_ezmaxpricing_response_convertToJSON(custom_ezmaxpricing_response_t *custom_ezmaxpricing_response);

#endif /* _custom_ezmaxpricing_response_H_ */

