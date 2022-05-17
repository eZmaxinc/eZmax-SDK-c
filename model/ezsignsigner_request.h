/*
 * ezsignsigner_request.h
 *
 * An Ezsignsigner Object
 */

#ifndef _ezsignsigner_request_H_
#define _ezsignsigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_request_t ezsignsigner_request_t;


// Enum EEZSIGNSIGNERLOGINTYPE for ezsignsigner_request

typedef enum  { ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_NULL = 0, ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_Password, ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_PasswordPhone, ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_PasswordQuestion, ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_InPersonPhone, ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_InPerson } ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e;

char* ezsignsigner_request_e_ezsignsigner_logintype_ToString(ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype);

ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e ezsignsigner_request_e_ezsignsigner_logintype_FromString(char* e_ezsignsigner_logintype);



typedef struct ezsignsigner_request_t {
    int fki_userlogintype_id; //numeric
    int fki_taxassignment_id; //numeric
    int fki_secretquestion_id; //numeric
    ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype; //enum
    char *s_ezsignsigner_secretanswer; // string

} ezsignsigner_request_t;

ezsignsigner_request_t *ezsignsigner_request_create(
    int fki_userlogintype_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
);

void ezsignsigner_request_free(ezsignsigner_request_t *ezsignsigner_request);

ezsignsigner_request_t *ezsignsigner_request_parseFromJSON(cJSON *ezsignsigner_requestJSON);

cJSON *ezsignsigner_request_convertToJSON(ezsignsigner_request_t *ezsignsigner_request);

#endif /* _ezsignsigner_request_H_ */

