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
#include "field_e_systemconfiguration_language1.h"
#include "field_e_systemconfiguration_language2.h"
#include "field_e_systemconfiguration_newexternaluseraction.h"

// Enum  for systemconfiguration_request

typedef enum  { ezmax_api_definition__full_systemconfiguration_request__NULL = 0, ezmax_api_definition__full_systemconfiguration_request__Stage, ezmax_api_definition__full_systemconfiguration_request__AutoCreate } ezmax_api_definition__full_systemconfiguration_request__e;

char* systemconfiguration_request_e_systemconfiguration_newexternaluseraction_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_newexternaluseraction);

ezmax_api_definition__full_systemconfiguration_request__e systemconfiguration_request_e_systemconfiguration_newexternaluseraction_FromString(char* e_systemconfiguration_newexternaluseraction);

// Enum  for systemconfiguration_request

typedef enum  { ezmax_api_definition__full_systemconfiguration_request__NULL = 0, ezmax_api_definition__full_systemconfiguration_request__fr_QC } ezmax_api_definition__full_systemconfiguration_request__e;

char* systemconfiguration_request_e_systemconfiguration_language1_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language1);

ezmax_api_definition__full_systemconfiguration_request__e systemconfiguration_request_e_systemconfiguration_language1_FromString(char* e_systemconfiguration_language1);

// Enum  for systemconfiguration_request

typedef enum  { ezmax_api_definition__full_systemconfiguration_request__NULL = 0, ezmax_api_definition__full_systemconfiguration_request__en_CA, ezmax_api_definition__full_systemconfiguration_request__en_QC, ezmax_api_definition__full_systemconfiguration_request__en_US } ezmax_api_definition__full_systemconfiguration_request__e;

char* systemconfiguration_request_e_systemconfiguration_language2_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_language2);

ezmax_api_definition__full_systemconfiguration_request__e systemconfiguration_request_e_systemconfiguration_language2_FromString(char* e_systemconfiguration_language2);

// Enum  for systemconfiguration_request

typedef enum  { ezmax_api_definition__full_systemconfiguration_request__NULL = 0, ezmax_api_definition__full_systemconfiguration_request__No, ezmax_api_definition__full_systemconfiguration_request__Yes } ezmax_api_definition__full_systemconfiguration_request__e;

char* systemconfiguration_request_e_systemconfiguration_ezsign_ToString(ezmax_api_definition__full_systemconfiguration_request__e e_systemconfiguration_ezsign);

ezmax_api_definition__full_systemconfiguration_request__e systemconfiguration_request_e_systemconfiguration_ezsign_FromString(char* e_systemconfiguration_ezsign);



typedef struct systemconfiguration_request_t {
    int pki_systemconfiguration_id; //numeric
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction; // custom
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1; // custom
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2; // custom
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign; // custom
    int b_systemconfiguration_ezsignpersonnal; //boolean
    int b_systemconfiguration_sspr; //boolean
    char *dt_systemconfiguration_readonlyexpirationstart; // string
    char *dt_systemconfiguration_readonlyexpirationend; // string

} systemconfiguration_request_t;

systemconfiguration_request_t *systemconfiguration_request_create(
    int pki_systemconfiguration_id,
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction,
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1,
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2,
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend
);

void systemconfiguration_request_free(systemconfiguration_request_t *systemconfiguration_request);

systemconfiguration_request_t *systemconfiguration_request_parseFromJSON(cJSON *systemconfiguration_requestJSON);

cJSON *systemconfiguration_request_convertToJSON(systemconfiguration_request_t *systemconfiguration_request);

#endif /* _systemconfiguration_request_H_ */

