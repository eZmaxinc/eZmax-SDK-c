/*
 * ezmaxcase_request_patch.h
 *
 * An Ezmaxcase Object
 */

#ifndef _ezmaxcase_request_patch_H_
#define _ezmaxcase_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcase_request_patch_t ezmaxcase_request_patch_t;




typedef struct ezmaxcase_request_patch_t {
    int fki_ezmaxcasequeue_id; //numeric
    int fki_ezmaxcasepriority_id; //numeric
    int fki_ezmaxcasestate_id; //numeric
    int fki_ezmaxfeaturerequest_id; //numeric
    int fki_ezmaxknownissue_id; //numeric
    int fki_user_id_owner; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcase_request_patch_t;

__attribute__((deprecated)) ezmaxcase_request_patch_t *ezmaxcase_request_patch_create(
    int fki_ezmaxcasequeue_id,
    int fki_ezmaxcasepriority_id,
    int fki_ezmaxcasestate_id,
    int fki_ezmaxfeaturerequest_id,
    int fki_ezmaxknownissue_id,
    int fki_user_id_owner
);

void ezmaxcase_request_patch_free(ezmaxcase_request_patch_t *ezmaxcase_request_patch);

ezmaxcase_request_patch_t *ezmaxcase_request_patch_parseFromJSON(cJSON *ezmaxcase_request_patchJSON);

cJSON *ezmaxcase_request_patch_convertToJSON(ezmaxcase_request_patch_t *ezmaxcase_request_patch);

#endif /* _ezmaxcase_request_patch_H_ */

