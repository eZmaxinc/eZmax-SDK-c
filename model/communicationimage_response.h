/*
 * communicationimage_response.h
 *
 * A Communicationimage Object
 */

#ifndef _communicationimage_response_H_
#define _communicationimage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationimage_response_t communicationimage_response_t;




typedef struct communicationimage_response_t {
    int pki_communicationimage_id; //numeric
    int fki_image_id; //numeric
    char *s_communicationimage_name; // string

} communicationimage_response_t;

communicationimage_response_t *communicationimage_response_create(
    int pki_communicationimage_id,
    int fki_image_id,
    char *s_communicationimage_name
);

void communicationimage_response_free(communicationimage_response_t *communicationimage_response);

communicationimage_response_t *communicationimage_response_parseFromJSON(cJSON *communicationimage_responseJSON);

cJSON *communicationimage_response_convertToJSON(communicationimage_response_t *communicationimage_response);

#endif /* _communicationimage_response_H_ */

