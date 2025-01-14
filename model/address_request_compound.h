/*
 * address_request_compound.h
 *
 * An Address Object and children to create a complete structure
 */

#ifndef _address_request_compound_H_
#define _address_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_request_compound_t address_request_compound_t;




typedef struct address_request_compound_t {
    int pki_address_id; //numeric
    int fki_addresstype_id; //numeric
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    int fki_province_id; //numeric
    int fki_country_id; //numeric
    char *s_address_zip; // string
    char *f_address_longitude; // string
    char *f_address_latitude; // string

} address_request_compound_t;

address_request_compound_t *address_request_compound_create(
    int pki_address_id,
    int fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int fki_province_id,
    int fki_country_id,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
);

void address_request_compound_free(address_request_compound_t *address_request_compound);

address_request_compound_t *address_request_compound_parseFromJSON(cJSON *address_request_compoundJSON);

cJSON *address_request_compound_convertToJSON(address_request_compound_t *address_request_compound);

#endif /* _address_request_compound_H_ */

