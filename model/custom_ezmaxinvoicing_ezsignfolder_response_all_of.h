/*
 * custom_ezmaxinvoicing_ezsignfolder_response_all_of.h
 *
 * 
 */

#ifndef _custom_ezmaxinvoicing_ezsignfolder_response_all_of_H_
#define _custom_ezmaxinvoicing_ezsignfolder_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxinvoicing_ezsignfolder_response_all_of_t custom_ezmaxinvoicing_ezsignfolder_response_all_of_t;




typedef struct custom_ezmaxinvoicing_ezsignfolder_response_all_of_t {
    int fki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    int b_ezsigntsarequirement_billable; //boolean
    int b_ezsignfolder_mfaused; //boolean
    int b_ezsignfolder_paymentused; //boolean
    int b_ezsignfolder_allowed; //boolean

} custom_ezmaxinvoicing_ezsignfolder_response_all_of_t;

custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_create(
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    int b_ezsigntsarequirement_billable,
    int b_ezsignfolder_mfaused,
    int b_ezsignfolder_paymentused,
    int b_ezsignfolder_allowed
);

void custom_ezmaxinvoicing_ezsignfolder_response_all_of_free(custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of);

custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsignfolder_response_all_ofJSON);

cJSON *custom_ezmaxinvoicing_ezsignfolder_response_all_of_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_all_of_t *custom_ezmaxinvoicing_ezsignfolder_response_all_of);

#endif /* _custom_ezmaxinvoicing_ezsignfolder_response_all_of_H_ */

