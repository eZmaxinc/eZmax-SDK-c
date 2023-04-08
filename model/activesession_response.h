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

#include "field_e_activesession_usertype.h"
#include "field_e_activesession_weekdaystart.h"

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__AgentBroker, ezmax_api_definition__full_activesession_response__Assistant, ezmax_api_definition__full_activesession_response__EzsignSigner, ezmax_api_definition__full_activesession_response__EzsignUser, ezmax_api_definition__full_activesession_response__Normal } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_usertype_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_usertype);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_usertype_FromString(char* e_activesession_usertype);

// Enum  for activesession_response

typedef enum  { ezmax_api_definition__full_activesession_response__NULL = 0, ezmax_api_definition__full_activesession_response__Sunday, ezmax_api_definition__full_activesession_response__Monday, ezmax_api_definition__full_activesession_response__Tuesday, ezmax_api_definition__full_activesession_response__Wednesday, ezmax_api_definition__full_activesession_response__Thursday, ezmax_api_definition__full_activesession_response__Friday, ezmax_api_definition__full_activesession_response__Saturday } ezmax_api_definition__full_activesession_response__e;

char* activesession_response_e_activesession_weekdaystart_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_weekdaystart);

ezmax_api_definition__full_activesession_response__e activesession_response_e_activesession_weekdaystart_FromString(char* e_activesession_weekdaystart);



typedef struct activesession_response_t {
    field_e_activesession_usertype_t *e_activesession_usertype; // custom
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart; // custom
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    int b_activesession_issuperadmin; //boolean
    char *pks_customer_code; // string
    int fki_systemconfigurationtype_id; //numeric

} activesession_response_t;

activesession_response_t *activesession_response_create(
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id
);

void activesession_response_free(activesession_response_t *activesession_response);

activesession_response_t *activesession_response_parseFromJSON(cJSON *activesession_responseJSON);

cJSON *activesession_response_convertToJSON(activesession_response_t *activesession_response);

#endif /* _activesession_response_H_ */

