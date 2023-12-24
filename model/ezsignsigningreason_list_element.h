/*
 * ezsignsigningreason_list_element.h
 *
 * A Ezsignsigningreason List Element
 */

#ifndef _ezsignsigningreason_list_element_H_
#define _ezsignsigningreason_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_list_element_t ezsignsigningreason_list_element_t;




typedef struct ezsignsigningreason_list_element_t {
    int pki_ezsignsigningreason_id; //numeric
    char *s_ezsignsigningreason_description_x; // string
    int b_ezsignsigningreason_isactive; //boolean

} ezsignsigningreason_list_element_t;

ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_create(
    int pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_list_element_free(ezsignsigningreason_list_element_t *ezsignsigningreason_list_element);

ezsignsigningreason_list_element_t *ezsignsigningreason_list_element_parseFromJSON(cJSON *ezsignsigningreason_list_elementJSON);

cJSON *ezsignsigningreason_list_element_convertToJSON(ezsignsigningreason_list_element_t *ezsignsigningreason_list_element);

#endif /* _ezsignsigningreason_list_element_H_ */

