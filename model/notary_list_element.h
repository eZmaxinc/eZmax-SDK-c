/*
 * notary_list_element.h
 *
 * A Notary List Element
 */

#ifndef _notary_list_element_H_
#define _notary_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_list_element_t notary_list_element_t;




typedef struct notary_list_element_t {
    int *pki_notary_id; //numeric
    int *fki_paymentmethod_id; //numeric
    int *fki_province_id; //numeric
    int *fki_country_id; //numeric
    char *s_contact_lastname; // string
    char *s_contact_firstname; // string
    char *s_contact_company; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_phone_e164; // string
    char *s_paymentmethod_description_x; // string
    char *s_province_name_x; // string
    char *s_country_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} notary_list_element_t;

__attribute__((deprecated)) notary_list_element_t *notary_list_element_create(
    int *pki_notary_id,
    int *fki_paymentmethod_id,
    int *fki_province_id,
    int *fki_country_id,
    char *s_contact_lastname,
    char *s_contact_firstname,
    char *s_contact_company,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_phone_e164,
    char *s_paymentmethod_description_x,
    char *s_province_name_x,
    char *s_country_name_x
);

void notary_list_element_free(notary_list_element_t *notary_list_element);

notary_list_element_t *notary_list_element_parseFromJSON(cJSON *notary_list_elementJSON);

cJSON *notary_list_element_convertToJSON(notary_list_element_t *notary_list_element);

#endif /* _notary_list_element_H_ */

