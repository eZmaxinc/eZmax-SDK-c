/*
 * multilingual_paymentgateway_description.h
 *
 * Description of the Paymentgateway
 */

#ifndef _multilingual_paymentgateway_description_H_
#define _multilingual_paymentgateway_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_paymentgateway_description_t multilingual_paymentgateway_description_t;




typedef struct multilingual_paymentgateway_description_t {
    char *s_paymentgateway_description1; // string
    char *s_paymentgateway_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_paymentgateway_description_t;

__attribute__((deprecated)) multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_create(
    char *s_paymentgateway_description1,
    char *s_paymentgateway_description2
);

void multilingual_paymentgateway_description_free(multilingual_paymentgateway_description_t *multilingual_paymentgateway_description);

multilingual_paymentgateway_description_t *multilingual_paymentgateway_description_parseFromJSON(cJSON *multilingual_paymentgateway_descriptionJSON);

cJSON *multilingual_paymentgateway_description_convertToJSON(multilingual_paymentgateway_description_t *multilingual_paymentgateway_description);

#endif /* _multilingual_paymentgateway_description_H_ */

