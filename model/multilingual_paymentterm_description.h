/*
 * multilingual_paymentterm_description.h
 *
 * Description of the Paymentterm
 */

#ifndef _multilingual_paymentterm_description_H_
#define _multilingual_paymentterm_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_paymentterm_description_t multilingual_paymentterm_description_t;




typedef struct multilingual_paymentterm_description_t {
    char *s_paymentterm_description1; // string
    char *s_paymentterm_description2; // string

} multilingual_paymentterm_description_t;

multilingual_paymentterm_description_t *multilingual_paymentterm_description_create(
    char *s_paymentterm_description1,
    char *s_paymentterm_description2
);

void multilingual_paymentterm_description_free(multilingual_paymentterm_description_t *multilingual_paymentterm_description);

multilingual_paymentterm_description_t *multilingual_paymentterm_description_parseFromJSON(cJSON *multilingual_paymentterm_descriptionJSON);

cJSON *multilingual_paymentterm_description_convertToJSON(multilingual_paymentterm_description_t *multilingual_paymentterm_description);

#endif /* _multilingual_paymentterm_description_H_ */

