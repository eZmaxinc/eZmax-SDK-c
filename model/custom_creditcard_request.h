/*
 * custom_creditcard_request.h
 *
 * A Custom Creditcard Object
 */

#ifndef _custom_creditcard_request_H_
#define _custom_creditcard_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_creditcard_request_t custom_creditcard_request_t;

#include "creditcarddetail_request.h"



typedef struct custom_creditcard_request_t {
    char *fks_creditcardtoken_id; // string
    char *s_creditcard_cvv; // string
    struct creditcarddetail_request_t *obj_creditcarddetail; //model

    int _library_owned; // Is the library responsible for freeing this object?
} custom_creditcard_request_t;

__attribute__((deprecated)) custom_creditcard_request_t *custom_creditcard_request_create(
    char *fks_creditcardtoken_id,
    char *s_creditcard_cvv,
    creditcarddetail_request_t *obj_creditcarddetail
);

void custom_creditcard_request_free(custom_creditcard_request_t *custom_creditcard_request);

custom_creditcard_request_t *custom_creditcard_request_parseFromJSON(cJSON *custom_creditcard_requestJSON);

cJSON *custom_creditcard_request_convertToJSON(custom_creditcard_request_t *custom_creditcard_request);

#endif /* _custom_creditcard_request_H_ */

