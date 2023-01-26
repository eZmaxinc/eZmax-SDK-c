/*
 * descriptionstatic_response_compound.h
 *
 * A Descriptionstatic Object and children to create a complete structure
 */

#ifndef _descriptionstatic_response_compound_H_
#define _descriptionstatic_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct descriptionstatic_response_compound_t descriptionstatic_response_compound_t;




typedef struct descriptionstatic_response_compound_t {
    int pki_descriptionstatic_id; //numeric
    char *s_descriptionstatic_description; // string

} descriptionstatic_response_compound_t;

descriptionstatic_response_compound_t *descriptionstatic_response_compound_create(
    int pki_descriptionstatic_id,
    char *s_descriptionstatic_description
);

void descriptionstatic_response_compound_free(descriptionstatic_response_compound_t *descriptionstatic_response_compound);

descriptionstatic_response_compound_t *descriptionstatic_response_compound_parseFromJSON(cJSON *descriptionstatic_response_compoundJSON);

cJSON *descriptionstatic_response_compound_convertToJSON(descriptionstatic_response_compound_t *descriptionstatic_response_compound);

#endif /* _descriptionstatic_response_compound_H_ */

