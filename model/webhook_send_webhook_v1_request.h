/*
 * webhook_send_webhook_v1_request.h
 *
 * Request for POST /1/object/webhook/sendWebhook
 */

#ifndef _webhook_send_webhook_v1_request_H_
#define _webhook_send_webhook_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_send_webhook_v1_request_t webhook_send_webhook_v1_request_t;

#include "custom_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"



typedef struct webhook_send_webhook_v1_request_t {
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module; //referenced enum
    ezmax_api_definition__full_custom_e_webhook_ezsignevent__e e_webhook_ezsignevent; //referenced enum
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent; //referenced enum
    int fki_ezsignfolder_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int fki_userstaged_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_send_webhook_v1_request_t;

__attribute__((deprecated)) webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_create(
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_custom_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
    int fki_ezsignfolder_id,
    int fki_ezsigndocument_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_userstaged_id
);

void webhook_send_webhook_v1_request_free(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request);

webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_parseFromJSON(cJSON *webhook_send_webhook_v1_requestJSON);

cJSON *webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request);

#endif /* _webhook_send_webhook_v1_request_H_ */

