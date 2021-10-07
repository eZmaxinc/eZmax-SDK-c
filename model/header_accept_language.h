/*
 * header_accept_language.h
 *
 * The language of the returned content.  1. **\\*** (or header not defined) Default language 2. **en** English 2. **fr** French  
 */

#ifndef _header_accept_language_H_
#define _header_accept_language_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct header_accept_language_t header_accept_language_t;


// Enum  for header_accept_language

typedef enum { ezmax_api_definition_header_accept_language__NULL = 0, ezmax_api_definition_header_accept_language__*, ezmax_api_definition_header_accept_language__en, ezmax_api_definition_header_accept_language__fr } ezmax_api_definition_header_accept_language__e;

char* header_accept_language_header_accept_language_ToString(ezmax_api_definition_header_accept_language__e header_accept_language);

ezmax_api_definition_header_accept_language__e header_accept_language_header_accept_language_FromString(char* header_accept_language);

//cJSON *header_accept_language_header_accept_language_convertToJSON(ezmax_api_definition_header_accept_language__e header_accept_language);

//ezmax_api_definition_header_accept_language__e header_accept_language_header_accept_language_parseFromJSON(cJSON *header_accept_languageJSON);

#endif /* _header_accept_language_H_ */

