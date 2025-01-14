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

// Enum  for ezsignfolder_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfolder_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfolder_request_compound_v3__All, ezmax_api_definition__full_ezsignfolder_request_compound_v3__EzsignsignerOnly } ezmax_api_definition__full_ezsignfolder_request_compound_v3__e;

char* ezsignfolder_request_compound_v3_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_ezsignfolder_request_compound_v3__e e_ezsignfolder_documentdependency);

ezmax_api_definition__full_ezsignfolder_request_compound_v3__e ezsignfolder_request_compound_v3_e_ezsignfolder_documentdependency_FromString(char* e_ezsignfolder_documentdependency);



typedef struct ezsignfolder_request_compound_v3_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_timezone_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency; // custom
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    char *t_ezsignfolder_message; // string
    int i_ezsignfolder_sendreminderfirstdays; //numeric
    int i_ezsignfolder_sendreminderotherdays; //numeric
    char *s_ezsignfolder_externalid; // string

} ezsignfolder_request_compound_v3_t;

ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency,
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

