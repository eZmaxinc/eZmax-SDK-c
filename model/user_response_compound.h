/*
 * user_response_compound.h
 *
 * A User Object and children to create a complete structure
 */

#ifndef _user_response_compound_H_
#define _user_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_response_compound_t user_response_compound_t;

#include "common_audit.h"
#include "field_e_user_type.h"
#include "user_response.h"

// Enum  for user_response_compound

typedef enum  { ezmax_api_definition_user_response_compound__NULL = 0, ezmax_api_definition_user_response_compound__AgentBroker, ezmax_api_definition_user_response_compound__Assistant, ezmax_api_definition_user_response_compound__Attendance, ezmax_api_definition_user_response_compound__Customer, ezmax_api_definition_user_response_compound__Employee, ezmax_api_definition_user_response_compound__Ezcom, ezmax_api_definition_user_response_compound__EzsignSigner, ezmax_api_definition_user_response_compound__EzsignUser, ezmax_api_definition_user_response_compound__FranchiseCustomerServer, ezmax_api_definition_user_response_compound__Normal, ezmax_api_definition_user_response_compound__RewardAdministration, ezmax_api_definition_user_response_compound__RewardMember, ezmax_api_definition_user_response_compound__RewardRepresentative, ezmax_api_definition_user_response_compound__RewardCustomer, ezmax_api_definition_user_response_compound__RewardDistributorServer, ezmax_api_definition_user_response_compound__Supplier, ezmax_api_definition_user_response_compound__VetrxCustomer, ezmax_api_definition_user_response_compound__Vetrxcustomergroup, ezmax_api_definition_user_response_compound__VetrxCustomerServer, ezmax_api_definition_user_response_compound__VetrxManufacturer, ezmax_api_definition_user_response_compound__VetrxVendor } ezmax_api_definition_user_response_compound__e;

char* user_response_compound_e_user_type_ToString(ezmax_api_definition_user_response_compound__e e_user_type);

ezmax_api_definition_user_response_compound__e user_response_compound_e_user_type_FromString(char* e_user_type);



typedef struct user_response_compound_t {
    int pki_user_id; //numeric
    int fki_language_id; //numeric
    field_e_user_type_t *e_user_type; // custom
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    struct common_audit_t *obj_audit; //model

} user_response_compound_t;

user_response_compound_t *user_response_compound_create(
    int pki_user_id,
    int fki_language_id,
    field_e_user_type_t *e_user_type,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    common_audit_t *obj_audit
);

void user_response_compound_free(user_response_compound_t *user_response_compound);

user_response_compound_t *user_response_compound_parseFromJSON(cJSON *user_response_compoundJSON);

cJSON *user_response_compound_convertToJSON(user_response_compound_t *user_response_compound);

#endif /* _user_response_compound_H_ */

