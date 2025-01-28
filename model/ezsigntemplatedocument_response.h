/*
 * ezsigntemplatedocument_response.h
 *
 * A Ezsigntemplatedocument Object
 */

#ifndef _ezsigntemplatedocument_response_H_
#define _ezsigntemplatedocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_response_t ezsigntemplatedocument_response_t;




typedef struct ezsigntemplatedocument_response_t {
    int pki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatedocument_name; // string
    int i_ezsigntemplatedocument_pagetotal; //numeric
    int i_ezsigntemplatedocument_signaturetotal; //numeric
    int i_ezsigntemplatedocument_formfieldtotal; //numeric
    int b_ezsigntemplatedocument_hassignedsignatures; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_response_t;

__attribute__((deprecated)) ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal,
    int i_ezsigntemplatedocument_formfieldtotal,
    int b_ezsigntemplatedocument_hassignedsignatures
);

void ezsigntemplatedocument_response_free(ezsigntemplatedocument_response_t *ezsigntemplatedocument_response);

ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_parseFromJSON(cJSON *ezsigntemplatedocument_responseJSON);

cJSON *ezsigntemplatedocument_response_convertToJSON(ezsigntemplatedocument_response_t *ezsigntemplatedocument_response);

#endif /* _ezsigntemplatedocument_response_H_ */

