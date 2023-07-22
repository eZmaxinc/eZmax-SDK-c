/*
 * communicationattachment_response.h
 *
 * A Communicationattachment Object
 */

#ifndef _communicationattachment_response_H_
#define _communicationattachment_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationattachment_response_t communicationattachment_response_t;




typedef struct communicationattachment_response_t {
    int pki_communicationattachment_id; //numeric
    int fki_attachment_id; //numeric
    int fki_invoice_id; //numeric
    int fki_salarypreparation_id; //numeric
    char *s_communicationattachment_name; // string
    char *s_download_url; // string

} communicationattachment_response_t;

communicationattachment_response_t *communicationattachment_response_create(
    int pki_communicationattachment_id,
    int fki_attachment_id,
    int fki_invoice_id,
    int fki_salarypreparation_id,
    char *s_communicationattachment_name,
    char *s_download_url
);

void communicationattachment_response_free(communicationattachment_response_t *communicationattachment_response);

communicationattachment_response_t *communicationattachment_response_parseFromJSON(cJSON *communicationattachment_responseJSON);

cJSON *communicationattachment_response_convertToJSON(communicationattachment_response_t *communicationattachment_response);

#endif /* _communicationattachment_response_H_ */

