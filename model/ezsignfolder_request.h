/*
 * ezsignfolder_request.h
 *
 * An Ezsignfolder Object
 */

#ifndef _ezsignfolder_request_H_
#define _ezsignfolder_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_request_t ezsignfolder_request_t;

#include "field_e_ezsignfolder_sendreminderfrequency.h"

// Enum  for ezsignfolder_request

typedef enum  { ezmax_api_definition_ezsignfolder_request__NULL = 0, ezmax_api_definition_ezsignfolder_request__None, ezmax_api_definition_ezsignfolder_request__Daily, ezmax_api_definition_ezsignfolder_request__Weekly } ezmax_api_definition_ezsignfolder_request__e;

char* ezsignfolder_request_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition_ezsignfolder_request__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition_ezsignfolder_request__e ezsignfolder_request_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);



typedef struct ezsignfolder_request_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom

} ezsignfolder_request_t;

ezsignfolder_request_t *ezsignfolder_request_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency
);

void ezsignfolder_request_free(ezsignfolder_request_t *ezsignfolder_request);

ezsignfolder_request_t *ezsignfolder_request_parseFromJSON(cJSON *ezsignfolder_requestJSON);

cJSON *ezsignfolder_request_convertToJSON(ezsignfolder_request_t *ezsignfolder_request);

#endif /* _ezsignfolder_request_H_ */

