/*
 * custom_ezmaxinvoicing_ezsigndocument_response.h
 *
 * An EzmaxinvoicingEzsigndocument object containing information about the Ezmaxinvoicing for an Ezsigndocument
 */

#ifndef _custom_ezmaxinvoicing_ezsigndocument_response_H_
#define _custom_ezmaxinvoicing_ezsigndocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxinvoicing_ezsigndocument_response_t custom_ezmaxinvoicing_ezsigndocument_response_t;




typedef struct custom_ezmaxinvoicing_ezsigndocument_response_t {
    int fki_ezsignfolder_id; //numeric
    char *s_name; // string
    char *s_ezsignfolder_description; // string
    char *s_ezsigndocument_name; // string
    int b_ezsignfolder_allowed; //boolean

} custom_ezmaxinvoicing_ezsigndocument_response_t;

custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_create(
    int fki_ezsignfolder_id,
    char *s_name,
    char *s_ezsignfolder_description,
    char *s_ezsigndocument_name,
    int b_ezsignfolder_allowed
);

void custom_ezmaxinvoicing_ezsigndocument_response_free(custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response);

custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsigndocument_responseJSON);

cJSON *custom_ezmaxinvoicing_ezsigndocument_response_convertToJSON(custom_ezmaxinvoicing_ezsigndocument_response_t *custom_ezmaxinvoicing_ezsigndocument_response);

#endif /* _custom_ezmaxinvoicing_ezsigndocument_response_H_ */

