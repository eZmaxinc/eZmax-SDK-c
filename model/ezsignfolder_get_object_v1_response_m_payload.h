/*
 * ezsignfolder_get_object_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsignfolder/getObject API Request
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
#include "ezsignfolder_response.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"
#include "field_e_ezsignfolder_step.h"

// Enum  for ezsignfolder_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__None, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Daily, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Weekly } ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e;

char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);

// Enum  for ezsignfolder_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Unsent, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Sent, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__PartiallySigned, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Expired, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Completed, ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__Archived } ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e;

char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_ToString(ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_step);

ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_get_object_v1_response_m_payload_t {
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom
    int pki_ezsignfolder_id; //numeric
    char *dt_ezsignfolder_sentdate; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    char *dt_ezsignfolder_close; // string
    struct common_audit_t *obj_audit; //model

} ezsignfolder_get_object_v1_response_m_payload_t;

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_create(
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    int pki_ezsignfolder_id,
    char *dt_ezsignfolder_sentdate,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
);

void ezsignfolder_get_object_v1_response_m_payload_free(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload);

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload);

#endif /* _ezsignfolder_get_object_v1_response_m_payload_H_ */

