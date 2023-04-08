/*
 * multilingual_variableexpense_description.h
 *
 * The description of the Variableexpense
 */

#ifndef _multilingual_variableexpense_description_H_
#define _multilingual_variableexpense_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_variableexpense_description_t multilingual_variableexpense_description_t;




typedef struct multilingual_variableexpense_description_t {
    char *s_variableexpense_description1; // string
    char *s_variableexpense_description2; // string

} multilingual_variableexpense_description_t;

multilingual_variableexpense_description_t *multilingual_variableexpense_description_create(
    char *s_variableexpense_description1,
    char *s_variableexpense_description2
);

void multilingual_variableexpense_description_free(multilingual_variableexpense_description_t *multilingual_variableexpense_description);

multilingual_variableexpense_description_t *multilingual_variableexpense_description_parseFromJSON(cJSON *multilingual_variableexpense_descriptionJSON);

cJSON *multilingual_variableexpense_description_convertToJSON(multilingual_variableexpense_description_t *multilingual_variableexpense_description);

#endif /* _multilingual_variableexpense_description_H_ */

