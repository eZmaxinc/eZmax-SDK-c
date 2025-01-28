/*
 * ezmaxinvoicingsummaryinternal_response.h
 *
 * A Ezmaxinvoicingsummaryinternal Object
 */

#ifndef _ezmaxinvoicingsummaryinternal_response_H_
#define _ezmaxinvoicingsummaryinternal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryinternal_response_t ezmaxinvoicingsummaryinternal_response_t;

#include "multilingual_ezmaxinvoicingsummaryinternal_description.h"



typedef struct ezmaxinvoicingsummaryinternal_response_t {
    int pki_ezmaxinvoicingsummaryinternal_id; //numeric
    struct multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description; //model
    char *s_ezmaxinvoicingsummaryinternal_description_x; // string
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicingsummaryinternal_response_t;

__attribute__((deprecated)) ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_create(
    int pki_ezmaxinvoicingsummaryinternal_id,
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description,
    char *s_ezmaxinvoicingsummaryinternal_description_x,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x
);

void ezmaxinvoicingsummaryinternal_response_free(ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response);

ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_responseJSON);

cJSON *ezmaxinvoicingsummaryinternal_response_convertToJSON(ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response);

#endif /* _ezmaxinvoicingsummaryinternal_response_H_ */

