/*
 * ezmaxinvoicingcommission_response.h
 *
 * A Ezmaxinvoicingcommission Object
 */

#ifndef _ezmaxinvoicingcommission_response_H_
#define _ezmaxinvoicingcommission_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingcommission_response_t ezmaxinvoicingcommission_response_t;




typedef struct ezmaxinvoicingcommission_response_t {
    int pki_ezmaxinvoicingcommission_id; //numeric
    int fki_ezmaxinvoicingsummaryglobal_id; //numeric
    int fki_ezmaxpartner_id; //numeric
    int fki_ezmaxrepresentative_id; //numeric
    char *dt_ezmaxinvoicingcommission_start; // string
    char *dt_ezmaxinvoicingcommission_end; // string
    int i_ezmaxinvoicingcommission_days; //numeric
    char *d_ezmaxinvoicingcommission_amount; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicingcommission_response_t;

__attribute__((deprecated)) ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_create(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount
);

void ezmaxinvoicingcommission_response_free(ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response);

ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response_parseFromJSON(cJSON *ezmaxinvoicingcommission_responseJSON);

cJSON *ezmaxinvoicingcommission_response_convertToJSON(ezmaxinvoicingcommission_response_t *ezmaxinvoicingcommission_response);

#endif /* _ezmaxinvoicingcommission_response_H_ */

