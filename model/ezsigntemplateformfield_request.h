/*
 * ezsigntemplateformfield_request.h
 *
 * A Ezsigntemplateformfield Object
 */

#ifndef _ezsigntemplateformfield_request_H_
#define _ezsigntemplateformfield_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfield_request_t ezsigntemplateformfield_request_t;




typedef struct ezsigntemplateformfield_request_t {
    int pki_ezsigntemplateformfield_id; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateformfield_label; // string
    char *s_ezsigntemplateformfield_value; // string
    int i_ezsigntemplateformfield_x; //numeric
    int i_ezsigntemplateformfield_y; //numeric
    int i_ezsigntemplateformfield_width; //numeric
    int i_ezsigntemplateformfield_height; //numeric
    int b_ezsigntemplateformfield_selected; //boolean

} ezsigntemplateformfield_request_t;

ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_create(
    int pki_ezsigntemplateformfield_id,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_selected
);

void ezsigntemplateformfield_request_free(ezsigntemplateformfield_request_t *ezsigntemplateformfield_request);

ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_parseFromJSON(cJSON *ezsigntemplateformfield_requestJSON);

cJSON *ezsigntemplateformfield_request_convertToJSON(ezsigntemplateformfield_request_t *ezsigntemplateformfield_request);

#endif /* _ezsigntemplateformfield_request_H_ */

