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

// Enum  for ezsignfolder_send_v3_request

typedef enum  { ezmax_api_definition__full_ezsignfolder_send_v3_request__NULL = 0, ezmax_api_definition__full_ezsignfolder_send_v3_request__GlobalFirst, ezmax_api_definition__full_ezsignfolder_send_v3_request__PrivateFirst } ezmax_api_definition__full_ezsignfolder_send_v3_request__e;

char* ezsignfolder_send_v3_request_e_ezsignfolder_messageorder_ToString(ezmax_api_definition__full_ezsignfolder_send_v3_request__e e_ezsignfolder_messageorder);

ezmax_api_definition__full_ezsignfolder_send_v3_request__e ezsignfolder_send_v3_request_e_ezsignfolder_messageorder_FromString(char* e_ezsignfolder_messageorder);



typedef struct ezsignfolder_send_v3_request_t {
    char *t_ezsignfolder_message; // string
    field_e_ezsignfolder_messageorder_t *e_ezsignfolder_messageorder; // custom
    char *dt_ezsignfolder_delayedsenddate; // string
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container

} ezsignfolder_send_v3_request_t;

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_create(
    char *t_ezsignfolder_message,
    field_e_ezsignfolder_messageorder_t *e_ezsignfolder_messageorder,
    char *dt_ezsignfolder_delayedsenddate,
    list_t *a_fki_ezsignfoldersignerassociation_id
);

void ezsignfolder_send_v3_request_free(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request_parseFromJSON(cJSON *ezsignfolder_send_v3_requestJSON);

cJSON *ezsignfolder_send_v3_request_convertToJSON(ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request);

#endif /* _ezsignfolder_send_v3_request_H_ */

