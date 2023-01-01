/*
 * communicationexternalimage_response.h
 *
 * A Communicationexternalimage Object
 */

#ifndef _communicationexternalimage_response_H_
#define _communicationexternalimage_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationexternalimage_response_t communicationexternalimage_response_t;




typedef struct communicationexternalimage_response_t {
    int pki_communicationexternalimage_id; //numeric
    char *s_communicationexternalimage_md5; // string

} communicationexternalimage_response_t;

communicationexternalimage_response_t *communicationexternalimage_response_create(
    int pki_communicationexternalimage_id,
    char *s_communicationexternalimage_md5
);

void communicationexternalimage_response_free(communicationexternalimage_response_t *communicationexternalimage_response);

communicationexternalimage_response_t *communicationexternalimage_response_parseFromJSON(cJSON *communicationexternalimage_responseJSON);

cJSON *communicationexternalimage_response_convertToJSON(communicationexternalimage_response_t *communicationexternalimage_response);

#endif /* _communicationexternalimage_response_H_ */

