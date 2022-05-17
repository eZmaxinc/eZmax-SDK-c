/*
 * activesession_get_current_v1_response_m_payload.h
 *
 * Payload for GET /1/object/activesession/getCurrent
 */

#ifndef _activesession_get_current_v1_response_m_payload_H_
#define _activesession_get_current_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_current_v1_response_m_payload_t activesession_get_current_v1_response_m_payload_t;

#include "activesession_response_compound.h"
#include "activesession_response_compound_apikey.h"
#include "activesession_response_compound_user.h"
#include "field_e_activesession_usertype.h"
#include "field_e_activesession_weekdaystart.h"

// Enum  for activesession_get_current_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__AgentBroker, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Assistant, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__EzsignUser, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Normal } ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e;

char* activesession_get_current_v1_response_m_payload_e_activesession_usertype_ToString(ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e e_activesession_usertype);

ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e activesession_get_current_v1_response_m_payload_e_activesession_usertype_FromString(char* e_activesession_usertype);

// Enum  for activesession_get_current_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Sunday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Monday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Tuesday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Wednesday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Thursday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Friday, ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__Saturday } ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e;

char* activesession_get_current_v1_response_m_payload_e_activesession_weekdaystart_ToString(ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e e_activesession_weekdaystart);

ezmax_api_definition__full_activesession_get_current_v1_response_m_payload__e activesession_get_current_v1_response_m_payload_e_activesession_weekdaystart_FromString(char* e_activesession_weekdaystart);



typedef struct activesession_get_current_v1_response_m_payload_t {
    field_e_activesession_usertype_t *e_activesession_usertype; // custom
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart; // custom
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    char *pks_customer_code; // string
    list_t *a_pki_permission_id; //primitive container
    struct activesession_response_compound_user_t *obj_user_real; //model
    struct activesession_response_compound_user_t *obj_user_cloned; //model
    struct activesession_response_compound_apikey_t *obj_apikey; //model
    list_t *a_e_module_internalname; //primitive container

} activesession_get_current_v1_response_m_payload_t;

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create(
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    char *pks_customer_code,
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
);

void activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload);

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v1_response_m_payloadJSON);

cJSON *activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload);

#endif /* _activesession_get_current_v1_response_m_payload_H_ */

