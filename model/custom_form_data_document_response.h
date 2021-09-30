/*
 * custom_form_data_document_response.h
 *
 * A form Data Document Object 
 */

#ifndef _custom_form_data_document_response_H_
#define _custom_form_data_document_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_form_data_document_response_t custom_form_data_document_response_t;

#include "custom_form_data_signer_response.h"



typedef struct custom_form_data_document_response_t {
    int pki_ezsigndocument_id; //numeric
    int fki_ezsignfolder_id; //numeric
    char *s_ezsigndocument_name; // string
    char *dt_modified_date; // string
    list_t *a_obj_form_data_signer; //nonprimitive container

} custom_form_data_document_response_t;

custom_form_data_document_response_t *custom_form_data_document_response_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    char *s_ezsigndocument_name,
    char *dt_modified_date,
    list_t *a_obj_form_data_signer
);

void custom_form_data_document_response_free(custom_form_data_document_response_t *custom_form_data_document_response);

custom_form_data_document_response_t *custom_form_data_document_response_parseFromJSON(cJSON *custom_form_data_document_responseJSON);

cJSON *custom_form_data_document_response_convertToJSON(custom_form_data_document_response_t *custom_form_data_document_response);

#endif /* _custom_form_data_document_response_H_ */

