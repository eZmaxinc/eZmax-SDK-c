/*
 * descriptionstatic_response.h
 *
 * A Descriptionstatic Object
 */

#ifndef _descriptionstatic_response_H_
#define _descriptionstatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct descriptionstatic_response_t descriptionstatic_response_t;




typedef struct descriptionstatic_response_t {
    int pki_descriptionstatic_id; //numeric
    char *s_descriptionstatic_description; // string

} descriptionstatic_response_t;

descriptionstatic_response_t *descriptionstatic_response_create(
    int pki_descriptionstatic_id,
    char *s_descriptionstatic_description
);

void descriptionstatic_response_free(descriptionstatic_response_t *descriptionstatic_response);

descriptionstatic_response_t *descriptionstatic_response_parseFromJSON(cJSON *descriptionstatic_responseJSON);

cJSON *descriptionstatic_response_convertToJSON(descriptionstatic_response_t *descriptionstatic_response);

#endif /* _descriptionstatic_response_H_ */

