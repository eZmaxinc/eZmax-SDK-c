/*
 * activesession_get_current_v1_response_m_payload.h
 *
 * Payload for the /1/object/activesession/getCurrent API Request
 */

#ifndef _activesession_get_current_v1_response_m_payload_H_
#define _activesession_get_current_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_current_v1_response_m_payload_t activesession_get_current_v1_response_m_payload_t;


// Enum EACTIVESESSIONSESSIONTYPE for activesession_get_current_v1_response_m_payload

typedef enum  { ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_NULL = 0, ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_Normal } ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e;

char* activesession_get_current_v1_response_m_payload_e_activesession_sessiontype_ToString(ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontype);

ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e activesession_get_current_v1_response_m_payload_e_activesession_sessiontype_FromString(char* e_activesession_sessiontype);



typedef struct activesession_get_current_v1_response_m_payload_t {
    char *s_customer_code; // string
    ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontype; //enum
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    list_t *a_registered_modules; //primitive container
    list_t *a_permissions; //primitive container

} activesession_get_current_v1_response_m_payload_t;

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create(
    char *s_customer_code,
    ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontype,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    list_t *a_registered_modules,
    list_t *a_permissions
);

void activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload);

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v1_response_m_payloadJSON);

cJSON *activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload);

#endif /* _activesession_get_current_v1_response_m_payload_H_ */

