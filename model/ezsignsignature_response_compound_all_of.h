/*
 * ezsignsignature_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignsignature_response_compound_all_of_H_
#define _ezsignsignature_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_response_compound_all_of_t ezsignsignature_response_compound_all_of_t;

#include "custom_creditcardtransaction_response.h"
#include "ezsignsignaturecustomdate_response_compound.h"



typedef struct ezsignsignature_response_compound_all_of_t {
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container
    struct custom_creditcardtransaction_response_t *obj_creditcardtransaction; //model

} ezsignsignature_response_compound_all_of_t;

ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_create(
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    custom_creditcardtransaction_response_t *obj_creditcardtransaction
);

void ezsignsignature_response_compound_all_of_free(ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of);

ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of_parseFromJSON(cJSON *ezsignsignature_response_compound_all_ofJSON);

cJSON *ezsignsignature_response_compound_all_of_convertToJSON(ezsignsignature_response_compound_all_of_t *ezsignsignature_response_compound_all_of);

#endif /* _ezsignsignature_response_compound_all_of_H_ */

