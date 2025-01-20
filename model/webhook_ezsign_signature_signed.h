/*
 * webhook_ezsign_signature_signed.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_signature_signed_H_
#define _webhook_ezsign_signature_signed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_signature_signed_t webhook_ezsign_signature_signed_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "ezsignsignature_response.h"



typedef struct webhook_ezsign_signature_signed_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignsignature_response_t *obj_ezsignsignature; //model

} webhook_ezsign_signature_signed_t;

webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignsignature_response_t *obj_ezsignsignature
);

void webhook_ezsign_signature_signed_free(webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed);

webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_parseFromJSON(cJSON *webhook_ezsign_signature_signedJSON);

cJSON *webhook_ezsign_signature_signed_convertToJSON(webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed);

#endif /* _webhook_ezsign_signature_signed_H_ */

