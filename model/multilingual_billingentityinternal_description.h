/*
 * multilingual_billingentityinternal_description.h
 *
 * The description of the Billingentityinternal
 */

#ifndef _multilingual_billingentityinternal_description_H_
#define _multilingual_billingentityinternal_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_billingentityinternal_description_t multilingual_billingentityinternal_description_t;




typedef struct multilingual_billingentityinternal_description_t {
    char *s_billingentityinternal_description1; // string
    char *s_billingentityinternal_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_billingentityinternal_description_t;

__attribute__((deprecated)) multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_create(
    char *s_billingentityinternal_description1,
    char *s_billingentityinternal_description2
);

void multilingual_billingentityinternal_description_free(multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description);

multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description_parseFromJSON(cJSON *multilingual_billingentityinternal_descriptionJSON);

cJSON *multilingual_billingentityinternal_description_convertToJSON(multilingual_billingentityinternal_description_t *multilingual_billingentityinternal_description);

#endif /* _multilingual_billingentityinternal_description_H_ */

