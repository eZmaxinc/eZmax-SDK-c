/*
 * multilingual_subnet_description.h
 *
 * The description of the Subnet
 */

#ifndef _multilingual_subnet_description_H_
#define _multilingual_subnet_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_subnet_description_t multilingual_subnet_description_t;




typedef struct multilingual_subnet_description_t {
    char *s_subnet_description1; // string
    char *s_subnet_description2; // string

} multilingual_subnet_description_t;

multilingual_subnet_description_t *multilingual_subnet_description_create(
    char *s_subnet_description1,
    char *s_subnet_description2
);

void multilingual_subnet_description_free(multilingual_subnet_description_t *multilingual_subnet_description);

multilingual_subnet_description_t *multilingual_subnet_description_parseFromJSON(cJSON *multilingual_subnet_descriptionJSON);

cJSON *multilingual_subnet_description_convertToJSON(multilingual_subnet_description_t *multilingual_subnet_description);

#endif /* _multilingual_subnet_description_H_ */

