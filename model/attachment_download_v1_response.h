/*
 * attachment_download_v1_response.h
 *
 * Response for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef _attachment_download_v1_response_H_
#define _attachment_download_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_download_v1_response_t attachment_download_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct attachment_download_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} attachment_download_v1_response_t;

attachment_download_v1_response_t *attachment_download_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void attachment_download_v1_response_free(attachment_download_v1_response_t *attachment_download_v1_response);

attachment_download_v1_response_t *attachment_download_v1_response_parseFromJSON(cJSON *attachment_download_v1_responseJSON);

cJSON *attachment_download_v1_response_convertToJSON(attachment_download_v1_response_t *attachment_download_v1_response);

#endif /* _attachment_download_v1_response_H_ */

