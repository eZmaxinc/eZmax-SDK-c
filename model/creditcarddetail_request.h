/*
 * creditcarddetail_request.h
 *
 * A Creditcarddetail Object
 */

#ifndef _creditcarddetail_request_H_
#define _creditcarddetail_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcarddetail_request_t creditcarddetail_request_t;




typedef struct creditcarddetail_request_t {
    int i_creditcarddetail_expirationmonth; //numeric
    int i_creditcarddetail_expirationyear; //numeric
    char *s_creditcarddetail_civic; // string
    char *s_creditcarddetail_street; // string
    char *s_creditcarddetail_zip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} creditcarddetail_request_t;

__attribute__((deprecated)) creditcarddetail_request_t *creditcarddetail_request_create(
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
);

void creditcarddetail_request_free(creditcarddetail_request_t *creditcarddetail_request);

creditcarddetail_request_t *creditcarddetail_request_parseFromJSON(cJSON *creditcarddetail_requestJSON);

cJSON *creditcarddetail_request_convertToJSON(creditcarddetail_request_t *creditcarddetail_request);

#endif /* _creditcarddetail_request_H_ */

