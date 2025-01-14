/*
 * custom_branding_response.h
 *
 * A Custom Branding Object
 */

#ifndef _custom_branding_response_H_
#define _custom_branding_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_branding_response_t custom_branding_response_t;




typedef struct custom_branding_response_t {
    int i_branding_color; //numeric
    char *s_branding_logointerfaceurl; // string

} custom_branding_response_t;

custom_branding_response_t *custom_branding_response_create(
    int i_branding_color,
    char *s_branding_logointerfaceurl
);

void custom_branding_response_free(custom_branding_response_t *custom_branding_response);

custom_branding_response_t *custom_branding_response_parseFromJSON(cJSON *custom_branding_responseJSON);

cJSON *custom_branding_response_convertToJSON(custom_branding_response_t *custom_branding_response);

#endif /* _custom_branding_response_H_ */

