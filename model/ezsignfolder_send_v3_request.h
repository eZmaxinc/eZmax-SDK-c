/*
 * ezsignfolder_send_v3_request.h
 *
 * Request for POST /3/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef _ezsignfolder_send_v3_request_H_
#define _ezsignfolder_send_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_send_v3_request_t ezsignfolder_send_v3_request_t;




typedef struct ezsignfolder_send_v3_request_t {
    char *t_ezsignfolder_message; // string
    char *dt_ezsignfolder_delayedsenddate; // string
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container

} ezsignfolder_send_v3_request_t;

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_create(
    char *t_ezsignfolder_message,
    char *dt_ezsignfolder_delayedsenddate,
    list_t *a_fki_ezsignfoldersignerassociation_id
);

void ezsignfolder_send_v3_request_free(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_parseFromJSON(cJSON *ezsignfolder_send_v3_requestJSON);

cJSON *ezsignfolder_send_v3_request_convertToJSON(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

#endif /* _ezsignfolder_send_v3_request_H_ */

