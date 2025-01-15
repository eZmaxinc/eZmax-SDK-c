/*
 * ezsignfolder_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_get_object_v1_response_m_payload_H_
#define _ezsignfolder_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_object_v1_response_m_payload_t ezsignfolder_get_object_v1_response_m_payload_t;

#include "common_audit.h"
#include "custom_timezone_with_code_response.h"
#include "field_e_ezsignfolder_completion.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"
#include "field_e_ezsignfolder_step.h"
#include "object.h"

// Enum  for ezsignfolder_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__PerEzsigndocument, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__PerEzsignfolder } ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e;

char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_completion_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_completion);

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_completion_FromString(char* e_ezsignfolder_completion);

// Enum  for ezsignfolder_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__None, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Daily, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Weekly } ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e;

char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);

// Enum  for ezsignfolder_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Unsent, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__PendingSend, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Sent, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__PartiallySigned, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Expired, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Completed, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Archived, ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__Disposed } ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e;

char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_step);

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_get_object_v1_response_m_payload_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    struct object_t *obj_ezsignfoldertype; //model
    int fki_timezone_id; //numeric
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion; // custom
    char *s_ezsignfoldertype_name_x; // string
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsigntsarequirement_description_x; // string
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    int b_ezsignfolder_isdisposable; //boolean
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom
    int i_ezsignfolder_sendreminderfirstdays; //numeric
    int i_ezsignfolder_sendreminderotherdays; //numeric
    char *dt_ezsignfolder_delayedsenddate; // string
    char *dt_ezsignfolder_duedate; // string
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_scheduledarchive; // string
    char *dt_ezsignfolder_scheduleddispose; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    char *dt_ezsignfolder_close; // string
    char *t_ezsignfolder_message; // string
    struct common_audit_t *obj_audit; //model
    char *s_ezsignfolder_externalid; // string
    struct custom_timezone_with_code_response_t *obj_timezone; //model

} ezsignfolder_get_object_v1_response_m_payload_t;

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    object_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    custom_timezone_with_code_response_t *obj_timezone
);

void ezsignfolder_get_object_v1_response_m_payload_free(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload);

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload);

#endif /* _ezsignfolder_get_object_v1_response_m_payload_H_ */

