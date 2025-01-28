/*
 * ezsigntemplate_response_compound.h
 *
 * A Ezsigntemplate Object
 */

#ifndef _ezsigntemplate_response_compound_H_
#define _ezsigntemplate_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_response_compound_t ezsigntemplate_response_compound_t;

#include "common_audit.h"
#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"
#include "field_e_ezsigntemplate_type.h"



typedef struct ezsigntemplate_response_compound_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_externaldescription; // string
    char *t_ezsigntemplate_comment; // string
    char *s_ezsigntemplate_filenamepattern; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int b_ezsigntemplate_editallowed; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type; //referenced enum
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_response_compound_t;

__attribute__((deprecated)) ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    int fki_ezdoctemplatedocument_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_response_compound_free(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound);

ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_parseFromJSON(cJSON *ezsigntemplate_response_compoundJSON);

cJSON *ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound);

#endif /* _ezsigntemplate_response_compound_H_ */

