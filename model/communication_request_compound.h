/*
 * communication_request_compound.h
 *
 * Request for POST /1/object/communication
 */

#ifndef _communication_request_compound_H_
#define _communication_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_request_compound_t communication_request_compound_t;

#include "communication_request.h"
#include "communicationexternalrecipient_request_compound.h"
#include "communicationrecipient_request_compound.h"
#include "communicationreference_request.h"
#include "custom_communicationattachment_request.h"
#include "custom_communicationsender_request.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"

// Enum  for communication_request_compound

typedef enum  { ezmax_api_definition__full_communication_request_compound__NULL = 0, ezmax_api_definition__full_communication_request_compound__High, ezmax_api_definition__full_communication_request_compound__Normal, ezmax_api_definition__full_communication_request_compound__Low } ezmax_api_definition__full_communication_request_compound__e;

char* communication_request_compound_e_communication_importance_ToString(ezmax_api_definition__full_communication_request_compound__e e_communication_importance);

ezmax_api_definition__full_communication_request_compound__e communication_request_compound_e_communication_importance_FromString(char* e_communication_importance);

// Enum  for communication_request_compound

typedef enum  { ezmax_api_definition__full_communication_request_compound__NULL = 0, ezmax_api_definition__full_communication_request_compound__Email, ezmax_api_definition__full_communication_request_compound__Fax, ezmax_api_definition__full_communication_request_compound__Sms } ezmax_api_definition__full_communication_request_compound__e;

char* communication_request_compound_e_communication_type_ToString(ezmax_api_definition__full_communication_request_compound__e e_communication_type);

ezmax_api_definition__full_communication_request_compound__e communication_request_compound_e_communication_type_FromString(char* e_communication_type);

// Enum ECOMMUNICATIONATTACHMENTTYPE for communication_request_compound

typedef enum  { ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_NULL = 0, ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_Attachment, ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_Url } ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e;

char* communication_request_compound_e_communication_attachmenttype_ToString(ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype);

ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e communication_request_compound_e_communication_attachmenttype_FromString(char* e_communication_attachmenttype);



typedef struct communication_request_compound_t {
    int pki_communication_id; //numeric
    field_e_communication_importance_t *e_communication_importance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    struct custom_communicationsender_request_t *obj_communicationsender; //model
    char *s_communication_subject; // string
    char *t_communication_body; // string
    int b_communication_private; //boolean
    ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype; //enum
    int i_communication_attachmentlinkexpiration; //numeric
    int b_communication_readreceipt; //boolean
    list_t *a_obj_communicationattachment; //nonprimitive container
    list_t *a_obj_communicationrecipient; //nonprimitive container
    list_t *a_obj_communicationreference; //nonprimitive container
    list_t *a_obj_communicationexternalrecipient; //nonprimitive container

} communication_request_compound_t;

communication_request_compound_t *communication_request_compound_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    custom_communicationsender_request_t *obj_communicationsender,
    char *s_communication_subject,
    char *t_communication_body,
    int b_communication_private,
    ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e e_communication_attachmenttype,
    int i_communication_attachmentlinkexpiration,
    int b_communication_readreceipt,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationreference,
    list_t *a_obj_communicationexternalrecipient
);

void communication_request_compound_free(communication_request_compound_t *communication_request_compound);

communication_request_compound_t *communication_request_compound_parseFromJSON(cJSON *communication_request_compoundJSON);

cJSON *communication_request_compound_convertToJSON(communication_request_compound_t *communication_request_compound);

#endif /* _communication_request_compound_H_ */

