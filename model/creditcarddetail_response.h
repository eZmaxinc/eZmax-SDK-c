/*
 * creditcarddetail_response.h
 *
 * A Creditcarddetail Object
 */

#ifndef _creditcarddetail_response_H_
#define _creditcarddetail_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcarddetail_response_t creditcarddetail_response_t;




typedef struct creditcarddetail_response_t {
    int pki_creditcarddetail_id; //numeric
    int fki_creditcardtype_id; //numeric
    int i_creditcarddetail_lastdigits; //numeric
    int i_creditcarddetail_expirationmonth; //numeric
    int i_creditcarddetail_expirationyear; //numeric
    char *s_creditcarddetail_civic; // string
    char *s_creditcarddetail_street; // string
    char *s_creditcarddetail_zip; // string

} creditcarddetail_response_t;

creditcarddetail_response_t *creditcarddetail_response_create(
    int pki_creditcarddetail_id,
    int fki_creditcardtype_id,
    int i_creditcarddetail_lastdigits,
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
);

void creditcarddetail_response_free(creditcarddetail_response_t *creditcarddetail_response);

creditcarddetail_response_t *creditcarddetail_response_parseFromJSON(cJSON *creditcarddetail_responseJSON);

cJSON *creditcarddetail_response_convertToJSON(creditcarddetail_response_t *creditcarddetail_response);

#endif /* _creditcarddetail_response_H_ */

