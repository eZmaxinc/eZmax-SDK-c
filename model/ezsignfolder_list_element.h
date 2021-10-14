/*
 * ezsignfolder_list_element.h
 *
 * An Ezsignfolder List Element
 */

#ifndef _ezsignfolder_list_element_H_
#define _ezsignfolder_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_list_element_t ezsignfolder_list_element_t;




typedef struct ezsignfolder_list_element_t {
    int pki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string

} ezsignfolder_list_element_t;

ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description
);

void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element);

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON);

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element);

#endif /* _ezsignfolder_list_element_H_ */

