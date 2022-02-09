/*
 * ezsigndocument_request_patch.h
 *
 * An Ezsigndocument Object
 */

#ifndef _ezsigndocument_request_patch_H_
#define _ezsigndocument_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_request_patch_t ezsigndocument_request_patch_t;




typedef struct ezsigndocument_request_patch_t {
    char *dt_ezsigndocument_duedate; // string
    char *s_ezsigndocument_name; // string

} ezsigndocument_request_patch_t;

ezsigndocument_request_patch_t *ezsigndocument_request_patch_create(
    char *dt_ezsigndocument_duedate,
    char *s_ezsigndocument_name
);

void ezsigndocument_request_patch_free(ezsigndocument_request_patch_t *ezsigndocument_request_patch);

ezsigndocument_request_patch_t *ezsigndocument_request_patch_parseFromJSON(cJSON *ezsigndocument_request_patchJSON);

cJSON *ezsigndocument_request_patch_convertToJSON(ezsigndocument_request_patch_t *ezsigndocument_request_patch);

#endif /* _ezsigndocument_request_patch_H_ */

