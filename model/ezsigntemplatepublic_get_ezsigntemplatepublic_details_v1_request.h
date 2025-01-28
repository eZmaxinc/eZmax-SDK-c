/*
 * ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepublic/getEzsigntemplatepublicDetails
 */

#ifndef _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_H_
#define _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t;




typedef struct ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t {
    char *pks_ezmaxcustomer_code; // string
    char *s_ezsigntemplatepublic_referenceid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_ezsigntemplatepublic_referenceid
);

void ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);

ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_requestJSON);

cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);

#endif /* _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_H_ */

