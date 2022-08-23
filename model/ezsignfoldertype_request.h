/*
 * ezsignfoldertype_request.h
 *
 * A Ezsignfoldertype Object
 */

#ifndef _ezsignfoldertype_request_H_
#define _ezsignfoldertype_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_request_t ezsignfoldertype_request_t;

#include "field_e_ezsignfoldertype_disposal.h"
#include "field_e_ezsignfoldertype_privacylevel.h"
#include "field_e_ezsignfoldertype_sendreminderfrequency.h"
#include "multilingual_ezsignfoldertype_name.h"

// Enum  for ezsignfoldertype_request

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request__User, ezmax_api_definition__full_ezsignfoldertype_request__Usergroup } ezmax_api_definition__full_ezsignfoldertype_request__e;

char* ezsignfoldertype_request_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_request__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfoldertype_request__e ezsignfoldertype_request_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);

// Enum  for ezsignfoldertype_request

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request__None, ezmax_api_definition__full_ezsignfoldertype_request__Daily, ezmax_api_definition__full_ezsignfoldertype_request__Weekly } ezmax_api_definition__full_ezsignfoldertype_request__e;

char* ezsignfoldertype_request_e_ezsignfoldertype_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfoldertype_request__e e_ezsignfoldertype_sendreminderfrequency);

ezmax_api_definition__full_ezsignfoldertype_request__e ezsignfoldertype_request_e_ezsignfoldertype_sendreminderfrequency_FromString(char* e_ezsignfoldertype_sendreminderfrequency);

// Enum  for ezsignfoldertype_request

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request__No, ezmax_api_definition__full_ezsignfoldertype_request__Manual, ezmax_api_definition__full_ezsignfoldertype_request__Automatic } ezmax_api_definition__full_ezsignfoldertype_request__e;

char* ezsignfoldertype_request_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_ezsignfoldertype_request__e e_ezsignfoldertype_disposal);

ezmax_api_definition__full_ezsignfoldertype_request__e ezsignfoldertype_request_e_ezsignfoldertype_disposal_FromString(char* e_ezsignfoldertype_disposal);



typedef struct ezsignfoldertype_request_t {
    int pki_ezsignfoldertype_id; //numeric
    struct multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name; //model
    int fki_branding_id; //numeric
    int fki_billingentityinternal_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_usergroup_id_restricted; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_email_address_signed; // string
    char *s_email_address_summary; // string
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency; // custom
    int i_ezsignfoldertype_archivaldays; //numeric
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal; // custom
    int i_ezsignfoldertype_disposaldays; //numeric
    int i_ezsignfoldertype_deadlinedays; //numeric
    int b_ezsignfoldertype_sendattatchmentsigner; //boolean
    int b_ezsignfoldertype_sendsignedtodocumentowner; //boolean
    int b_ezsignfoldertype_sendsignedtofolderowner; //boolean
    int b_ezsignfoldertype_sendsignedtofullgroup; //boolean
    int b_ezsignfoldertype_sendsignedtolimitedgroup; //boolean
    int b_ezsignfoldertype_sendsignedtocolleague; //boolean
    int b_ezsignfoldertype_sendsummarytodocumentowner; //boolean
    int b_ezsignfoldertype_sendsummarytofolderowner; //boolean
    int b_ezsignfoldertype_sendsummarytofullgroup; //boolean
    int b_ezsignfoldertype_sendsummarytolimitedgroup; //boolean
    int b_ezsignfoldertype_sendsummarytocolleague; //boolean
    int b_ezsignfoldertype_isactive; //boolean

} ezsignfoldertype_request_t;

ezsignfoldertype_request_t *ezsignfoldertype_request_create(
    int pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int fki_branding_id,
    int fki_billingentityinternal_id,
    int fki_usergroup_id,
    int fki_usergroup_id_restricted,
    int fki_ezsigntsarequirement_id,
    char *s_email_address_signed,
    char *s_email_address_summary,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency,
    int i_ezsignfoldertype_archivaldays,
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal,
    int i_ezsignfoldertype_disposaldays,
    int i_ezsignfoldertype_deadlinedays,
    int b_ezsignfoldertype_sendattatchmentsigner,
    int b_ezsignfoldertype_sendsignedtodocumentowner,
    int b_ezsignfoldertype_sendsignedtofolderowner,
    int b_ezsignfoldertype_sendsignedtofullgroup,
    int b_ezsignfoldertype_sendsignedtolimitedgroup,
    int b_ezsignfoldertype_sendsignedtocolleague,
    int b_ezsignfoldertype_sendsummarytodocumentowner,
    int b_ezsignfoldertype_sendsummarytofolderowner,
    int b_ezsignfoldertype_sendsummarytofullgroup,
    int b_ezsignfoldertype_sendsummarytolimitedgroup,
    int b_ezsignfoldertype_sendsummarytocolleague,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_request_free(ezsignfoldertype_request_t *ezsignfoldertype_request);

ezsignfoldertype_request_t *ezsignfoldertype_request_parseFromJSON(cJSON *ezsignfoldertype_requestJSON);

cJSON *ezsignfoldertype_request_convertToJSON(ezsignfoldertype_request_t *ezsignfoldertype_request);

#endif /* _ezsignfoldertype_request_H_ */

