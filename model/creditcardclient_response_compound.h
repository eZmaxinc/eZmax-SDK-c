/*
 * creditcardclient_response_compound.h
 *
 * A Creditcardclient Object
 */

#ifndef _creditcardclient_response_compound_H_
#define _creditcardclient_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_response_compound_t creditcardclient_response_compound_t;

#include "creditcarddetail_response_compound.h"



typedef struct creditcardclient_response_compound_t {
    int pki_creditcardclient_id; //numeric
    int fki_creditcarddetail_id; //numeric
    int b_creditcardclientrelation_isdefault; //boolean
    char *s_creditcardclient_description; // string
    int b_creditcardclient_isactive; //boolean
    int b_creditcardclient_allowedagencypayment; //boolean
    int b_creditcardclient_allowedroyallepageprotection; //boolean
    int b_creditcardclient_allowedtranquillit; //boolean
    struct creditcarddetail_response_compound_t *obj_creditcarddetail; //model

} creditcardclient_response_compound_t;

creditcardclient_response_compound_t *creditcardclient_response_compound_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive,
    int b_creditcardclient_allowedagencypayment,
    int b_creditcardclient_allowedroyallepageprotection,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_response_compound_t *obj_creditcarddetail
);

void creditcardclient_response_compound_free(creditcardclient_response_compound_t *creditcardclient_response_compound);

creditcardclient_response_compound_t *creditcardclient_response_compound_parseFromJSON(cJSON *creditcardclient_response_compoundJSON);

cJSON *creditcardclient_response_compound_convertToJSON(creditcardclient_response_compound_t *creditcardclient_response_compound);

#endif /* _creditcardclient_response_compound_H_ */

