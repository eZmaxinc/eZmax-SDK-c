/*
 * custom_ezmaxinvoicing_ezsigndocument_response_all_of.h
 *
 * 
 */

#ifndef _custom_ezmaxinvoicing_ezsigndocument_response_all_of_H_
#define _custom_ezmaxinvoicing_ezsigndocument_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxinvoicing_ezsigndocument_response_all_of_t custom_ezmaxinvoicing_ezsigndocument_response_all_of_t;




typedef struct custom_ezmaxinvoicing_ezsigndocument_response_all_of_t {
    int fki_ezsignfolder_id; //numeric
    char *s_name; // string
    char *s_ezsignfolder_description; // string
    char *s_ezsigndocument_name; // string
    int b_ezsignfolder_allowed; //boolean

} custom_ezmaxinvoicing_ezsigndocument_response_all_of_t;

custom_ezmaxinvoicing_ezsigndocument_response_all_of_t *custom_ezmaxinvoicing_ezsigndocument_response_all_of_create(
    int fki_ezsignfolder_id,
    char *s_name,
    char *s_ezsignfolder_description,
    char *s_ezsigndocument_name,
    int b_ezsignfolder_allowed
);

void custom_ezmaxinvoicing_ezsigndocument_response_all_of_free(custom_ezmaxinvoicing_ezsigndocument_response_all_of_t *custom_ezmaxinvoicing_ezsigndocument_response_all_of);

custom_ezmaxinvoicing_ezsigndocument_response_all_of_t *custom_ezmaxinvoicing_ezsigndocument_response_all_of_parseFromJSON(cJSON *custom_ezmaxinvoicing_ezsigndocument_response_all_ofJSON);

cJSON *custom_ezmaxinvoicing_ezsigndocument_response_all_of_convertToJSON(custom_ezmaxinvoicing_ezsigndocument_response_all_of_t *custom_ezmaxinvoicing_ezsigndocument_response_all_of);

#endif /* _custom_ezmaxinvoicing_ezsigndocument_response_all_of_H_ */

