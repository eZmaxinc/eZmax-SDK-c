/*
 * ezsigntemplatedocumentpage_response_compound.h
 *
 * An Ezsigntemplatedocumentpage Object and children to create a complete structure
 */

#ifndef _ezsigntemplatedocumentpage_response_compound_H_
#define _ezsigntemplatedocumentpage_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpage_response_compound_t ezsigntemplatedocumentpage_response_compound_t;

#include "ezsigntemplatedocumentpage_response.h"



typedef struct ezsigntemplatedocumentpage_response_compound_t {
    int pki_ezsigntemplatedocumentpage_id; //numeric
    int i_ezsigntemplatedocumentpage_widthimage; //numeric
    int i_ezsigntemplatedocumentpage_heightimage; //numeric
    int i_ezsigntemplatedocumentpage_widthpdf; //numeric
    int i_ezsigntemplatedocumentpage_heightpdf; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_computed_imageurl; // string

} ezsigntemplatedocumentpage_response_compound_t;

ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_create(
    int pki_ezsigntemplatedocumentpage_id,
    int i_ezsigntemplatedocumentpage_widthimage,
    int i_ezsigntemplatedocumentpage_heightimage,
    int i_ezsigntemplatedocumentpage_widthpdf,
    int i_ezsigntemplatedocumentpage_heightpdf,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
);

void ezsigntemplatedocumentpage_response_compound_free(ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound);

ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_parseFromJSON(cJSON *ezsigntemplatedocumentpage_response_compoundJSON);

cJSON *ezsigntemplatedocumentpage_response_compound_convertToJSON(ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound);

#endif /* _ezsigntemplatedocumentpage_response_compound_H_ */

