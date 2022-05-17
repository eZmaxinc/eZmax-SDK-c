/*
 * ezsigntemplatedocument_request_patch.h
 *
 * An Ezsigntemplatedocument Object
 */

#ifndef _ezsigntemplatedocument_request_patch_H_
#define _ezsigntemplatedocument_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_request_patch_t ezsigntemplatedocument_request_patch_t;




typedef struct ezsigntemplatedocument_request_patch_t {
    char *s_ezsigntemplatedocument_name; // string

} ezsigntemplatedocument_request_patch_t;

ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_create(
    char *s_ezsigntemplatedocument_name
);

void ezsigntemplatedocument_request_patch_free(ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch);

ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_parseFromJSON(cJSON *ezsigntemplatedocument_request_patchJSON);

cJSON *ezsigntemplatedocument_request_patch_convertToJSON(ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch);

#endif /* _ezsigntemplatedocument_request_patch_H_ */

