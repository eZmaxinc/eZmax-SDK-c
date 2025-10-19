/*
 * customer_list_element.h
 *
 * A Customer List Element
 */

#ifndef _customer_list_element_H_
#define _customer_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_list_element_t customer_list_element_t;




typedef struct customer_list_element_t {
    int pki_customer_id; //numeric
    char *s_customer_name; // string
    char *s_customer_note; // string
    char *s_customer_code; // string
    int b_customer_isactive; //boolean
    char *s_phone_e164; // string
    char *s_email_address; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    char *s_province_name_x; // string
    char *s_country_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_list_element_t;

__attribute__((deprecated)) customer_list_element_t *customer_list_element_create(
    int pki_customer_id,
    char *s_customer_name,
    char *s_customer_note,
    char *s_customer_code,
    int b_customer_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x
);

void customer_list_element_free(customer_list_element_t *customer_list_element);

customer_list_element_t *customer_list_element_parseFromJSON(cJSON *customer_list_elementJSON);

cJSON *customer_list_element_convertToJSON(customer_list_element_t *customer_list_element);

#endif /* _customer_list_element_H_ */

