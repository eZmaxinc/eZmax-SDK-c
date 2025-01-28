/*
 * multilingual_branding_description.h
 *
 * Description of the Branding
 */

#ifndef _multilingual_branding_description_H_
#define _multilingual_branding_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_branding_description_t multilingual_branding_description_t;




typedef struct multilingual_branding_description_t {
    char *s_branding_description1; // string
    char *s_branding_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_branding_description_t;

__attribute__((deprecated)) multilingual_branding_description_t *multilingual_branding_description_create(
    char *s_branding_description1,
    char *s_branding_description2
);

void multilingual_branding_description_free(multilingual_branding_description_t *multilingual_branding_description);

multilingual_branding_description_t *multilingual_branding_description_parseFromJSON(cJSON *multilingual_branding_descriptionJSON);

cJSON *multilingual_branding_description_convertToJSON(multilingual_branding_description_t *multilingual_branding_description);

#endif /* _multilingual_branding_description_H_ */

