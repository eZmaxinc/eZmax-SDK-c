/*
 * supplier_list_element.h
 *
 * A Supplier List Element
 */

#ifndef _supplier_list_element_H_
#define _supplier_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_list_element_t supplier_list_element_t;




typedef struct supplier_list_element_t {
    int pki_supplier_id; //numeric
    int fki_paymentmethod_id; //numeric
    char *s_supplier_name; // string
    char *s_supplier_code; // string
    char *s_supplier_account; // string
    int b_supplier_isactive; //boolean
    char *s_phone_e164; // string
    char *s_email_address; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    char *s_province_name_x; // string
    char *s_country_name_x; // string
    char *s_paymentmethod_description_x; // string
    char *s_electronicfundstransferbankaccount_transit; // string
    char *s_electronicfundstransferbankaccount_institution; // string
    char *s_electronicfundstransferbankaccount_account; // string
    char *s_glaccountcontainer_longcode; // string
    char *s_glaccountcontainer_longdescription_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_list_element_t;

__attribute__((deprecated)) supplier_list_element_t *supplier_list_element_create(
    int pki_supplier_id,
    int fki_paymentmethod_id,
    char *s_supplier_name,
    char *s_supplier_code,
    char *s_supplier_account,
    int b_supplier_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x,
    char *s_paymentmethod_description_x,
    char *s_electronicfundstransferbankaccount_transit,
    char *s_electronicfundstransferbankaccount_institution,
    char *s_electronicfundstransferbankaccount_account,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x
);

void supplier_list_element_free(supplier_list_element_t *supplier_list_element);

supplier_list_element_t *supplier_list_element_parseFromJSON(cJSON *supplier_list_elementJSON);

cJSON *supplier_list_element_convertToJSON(supplier_list_element_t *supplier_list_element);

#endif /* _supplier_list_element_H_ */

