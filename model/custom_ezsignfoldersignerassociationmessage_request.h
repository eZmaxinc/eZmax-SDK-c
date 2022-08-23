/*
 * custom_ezsignfoldersignerassociationmessage_request.h
 *
 * A custom message Object in the context of an Ezsignfolder&#39;s send function
 */

#ifndef _custom_ezsignfoldersignerassociationmessage_request_H_
#define _custom_ezsignfoldersignerassociationmessage_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldersignerassociationmessage_request_t custom_ezsignfoldersignerassociationmessage_request_t;




typedef struct custom_ezsignfoldersignerassociationmessage_request_t {
    int fki_ezsignfoldersignerassociation_id; //numeric
    char *t_ezsignfoldersignerassociation_message; // string

} custom_ezsignfoldersignerassociationmessage_request_t;

custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_create(
    int fki_ezsignfoldersignerassociation_id,
    char *t_ezsignfoldersignerassociation_message
);

void custom_ezsignfoldersignerassociationmessage_request_free(custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request);

custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationmessage_requestJSON);

cJSON *custom_ezsignfoldersignerassociationmessage_request_convertToJSON(custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request);

#endif /* _custom_ezsignfoldersignerassociationmessage_request_H_ */

