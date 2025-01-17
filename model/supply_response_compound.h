/*
 * supply_response_compound.h
 *
 * A Supply Object
 */

#ifndef _supply_response_compound_H_
#define _supply_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_response_compound_t supply_response_compound_t;

#include "multilingual_supply_description.h"
#include "supply_response.h"



typedef struct supply_response_compound_t {
    int pki_supply_id; //numeric
    int fki_glaccount_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    int fki_variableexpense_id; //numeric
    char *s_supply_code; // string
    struct multilingual_supply_description_t *obj_supply_description; //model
    char *d_supply_unitprice; // string
    int b_supply_isactive; //boolean
    int b_supply_variableprice; //boolean
    char *s_glaccount_description_x; // string
    char *s_glaccountcontainer_longdescription_x; // string
    char *s_variableexpense_description_x; // string

} supply_response_compound_t;

supply_response_compound_t *supply_response_compound_create(
    int pki_supply_id,
    int fki_glaccount_id,
    int fki_glaccountcontainer_id,
    int fki_variableexpense_id,
    char *s_supply_code,
    multilingual_supply_description_t *obj_supply_description,
    char *d_supply_unitprice,
    int b_supply_isactive,
    int b_supply_variableprice,
    char *s_glaccount_description_x,
    char *s_glaccountcontainer_longdescription_x,
    char *s_variableexpense_description_x
);

void supply_response_compound_free(supply_response_compound_t *supply_response_compound);

supply_response_compound_t *supply_response_compound_parseFromJSON(cJSON *supply_response_compoundJSON);

cJSON *supply_response_compound_convertToJSON(supply_response_compound_t *supply_response_compound);

#endif /* _supply_response_compound_H_ */

