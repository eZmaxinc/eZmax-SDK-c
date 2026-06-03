/*
 * custom_ezsignfoldertype_template_response.h
 *
 * A Custom Ezsignfoldertype Object
 */

#ifndef _custom_ezsignfoldertype_template_response_H_
#define _custom_ezsignfoldertype_template_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldertype_template_response_t custom_ezsignfoldertype_template_response_t;




typedef struct custom_ezsignfoldertype_template_response_t {
    int *pki_ezsignfoldertype_id; //numeric
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfoldertype_template_response_t;

__attribute__((deprecated)) custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_create(
    int *pki_ezsignfoldertype_id,
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner
);

void custom_ezsignfoldertype_template_response_free(custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response);

custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response_parseFromJSON(cJSON *custom_ezsignfoldertype_template_responseJSON);

cJSON *custom_ezsignfoldertype_template_response_convertToJSON(custom_ezsignfoldertype_template_response_t *custom_ezsignfoldertype_template_response);

#endif /* _custom_ezsignfoldertype_template_response_H_ */

