/*
 * communicationimage_response_compound.h
 *
 * A Communicationimage Object
 */

#ifndef _communicationimage_response_compound_H_
#define _communicationimage_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationimage_response_compound_t communicationimage_response_compound_t;




typedef struct communicationimage_response_compound_t {
    int pki_communicationimage_id; //numeric
    int fki_image_id; //numeric
    char *s_communicationimage_name; // string

} communicationimage_response_compound_t;

communicationimage_response_compound_t *communicationimage_response_compound_create(
    int pki_communicationimage_id,
    int fki_image_id,
    char *s_communicationimage_name
);

void communicationimage_response_compound_free(communicationimage_response_compound_t *communicationimage_response_compound);

communicationimage_response_compound_t *communicationimage_response_compound_parseFromJSON(cJSON *communicationimage_response_compoundJSON);

cJSON *communicationimage_response_compound_convertToJSON(communicationimage_response_compound_t *communicationimage_response_compound);

#endif /* _communicationimage_response_compound_H_ */

