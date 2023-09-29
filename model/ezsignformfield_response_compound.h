/*
 * ezsignformfield_response_compound.h
 *
 * An Ezsignformfield Object and children to create a complete structure
 */

#ifndef _ezsignformfield_response_compound_H_
#define _ezsignformfield_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_response_compound_t ezsignformfield_response_compound_t;




typedef struct ezsignformfield_response_compound_t {
    int pki_ezsignformfield_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string
    int i_ezsignformfield_x; //numeric
    int i_ezsignformfield_y; //numeric
    int i_ezsignformfield_width; //numeric
    int i_ezsignformfield_height; //numeric
    int b_ezsignformfield_autocomplete; //boolean
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string

} ezsignformfield_response_compound_t;

ezsignformfield_response_compound_t *ezsignformfield_response_compound_create(
    int pki_ezsignformfield_id,
    int i_ezsignpage_pagenumber,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value,
    int i_ezsignformfield_x,
    int i_ezsignformfield_y,
    int i_ezsignformfield_width,
    int i_ezsignformfield_height,
    int b_ezsignformfield_autocomplete,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
);

void ezsignformfield_response_compound_free(ezsignformfield_response_compound_t *ezsignformfield_response_compound);

ezsignformfield_response_compound_t *ezsignformfield_response_compound_parseFromJSON(cJSON *ezsignformfield_response_compoundJSON);

cJSON *ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_t *ezsignformfield_response_compound);

#endif /* _ezsignformfield_response_compound_H_ */

