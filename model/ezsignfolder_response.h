/*
 * ezsignfolder_response.h
 *
 * An Ezsignfolder Object
 */

#ifndef _ezsignfolder_response_H_
#define _ezsignfolder_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_response_t ezsignfolder_response_t;

#include "common_audit.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"
#include "field_e_ezsignfolder_step.h"

// Enum  for ezsignfolder_response

typedef enum  { ezmax_api_definition_ezsignfolder_response__NULL = 0, ezmax_api_definition_ezsignfolder_response__None, ezmax_api_definition_ezsignfolder_response__Daily, ezmax_api_definition_ezsignfolder_response__Weekly } ezmax_api_definition_ezsignfolder_response__e;

char* ezsignfolder_response_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition_ezsignfolder_response__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition_ezsignfolder_response__e ezsignfolder_response_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);

// Enum  for ezsignfolder_response

typedef enum  { ezmax_api_definition_ezsignfolder_response__NULL = 0, ezmax_api_definition_ezsignfolder_response__Unsent, ezmax_api_definition_ezsignfolder_response__Sent, ezmax_api_definition_ezsignfolder_response__PartiallySigned, ezmax_api_definition_ezsignfolder_response__Expired, ezmax_api_definition_ezsignfolder_response__Completed, ezmax_api_definition_ezsignfolder_response__Archived } ezmax_api_definition_ezsignfolder_response__e;

char* ezsignfolder_response_e_ezsignfolder_step_ToString(ezmax_api_definition_ezsignfolder_response__e e_ezsignfolder_step);

ezmax_api_definition_ezsignfolder_response__e ezsignfolder_response_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_response_t {
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom
    int pki_ezsignfolder_id; //numeric
    char *dt_ezsignfolder_sentdate; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    char *dt_ezsignfolder_close; // string
    struct common_audit_t *obj_audit; //model

} ezsignfolder_response_t;

ezsignfolder_response_t *ezsignfolder_response_create(
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    int pki_ezsignfolder_id,
    char *dt_ezsignfolder_sentdate,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
);

void ezsignfolder_response_free(ezsignfolder_response_t *ezsignfolder_response);

ezsignfolder_response_t *ezsignfolder_response_parseFromJSON(cJSON *ezsignfolder_responseJSON);

cJSON *ezsignfolder_response_convertToJSON(ezsignfolder_response_t *ezsignfolder_response);

#endif /* _ezsignfolder_response_H_ */

