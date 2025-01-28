/*
 * supply_list_element.h
 *
 * A Supply List Element
 */

#ifndef _supply_list_element_H_
#define _supply_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_list_element_t supply_list_element_t;




typedef struct supply_list_element_t {
    int pki_supply_id; //numeric
    int fki_glaccount_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    int fki_variableexpense_id; //numeric
    char *s_supply_code; // string
    char *s_supply_description_x; // string
    char *d_supply_unitprice; // string
    int b_supply_isactive; //boolean
    int b_supply_variableprice; //boolean
    char *s_glaccount_description_x; // string
    char *s_glaccountcontainer_longdescription_x; // string
    char *s_variableexpense_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} supply_list_element_t;

__attribute__((deprecated)) supply_list_element_t *supply_list_element_create(
    int pki_supply_id,
    int fki_glaccount_id,
    int fki_glaccountcontainer_id,
    int fki_variableexpense_id,
    char *s_supply_code,
    char *s_supply_description_x,
    char *d_supply_unitprice,
    int b_supply_isactive,
    int b_supply_variableprice,
    char *s_glaccount_description_x,
    char *s_glaccountcontainer_longdescription_x,
    char *s_variableexpense_description_x
);

void supply_list_element_free(supply_list_element_t *supply_list_element);

supply_list_element_t *supply_list_element_parseFromJSON(cJSON *supply_list_elementJSON);

cJSON *supply_list_element_convertToJSON(supply_list_element_t *supply_list_element);

#endif /* _supply_list_element_H_ */

