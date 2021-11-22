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

#include "field_e_ezsignfoldertype_privacylevel.h"

// Enum  for ezsignbulksend_list_element

typedef enum  { ezmax_api_definition_ezsignbulksend_list_element__NULL = 0, ezmax_api_definition_ezsignbulksend_list_element__User, ezmax_api_definition_ezsignbulksend_list_element__Usergroup } ezmax_api_definition_ezsignbulksend_list_element__e;

char* ezsignbulksend_list_element_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition_ezsignbulksend_list_element__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition_ezsignbulksend_list_element__e ezsignbulksend_list_element_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);



typedef struct ezsignbulksend_list_element_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignbulksend_description; // string
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsignbulksend_isactive; //boolean
    int i_ezsignbulksendtransmission; //numeric
    int i_ezsignfolder; //numeric
    int i_ezsigndocument; //numeric
    int i_ezsignsignature; //numeric
    int i_ezsignsignature_signed; //numeric

} ezsignbulksend_list_element_t;

ezsignbulksend_list_element_t *ezsignbulksend_list_element_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignbulksend_isactive,
    int i_ezsignbulksendtransmission,
    int i_ezsignfolder,
    int i_ezsigndocument,
    int i_ezsignsignature,
    int i_ezsignsignature_signed
);

void ezsignbulksend_list_element_free(ezsignbulksend_list_element_t *ezsignbulksend_list_element);

ezsignbulksend_list_element_t *ezsignbulksend_list_element_parseFromJSON(cJSON *ezsignbulksend_list_elementJSON);

cJSON *ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_t *ezsignbulksend_list_element);

#endif /* _ezsignbulksend_list_element_H_ */

