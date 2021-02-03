/*
 * webhook_ezsign_document_completed_all_of.h
 *
 * 
 */

#ifndef _webhook_ezsign_document_completed_all_of_H_
#define _webhook_ezsign_document_completed_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_document_completed_all_of_t webhook_ezsign_document_completed_all_of_t;

#include "ezsigndocument_response.h"



typedef struct webhook_ezsign_document_completed_all_of_t {
    struct ezsigndocument_response_t *obj_ezsigndocument; //model

} webhook_ezsign_document_completed_all_of_t;

webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_create(
    ezsigndocument_response_t *obj_ezsigndocument
);

void webhook_ezsign_document_completed_all_of_free(webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of);

webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_parseFromJSON(cJSON *webhook_ezsign_document_completed_all_ofJSON);

cJSON *webhook_ezsign_document_completed_all_of_convertToJSON(webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of);

#endif /* _webhook_ezsign_document_completed_all_of_H_ */

