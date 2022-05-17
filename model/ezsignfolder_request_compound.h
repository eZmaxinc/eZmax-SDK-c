/*
 * ezsignfolder_request_compound.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef _ezsignfolder_request_compound_H_
#define _ezsignfolder_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_request_compound_t ezsignfolder_request_compound_t;

#include "ezsignfolder_request.h"
#include "field_e_ezsignfolder_sendreminderfrequency.h"

// Enum  for ezsignfolder_request_compound

typedef enum  { ezmax_api_definition__full_ezsignfolder_request_compound__NULL = 0, ezmax_api_definition__full_ezsignfolder_request_compound__None, ezmax_api_definition__full_ezsignfolder_request_compound__Daily, ezmax_api_definition__full_ezsignfolder_request_compound__Weekly } ezmax_api_definition__full_ezsignfolder_request_compound__e;

char* ezsignfolder_request_compound_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfolder_request_compound__e e_ezsignfolder_sendreminderfrequency);

ezmax_api_definition__full_ezsignfolder_request_compound__e ezsignfolder_request_compound_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency);



typedef struct ezsignfolder_request_compound_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency; // custom

} ezsignfolder_request_compound_t;

ezsignfolder_request_compound_t *ezsignfolder_request_compound_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency
);

void ezsignfolder_request_compound_free(ezsignfolder_request_compound_t *ezsignfolder_request_compound);

ezsignfolder_request_compound_t *ezsignfolder_request_compound_parseFromJSON(cJSON *ezsignfolder_request_compoundJSON);

cJSON *ezsignfolder_request_compound_convertToJSON(ezsignfolder_request_compound_t *ezsignfolder_request_compound);

#endif /* _ezsignfolder_request_compound_H_ */

