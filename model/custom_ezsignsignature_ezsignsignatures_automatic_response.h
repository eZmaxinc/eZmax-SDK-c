/*
 * custom_ezsignsignature_ezsignsignatures_automatic_response.h
 *
 * An Ezsignsignature Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef _custom_ezsignsignature_ezsignsignatures_automatic_response_H_
#define _custom_ezsignsignature_ezsignsignatures_automatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignsignature_ezsignsignatures_automatic_response_t custom_ezsignsignature_ezsignsignatures_automatic_response_t;

#include "field_e_ezsignsignature_type.h"



typedef struct custom_ezsignsignature_ezsignsignatures_automatic_response_t {
    int pki_ezsignsignature_id; //numeric
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type; //referenced enum
    int i_ezsignpage_pagenumber; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignsignature_ezsignsignatures_automatic_response_t;

__attribute__((deprecated)) custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_create(
    int pki_ezsignsignature_id,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    int i_ezsignpage_pagenumber
);

void custom_ezsignsignature_ezsignsignatures_automatic_response_free(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response);

custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsignsignature_ezsignsignatures_automatic_responseJSON);

cJSON *custom_ezsignsignature_ezsignsignatures_automatic_response_convertToJSON(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response);

#endif /* _custom_ezsignsignature_ezsignsignatures_automatic_response_H_ */

