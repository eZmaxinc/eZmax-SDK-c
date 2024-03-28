/*
 * activesession_response_compound.h
 *
 * Payload for GET /1/object/activesession/getCurrent
 */

#ifndef _activesession_response_compound_H_
#define _activesession_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_t activesession_response_compound_t;

#include "activesession_response_compound_apikey.h"
#include "activesession_response_compound_user.h"
#include "field_e_activesession_origin.h"
#include "field_e_activesession_usertype.h"
#include "field_e_activesession_weekdaystart.h"
#include "field_e_systemconfiguration_ezsignofficeplan.h"
#include "field_e_user_ezsignaccess.h"
#include "field_e_user_ezsignprepaid.h"

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__AgentBroker, ezmax_api_definition__full_activesession_response_compound__Assistant, ezmax_api_definition__full_activesession_response_compound__EzsignSigner, ezmax_api_definition__full_activesession_response_compound__EzsignUser, ezmax_api_definition__full_activesession_response_compound__Normal } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_activesession_usertype_ToString(ezmax_api_definition__full_activesession_response_compound__e e_activesession_usertype);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_activesession_usertype_FromString(char* e_activesession_usertype);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__BuiltIn, ezmax_api_definition__full_activesession_response_compound__External } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_activesession_origin_ToString(ezmax_api_definition__full_activesession_response_compound__e e_activesession_origin);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_activesession_origin_FromString(char* e_activesession_origin);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__Sunday, ezmax_api_definition__full_activesession_response_compound__Monday, ezmax_api_definition__full_activesession_response_compound__Tuesday, ezmax_api_definition__full_activesession_response_compound__Wednesday, ezmax_api_definition__full_activesession_response_compound__Thursday, ezmax_api_definition__full_activesession_response_compound__Friday, ezmax_api_definition__full_activesession_response_compound__Saturday } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_activesession_weekdaystart_ToString(ezmax_api_definition__full_activesession_response_compound__e e_activesession_weekdaystart);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_activesession_weekdaystart_FromString(char* e_activesession_weekdaystart);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__Standard, ezmax_api_definition__full_activesession_response_compound__Pro } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_systemconfiguration_ezsignofficeplan_ToString(ezmax_api_definition__full_activesession_response_compound__e e_systemconfiguration_ezsignofficeplan);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_systemconfiguration_ezsignofficeplan_FromString(char* e_systemconfiguration_ezsignofficeplan);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__No, ezmax_api_definition__full_activesession_response_compound__PaidByOffice, ezmax_api_definition__full_activesession_response_compound__PerDocument, ezmax_api_definition__full_activesession_response_compound__Prepaid } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_user_ezsignaccess_ToString(ezmax_api_definition__full_activesession_response_compound__e e_user_ezsignaccess);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_user_ezsignaccess_FromString(char* e_user_ezsignaccess);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition__full_activesession_response_compound__NULL = 0, ezmax_api_definition__full_activesession_response_compound__No, ezmax_api_definition__full_activesession_response_compound__Basic, ezmax_api_definition__full_activesession_response_compound__Standard, ezmax_api_definition__full_activesession_response_compound__Pro } ezmax_api_definition__full_activesession_response_compound__e;

char* activesession_response_compound_e_user_ezsignprepaid_ToString(ezmax_api_definition__full_activesession_response_compound__e e_user_ezsignprepaid);

ezmax_api_definition__full_activesession_response_compound__e activesession_response_compound_e_user_ezsignprepaid_FromString(char* e_user_ezsignprepaid);



typedef struct activesession_response_compound_t {
    field_e_activesession_usertype_t *e_activesession_usertype; // custom
    field_e_activesession_origin_t *e_activesession_origin; // custom
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart; // custom
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    int b_activesession_issuperadmin; //boolean
    char *pks_customer_code; // string
    int fki_systemconfigurationtype_id; //numeric
    int fki_signature_id; //numeric
    int b_systemconfiguration_ezsignpaidbyoffice; //boolean
    field_e_systemconfiguration_ezsignofficeplan_t *e_systemconfiguration_ezsignofficeplan; // custom
    field_e_user_ezsignaccess_t *e_user_ezsignaccess; // custom
    field_e_user_ezsignprepaid_t *e_user_ezsignprepaid; // custom
    char *dt_user_ezsignprepaidexpiration; // string
    list_t *a_pki_permission_id; //primitive container
    struct activesession_response_compound_user_t *obj_user_real; //model
    struct activesession_response_compound_user_t *obj_user_cloned; //model
    struct activesession_response_compound_apikey_t *obj_apikey; //model
    list_t *a_e_module_internalname; //primitive container

} activesession_response_compound_t;

activesession_response_compound_t *activesession_response_compound_create(
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_origin_t *e_activesession_origin,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id,
    int b_systemconfiguration_ezsignpaidbyoffice,
    field_e_systemconfiguration_ezsignofficeplan_t *e_systemconfiguration_ezsignofficeplan,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    field_e_user_ezsignprepaid_t *e_user_ezsignprepaid,
    char *dt_user_ezsignprepaidexpiration,
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
);

void activesession_response_compound_free(activesession_response_compound_t *activesession_response_compound);

activesession_response_compound_t *activesession_response_compound_parseFromJSON(cJSON *activesession_response_compoundJSON);

cJSON *activesession_response_compound_convertToJSON(activesession_response_compound_t *activesession_response_compound);

#endif /* _activesession_response_compound_H_ */

