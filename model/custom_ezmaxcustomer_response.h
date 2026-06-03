/*
 * custom_ezmaxcustomer_response.h
 *
 * A Ezmaxcustomer Object
 */

#ifndef _custom_ezmaxcustomer_response_H_
#define _custom_ezmaxcustomer_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxcustomer_response_t custom_ezmaxcustomer_response_t;

#include "multilingual_ezmaxcustomer_company.h"



typedef struct custom_ezmaxcustomer_response_t {
    char *fks_ezmaxcustomer_code; // string
    int *fki_systemconfigurationtype_id; //numeric
    struct multilingual_ezmaxcustomer_company_t *obj_ezmaxcustomer_company; //model

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezmaxcustomer_response_t;

__attribute__((deprecated)) custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_create(
    char *fks_ezmaxcustomer_code,
    int *fki_systemconfigurationtype_id,
    multilingual_ezmaxcustomer_company_t *obj_ezmaxcustomer_company
);

void custom_ezmaxcustomer_response_free(custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response);

custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response_parseFromJSON(cJSON *custom_ezmaxcustomer_responseJSON);

cJSON *custom_ezmaxcustomer_response_convertToJSON(custom_ezmaxcustomer_response_t *custom_ezmaxcustomer_response);

#endif /* _custom_ezmaxcustomer_response_H_ */

