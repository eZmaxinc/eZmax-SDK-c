/*
 * creditcardclient_request_compound.h
 *
 * A Creditcardclient Object and children
 */

#ifndef _creditcardclient_request_compound_H_
#define _creditcardclient_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_request_compound_t creditcardclient_request_compound_t;

#include "creditcarddetail_request.h"



typedef struct creditcardclient_request_compound_t {
    int pki_creditcardclient_id; //numeric
    char *fks_creditcardtoken_id; // string
    int b_creditcardclientrelation_isdefault; //boolean
    char *s_creditcardclient_description; // string
    int b_creditcardclient_allowedcompanypayment; //boolean
    int b_creditcardclient_allowedezsign; //boolean
    int b_creditcardclient_allowedtranquillit; //boolean
    struct creditcarddetail_request_t *obj_creditcarddetail; //model
    char *s_creditcardclient_cvv; // string

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardclient_request_compound_t;

__attribute__((deprecated)) creditcardclient_request_compound_t *creditcardclient_request_compound_create(
    int pki_creditcardclient_id,
    char *fks_creditcardtoken_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedezsign,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_request_t *obj_creditcarddetail,
    char *s_creditcardclient_cvv
);

void creditcardclient_request_compound_free(creditcardclient_request_compound_t *creditcardclient_request_compound);

creditcardclient_request_compound_t *creditcardclient_request_compound_parseFromJSON(cJSON *creditcardclient_request_compoundJSON);

cJSON *creditcardclient_request_compound_convertToJSON(creditcardclient_request_compound_t *creditcardclient_request_compound);

#endif /* _creditcardclient_request_compound_H_ */

