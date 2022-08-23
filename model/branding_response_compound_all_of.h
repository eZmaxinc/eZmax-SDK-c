/*
 * branding_response_compound_all_of.h
 *
 * 
 */

#ifndef _branding_response_compound_all_of_H_
#define _branding_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_response_compound_all_of_t branding_response_compound_all_of_t;




typedef struct branding_response_compound_all_of_t {
    char *s_branding_logourl; // string

} branding_response_compound_all_of_t;

branding_response_compound_all_of_t *branding_response_compound_all_of_create(
    char *s_branding_logourl
);

void branding_response_compound_all_of_free(branding_response_compound_all_of_t *branding_response_compound_all_of);

branding_response_compound_all_of_t *branding_response_compound_all_of_parseFromJSON(cJSON *branding_response_compound_all_ofJSON);

cJSON *branding_response_compound_all_of_convertToJSON(branding_response_compound_all_of_t *branding_response_compound_all_of);

#endif /* _branding_response_compound_all_of_H_ */

