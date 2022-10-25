/*
 * custom_ezmaxinvoicing_ezsignfolder_response.h
 *
 * An EzmaxinvoicingEzsignfolder object containing information about the Ezmaxinvoicing for an Ezsignfolder
 */

#ifndef _custom_ezmaxinvoicing_ezsignfolder_response_H_
#define _custom_ezmaxinvoicing_ezsignfolder_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxinvoicing_ezsignfolder_response_t custom_ezmaxinvoicing_ezsignfolder_response_t;

#include "custom_ezmaxinvoicing_ezsignfolder_response_all_of.h"



typedef struct custom_ezmaxinvoicing_ezsignfolder_response_t {
    int fki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    int b_ezsigntsarequirement_billable; //boolean
    int b_ezsignfolder_mfaused; //boolean
    int b_ezsignfolder_paymentused; //boolean
    int b_ezsignfolder_allowed; //boolean

} custom_ezmaxinvoicing_ezsignfolder_response_t;

custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_create(
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    int b_ezsigntsarequirement_billable,
    int b_ezsignfolder_mfaused,
    int b_ezsignfolder_paymentused,
    int b_ezsignfolder_allowed
);

void custom_ezmaxinvoicing_ezsignfolder_response_free(custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response);

custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsignfolder_responseJSON);

cJSON *custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_t *custom_ezmaxinvoicing_ezsignfolder_response);

#endif /* _custom_ezmaxinvoicing_ezsignfolder_response_H_ */

