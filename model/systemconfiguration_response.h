/*
 * systemconfiguration_response.h
 *
 * A Systemconfiguration Object
 */

#ifndef _systemconfiguration_response_H_
#define _systemconfiguration_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_response_t systemconfiguration_response_t;

#include "custom_branding_response.h"
#include "field_e_systemconfiguration_ezsign.h"
#include "field_e_systemconfiguration_ezsignofficeplan.h"
#include "field_e_systemconfiguration_language1.h"
#include "field_e_systemconfiguration_language2.h"
#include "field_e_systemconfiguration_newexternaluseraction.h"



typedef struct systemconfiguration_response_t {
    int pki_systemconfiguration_id; //numeric
    int fki_systemconfigurationtype_id; //numeric
    int fki_branding_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan; //referenced enum
    int b_systemconfiguration_ezsignpaidbyoffice; //boolean
    int b_systemconfiguration_ezsignpersonnal; //boolean
    int b_systemconfiguration_hascreditcardmerchant; //boolean
    int b_systemconfiguration_isdisposalactive; //boolean
    int b_systemconfiguration_sspr; //boolean
    char *dt_systemconfiguration_readonlyexpirationstart; // string
    char *dt_systemconfiguration_readonlyexpirationend; // string
    struct custom_branding_response_t *obj_branding; //model

    int _library_owned; // Is the library responsible for freeing this object?
} systemconfiguration_response_t;

__attribute__((deprecated)) systemconfiguration_response_t *systemconfiguration_response_create(
    int pki_systemconfiguration_id,
    int fki_systemconfigurationtype_id,
    int fki_branding_id,
    char *s_systemconfigurationtype_description_x,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_hascreditcardmerchant,
    int b_systemconfiguration_isdisposalactive,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    custom_branding_response_t *obj_branding
);

void systemconfiguration_response_free(systemconfiguration_response_t *systemconfiguration_response);

systemconfiguration_response_t *systemconfiguration_response_parseFromJSON(cJSON *systemconfiguration_responseJSON);

cJSON *systemconfiguration_response_convertToJSON(systemconfiguration_response_t *systemconfiguration_response);

#endif /* _systemconfiguration_response_H_ */

