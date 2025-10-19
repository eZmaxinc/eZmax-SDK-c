/*
 * ezmaxcustomer_request_patch.h
 *
 * A Ezmaxcustomer Object
 */

#ifndef _ezmaxcustomer_request_patch_H_
#define _ezmaxcustomer_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomer_request_patch_t ezmaxcustomer_request_patch_t;

#include "multilingual_ezmaxcustomer_note.h"



typedef struct ezmaxcustomer_request_patch_t {
    struct multilingual_ezmaxcustomer_note_t *obj_ezmaxcustomer_note; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomer_request_patch_t;

__attribute__((deprecated)) ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_create(
    multilingual_ezmaxcustomer_note_t *obj_ezmaxcustomer_note
);

void ezmaxcustomer_request_patch_free(ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch);

ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_parseFromJSON(cJSON *ezmaxcustomer_request_patchJSON);

cJSON *ezmaxcustomer_request_patch_convertToJSON(ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch);

#endif /* _ezmaxcustomer_request_patch_H_ */

