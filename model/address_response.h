/*
 * address_response.h
 *
 * An Address Object
 */

#ifndef _address_response_H_
#define _address_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_response_t address_response_t;




typedef struct address_response_t {
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

} address_response_t;

address_response_t *address_response_create(
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

void address_response_free(address_response_t *address_response);

address_response_t *address_response_parseFromJSON(cJSON *address_responseJSON);

cJSON *address_response_convertToJSON(address_response_t *address_response);

#endif /* _address_response_H_ */

