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

#include "field_e_ezsignfolder_messageorder.h"



typedef struct ezsignfolder_send_v3_request_t {
    char *t_ezsignfolder_message; // string
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e e_ezsignfolder_messageorder; //referenced enum
    char *dt_ezsignfolder_delayedsenddate; // string
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_send_v3_request_t;

__attribute__((deprecated)) ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_create(
    char *t_ezsignfolder_message,
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e e_ezsignfolder_messageorder,
    char *dt_ezsignfolder_delayedsenddate,
    list_t *a_fki_ezsignfoldersignerassociation_id
);

void ezsignfolder_send_v3_request_free(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_parseFromJSON(cJSON *ezsignfolder_send_v3_requestJSON);

cJSON *ezsignfolder_send_v3_request_convertToJSON(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

#endif /* _ezsignfolder_send_v3_request_H_ */

