/*
 * ezsignfolder_response_all_of.h
 *
 * 
 */

#ifndef _ezsignfolder_response_all_of_H_
#define _ezsignfolder_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_response_all_of_t ezsignfolder_response_all_of_t;

#include "common_audit.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"
#include "field_e_ezsignfolder_step.h"

// Enum  for ezsignfolder_response_all_of

typedef enum  { ezmax_api_definition_ezsignfolder_response_all_of__NULL = 0, ezmax_api_definition_ezsignfolder_response_all_of__None, ezmax_api_definition_ezsignfolder_response_all_of__Daily, ezmax_api_definition_ezsignfolder_response_all_of__Weekly } ezmax_api_definition_ezsignfolder_response_all_of__e;

char* ezsignfolder_response_all_of_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition_ezsignfolder_response_all_of__e ezsignfolder_response_all_of_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);

// Enum  for ezsignfolder_response_all_of

typedef enum  { ezmax_api_definition_ezsignfolder_response_all_of__NULL = 0, ezmax_api_definition_ezsignfolder_response_all_of__Unsent, ezmax_api_definition_ezsignfolder_response_all_of__Sent, ezmax_api_definition_ezsignfolder_response_all_of__PartiallySigned, ezmax_api_definition_ezsignfolder_response_all_of__Expired, ezmax_api_definition_ezsignfolder_response_all_of___Signed, ezmax_api_definition_ezsignfolder_response_all_of__Completed, ezmax_api_definition_ezsignfolder_response_all_of__Archived } ezmax_api_definition_ezsignfolder_response_all_of__e;

char* ezsignfolder_response_all_of_e_ezsignfolder_step_ToString(ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_step);

ezmax_api_definition_ezsignfolder_response_all_of__e ezsignfolder_response_all_of_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);



typedef struct ezsignfolder_response_all_of_t {
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    int pki_ezsignfolder_id; //numeric
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_close; // string
    struct common_audit_t *obj_audit; //model

} ezsignfolder_response_all_of_t;

ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_create(
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int pki_ezsignfolder_id,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
);

void ezsignfolder_response_all_of_free(ezsignfolder_response_all_of_t *ezsignfolder_response_all_of);

ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_parseFromJSON(cJSON *ezsignfolder_response_all_ofJSON);

cJSON *ezsignfolder_response_all_of_convertToJSON(ezsignfolder_response_all_of_t *ezsignfolder_response_all_of);

#endif /* _ezsignfolder_response_all_of_H_ */

