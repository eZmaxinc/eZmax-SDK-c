/*
 * ezsignfoldertype_request_compound.h
 *
 * A Ezsignfoldertype Object and children
 */

#ifndef _ezsignfoldertype_request_compound_H_
#define _ezsignfoldertype_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_request_compound_t ezsignfoldertype_request_compound_t;

#include "ezsignfoldertype_request.h"
#include "ezsignfoldertype_request_compound_all_of.h"
#include "field_e_ezsignfoldertype_disposal.h"
#include "field_e_ezsignfoldertype_privacylevel.h"
#include "field_e_ezsignfoldertype_sendreminderfrequency.h"
#include "multilingual_ezsignfoldertype_name.h"

// Enum  for ezsignfoldertype_request_compound

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound__User, ezmax_api_definition__full_ezsignfoldertype_request_compound__Usergroup } ezmax_api_definition__full_ezsignfoldertype_request_compound__e;

char* ezsignfoldertype_request_compound_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfoldertype_request_compound__e ezsignfoldertype_request_compound_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);

// Enum  for ezsignfoldertype_request_compound

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound__None, ezmax_api_definition__full_ezsignfoldertype_request_compound__Daily, ezmax_api_definition__full_ezsignfoldertype_request_compound__Weekly } ezmax_api_definition__full_ezsignfoldertype_request_compound__e;

char* ezsignfoldertype_request_compound_e_ezsignfoldertype_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound__e e_ezsignfoldertype_sendreminderfrequency);

ezmax_api_definition__full_ezsignfoldertype_request_compound__e ezsignfoldertype_request_compound_e_ezsignfoldertype_sendreminderfrequency_FromString(char* e_ezsignfoldertype_sendreminderfrequency);

// Enum  for ezsignfoldertype_request_compound

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound__No, ezmax_api_definition__full_ezsignfoldertype_request_compound__Manual, ezmax_api_definition__full_ezsignfoldertype_request_compound__Automatic } ezmax_api_definition__full_ezsignfoldertype_request_compound__e;

char* ezsignfoldertype_request_compound_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound__e e_ezsignfoldertype_disposal);

ezmax_api_definition__full_ezsignfoldertype_request_compound__e ezsignfoldertype_request_compound_e_ezsignfoldertype_disposal_FromString(char* e_ezsignfoldertype_disposal);



typedef struct ezsignfoldertype_request_compound_t {
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
    int b_ezsignfoldertype_includeproofsigner; //boolean
    int b_ezsignfoldertype_includeproofuser; //boolean
    int b_ezsignfoldertype_isactive; //boolean
    list_t *a_fki_user_id_signed; //primitive container
    list_t *a_fki_user_id_summary; //primitive container

} ezsignfoldertype_request_compound_t;

ezsignfoldertype_request_compound_t *ezsignfoldertype_request_compound_create(
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
    int b_ezsignfoldertype_includeproofsigner,
    int b_ezsignfoldertype_includeproofuser,
    int b_ezsignfoldertype_isactive,
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
);

void ezsignfoldertype_request_compound_free(ezsignfoldertype_request_compound_t *ezsignfoldertype_request_compound);

ezsignfoldertype_request_compound_t *ezsignfoldertype_request_compound_parseFromJSON(cJSON *ezsignfoldertype_request_compoundJSON);

cJSON *ezsignfoldertype_request_compound_convertToJSON(ezsignfoldertype_request_compound_t *ezsignfoldertype_request_compound);

#endif /* _ezsignfoldertype_request_compound_H_ */

