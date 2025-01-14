/*
 * colleague_response_compound_v2.h
 *
 * A Colleague Object
 */

#ifndef _colleague_response_compound_v2_H_
#define _colleague_response_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct colleague_response_compound_v2_t colleague_response_compound_v2_t;

#include "common_audit.h"
#include "custom_user_name_response.h"
#include "field_e_colleague_ezsign.h"
#include "field_e_colleague_realestateinprogess.h"

// Enum  for colleague_response_compound_v2

typedef enum  { ezmax_api_definition__full_colleague_response_compound_v2__NULL = 0, ezmax_api_definition__full_colleague_response_compound_v2__No, ezmax_api_definition__full_colleague_response_compound_v2__Read, ezmax_api_definition__full_colleague_response_compound_v2__Modify, ezmax_api_definition__full_colleague_response_compound_v2__Full } ezmax_api_definition__full_colleague_response_compound_v2__e;

char* colleague_response_compound_v2_e_colleague_ezsign_ToString(ezmax_api_definition__full_colleague_response_compound_v2__e e_colleague_ezsign);

ezmax_api_definition__full_colleague_response_compound_v2__e colleague_response_compound_v2_e_colleague_ezsign_FromString(char* e_colleague_ezsign);

// Enum  for colleague_response_compound_v2

typedef enum  { ezmax_api_definition__full_colleague_response_compound_v2__NULL = 0, ezmax_api_definition__full_colleague_response_compound_v2__No, ezmax_api_definition__full_colleague_response_compound_v2__Read, ezmax_api_definition__full_colleague_response_compound_v2__Modify, ezmax_api_definition__full_colleague_response_compound_v2__Create } ezmax_api_definition__full_colleague_response_compound_v2__e;

char* colleague_response_compound_v2_e_colleague_realestateinprogress_ToString(ezmax_api_definition__full_colleague_response_compound_v2__e e_colleague_realestateinprogress);

ezmax_api_definition__full_colleague_response_compound_v2__e colleague_response_compound_v2_e_colleague_realestateinprogress_FromString(char* e_colleague_realestateinprogress);



typedef struct colleague_response_compound_v2_t {
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
    field_e_colleague_ezsign_t *e_colleague_ezsign; // custom
    field_e_colleague_realestateinprogess_t *e_colleague_realestateinprogress; // custom
    struct custom_user_name_response_t *obj_user_name; //model
    struct common_audit_t *obj_audit; //model

} colleague_response_compound_v2_t;

colleague_response_compound_v2_t *colleague_response_compound_v2_create(
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
    field_e_colleague_ezsign_t *e_colleague_ezsign,
    field_e_colleague_realestateinprogess_t *e_colleague_realestateinprogress,
    custom_user_name_response_t *obj_user_name,
    common_audit_t *obj_audit
);

void colleague_response_compound_v2_free(colleague_response_compound_v2_t *colleague_response_compound_v2);

colleague_response_compound_v2_t *colleague_response_compound_v2_parseFromJSON(cJSON *colleague_response_compound_v2JSON);

cJSON *colleague_response_compound_v2_convertToJSON(colleague_response_compound_v2_t *colleague_response_compound_v2);

#endif /* _colleague_response_compound_v2_H_ */

