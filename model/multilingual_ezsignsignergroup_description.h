/*
 * multilingual_ezsignsignergroup_description.h
 *
 * Description of the Ezsignsignergroup
 */

#ifndef _multilingual_ezsignsignergroup_description_H_
#define _multilingual_ezsignsignergroup_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezsignsignergroup_description_t multilingual_ezsignsignergroup_description_t;




typedef struct multilingual_ezsignsignergroup_description_t {
    char *s_ezsignsignergroup_description1; // string
    char *s_ezsignsignergroup_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezsignsignergroup_description_t;

__attribute__((deprecated)) multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_create(
    char *s_ezsignsignergroup_description1,
    char *s_ezsignsignergroup_description2
);

void multilingual_ezsignsignergroup_description_free(multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description);

multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_parseFromJSON(cJSON *multilingual_ezsignsignergroup_descriptionJSON);

cJSON *multilingual_ezsignsignergroup_description_convertToJSON(multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description);

#endif /* _multilingual_ezsignsignergroup_description_H_ */

