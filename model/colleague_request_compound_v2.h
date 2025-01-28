/*
 * colleague_request_compound_v2.h
 *
 * A Colleague Object and children
 */

#ifndef _colleague_request_compound_v2_H_
#define _colleague_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct colleague_request_compound_v2_t colleague_request_compound_v2_t;

#include "field_e_colleague_ezsign.h"
#include "field_e_colleague_realestateinprogess.h"



typedef struct colleague_request_compound_v2_t {
    int pki_colleague_id; //numeric
    int fki_user_id; //numeric
    int fki_user_id_colleague; //numeric
    int b_colleague_ezsignemail; //boolean
    int b_colleague_financial; //boolean
    int b_colleague_usecloneemail; //boolean
    int b_colleague_attachment; //boolean
    int b_colleague_canafe; //boolean
    int b_colleague_permission; //boolean
    int b_colleague_realestatecompleted; //boolean
    char *dt_colleague_from; // string
    char *dt_colleague_to; // string
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign; //referenced enum
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} colleague_request_compound_v2_t;

__attribute__((deprecated)) colleague_request_compound_v2_t *colleague_request_compound_v2_create(
    int pki_colleague_id,
    int fki_user_id,
    int fki_user_id_colleague,
    int b_colleague_ezsignemail,
    int b_colleague_financial,
    int b_colleague_usecloneemail,
    int b_colleague_attachment,
    int b_colleague_canafe,
    int b_colleague_permission,
    int b_colleague_realestatecompleted,
    char *dt_colleague_from,
    char *dt_colleague_to,
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign,
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress
);

void colleague_request_compound_v2_free(colleague_request_compound_v2_t *colleague_request_compound_v2);

colleague_request_compound_v2_t *colleague_request_compound_v2_parseFromJSON(cJSON *colleague_request_compound_v2JSON);

cJSON *colleague_request_compound_v2_convertToJSON(colleague_request_compound_v2_t *colleague_request_compound_v2);

#endif /* _colleague_request_compound_v2_H_ */

