/*
 * activesession_response.h
 *
 * An Activesession Object
 */

#ifndef _activesession_response_H_
#define _activesession_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_t activesession_response_t;

#include "field_e_activesession_ezsign.h"
#include "field_e_activesession_ezsignaccess.h"
#include "field_e_activesession_ezsignprepaid.h"
#include "field_e_activesession_origin.h"
#include "field_e_activesession_realestateinprogress.h"
#include "field_e_activesession_usertype.h"
#include "field_e_activesession_weekdaystart.h"

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__AgentBroker, ezmax_api_definition__full_activesession_response__Assistant, ezmax_api_definition__full_activesession_response__EzsignSigner, ezmax_api_definition__full_activesession_response__EzsignUser, ezmax_api_definition__full_activesession_response__Normal } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_usertype_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_usertype);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_usertype_FromString(char* e_activesession_usertype);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__BuiltIn, ezmax_api_definition__full_activesession_response__External } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_origin_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_origin);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_origin_FromString(char* e_activesession_origin);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__Sunday, ezmax_api_definition__full_activesession_response__Monday, ezmax_api_definition__full_activesession_response__Tuesday, ezmax_api_definition__full_activesession_response__Wednesday, ezmax_api_definition__full_activesession_response__Thursday, ezmax_api_definition__full_activesession_response__Friday, ezmax_api_definition__full_activesession_response__Saturday } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_weekdaystart_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_weekdaystart);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_weekdaystart_FromString(char* e_activesession_weekdaystart);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__No, ezmax_api_definition__full_activesession_response__Read, ezmax_api_definition__full_activesession_response__Modify, ezmax_api_definition__full_activesession_response__Full } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_ezsign_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_ezsign);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_ezsign_FromString(char* e_activesession_ezsign);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__No, ezmax_api_definition__full_activesession_response__PaidByOffice, ezmax_api_definition__full_activesession_response__PerDocument, ezmax_api_definition__full_activesession_response__Prepaid } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_ezsignaccess_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_ezsignaccess);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_ezsignaccess_FromString(char* e_activesession_ezsignaccess);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__No, ezmax_api_definition__full_activesession_response__Basic, ezmax_api_definition__full_activesession_response__Standard, ezmax_api_definition__full_activesession_response__Pro } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_ezsignprepaid_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_ezsignprepaid);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_ezsignprepaid_FromString(char* e_activesession_ezsignprepaid);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__No, ezmax_api_definition__full_activesession_response__Read, ezmax_api_definition__full_activesession_response__Modify, ezmax_api_definition__full_activesession_response__Create } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_realestateinprogress_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_realestateinprogress);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_realestateinprogress_FromString(char* e_activesession_realestateinprogress);



typedef struct activesession_response_t {
    field_e_activesession_usertype_t *e_activesession_usertype; // custom
    field_e_activesession_origin_t *e_activesession_origin; // custom
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart; // custom
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    int b_activesession_issuperadmin; //boolean
    int b_activesession_attachment; //boolean
    int b_activesession_canafe; //boolean
    int b_activesession_financial; //boolean
    int b_activesession_realestatecompleted; //boolean
    field_e_activesession_ezsign_t *e_activesession_ezsign; // custom
    field_e_activesession_ezsignaccess_t *e_activesession_ezsignaccess; // custom
    field_e_activesession_ezsignprepaid_t *e_activesession_ezsignprepaid; // custom
    field_e_activesession_realestateinprogress_t *e_activesession_realestateinprogress; // custom
    char *pks_customer_code; // string
    int fki_systemconfigurationtype_id; //numeric
    int fki_signature_id; //numeric

} activesession_response_t;

activesession_response_t *activesession_response_create(
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_origin_t *e_activesession_origin,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    int b_activesession_attachment,
    int b_activesession_canafe,
    int b_activesession_financial,
    int b_activesession_realestatecompleted,
    field_e_activesession_ezsign_t *e_activesession_ezsign,
    field_e_activesession_ezsignaccess_t *e_activesession_ezsignaccess,
    field_e_activesession_ezsignprepaid_t *e_activesession_ezsignprepaid,
    field_e_activesession_realestateinprogress_t *e_activesession_realestateinprogress,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id
);

void activesession_response_free(activesession_response_t *activesession_response);

activesession_response_t *activesession_response_parseFromJSON(cJSON *activesession_responseJSON);

cJSON *activesession_response_convertToJSON(activesession_response_t *activesession_response);

#endif /* _activesession_response_H_ */

