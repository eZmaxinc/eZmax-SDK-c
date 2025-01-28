/*
 * custom_ezsignfoldertransmission_signer_response.h
 *
 * A form Signer Object in the context of an Ezsignfoldertransmissions
 */

#ifndef _custom_ezsignfoldertransmission_signer_response_H_
#define _custom_ezsignfoldertransmission_signer_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldertransmission_signer_response_t custom_ezsignfoldertransmission_signer_response_t;




typedef struct custom_ezsignfoldertransmission_signer_response_t {
    int fki_user_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfoldertransmission_signer_response_t;

__attribute__((deprecated)) custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_create(
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname
);

void custom_ezsignfoldertransmission_signer_response_free(custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response);

custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_parseFromJSON(cJSON *custom_ezsignfoldertransmission_signer_responseJSON);

cJSON *custom_ezsignfoldertransmission_signer_response_convertToJSON(custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response);

#endif /* _custom_ezsignfoldertransmission_signer_response_H_ */

