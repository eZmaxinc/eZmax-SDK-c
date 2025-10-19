/*
 * multilingual_ezmaxcustomer_note.h
 *
 * Note of the Ezmaxcustomer
 */

#ifndef _multilingual_ezmaxcustomer_note_H_
#define _multilingual_ezmaxcustomer_note_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxcustomer_note_t multilingual_ezmaxcustomer_note_t;




typedef struct multilingual_ezmaxcustomer_note_t {
    char *t_ezmaxcustomer_note1; // string
    char *t_ezmaxcustomer_note2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxcustomer_note_t;

__attribute__((deprecated)) multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_create(
    char *t_ezmaxcustomer_note1,
    char *t_ezmaxcustomer_note2
);

void multilingual_ezmaxcustomer_note_free(multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note);

multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_parseFromJSON(cJSON *multilingual_ezmaxcustomer_noteJSON);

cJSON *multilingual_ezmaxcustomer_note_convertToJSON(multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note);

#endif /* _multilingual_ezmaxcustomer_note_H_ */

