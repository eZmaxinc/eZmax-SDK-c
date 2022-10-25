/*
 * user_autocomplete_element_response.h
 *
 * A User AutocompleteElement Response
 */

#ifndef _user_autocomplete_element_response_H_
#define _user_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_autocomplete_element_response_t user_autocomplete_element_response_t;

#include "field_e_user_type.h"

// Enum  for user_autocomplete_element_response

typedef enum  { ezmax_api_definition__full_user_autocomplete_element_response__NULL = 0, ezmax_api_definition__full_user_autocomplete_element_response__AgentBroker, ezmax_api_definition__full_user_autocomplete_element_response__Assistant, ezmax_api_definition__full_user_autocomplete_element_response__Attendance, ezmax_api_definition__full_user_autocomplete_element_response__Customer, ezmax_api_definition__full_user_autocomplete_element_response__Employee, ezmax_api_definition__full_user_autocomplete_element_response__Ezcom, ezmax_api_definition__full_user_autocomplete_element_response__EzsignSigner, ezmax_api_definition__full_user_autocomplete_element_response__EzsignUser, ezmax_api_definition__full_user_autocomplete_element_response__FranchiseCustomerServer, ezmax_api_definition__full_user_autocomplete_element_response__Normal, ezmax_api_definition__full_user_autocomplete_element_response__RewardAdministration, ezmax_api_definition__full_user_autocomplete_element_response__RewardMember, ezmax_api_definition__full_user_autocomplete_element_response__RewardRepresentative, ezmax_api_definition__full_user_autocomplete_element_response__RewardCustomer, ezmax_api_definition__full_user_autocomplete_element_response__RewardDistributorServer, ezmax_api_definition__full_user_autocomplete_element_response__Supplier, ezmax_api_definition__full_user_autocomplete_element_response__VetrxCustomer, ezmax_api_definition__full_user_autocomplete_element_response__Vetrxcustomergroup, ezmax_api_definition__full_user_autocomplete_element_response__VetrxCustomerServer, ezmax_api_definition__full_user_autocomplete_element_response__VetrxManufacturer, ezmax_api_definition__full_user_autocomplete_element_response__VetrxVendor } ezmax_api_definition__full_user_autocomplete_element_response__e;

char* user_autocomplete_element_response_e_user_type_ToString(ezmax_api_definition__full_user_autocomplete_element_response__e e_user_type);

ezmax_api_definition__full_user_autocomplete_element_response__e user_autocomplete_element_response_e_user_type_FromString(char* e_user_type);



typedef struct user_autocomplete_element_response_t {
    field_e_user_type_t *e_user_type; // custom
    char *s_user_name; // string
    int pki_user_id; //numeric
    int b_user_isactive; //boolean

} user_autocomplete_element_response_t;

user_autocomplete_element_response_t *user_autocomplete_element_response_create(
    field_e_user_type_t *e_user_type,
    char *s_user_name,
    int pki_user_id,
    int b_user_isactive
);

void user_autocomplete_element_response_free(user_autocomplete_element_response_t *user_autocomplete_element_response);

user_autocomplete_element_response_t *user_autocomplete_element_response_parseFromJSON(cJSON *user_autocomplete_element_responseJSON);

cJSON *user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_t *user_autocomplete_element_response);

#endif /* _user_autocomplete_element_response_H_ */

