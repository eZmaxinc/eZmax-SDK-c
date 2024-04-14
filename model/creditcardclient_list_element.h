/*
 * creditcardclient_list_element.h
 *
 * A Creditcardclient List Element
 */

#ifndef _creditcardclient_list_element_H_
#define _creditcardclient_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_list_element_t creditcardclient_list_element_t;




typedef struct creditcardclient_list_element_t {
    int pki_creditcardclient_id; //numeric
    int fki_creditcarddetail_id; //numeric
    int b_creditcardclientrelation_isdefault; //boolean
    char *s_creditcardclient_description; // string
    int b_creditcardclient_isactive; //boolean
    int b_creditcardclient_allowedagencypayment; //boolean
    int b_creditcardclient_allowedroyallepageprotection; //boolean
    int b_creditcardclient_allowedtranquillit; //boolean
    int i_creditcarddetail_expirationmonth; //numeric
    int i_creditcarddetail_expirationyear; //numeric
    char *s_creditcarddetail_numbermasked; // string

} creditcardclient_list_element_t;

creditcardclient_list_element_t *creditcardclient_list_element_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive,
    int b_creditcardclient_allowedagencypayment,
    int b_creditcardclient_allowedroyallepageprotection,
    int b_creditcardclient_allowedtranquillit,
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_numbermasked
);

void creditcardclient_list_element_free(creditcardclient_list_element_t *creditcardclient_list_element);

creditcardclient_list_element_t *creditcardclient_list_element_parseFromJSON(cJSON *creditcardclient_list_elementJSON);

cJSON *creditcardclient_list_element_convertToJSON(creditcardclient_list_element_t *creditcardclient_list_element);

#endif /* _creditcardclient_list_element_H_ */

