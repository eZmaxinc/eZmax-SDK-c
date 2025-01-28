/*
 * custom_ezsigndocument_ezsignsignatures_automatic_response.h
 *
 * An Ezsigndocument Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef _custom_ezsigndocument_ezsignsignatures_automatic_response_H_
#define _custom_ezsigndocument_ezsignsignatures_automatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsigndocument_ezsignsignatures_automatic_response_t custom_ezsigndocument_ezsignsignatures_automatic_response_t;

#include "custom_ezsignsignature_ezsignsignatures_automatic_response.h"



typedef struct custom_ezsigndocument_ezsignsignatures_automatic_response_t {
    int pki_ezsigndocument_id; //numeric
    char *s_ezsigndocument_name; // string
    list_t *a_obj_ezsignsignature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsigndocument_ezsignsignatures_automatic_response_t;

__attribute__((deprecated)) custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_create(
    int pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignsignature
);

void custom_ezsigndocument_ezsignsignatures_automatic_response_free(custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response);

custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsigndocument_ezsignsignatures_automatic_responseJSON);

cJSON *custom_ezsigndocument_ezsignsignatures_automatic_response_convertToJSON(custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response);

#endif /* _custom_ezsigndocument_ezsignsignatures_automatic_response_H_ */

