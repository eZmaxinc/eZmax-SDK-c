/*
 * address_response_compound.h
 *
 * An Address Object and children to create a complete structure
 */

#ifndef _address_response_compound_H_
#define _address_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_response_compound_t address_response_compound_t;




typedef struct address_response_compound_t {
    int pki_address_id; //numeric
    int fki_addresstype_id; //numeric
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    int fki_province_id; //numeric
    char *s_province_name_x; // string
    int fki_country_id; //numeric
    char *s_country_name_x; // string
    char *s_address_zip; // string
    char *f_address_longitude; // string
    char *f_address_latitude; // string

    int _library_owned; // Is the library responsible for freeing this object?
} address_response_compound_t;

__attribute__((deprecated)) address_response_compound_t *address_response_compound_create(
    int pki_address_id,
    int fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int fki_province_id,
    char *s_province_name_x,
    int fki_country_id,
    char *s_country_name_x,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
);

void address_response_compound_free(address_response_compound_t *address_response_compound);

address_response_compound_t *address_response_compound_parseFromJSON(cJSON *address_response_compoundJSON);

cJSON *address_response_compound_convertToJSON(address_response_compound_t *address_response_compound);

#endif /* _address_response_compound_H_ */

