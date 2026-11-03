/*
 * custom_inscription.h
 *
 * A custom Inscription object
 */

#ifndef _custom_inscription_H_
#define _custom_inscription_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_inscription_t custom_inscription_t;

#include "address_response_compound.h"



typedef struct custom_inscription_t {
    int *pki_inscription_id; //numeric
    int *fki_address_id; //numeric
    struct address_response_compound_t *obj_address; //model

    int _library_owned; // Is the library responsible for freeing this object?
} custom_inscription_t;

__attribute__((deprecated)) custom_inscription_t *custom_inscription_create(
    int *pki_inscription_id,
    int *fki_address_id,
    address_response_compound_t *obj_address
);

void custom_inscription_free(custom_inscription_t *custom_inscription);

custom_inscription_t *custom_inscription_parseFromJSON(cJSON *custom_inscriptionJSON);

cJSON *custom_inscription_convertToJSON(custom_inscription_t *custom_inscription);

#endif /* _custom_inscription_H_ */

