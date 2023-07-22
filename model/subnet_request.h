/*
 * subnet_request.h
 *
 * A Subnet Object
 */

#ifndef _subnet_request_H_
#define _subnet_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_request_t subnet_request_t;

#include "multilingual_subnet_description.h"



typedef struct subnet_request_t {
    int pki_subnet_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    struct multilingual_subnet_description_t *obj_subnet_description; //model
    int i_subnet_network; //numeric
    int i_subnet_mask; //numeric

} subnet_request_t;

subnet_request_t *subnet_request_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    int i_subnet_network,
    int i_subnet_mask
);

void subnet_request_free(subnet_request_t *subnet_request);

subnet_request_t *subnet_request_parseFromJSON(cJSON *subnet_requestJSON);

cJSON *subnet_request_convertToJSON(subnet_request_t *subnet_request);

#endif /* _subnet_request_H_ */

