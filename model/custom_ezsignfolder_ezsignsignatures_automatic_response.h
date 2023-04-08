/*
 * custom_ezsignfolder_ezsignsignatures_automatic_response.h
 *
 * An Ezsignfolder Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef _custom_ezsignfolder_ezsignsignatures_automatic_response_H_
#define _custom_ezsignfolder_ezsignsignatures_automatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfolder_ezsignsignatures_automatic_response_t custom_ezsignfolder_ezsignsignatures_automatic_response_t;

#include "custom_ezsigndocument_ezsignsignatures_automatic_response.h"



typedef struct custom_ezsignfolder_ezsignsignatures_automatic_response_t {
    int pki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    list_t *a_obj_ezsigndocument; //nonprimitive container

} custom_ezsignfolder_ezsignsignatures_automatic_response_t;

custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_ezsigndocument
);

void custom_ezsignfolder_ezsignsignatures_automatic_response_free(custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response);

custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsignfolder_ezsignsignatures_automatic_responseJSON);

cJSON *custom_ezsignfolder_ezsignsignatures_automatic_response_convertToJSON(custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response);

#endif /* _custom_ezsignfolder_ezsignsignatures_automatic_response_H_ */

