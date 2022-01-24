/*
 * ezsignsigner_response.h
 *
 * An Ezsignsigner Object
 */

#ifndef _ezsignsigner_response_H_
#define _ezsignsigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_response_t ezsignsigner_response_t;


// Enum EEZSIGNSIGNERLOGINTYPE for ezsignsigner_response

typedef enum  { ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_NULL = 0, ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_Password, ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_PasswordPhone, ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_PasswordQuestion, ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_InPersonPhone, ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_InPerson } ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e;

char* ezsignsigner_response_e_ezsignsigner_logintype_ToString(ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype);

ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e ezsignsigner_response_e_ezsignsigner_logintype_FromString(char* e_ezsignsigner_logintype);



typedef struct ezsignsigner_response_t {
    int fki_taxassignment_id; //numeric
    int fki_secretquestion_id; //numeric
    ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype; //enum
    char *s_ezsignsigner_secretanswer; // string

} ezsignsigner_response_t;

ezsignsigner_response_t *ezsignsigner_response_create(
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
);

void ezsignsigner_response_free(ezsignsigner_response_t *ezsignsigner_response);

ezsignsigner_response_t *ezsignsigner_response_parseFromJSON(cJSON *ezsignsigner_responseJSON);

cJSON *ezsignsigner_response_convertToJSON(ezsignsigner_response_t *ezsignsigner_response);

#endif /* _ezsignsigner_response_H_ */

