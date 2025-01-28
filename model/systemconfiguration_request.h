/*
 * systemconfiguration_request.h
 *
 * A Systemconfiguration Object
 */

#ifndef _systemconfiguration_request_H_
#define _systemconfiguration_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_request_t systemconfiguration_request_t;

#include "field_e_systemconfiguration_ezsign.h"
#include "field_e_systemconfiguration_ezsignofficeplan.h"
#include "field_e_systemconfiguration_language1.h"
#include "field_e_systemconfiguration_language2.h"
#include "field_e_systemconfiguration_newexternaluseraction.h"



typedef struct systemconfiguration_request_t {
    int pki_systemconfiguration_id; //numeric
    int fki_branding_id; //numeric
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign; //referenced enum
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan; //referenced enum
    int b_systemconfiguration_ezsignpaidbyoffice; //boolean
    int b_systemconfiguration_ezsignpersonnal; //boolean
    int b_systemconfiguration_sspr; //boolean
    char *dt_systemconfiguration_readonlyexpirationstart; // string
    char *dt_systemconfiguration_readonlyexpirationend; // string

    int _library_owned; // Is the library responsible for freeing this object?
} systemconfiguration_request_t;

__attribute__((deprecated)) systemconfiguration_request_t *systemconfiguration_request_create(
    int pki_systemconfiguration_id,
    int fki_branding_id,
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e e_systemconfiguration_newexternaluseraction,
    ezmax_api_definition__full_field_e_systemconfiguration_language1__e e_systemconfiguration_language1,
    ezmax_api_definition__full_field_e_systemconfiguration_language2__e e_systemconfiguration_language2,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e e_systemconfiguration_ezsign,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend
);

void systemconfiguration_request_free(systemconfiguration_request_t *systemconfiguration_request);

systemconfiguration_request_t *systemconfiguration_request_parseFromJSON(cJSON *systemconfiguration_requestJSON);

cJSON *systemconfiguration_request_convertToJSON(systemconfiguration_request_t *systemconfiguration_request);

#endif /* _systemconfiguration_request_H_ */

