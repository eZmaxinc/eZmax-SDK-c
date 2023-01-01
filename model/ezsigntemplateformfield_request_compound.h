/*
 * ezsigntemplateformfield_request_compound.h
 *
 * An Ezsigntemplateformfield Object and children to create a complete structure
 */

#ifndef _ezsigntemplateformfield_request_compound_H_
#define _ezsigntemplateformfield_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfield_request_compound_t ezsigntemplateformfield_request_compound_t;




typedef struct ezsigntemplateformfield_request_compound_t {
    int pki_ezsigntemplateformfield_id; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateformfield_label; // string
    char *s_ezsigntemplateformfield_value; // string
    int i_ezsigntemplateformfield_x; //numeric
    int i_ezsigntemplateformfield_y; //numeric
    int i_ezsigntemplateformfield_width; //numeric
    int i_ezsigntemplateformfield_height; //numeric
    int b_ezsigntemplateformfield_selected; //boolean

} ezsigntemplateformfield_request_compound_t;

ezsigntemplateformfield_request_compound_t *ezsigntemplateformfield_request_compound_create(
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

void ezsigntemplateformfield_request_compound_free(ezsigntemplateformfield_request_compound_t *ezsigntemplateformfield_request_compound);

ezsigntemplateformfield_request_compound_t *ezsigntemplateformfield_request_compound_parseFromJSON(cJSON *ezsigntemplateformfield_request_compoundJSON);

cJSON *ezsigntemplateformfield_request_compound_convertToJSON(ezsigntemplateformfield_request_compound_t *ezsigntemplateformfield_request_compound);

#endif /* _ezsigntemplateformfield_request_compound_H_ */

