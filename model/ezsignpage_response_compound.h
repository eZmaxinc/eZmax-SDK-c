/*
 * ezsignpage_response_compound.h
 *
 * An Ezsignpage Object and children to create a complete structure
 */

#ifndef _ezsignpage_response_compound_H_
#define _ezsignpage_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignpage_response_compound_t ezsignpage_response_compound_t;




typedef struct ezsignpage_response_compound_t {
    int pki_ezsignpage_id; //numeric
    int i_ezsignpage_widthimage; //numeric
    int i_ezsignpage_heightimage; //numeric
    int i_ezsignpage_widthpdf; //numeric
    int i_ezsignpage_heightpdf; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_computed_imageurl; // string

} ezsignpage_response_compound_t;

ezsignpage_response_compound_t *ezsignpage_response_compound_create(
    int pki_ezsignpage_id,
    int i_ezsignpage_widthimage,
    int i_ezsignpage_heightimage,
    int i_ezsignpage_widthpdf,
    int i_ezsignpage_heightpdf,
    int i_ezsignpage_pagenumber,
    char *s_computed_imageurl
);

void ezsignpage_response_compound_free(ezsignpage_response_compound_t *ezsignpage_response_compound);

ezsignpage_response_compound_t *ezsignpage_response_compound_parseFromJSON(cJSON *ezsignpage_response_compoundJSON);

cJSON *ezsignpage_response_compound_convertToJSON(ezsignpage_response_compound_t *ezsignpage_response_compound);

#endif /* _ezsignpage_response_compound_H_ */

