/*
 * ezsignfolder_request_compound_v3.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef _ezsignfolder_request_compound_v3_H_
#define _ezsignfolder_request_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_request_compound_v3_t ezsignfolder_request_compound_v3_t;

#include "field_e_ezsignfolder_documentdependency.h"



typedef struct ezsignfolder_request_compound_v3_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_timezone_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency; //referenced enum
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    char *t_ezsignfolder_message; // string
    int i_ezsignfolder_sendreminderfirstdays; //numeric
    int i_ezsignfolder_sendreminderotherdays; //numeric
    char *s_ezsignfolder_externalid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_request_compound_v3_t;

__attribute__((deprecated)) ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    char *t_ezsignfolder_message,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *s_ezsignfolder_externalid
);

void ezsignfolder_request_compound_v3_free(ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3);

ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_parseFromJSON(cJSON *ezsignfolder_request_compound_v3JSON);

cJSON *ezsignfolder_request_compound_v3_convertToJSON(ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3);

#endif /* _ezsignfolder_request_compound_v3_H_ */

