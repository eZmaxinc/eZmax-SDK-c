/*
 * ezsignpage_response.h
 *
 * An Ezsignpage Object
 */

#ifndef _ezsignpage_response_H_
#define _ezsignpage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignpage_response_t ezsignpage_response_t;




typedef struct ezsignpage_response_t {
    int pki_ezsignpage_id; //numeric
    int i_ezsignpage_widthimage; //numeric
    int i_ezsignpage_heightimage; //numeric
    int i_ezsignpage_widthpdf; //numeric
    int i_ezsignpage_heightpdf; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_image_url; // string

} ezsignpage_response_t;

ezsignpage_response_t *ezsignpage_response_create(
    int pki_ezsignpage_id,
    int i_ezsignpage_widthimage,
    int i_ezsignpage_heightimage,
    int i_ezsignpage_widthpdf,
    int i_ezsignpage_heightpdf,
    int i_ezsignpage_pagenumber,
    char *s_image_url
);

void ezsignpage_response_free(ezsignpage_response_t *ezsignpage_response);

ezsignpage_response_t *ezsignpage_response_parseFromJSON(cJSON *ezsignpage_responseJSON);

cJSON *ezsignpage_response_convertToJSON(ezsignpage_response_t *ezsignpage_response);

#endif /* _ezsignpage_response_H_ */

