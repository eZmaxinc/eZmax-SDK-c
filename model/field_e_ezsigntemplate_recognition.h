/*
 * field_e_ezsigntemplate_recognition.h
 *
 * Indicates whether we use the name or the content to recognize the templates to be automatically applied to documents
 */

#ifndef _field_e_ezsigntemplate_recognition_H_
#define _field_e_ezsigntemplate_recognition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplate_recognition_t field_e_ezsigntemplate_recognition_t;


// Enum  for field_e_ezsigntemplate_recognition

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplate_recognition__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplate_recognition__No, ezmax_api_definition__full_field_e_ezsigntemplate_recognition__Filename, ezmax_api_definition__full_field_e_ezsigntemplate_recognition__Content } ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e;

char* field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_ToString(ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition);

ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_FromString(char* field_e_ezsigntemplate_recognition);

cJSON *field_e_ezsigntemplate_recognition_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition);

ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition_parseFromJSON(cJSON *field_e_ezsigntemplate_recognitionJSON);

#endif /* _field_e_ezsigntemplate_recognition_H_ */

