/*
 * communicationattachment_request.h
 *
 * A Communicationattachment Object
 */

#ifndef _communicationattachment_request_H_
#define _communicationattachment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationattachment_request_t communicationattachment_request_t;




typedef struct communicationattachment_request_t {
    int pki_communicationattachment_id; //numeric
    int fki_attachment_id; //numeric
    int fki_invoice_id; //numeric
    int fki_salarypreparation_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} communicationattachment_request_t;

__attribute__((deprecated)) communicationattachment_request_t *communicationattachment_request_create(
    int pki_communicationattachment_id,
    int fki_attachment_id,
    int fki_invoice_id,
    int fki_salarypreparation_id
);

void communicationattachment_request_free(communicationattachment_request_t *communicationattachment_request);

communicationattachment_request_t *communicationattachment_request_parseFromJSON(cJSON *communicationattachment_requestJSON);

cJSON *communicationattachment_request_convertToJSON(communicationattachment_request_t *communicationattachment_request);

#endif /* _communicationattachment_request_H_ */

