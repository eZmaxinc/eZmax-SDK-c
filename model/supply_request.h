/*
 * supply_request.h
 *
 * A Supply Object
 */

#ifndef _supply_request_H_
#define _supply_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_request_t supply_request_t;

#include "multilingual_supply_description.h"



typedef struct supply_request_t {
    int pki_supply_id; //numeric
    int fki_glaccount_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    int fki_variableexpense_id; //numeric
    char *s_supply_code; // string
    struct multilingual_supply_description_t *obj_supply_description; //model
    char *d_supply_unitprice; // string
    int b_supply_isactive; //boolean
    int b_supply_variableprice; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} supply_request_t;

__attribute__((deprecated)) supply_request_t *supply_request_create(
    int pki_supply_id,
    int fki_glaccount_id,
    int fki_glaccountcontainer_id,
    int fki_variableexpense_id,
    char *s_supply_code,
    multilingual_supply_description_t *obj_supply_description,
    char *d_supply_unitprice,
    int b_supply_isactive,
    int b_supply_variableprice
);

void supply_request_free(supply_request_t *supply_request);

supply_request_t *supply_request_parseFromJSON(cJSON *supply_requestJSON);

cJSON *supply_request_convertToJSON(supply_request_t *supply_request);

#endif /* _supply_request_H_ */

