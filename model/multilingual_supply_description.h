/*
 * multilingual_supply_description.h
 *
 * The description1 of the Supply
 */

#ifndef _multilingual_supply_description_H_
#define _multilingual_supply_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_supply_description_t multilingual_supply_description_t;




typedef struct multilingual_supply_description_t {
    char *s_supply_description1; // string
    char *s_supply_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_supply_description_t;

__attribute__((deprecated)) multilingual_supply_description_t *multilingual_supply_description_create(
    char *s_supply_description1,
    char *s_supply_description2
);

void multilingual_supply_description_free(multilingual_supply_description_t *multilingual_supply_description);

multilingual_supply_description_t *multilingual_supply_description_parseFromJSON(cJSON *multilingual_supply_descriptionJSON);

cJSON *multilingual_supply_description_convertToJSON(multilingual_supply_description_t *multilingual_supply_description);

#endif /* _multilingual_supply_description_H_ */

