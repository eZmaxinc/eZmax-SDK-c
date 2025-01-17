/*
 * ezsignbulksend_response_compound.h
 *
 * An Ezsignbulksend Object and children to create a complete structure
 */

#ifndef _ezsignbulksend_response_compound_H_
#define _ezsignbulksend_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_response_compound_t ezsignbulksend_response_compound_t;

#include "common_audit.h"
#include "ezsignbulksend_response.h"
#include "ezsignbulksenddocumentmapping_response_compound.h"
#include "ezsignbulksendsignermapping_response.h"
#include "field_e_ezsignfoldertype_privacylevel.h"

// Enum  for ezsignbulksend_response_compound

typedef enum  { ezmax_api_definition__full_ezsignbulksend_response_compound__NULL = 0, ezmax_api_definition__full_ezsignbulksend_response_compound__User, ezmax_api_definition__full_ezsignbulksend_response_compound__Usergroup } ezmax_api_definition__full_ezsignbulksend_response_compound__e;

char* ezsignbulksend_response_compound_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignbulksend_response_compound__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignbulksend_response_compound__e ezsignbulksend_response_compound_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);



typedef struct ezsignbulksend_response_compound_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean
    struct common_audit_t *obj_audit; //model
    list_t *a_obj_ezsignbulksenddocumentmapping; //nonprimitive container
    list_t *a_obj_ezsignbulksendsignermapping; //nonprimitive container

} ezsignbulksend_response_compound_t;

ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignbulksenddocumentmapping,
    list_t *a_obj_ezsignbulksendsignermapping
);

void ezsignbulksend_response_compound_free(ezsignbulksend_response_compound_t *ezsignbulksend_response_compound);

ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_parseFromJSON(cJSON *ezsignbulksend_response_compoundJSON);

cJSON *ezsignbulksend_response_compound_convertToJSON(ezsignbulksend_response_compound_t *ezsignbulksend_response_compound);

#endif /* _ezsignbulksend_response_compound_H_ */

