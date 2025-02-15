/*
 * ezsignfolder_send_v1_request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef _ezsignfolder_send_v1_request_H_
#define _ezsignfolder_send_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_send_v1_request_t ezsignfolder_send_v1_request_t;




typedef struct ezsignfolder_send_v1_request_t {
    char *t_extra_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_send_v1_request_t;

__attribute__((deprecated)) ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_create(
    char *t_extra_message
);

void ezsignfolder_send_v1_request_free(ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request);

ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_parseFromJSON(cJSON *ezsignfolder_send_v1_requestJSON);

cJSON *ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request);

#endif /* _ezsignfolder_send_v1_request_H_ */

