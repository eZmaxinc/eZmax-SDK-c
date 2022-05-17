/*
 * custom_ezsignfoldertransmission_response.h
 *
 * An Ezsignfolder Object in the context of an Ezsignbulksendtransmission
 */

#ifndef _custom_ezsignfoldertransmission_response_H_
#define _custom_ezsignfoldertransmission_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldertransmission_response_t custom_ezsignfoldertransmission_response_t;

#include "custom_ezsignfoldertransmission_signer_response.h"
#include "field_e_ezsignfolder_step.h"

// Enum  for custom_ezsignfoldertransmission_response

typedef enum  { ezmax_api_definition__full_custom_ezsignfoldertransmission_response__NULL = 0, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Unsent, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Sent, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__PartiallySigned, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Expired, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Completed, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Archived, ezmax_api_definition__full_custom_ezsignfoldertransmission_response__Disposed } ezmax_api_definition__full_custom_ezsignfoldertransmission_response__e;

char* custom_ezsignfoldertransmission_response_e_ezsignfolder_step_ToString(ezmax_api_definition__full_custom_ezsignfoldertransmission_response__e e_ezsignfolder_step);

ezmax_api_definition__full_custom_ezsignfoldertransmission_response__e custom_ezsignfoldertransmission_response_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct custom_ezsignfoldertransmission_response_t {
    int pki_ezsignfolder_id; //numeric
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    int i_ezsignfolder_signaturetotal; //numeric
    int i_ezsignfolder_signaturesigned; //numeric
    list_t *a_obj_ezsignfoldertransmission_signer; //nonprimitive container

} custom_ezsignfoldertransmission_response_t;

custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_create(
    int pki_ezsignfolder_id,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    int i_ezsignfolder_signaturetotal,
    int i_ezsignfolder_signaturesigned,
    list_t *a_obj_ezsignfoldertransmission_signer
);

void custom_ezsignfoldertransmission_response_free(custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response);

custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_parseFromJSON(cJSON *custom_ezsignfoldertransmission_responseJSON);

cJSON *custom_ezsignfoldertransmission_response_convertToJSON(custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response);

#endif /* _custom_ezsignfoldertransmission_response_H_ */

