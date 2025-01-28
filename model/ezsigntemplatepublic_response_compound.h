/*
 * ezsigntemplatepublic_response_compound.h
 *
 * A Ezsigntemplatepublic Object
 */

#ifndef _ezsigntemplatepublic_response_compound_H_
#define _ezsigntemplatepublic_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_response_compound_t ezsigntemplatepublic_response_compound_t;

#include "common_audit.h"
#include "custom_ezsignfolderezsigntemplatepublic_response.h"
#include "field_e_ezsigntemplatepublic_limittype.h"



typedef struct ezsigntemplatepublic_response_compound_t {
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
    list_t *a_obj_ezsignfolderezsigntemplatepublic; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_response_compound_t;

__attribute__((deprecated)) ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_create(
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
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignfolderezsigntemplatepublic
);

void ezsigntemplatepublic_response_compound_free(ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound);

ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_parseFromJSON(cJSON *ezsigntemplatepublic_response_compoundJSON);

cJSON *ezsigntemplatepublic_response_compound_convertToJSON(ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound);

#endif /* _ezsigntemplatepublic_response_compound_H_ */

