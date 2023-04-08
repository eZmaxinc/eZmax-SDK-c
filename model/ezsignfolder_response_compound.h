/*
 * ezsignfolder_response_compound.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef _ezsignfolder_response_compound_H_
#define _ezsignfolder_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_response_compound_t ezsignfolder_response_compound_t;

#include "common_audit.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"
#include "field_e_ezsignfolder_step.h"

// Enum  for ezsignfolder_response_compound

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound__None, ezmax_api_definition__full_ezsignfolder_response_compound__Daily, ezmax_api_definition__full_ezsignfolder_response_compound__Weekly } ezmax_api_definition__full_ezsignfolder_response_compound__e;

char* ezsignfolder_response_compound_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition__full_ezsignfolder_response_compound__e ezsignfolder_response_compound_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);

// Enum  for ezsignfolder_response_compound

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound__Unsent, ezmax_api_definition__full_ezsignfolder_response_compound__PendingSend, ezmax_api_definition__full_ezsignfolder_response_compound__Sent, ezmax_api_definition__full_ezsignfolder_response_compound__PartiallySigned, ezmax_api_definition__full_ezsignfolder_response_compound__Expired, ezmax_api_definition__full_ezsignfolder_response_compound__Completed, ezmax_api_definition__full_ezsignfolder_response_compound__Archived, ezmax_api_definition__full_ezsignfolder_response_compound__Disposed } ezmax_api_definition__full_ezsignfolder_response_compound__e;

char* ezsignfolder_response_compound_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_step);

ezmax_api_definition__full_ezsignfolder_response_compound__e ezsignfolder_response_compound_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_response_compound_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsigntsarequirement_description_x; // string
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    int b_ezsignfolder_isdisposable; //boolean
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom
    char *dt_ezsignfolder_delayedsenddate; // string
    char *dt_ezsignfolder_duedate; // string
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_scheduledarchive; // string
    char *dt_ezsignfolder_scheduleddispose; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    char *dt_ezsignfolder_close; // string
    char *t_ezsignfolder_message; // string
    struct common_audit_t *obj_audit; //model
    char *s_ezsignfolder_externalid; // string

} ezsignfolder_response_compound_t;

ezsignfolder_response_compound_t *ezsignfolder_response_compound_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid
);

void ezsignfolder_response_compound_free(ezsignfolder_response_compound_t *ezsignfolder_response_compound);

ezsignfolder_response_compound_t *ezsignfolder_response_compound_parseFromJSON(cJSON *ezsignfolder_response_compoundJSON);

cJSON *ezsignfolder_response_compound_convertToJSON(ezsignfolder_response_compound_t *ezsignfolder_response_compound);

#endif /* _ezsignfolder_response_compound_H_ */

