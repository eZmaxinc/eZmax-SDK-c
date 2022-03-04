/*
 * ezsignformfield_request.h
 *
 * A Ezsignformfield Object
 */

#ifndef _ezsignformfield_request_H_
#define _ezsignformfield_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_request_t ezsignformfield_request_t;




typedef struct ezsignformfield_request_t {
    int pki_ezsignformfield_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string
    int i_ezsignformfield_x; //numeric
    int i_ezsignformfield_y; //numeric
    int i_ezsignformfield_width; //numeric
    int i_ezsignformfield_height; //numeric
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string

} ezsignformfield_request_t;

ezsignformfield_request_t *ezsignformfield_request_create(
    int pki_ezsignformfield_id,
    int i_ezsignpage_pagenumber,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value,
    int i_ezsignformfield_x,
    int i_ezsignformfield_y,
    int i_ezsignformfield_width,
    int i_ezsignformfield_height,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
);

void ezsignformfield_request_free(ezsignformfield_request_t *ezsignformfield_request);

ezsignformfield_request_t *ezsignformfield_request_parseFromJSON(cJSON *ezsignformfield_requestJSON);

cJSON *ezsignformfield_request_convertToJSON(ezsignformfield_request_t *ezsignformfield_request);

#endif /* _ezsignformfield_request_H_ */

