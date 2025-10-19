/*
 * ezmaxcustomeruser_request_patch.h
 *
 * A Ezmaxcustomeruser Object
 */

#ifndef _ezmaxcustomeruser_request_patch_H_
#define _ezmaxcustomeruser_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomeruser_request_patch_t ezmaxcustomeruser_request_patch_t;

#include "multilingual_ezmaxcustomeruser_note.h"



typedef struct ezmaxcustomeruser_request_patch_t {
    struct multilingual_ezmaxcustomeruser_note_t *obj_ezmaxcustomeruser_note; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomeruser_request_patch_t;

__attribute__((deprecated)) ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_create(
    multilingual_ezmaxcustomeruser_note_t *obj_ezmaxcustomeruser_note
);

void ezmaxcustomeruser_request_patch_free(ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch);

ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_parseFromJSON(cJSON *ezmaxcustomeruser_request_patchJSON);

cJSON *ezmaxcustomeruser_request_patch_convertToJSON(ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch);

#endif /* _ezmaxcustomeruser_request_patch_H_ */

