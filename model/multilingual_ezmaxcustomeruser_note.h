/*
 * multilingual_ezmaxcustomeruser_note.h
 *
 * Note of the Ezmaxcustomeruser
 */

#ifndef _multilingual_ezmaxcustomeruser_note_H_
#define _multilingual_ezmaxcustomeruser_note_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxcustomeruser_note_t multilingual_ezmaxcustomeruser_note_t;




typedef struct multilingual_ezmaxcustomeruser_note_t {
    char *t_ezmaxcustomeruser_note1; // string
    char *t_ezmaxcustomeruser_note2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxcustomeruser_note_t;

__attribute__((deprecated)) multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_create(
    char *t_ezmaxcustomeruser_note1,
    char *t_ezmaxcustomeruser_note2
);

void multilingual_ezmaxcustomeruser_note_free(multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note);

multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_parseFromJSON(cJSON *multilingual_ezmaxcustomeruser_noteJSON);

cJSON *multilingual_ezmaxcustomeruser_note_convertToJSON(multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note);

#endif /* _multilingual_ezmaxcustomeruser_note_H_ */

