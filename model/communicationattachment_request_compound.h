/*
 * communicationattachment_request_compound.h
 *
 * A Communicationattachment Object and children
 */

#ifndef _communicationattachment_request_compound_H_
#define _communicationattachment_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationattachment_request_compound_t communicationattachment_request_compound_t;




typedef struct communicationattachment_request_compound_t {
    int pki_communicationattachment_id; //numeric
    int fki_attachment_id; //numeric
    int fki_invoice_id; //numeric
    int fki_salarypreparation_id; //numeric

} communicationattachment_request_compound_t;

communicationattachment_request_compound_t *communicationattachment_request_compound_create(
    int pki_communicationattachment_id,
    int fki_attachment_id,
    int fki_invoice_id,
    int fki_salarypreparation_id
);

void communicationattachment_request_compound_free(communicationattachment_request_compound_t *communicationattachment_request_compound);

communicationattachment_request_compound_t *communicationattachment_request_compound_parseFromJSON(cJSON *communicationattachment_request_compoundJSON);

cJSON *communicationattachment_request_compound_convertToJSON(communicationattachment_request_compound_t *communicationattachment_request_compound);

#endif /* _communicationattachment_request_compound_H_ */

