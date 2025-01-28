/*
 * communicationreference_request_compound.h
 *
 * A Communicationreference Object and children
 */

#ifndef _communicationreference_request_compound_H_
#define _communicationreference_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationreference_request_compound_t communicationreference_request_compound_t;




typedef struct communicationreference_request_compound_t {
    int pki_communicationreference_id; //numeric
    int fki_buyercontract_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_inscription_id; //numeric
    int fki_inscriptiontemp_id; //numeric
    int fki_invoice_id; //numeric
    int fki_otherincome_id; //numeric
    int fki_electronicfundstransfer_id; //numeric
    int fki_rejectedoffertopurchase_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} communicationreference_request_compound_t;

__attribute__((deprecated)) communicationreference_request_compound_t *communicationreference_request_compound_create(
    int pki_communicationreference_id,
    int fki_buyercontract_id,
    int fki_ezsignfolder_id,
    int fki_inscription_id,
    int fki_inscriptiontemp_id,
    int fki_invoice_id,
    int fki_otherincome_id,
    int fki_electronicfundstransfer_id,
    int fki_rejectedoffertopurchase_id
);

void communicationreference_request_compound_free(communicationreference_request_compound_t *communicationreference_request_compound);

communicationreference_request_compound_t *communicationreference_request_compound_parseFromJSON(cJSON *communicationreference_request_compoundJSON);

cJSON *communicationreference_request_compound_convertToJSON(communicationreference_request_compound_t *communicationreference_request_compound);

#endif /* _communicationreference_request_compound_H_ */

