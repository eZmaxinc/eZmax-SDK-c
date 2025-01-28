/*
 * custom_ezsignfolderezsigntemplatepublic_signer_response.h
 *
 * A form Signer Object in the context of an Ezsignfoldertransmissions
 */

#ifndef _custom_ezsignfolderezsigntemplatepublic_signer_response_H_
#define _custom_ezsignfolderezsigntemplatepublic_signer_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfolderezsigntemplatepublic_signer_response_t custom_ezsignfolderezsigntemplatepublic_signer_response_t;




typedef struct custom_ezsignfolderezsigntemplatepublic_signer_response_t {
    int fki_user_id; //numeric
    int fki_ezsignsignergroup_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_ezsignsignergroup_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfolderezsigntemplatepublic_signer_response_t;

__attribute__((deprecated)) custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_create(
    int fki_user_id,
    int fki_ezsignsignergroup_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_ezsignsignergroup_description_x
);

void custom_ezsignfolderezsigntemplatepublic_signer_response_free(custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response);

custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_parseFromJSON(cJSON *custom_ezsignfolderezsigntemplatepublic_signer_responseJSON);

cJSON *custom_ezsignfolderezsigntemplatepublic_signer_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response);

#endif /* _custom_ezsignfolderezsigntemplatepublic_signer_response_H_ */

