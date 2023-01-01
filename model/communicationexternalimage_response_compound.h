/*
 * communicationexternalimage_response_compound.h
 *
 * A Communicationexternalimage Object
 */

#ifndef _communicationexternalimage_response_compound_H_
#define _communicationexternalimage_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationexternalimage_response_compound_t communicationexternalimage_response_compound_t;




typedef struct communicationexternalimage_response_compound_t {
    int pki_communicationexternalimage_id; //numeric
    char *s_communicationexternalimage_md5; // string

} communicationexternalimage_response_compound_t;

communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_create(
    int pki_communicationexternalimage_id,
    char *s_communicationexternalimage_md5
);

void communicationexternalimage_response_compound_free(communicationexternalimage_response_compound_t *communicationexternalimage_response_compound);

communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_parseFromJSON(cJSON *communicationexternalimage_response_compoundJSON);

cJSON *communicationexternalimage_response_compound_convertToJSON(communicationexternalimage_response_compound_t *communicationexternalimage_response_compound);

#endif /* _communicationexternalimage_response_compound_H_ */

