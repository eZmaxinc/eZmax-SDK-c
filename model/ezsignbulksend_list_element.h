/*
 * ezsignbulksend_list_element.h
 *
 * An Ezsignbulksend List Element
 */

#ifndef _ezsignbulksend_list_element_H_
#define _ezsignbulksend_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_list_element_t ezsignbulksend_list_element_t;




typedef struct ezsignbulksend_list_element_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignbulksend_description; // string
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int i_ezsignbulksendtransmission; //numeric
    int i_ezsignfolder; //numeric
    int i_ezsigndocument; //numeric
    int i_ezsignsignature; //numeric
    int i_ezsignsignature_signed; //numeric
    int b_ezsignbulksend_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_list_element_t;

__attribute__((deprecated)) ezsignbulksend_list_element_t *ezsignbulksend_list_element_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignbulksend_needvalidation,
    int i_ezsignbulksendtransmission,
    int i_ezsignfolder,
    int i_ezsigndocument,
    int i_ezsignsignature,
    int i_ezsignsignature_signed,
    int b_ezsignbulksend_isactive
);

void ezsignbulksend_list_element_free(ezsignbulksend_list_element_t *ezsignbulksend_list_element);

ezsignbulksend_list_element_t *ezsignbulksend_list_element_parseFromJSON(cJSON *ezsignbulksend_list_elementJSON);

cJSON *ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_t *ezsignbulksend_list_element);

#endif /* _ezsignbulksend_list_element_H_ */

