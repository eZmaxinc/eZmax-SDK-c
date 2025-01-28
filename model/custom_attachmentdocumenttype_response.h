/*
 * custom_attachmentdocumenttype_response.h
 *
 * An Attachmentdocumenttype
 */

#ifndef _custom_attachmentdocumenttype_response_H_
#define _custom_attachmentdocumenttype_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attachmentdocumenttype_response_t custom_attachmentdocumenttype_response_t;

#include "custom_attachment_response.h"
#include "field_e_attachment_documenttype.h"



typedef struct custom_attachmentdocumenttype_response_t {
    ezmax_api_definition__full_field_e_attachment_documenttype__e e_attachment_documenttype; //referenced enum
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_attachmentdocumenttype_response_t;

__attribute__((deprecated)) custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_create(
    ezmax_api_definition__full_field_e_attachment_documenttype__e e_attachment_documenttype,
    list_t *a_obj_attachment
);

void custom_attachmentdocumenttype_response_free(custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response);

custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_parseFromJSON(cJSON *custom_attachmentdocumenttype_responseJSON);

cJSON *custom_attachmentdocumenttype_response_convertToJSON(custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response);

#endif /* _custom_attachmentdocumenttype_response_H_ */

