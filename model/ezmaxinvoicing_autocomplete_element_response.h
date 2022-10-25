/*
 * ezmaxinvoicing_autocomplete_element_response.h
 *
 * A Ezmaxinvoicing AutocompleteElement Response
 */

#ifndef _ezmaxinvoicing_autocomplete_element_response_H_
#define _ezmaxinvoicing_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_autocomplete_element_response_t ezmaxinvoicing_autocomplete_element_response_t;




typedef struct ezmaxinvoicing_autocomplete_element_response_t {
    char *yyyymm_ezmaxinvoicing; // string
    int pki_ezmaxinvoicing_id; //numeric
    int b_ezmaxinvoicing_isactive; //boolean

} ezmaxinvoicing_autocomplete_element_response_t;

ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_create(
    char *yyyymm_ezmaxinvoicing,
    int pki_ezmaxinvoicing_id,
    int b_ezmaxinvoicing_isactive
);

void ezmaxinvoicing_autocomplete_element_response_free(ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response);

ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_parseFromJSON(cJSON *ezmaxinvoicing_autocomplete_element_responseJSON);

cJSON *ezmaxinvoicing_autocomplete_element_response_convertToJSON(ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response);

#endif /* _ezmaxinvoicing_autocomplete_element_response_H_ */

