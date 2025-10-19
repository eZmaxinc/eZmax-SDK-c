/*
 * rejectedoffertopurchase_list_element.h
 *
 * A Rejectedoffertopurchase List Element
 */

#ifndef _rejectedoffertopurchase_list_element_H_
#define _rejectedoffertopurchase_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_list_element_t rejectedoffertopurchase_list_element_t;




typedef struct rejectedoffertopurchase_list_element_t {
    int pki_rejectedoffertopurchase_id; //numeric
    char *s_rejectedoffertopurchase_number; // string
    char *dt_rejectedoffertopurchase_date; // string
    int b_rejectedoffertopurchase_isactive; //boolean
    char *dt_created_date; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    char *s_province_name_x; // string
    char *s_country_name_x; // string
    int b_rejectedoffertopurchase_linkedtoinscription; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_list_element_t;

__attribute__((deprecated)) rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_create(
    int pki_rejectedoffertopurchase_id,
    char *s_rejectedoffertopurchase_number,
    char *dt_rejectedoffertopurchase_date,
    int b_rejectedoffertopurchase_isactive,
    char *dt_created_date,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x,
    int b_rejectedoffertopurchase_linkedtoinscription
);

void rejectedoffertopurchase_list_element_free(rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element);

rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_parseFromJSON(cJSON *rejectedoffertopurchase_list_elementJSON);

cJSON *rejectedoffertopurchase_list_element_convertToJSON(rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element);

#endif /* _rejectedoffertopurchase_list_element_H_ */

