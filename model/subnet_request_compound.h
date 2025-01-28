/*
 * subnet_request_compound.h
 *
 * A Subnet Object and children
 */

#ifndef _subnet_request_compound_H_
#define _subnet_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_request_compound_t subnet_request_compound_t;

#include "multilingual_subnet_description.h"



typedef struct subnet_request_compound_t {
    int pki_subnet_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    struct multilingual_subnet_description_t *obj_subnet_description; //model
    long i_subnet_network; //numeric
    long i_subnet_mask; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} subnet_request_compound_t;

__attribute__((deprecated)) subnet_request_compound_t *subnet_request_compound_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long i_subnet_network,
    long i_subnet_mask
);

void subnet_request_compound_free(subnet_request_compound_t *subnet_request_compound);

subnet_request_compound_t *subnet_request_compound_parseFromJSON(cJSON *subnet_request_compoundJSON);

cJSON *subnet_request_compound_convertToJSON(subnet_request_compound_t *subnet_request_compound);

#endif /* _subnet_request_compound_H_ */

