/*
 * systemconfiguration_response_compound.h
 *
 * A Systemconfiguration Object
 */

#ifndef _systemconfiguration_response_compound_H_
#define _systemconfiguration_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_response_compound_t systemconfiguration_response_compound_t;

#include "field_e_systemconfiguration_ezsign.h"
#include "field_e_systemconfiguration_ezsignofficeplan.h"
#include "field_e_systemconfiguration_language1.h"
#include "field_e_systemconfiguration_language2.h"
#include "field_e_systemconfiguration_newexternaluseraction.h"
#include "object.h"

// Enum  for systemconfiguration_response_compound

typedef enum  { ezmax_api_definition__full_systemconfiguration_response_compound__NULL = 0, ezmax_api_definition__full_systemconfiguration_response_compound__Stage, ezmax_api_definition__full_systemconfiguration_response_compound__AutoCreate } ezmax_api_definition__full_systemconfiguration_response_compound__e;

char* systemconfiguration_response_compound_e_systemconfiguration_newexternaluseraction_ToString(ezmax_api_definition__full_systemconfiguration_response_compound__e e_systemconfiguration_newexternaluseraction);

ezmax_api_definition__full_systemconfiguration_response_compound__e systemconfiguration_response_compound_e_systemconfiguration_newexternaluseraction_FromString(char* e_systemconfiguration_newexternaluseraction);

// Enum  for systemconfiguration_response_compound

typedef enum  { ezmax_api_definition__full_systemconfiguration_response_compound__NULL = 0, ezmax_api_definition__full_systemconfiguration_response_compound__fr_QC } ezmax_api_definition__full_systemconfiguration_response_compound__e;

char* systemconfiguration_response_compound_e_systemconfiguration_language1_ToString(ezmax_api_definition__full_systemconfiguration_response_compound__e e_systemconfiguration_language1);

ezmax_api_definition__full_systemconfiguration_response_compound__e systemconfiguration_response_compound_e_systemconfiguration_language1_FromString(char* e_systemconfiguration_language1);

// Enum  for systemconfiguration_response_compound

typedef enum  { ezmax_api_definition__full_systemconfiguration_response_compound__NULL = 0, ezmax_api_definition__full_systemconfiguration_response_compound__en_CA, ezmax_api_definition__full_systemconfiguration_response_compound__en_QC, ezmax_api_definition__full_systemconfiguration_response_compound__en_US } ezmax_api_definition__full_systemconfiguration_response_compound__e;

char* systemconfiguration_response_compound_e_systemconfiguration_language2_ToString(ezmax_api_definition__full_systemconfiguration_response_compound__e e_systemconfiguration_language2);

ezmax_api_definition__full_systemconfiguration_response_compound__e systemconfiguration_response_compound_e_systemconfiguration_language2_FromString(char* e_systemconfiguration_language2);

// Enum  for systemconfiguration_response_compound

typedef enum  { ezmax_api_definition__full_systemconfiguration_response_compound__NULL = 0, ezmax_api_definition__full_systemconfiguration_response_compound__No, ezmax_api_definition__full_systemconfiguration_response_compound__Yes } ezmax_api_definition__full_systemconfiguration_response_compound__e;

char* systemconfiguration_response_compound_e_systemconfiguration_ezsign_ToString(ezmax_api_definition__full_systemconfiguration_response_compound__e e_systemconfiguration_ezsign);

ezmax_api_definition__full_systemconfiguration_response_compound__e systemconfiguration_response_compound_e_systemconfiguration_ezsign_FromString(char* e_systemconfiguration_ezsign);

// Enum  for systemconfiguration_response_compound

typedef enum  { ezmax_api_definition__full_systemconfiguration_response_compound__NULL = 0, ezmax_api_definition__full_systemconfiguration_response_compound__Standard, ezmax_api_definition__full_systemconfiguration_response_compound__Pro } ezmax_api_definition__full_systemconfiguration_response_compound__e;

char* systemconfiguration_response_compound_e_systemconfiguration_ezsignofficeplan_ToString(ezmax_api_definition__full_systemconfiguration_response_compound__e e_systemconfiguration_ezsignofficeplan);

ezmax_api_definition__full_systemconfiguration_response_compound__e systemconfiguration_response_compound_e_systemconfiguration_ezsignofficeplan_FromString(char* e_systemconfiguration_ezsignofficeplan);



typedef struct systemconfiguration_response_compound_t {
    int pki_systemconfiguration_id; //numeric
    int fki_systemconfigurationtype_id; //numeric
    int fki_branding_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction; // custom
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1; // custom
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2; // custom
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign; // custom
    field_e_systemconfiguration_ezsignofficeplan_t *e_systemconfiguration_ezsignofficeplan; // custom
    int b_systemconfiguration_ezsignpaidbyoffice; //boolean
    int b_systemconfiguration_ezsignpersonnal; //boolean
    int b_systemconfiguration_hascreditcardmerchant; //boolean
    int b_systemconfiguration_isdisposalactive; //boolean
    int b_systemconfiguration_sspr; //boolean
    char *dt_systemconfiguration_readonlyexpirationstart; // string
    char *dt_systemconfiguration_readonlyexpirationend; // string
    struct object_t *obj_branding; //model

} systemconfiguration_response_compound_t;

systemconfiguration_response_compound_t *systemconfiguration_response_compound_create(
    int pki_systemconfiguration_id,
    int fki_systemconfigurationtype_id,
    int fki_branding_id,
    char *s_systemconfigurationtype_description_x,
    field_e_systemconfiguration_newexternaluseraction_t *e_systemconfiguration_newexternaluseraction,
    field_e_systemconfiguration_language1_t *e_systemconfiguration_language1,
    field_e_systemconfiguration_language2_t *e_systemconfiguration_language2,
    field_e_systemconfiguration_ezsign_t *e_systemconfiguration_ezsign,
    field_e_systemconfiguration_ezsignofficeplan_t *e_systemconfiguration_ezsignofficeplan,
    int b_systemconfiguration_ezsignpaidbyoffice,
    int b_systemconfiguration_ezsignpersonnal,
    int b_systemconfiguration_hascreditcardmerchant,
    int b_systemconfiguration_isdisposalactive,
    int b_systemconfiguration_sspr,
    char *dt_systemconfiguration_readonlyexpirationstart,
    char *dt_systemconfiguration_readonlyexpirationend,
    object_t *obj_branding
);

void systemconfiguration_response_compound_free(systemconfiguration_response_compound_t *systemconfiguration_response_compound);

systemconfiguration_response_compound_t *systemconfiguration_response_compound_parseFromJSON(cJSON *systemconfiguration_response_compoundJSON);

cJSON *systemconfiguration_response_compound_convertToJSON(systemconfiguration_response_compound_t *systemconfiguration_response_compound);

#endif /* _systemconfiguration_response_compound_H_ */

