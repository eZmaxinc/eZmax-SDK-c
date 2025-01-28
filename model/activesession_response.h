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



typedef struct activesession_response_t {
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype; //referenced enum
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin; //referenced enum
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart; //referenced enum
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    int b_activesession_issuperadmin; //boolean
    int b_activesession_attachment; //boolean
    int b_activesession_canafe; //boolean
    int b_activesession_financial; //boolean
    int b_activesession_realestatecompleted; //boolean
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign; //referenced enum
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess; //referenced enum
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid; //referenced enum
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress; //referenced enum
    char *pks_customer_code; // string
    int fki_systemconfigurationtype_id; //numeric
    int fki_signature_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} activesession_response_t;

__attribute__((deprecated)) activesession_response_t *activesession_response_create(
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype,
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin,
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    int b_activesession_attachment,
    int b_activesession_canafe,
    int b_activesession_financial,
    int b_activesession_realestatecompleted,
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign,
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess,
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid,
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id
);

void activesession_response_free(activesession_response_t *activesession_response);

activesession_response_t *activesession_response_parseFromJSON(cJSON *activesession_responseJSON);

cJSON *activesession_response_convertToJSON(activesession_response_t *activesession_response);

#endif /* _activesession_response_H_ */

