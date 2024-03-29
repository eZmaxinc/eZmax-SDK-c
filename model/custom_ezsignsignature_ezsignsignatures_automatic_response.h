/*
 * custom_ezsignsignature_ezsignsignatures_automatic_response.h
 *
 * An Ezsignsignature Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef _custom_ezsignsignature_ezsignsignatures_automatic_response_H_
#define _custom_ezsignsignature_ezsignsignatures_automatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignsignature_ezsignsignatures_automatic_response_t custom_ezsignsignature_ezsignsignatures_automatic_response_t;

#include "field_e_ezsignsignature_type.h"

// Enum  for custom_ezsignsignature_ezsignsignatures_automatic_response

typedef enum  { ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__NULL = 0, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__Acknowledgement, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__City, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__Handwritten, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__Initials, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__Name, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__Attachments, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__AttachmentsConfirmation, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__FieldText, ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__FieldTextarea } ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__e;

char* custom_ezsignsignature_ezsignsignatures_automatic_response_e_ezsignsignature_type_ToString(ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__e e_ezsignsignature_type);

ezmax_api_definition__full_custom_ezsignsignature_ezsignsignatures_automatic_response__e custom_ezsignsignature_ezsignsignatures_automatic_response_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);



typedef struct custom_ezsignsignature_ezsignsignatures_automatic_response_t {
    int pki_ezsignsignature_id; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    int i_ezsignpage_pagenumber; //numeric

} custom_ezsignsignature_ezsignsignatures_automatic_response_t;

custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_create(
    int pki_ezsignsignature_id,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int i_ezsignpage_pagenumber
);

void custom_ezsignsignature_ezsignsignatures_automatic_response_free(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response);

custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsignsignature_ezsignsignatures_automatic_responseJSON);

cJSON *custom_ezsignsignature_ezsignsignatures_automatic_response_convertToJSON(custom_ezsignsignature_ezsignsignatures_automatic_response_t *custom_ezsignsignature_ezsignsignatures_automatic_response);

#endif /* _custom_ezsignsignature_ezsignsignatures_automatic_response_H_ */

