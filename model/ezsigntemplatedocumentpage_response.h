/*
 * ezsigntemplatedocumentpage_response.h
 *
 * An Ezsigntemplatedocumentpage Object
 */

#ifndef _ezsigntemplatedocumentpage_response_H_
#define _ezsigntemplatedocumentpage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpage_response_t ezsigntemplatedocumentpage_response_t;




typedef struct ezsigntemplatedocumentpage_response_t {
    int pki_ezsigntemplatedocumentpage_id; //numeric
    int i_ezsigntemplatedocumentpage_widthimage; //numeric
    int i_ezsigntemplatedocumentpage_heightimage; //numeric
    int i_ezsigntemplatedocumentpage_widthpdf; //numeric
    int i_ezsigntemplatedocumentpage_heightpdf; //numeric
    int i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_computed_imageurl; // string

} ezsigntemplatedocumentpage_response_t;

ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_create(
    int pki_ezsigntemplatedocumentpage_id,
    int i_ezsigntemplatedocumentpage_widthimage,
    int i_ezsigntemplatedocumentpage_heightimage,
    int i_ezsigntemplatedocumentpage_widthpdf,
    int i_ezsigntemplatedocumentpage_heightpdf,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
);

void ezsigntemplatedocumentpage_response_free(ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response);

ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_parseFromJSON(cJSON *ezsigntemplatedocumentpage_responseJSON);

cJSON *ezsigntemplatedocumentpage_response_convertToJSON(ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response);

#endif /* _ezsigntemplatedocumentpage_response_H_ */

