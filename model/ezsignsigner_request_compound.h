/*
 * ezsignsigner_request_compound.h
 *
 * An Ezsignsigner Object and children to create a complete structure
 */

#ifndef _ezsignsigner_request_compound_H_
#define _ezsignsigner_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_request_compound_t ezsignsigner_request_compound_t;

#include "ezsignsigner_request.h"
#include "ezsignsigner_request_compound_contact.h"

// Enum EEZSIGNSIGNERLOGINTYPE for ezsignsigner_request_compound

typedef enum  { ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_NULL = 0, ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_Password, ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_PasswordPhone, ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_PasswordQuestion, ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_InPersonPhone, ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_InPerson } ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e;

char* ezsignsigner_request_compound_e_ezsignsigner_logintype_ToString(ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype);

ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e ezsignsigner_request_compound_e_ezsignsigner_logintype_FromString(char* e_ezsignsigner_logintype);



typedef struct ezsignsigner_request_compound_t {
    struct ezsignsigner_request_compound_contact_t *obj_contact; //model
    int fki_taxassignment_id; //numeric
    int fki_secretquestion_id; //numeric
    ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype; //enum
    char *s_ezsignsigner_secretanswer; // string

} ezsignsigner_request_compound_t;

ezsignsigner_request_compound_t *ezsignsigner_request_compound_create(
    ezsignsigner_request_compound_contact_t *obj_contact,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
);

void ezsignsigner_request_compound_free(ezsignsigner_request_compound_t *ezsignsigner_request_compound);

ezsignsigner_request_compound_t *ezsignsigner_request_compound_parseFromJSON(cJSON *ezsignsigner_request_compoundJSON);

cJSON *ezsignsigner_request_compound_convertToJSON(ezsignsigner_request_compound_t *ezsignsigner_request_compound);

#endif /* _ezsignsigner_request_compound_H_ */

