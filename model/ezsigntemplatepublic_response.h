/*
 * ezsigntemplatepublic_response.h
 *
 * A Ezsigntemplatepublic Object
 */

#ifndef _ezsigntemplatepublic_response_H_
#define _ezsigntemplatepublic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_response_t ezsigntemplatepublic_response_t;

#include "common_audit.h"
#include "field_e_ezsigntemplatepublic_limittype.h"



typedef struct ezsigntemplatepublic_response_t {
    int pki_ezsigntemplatepublic_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    int fki_userlogintype_id; //numeric
    char *s_userlogintype_description_x; // string
    int fki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepublic_description; // string
    char *s_ezsigntemplatepublic_referenceid; // string
    int b_ezsigntemplatepublic_isactive; //boolean
    char *t_ezsigntemplatepublic_note; // string
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype; //referenced enum
    int i_ezsigntemplatepublic_limit; //numeric
    int i_ezsigntemplatepublic_limitexceeded; //numeric
    char *dt_ezsigntemplatepublic_limitexceededsince; // string
    char *s_ezsigntemplatepublic_url; // string
    char *s_ezsigntemplatepublic_ezsigntemplatedescription; // string
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_response_t;

__attribute__((deprecated)) ezsigntemplatepublic_response_t *ezsigntemplatepublic_response_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    char *s_ezsigntemplatepublic_referenceid,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit,
    int i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    char *s_ezsigntemplatepublic_url,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription,
    common_audit_t *obj_audit
);

void ezsigntemplatepublic_response_free(ezsigntemplatepublic_response_t *ezsigntemplatepublic_response);

ezsigntemplatepublic_response_t *ezsigntemplatepublic_response_parseFromJSON(cJSON *ezsigntemplatepublic_responseJSON);

cJSON *ezsigntemplatepublic_response_convertToJSON(ezsigntemplatepublic_response_t *ezsigntemplatepublic_response);

#endif /* _ezsigntemplatepublic_response_H_ */

