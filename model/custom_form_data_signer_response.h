/*
 * custom_form_data_signer_response.h
 *
 * A form Data Signer Object
 */

#ifndef _custom_form_data_signer_response_H_
#define _custom_form_data_signer_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_form_data_signer_response_t custom_form_data_signer_response_t;

#include "ezsignformfieldgroup_response_compound.h"



typedef struct custom_form_data_signer_response_t {
    int fki_ezsignfoldersignerassociation_id; //numeric
    int fki_user_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    list_t *a_obj_ezsignformfieldgroup_compound; //nonprimitive container

} custom_form_data_signer_response_t;

custom_form_data_signer_response_t *custom_form_data_signer_response_create(
    int fki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    list_t *a_obj_ezsignformfieldgroup_compound
);

void custom_form_data_signer_response_free(custom_form_data_signer_response_t *custom_form_data_signer_response);

custom_form_data_signer_response_t *custom_form_data_signer_response_parseFromJSON(cJSON *custom_form_data_signer_responseJSON);

cJSON *custom_form_data_signer_response_convertToJSON(custom_form_data_signer_response_t *custom_form_data_signer_response);

#endif /* _custom_form_data_signer_response_H_ */

