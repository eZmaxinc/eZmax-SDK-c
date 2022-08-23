/*
 * ezsignfolder_send_v2_request.h
 *
 * Request for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef _ezsignfolder_send_v2_request_H_
#define _ezsignfolder_send_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_send_v2_request_t ezsignfolder_send_v2_request_t;

#include "custom_ezsignfoldersignerassociationmessage_request.h"



typedef struct ezsignfolder_send_v2_request_t {
    char *t_ezsignfolder_message; // string
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container
    list_t *a_obj_ezsignfoldersignerassociationmessage; //nonprimitive container

} ezsignfolder_send_v2_request_t;

ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_create(
    char *t_ezsignfolder_message,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_obj_ezsignfoldersignerassociationmessage
);

void ezsignfolder_send_v2_request_free(ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request);

ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request_parseFromJSON(cJSON *ezsignfolder_send_v2_requestJSON);

cJSON *ezsignfolder_send_v2_request_convertToJSON(ezsignfolder_send_v2_request_t *ezsignfolder_send_v2_request);

#endif /* _ezsignfolder_send_v2_request_H_ */

