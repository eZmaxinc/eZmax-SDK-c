/*
 * communication_request.h
 *
 * Request for POST /1/object/communication
 */

#ifndef _communication_request_H_
#define _communication_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_request_t communication_request_t;

#include "custom_communicationsender_request.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"

// Enum ECOMMUNICATIONATTACHMENTTYPE for communication_request

typedef enum  { ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_NULL = 0, ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_Attachment, ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_Url } ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e;

char* communication_request_e_communication_attachmenttype_ToString(ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype);

ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e communication_request_e_communication_attachmenttype_FromString(char* e_communication_attachmenttype);



typedef struct communication_request_t {
    int pki_communication_id; //numeric
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance; //referenced enum
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type; //referenced enum
    struct custom_communicationsender_request_t *obj_communicationsender; //model
    char *s_communication_subject; // string
    char *t_communication_body; // string
    int b_communication_private; //boolean
    ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype; //enum
    int i_communication_attachmentlinkexpiration; //numeric
    int b_communication_readreceipt; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} communication_request_t;

__attribute__((deprecated)) communication_request_t *communication_request_create(
    int pki_communication_id,
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance,
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type,
    custom_communicationsender_request_t *obj_communicationsender,
    char *s_communication_subject,
    char *t_communication_body,
    int b_communication_private,
    ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype,
    int i_communication_attachmentlinkexpiration,
    int b_communication_readreceipt
);

void communication_request_free(communication_request_t *communication_request);

communication_request_t *communication_request_parseFromJSON(cJSON *communication_requestJSON);

cJSON *communication_request_convertToJSON(communication_request_t *communication_request);

#endif /* _communication_request_H_ */

