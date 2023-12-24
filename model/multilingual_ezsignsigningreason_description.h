/*
 * multilingual_ezsignsigningreason_description.h
 *
 * The description of the Ezsignsigningreason
 */

#ifndef _multilingual_ezsignsigningreason_description_H_
#define _multilingual_ezsignsigningreason_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezsignsigningreason_description_t multilingual_ezsignsigningreason_description_t;




typedef struct multilingual_ezsignsigningreason_description_t {
    char *s_ezsignsigningreason_description1; // string
    char *s_ezsignsigningreason_description2; // string

} multilingual_ezsignsigningreason_description_t;

multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_create(
    char *s_ezsignsigningreason_description1,
    char *s_ezsignsigningreason_description2
);

void multilingual_ezsignsigningreason_description_free(multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description);

multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_parseFromJSON(cJSON *multilingual_ezsignsigningreason_descriptionJSON);

cJSON *multilingual_ezsignsigningreason_description_convertToJSON(multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description);

#endif /* _multilingual_ezsignsigningreason_description_H_ */

