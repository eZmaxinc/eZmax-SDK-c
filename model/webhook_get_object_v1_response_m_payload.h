/*
 * webhook_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/webhook/{pkiWebhookID}
 */

#ifndef _webhook_get_object_v1_response_m_payload_H_
#define _webhook_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_object_v1_response_m_payload_t webhook_get_object_v1_response_m_payload_t;

#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"
#include "webhook_response_compound.h"

// Enum  for webhook_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__Ezsign, ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__Management } ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e;

char* webhook_get_object_v1_response_m_payload_e_webhook_module_ToString(ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e e_webhook_module);

ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e webhook_get_object_v1_response_m_payload_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__DocumentCompleted, ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__FolderCompleted } ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e;

char* webhook_get_object_v1_response_m_payload_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e webhook_get_object_v1_response_m_payload_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__UserCreated } ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e;

char* webhook_get_object_v1_response_m_payload_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_get_object_v1_response_m_payload__e webhook_get_object_v1_response_m_payload_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_get_object_v1_response_m_payload_t {
    int pki_webhook_id; //numeric
    char *s_webhook_description; // string
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    field_e_webhook_module_t *e_webhook_module; // custom
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent; // custom
    field_e_webhook_managementevent_t *e_webhook_managementevent; // custom
    char *s_webhook_url; // string
    char *s_webhook_emailfailed; // string
    int b_webhook_isactive; //boolean
    int b_webhook_skipsslvalidation; //boolean

} webhook_get_object_v1_response_m_payload_t;

webhook_get_object_v1_response_m_payload_t *webhook_get_object_v1_response_m_payload_create(
    int pki_webhook_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    int b_webhook_isactive,
    int b_webhook_skipsslvalidation
);

void webhook_get_object_v1_response_m_payload_free(webhook_get_object_v1_response_m_payload_t *webhook_get_object_v1_response_m_payload);

webhook_get_object_v1_response_m_payload_t *webhook_get_object_v1_response_m_payload_parseFromJSON(cJSON *webhook_get_object_v1_response_m_payloadJSON);

cJSON *webhook_get_object_v1_response_m_payload_convertToJSON(webhook_get_object_v1_response_m_payload_t *webhook_get_object_v1_response_m_payload);

#endif /* _webhook_get_object_v1_response_m_payload_H_ */

