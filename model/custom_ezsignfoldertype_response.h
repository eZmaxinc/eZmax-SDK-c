/*
 * custom_ezsignfoldertype_response.h
 *
 * A Custom Ezsignfoldertype Object
 */

#ifndef _custom_ezsignfoldertype_response_H_
#define _custom_ezsignfoldertype_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldertype_response_t custom_ezsignfoldertype_response_t;




typedef struct custom_ezsignfoldertype_response_t {
    int pki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsignfoldertype_includeproofsigner; //boolean
    int b_ezsignfoldertype_includeproofuser; //boolean
    int b_ezsignfoldertype_delegate; //boolean
    int b_ezsignfoldertype_reassign; //boolean

} custom_ezsignfoldertype_response_t;

custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_create(
    int pki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignfoldertype_includeproofsigner,
    int b_ezsignfoldertype_includeproofuser,
    int b_ezsignfoldertype_delegate,
    int b_ezsignfoldertype_reassign
);

void custom_ezsignfoldertype_response_free(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response);

custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_parseFromJSON(cJSON *custom_ezsignfoldertype_responseJSON);

cJSON *custom_ezsignfoldertype_response_convertToJSON(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response);

#endif /* _custom_ezsignfoldertype_response_H_ */
