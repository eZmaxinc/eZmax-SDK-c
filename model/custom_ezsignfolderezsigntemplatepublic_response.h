/*
 * custom_ezsignfolderezsigntemplatepublic_response.h
 *
 * An Ezsignfolder Object in the context of an Ezsigntemplatepublic
 */

#ifndef _custom_ezsignfolderezsigntemplatepublic_response_H_
#define _custom_ezsignfolderezsigntemplatepublic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfolderezsigntemplatepublic_response_t custom_ezsignfolderezsigntemplatepublic_response_t;

#include "custom_ezsignfolderezsigntemplatepublic_signer_response.h"
#include "field_e_ezsignfolder_step.h"



typedef struct custom_ezsignfolderezsigntemplatepublic_response_t {
    int pki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step; //referenced enum
    int i_ezsignfolder_signaturetotal; //numeric
    int i_ezsignfolder_formfieldtotal; //numeric
    int i_ezsignfolder_signaturesigned; //numeric
    list_t *a_obj_ezsignfolderezsigntemplatepublic_signer; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfolderezsigntemplatepublic_response_t;

__attribute__((deprecated)) custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    int i_ezsignfolder_signaturetotal,
    int i_ezsignfolder_formfieldtotal,
    int i_ezsignfolder_signaturesigned,
    list_t *a_obj_ezsignfolderezsigntemplatepublic_signer
);

void custom_ezsignfolderezsigntemplatepublic_response_free(custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response);

custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_parseFromJSON(cJSON *custom_ezsignfolderezsigntemplatepublic_responseJSON);

cJSON *custom_ezsignfolderezsigntemplatepublic_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response);

#endif /* _custom_ezsignfolderezsigntemplatepublic_response_H_ */

