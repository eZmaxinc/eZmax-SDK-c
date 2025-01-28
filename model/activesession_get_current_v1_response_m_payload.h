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

#include "activesession_response_compound_apikey.h"
#include "activesession_response_compound_user.h"
#include "field_e_activesession_ezsign.h"
#include "field_e_activesession_ezsignaccess.h"
#include "field_e_activesession_ezsignprepaid.h"
#include "field_e_activesession_origin.h"
#include "field_e_activesession_realestateinprogress.h"
#include "field_e_activesession_usertype.h"
#include "field_e_activesession_weekdaystart.h"
#include "field_e_systemconfiguration_ezsignofficeplan.h"
#include "field_e_user_ezsignaccess.h"
#include "field_e_user_ezsignprepaid.h"



typedef struct activesession_get_current_v1_response_m_payload_t {
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype; //referenced enum
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin; //referenced enum
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart; //referenced enum
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    int b_activesession_issuperadmin; //boolean
    int b_activesession_attachment; //boolean
    int b_activesession_canafe; //boolean
    int b_activesession_financial; //boolean
    int b_activesession_realestatecompleted; //boolean
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign; //referenced enum
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess; //referenced enum
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid; //referenced enum
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress; //referenced enum
    char *pks_customer_code; // string
    int fki_systemconfigurationtype_id; //numeric
    int fki_signature_id; //numeric
    int fki_ezsignuser_id; //numeric
    int b_systemconfiguration_ezsignpaidbyoffice; //boolean
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan; //referenced enum
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess; //referenced enum
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e e_user_ezsignprepaid; //referenced enum
    int b_user_ezsigntrial; //boolean
    char *dt_user_ezsignprepaidexpiration; // string
    list_t *a_pki_permission_id; //primitive container
    struct activesession_response_compound_user_t *obj_user_real; //model
    struct activesession_response_compound_user_t *obj_user_cloned; //model
    struct activesession_response_compound_apikey_t *obj_apikey; //model
    list_t *a_e_module_internalname; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} activesession_get_current_v1_response_m_payload_t;

__attribute__((deprecated)) activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create(
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype,
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin,
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    int b_activesession_attachment,
    int b_activesession_canafe,
    int b_activesession_financial,
    int b_activesession_realestatecompleted,
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign,
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess,
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid,
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id,
    int fki_ezsignuser_id,
    int b_systemconfiguration_ezsignpaidbyoffice,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e e_user_ezsignprepaid,
    int b_user_ezsigntrial,
    char *dt_user_ezsignprepaidexpiration,
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

