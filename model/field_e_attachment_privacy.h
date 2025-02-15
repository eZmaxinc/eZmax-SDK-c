/*
 * field_e_attachment_privacy.h
 *
 * The privacy of the Attachment
 */

#ifndef _field_e_attachment_privacy_H_
#define _field_e_attachment_privacy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_attachment_privacy_t field_e_attachment_privacy_t;


// Enum  for field_e_attachment_privacy

typedef enum { ezmax_api_definition__full_field_e_attachment_privacy__NULL = 0, ezmax_api_definition__full_field_e_attachment_privacy__All, ezmax_api_definition__full_field_e_attachment_privacy__Inscriptor, ezmax_api_definition__full_field_e_attachment_privacy__Seller, ezmax_api_definition__full_field_e_attachment_privacy__Administration, ezmax_api_definition__full_field_e_attachment_privacy__Creator, ezmax_api_definition__full_field_e_attachment_privacy__Specificuser } ezmax_api_definition__full_field_e_attachment_privacy__e;

char* field_e_attachment_privacy_field_e_attachment_privacy_ToString(ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy);

ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy_field_e_attachment_privacy_FromString(char* field_e_attachment_privacy);

cJSON *field_e_attachment_privacy_convertToJSON(ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy);

ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy_parseFromJSON(cJSON *field_e_attachment_privacyJSON);

#endif /* _field_e_attachment_privacy_H_ */

