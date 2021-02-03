/*
 * multilingual_apikey_description.h
 *
 * Description of the API Key  
 */

#ifndef _multilingual_apikey_description_H_
#define _multilingual_apikey_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_apikey_description_t multilingual_apikey_description_t;




typedef struct multilingual_apikey_description_t {
    char *s_apikey_description1; // string
    char *s_apikey_description2; // string

} multilingual_apikey_description_t;

multilingual_apikey_description_t *multilingual_apikey_description_create(
    char *s_apikey_description1,
    char *s_apikey_description2
);

void multilingual_apikey_description_free(multilingual_apikey_description_t *multilingual_apikey_description);

multilingual_apikey_description_t *multilingual_apikey_description_parseFromJSON(cJSON *multilingual_apikey_descriptionJSON);

cJSON *multilingual_apikey_description_convertToJSON(multilingual_apikey_description_t *multilingual_apikey_description);

#endif /* _multilingual_apikey_description_H_ */

