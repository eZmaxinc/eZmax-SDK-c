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

#include "field_e_ezsignfolder_sendreminderfrequency.h"



typedef struct ezsignfolder_request_compound_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_timezone_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__e e_ezsignfolder_sendreminderfrequency; //referenced enum
    char *s_ezsignfolder_externalid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_request_compound_t;

__attribute__((deprecated)) ezsignfolder_request_compound_t *ezsignfolder_request_compound_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__e e_ezsignfolder_sendreminderfrequency,
    char *s_ezsignfolder_externalid
);

void ezsignfolder_request_compound_free(ezsignfolder_request_compound_t *ezsignfolder_request_compound);

ezsignfolder_request_compound_t *ezsignfolder_request_compound_parseFromJSON(cJSON *ezsignfolder_request_compoundJSON);

cJSON *ezsignfolder_request_compound_convertToJSON(ezsignfolder_request_compound_t *ezsignfolder_request_compound);

#endif /* _ezsignfolder_request_compound_H_ */

