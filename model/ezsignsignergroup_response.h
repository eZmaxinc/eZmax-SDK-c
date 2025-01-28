/*
 * ezsignsignergroup_response.h
 *
 * An Ezsignsignergroup Object
 */

#ifndef _ezsignsignergroup_response_H_
#define _ezsignsignergroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_response_t ezsignsignergroup_response_t;

#include "multilingual_ezsignsignergroup_description.h"



typedef struct ezsignsignergroup_response_t {
    int pki_ezsignsignergroup_id; //numeric
    struct multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description; //model
    char *s_ezsignsignergroup_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_response_t;

__attribute__((deprecated)) ezsignsignergroup_response_t *ezsignsignergroup_response_create(
    int pki_ezsignsignergroup_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description,
    char *s_ezsignsignergroup_description_x
);

void ezsignsignergroup_response_free(ezsignsignergroup_response_t *ezsignsignergroup_response);

ezsignsignergroup_response_t *ezsignsignergroup_response_parseFromJSON(cJSON *ezsignsignergroup_responseJSON);

cJSON *ezsignsignergroup_response_convertToJSON(ezsignsignergroup_response_t *ezsignsignergroup_response);

#endif /* _ezsignsignergroup_response_H_ */

