/*
 * communicationattachment_response_compound.h
 *
 * A Communicationattachment Object
 */

#ifndef _communicationattachment_response_compound_H_
#define _communicationattachment_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationattachment_response_compound_t communicationattachment_response_compound_t;




typedef struct communicationattachment_response_compound_t {
    int pki_communicationattachment_id; //numeric
    int fki_attachment_id; //numeric
    int fki_invoice_id; //numeric
    int fki_salarypreparation_id; //numeric
    char *s_communicationattachment_name; // string
    char *s_download_url; // string

} communicationattachment_response_compound_t;

communicationattachment_response_compound_t *communicationattachment_response_compound_create(
    int pki_communicationattachment_id,
    int fki_attachment_id,
    int fki_invoice_id,
    int fki_salarypreparation_id,
    char *s_communicationattachment_name,
    char *s_download_url
);

void communicationattachment_response_compound_free(communicationattachment_response_compound_t *communicationattachment_response_compound);

communicationattachment_response_compound_t *communicationattachment_response_compound_parseFromJSON(cJSON *communicationattachment_response_compoundJSON);

cJSON *communicationattachment_response_compound_convertToJSON(communicationattachment_response_compound_t *communicationattachment_response_compound);

#endif /* _communicationattachment_response_compound_H_ */

