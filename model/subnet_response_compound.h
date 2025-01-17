/*
 * subnet_response_compound.h
 *
 * A Subnet Object
 */

#ifndef _subnet_response_compound_H_
#define _subnet_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_response_compound_t subnet_response_compound_t;

#include "multilingual_subnet_description.h"
#include "subnet_response.h"



typedef struct subnet_response_compound_t {
    int pki_subnet_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    struct multilingual_subnet_description_t *obj_subnet_description; //model
    long i_subnet_network; //numeric
    long i_subnet_mask; //numeric

} subnet_response_compound_t;

subnet_response_compound_t *subnet_response_compound_create(
    int pki_subnet_id,
    int fki_user_id,
    int fki_apikey_id,
    multilingual_subnet_description_t *obj_subnet_description,
    long i_subnet_network,
    long i_subnet_mask
);

void subnet_response_compound_free(subnet_response_compound_t *subnet_response_compound);

subnet_response_compound_t *subnet_response_compound_parseFromJSON(cJSON *subnet_response_compoundJSON);

cJSON *subnet_response_compound_convertToJSON(subnet_response_compound_t *subnet_response_compound);

#endif /* _subnet_response_compound_H_ */

