/*
 * ezsignfoldersignerassociation_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_
#define _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_get_object_v1_response_m_payload_t ezsignfoldersignerassociation_get_object_v1_response_m_payload_t;

#include "ezsignfoldersignerassociation_response_compound_user.h"
#include "ezsignsigner_response_compound.h"
#include "ezsignsignergroup_response_compound.h"



typedef struct ezsignfoldersignerassociation_get_object_v1_response_m_payload_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_delayedsend; //boolean
    int b_ezsignfoldersignerassociation_receivecopy; //boolean
    char *t_ezsignfoldersignerassociation_message; // string
    int b_ezsignfoldersignerassociation_allowsigninginperson; //boolean
    struct ezsignsignergroup_response_compound_t *obj_ezsignsignergroup; //model
    struct ezsignfoldersignerassociation_response_compound_user_t *obj_user; //model
    struct ezsignsigner_response_compound_t *obj_ezsignsigner; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_get_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    int b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
);

void ezsignfoldersignerassociation_get_object_v1_response_m_payload_free(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload);

ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON);

cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload);

#endif /* _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_ */

