/*
 * ezsigntemplate_response_compound_v3.h
 *
 * A Ezsigntemplate Object
 */

#ifndef _ezsigntemplate_response_compound_v3_H_
#define _ezsigntemplate_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_response_compound_v3_t ezsigntemplate_response_compound_v3_t;

#include "common_audit.h"
#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"
#include "field_e_ezsigntemplate_recognition.h"
#include "field_e_ezsigntemplate_type.h"



typedef struct ezsigntemplate_response_compound_v3_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    char *s_ezdoctemplatedocument_name_x; // string
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_externaldescription; // string
    char *t_ezsigntemplate_comment; // string
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition; //referenced enum
    char *s_ezsigntemplate_filenameregexp; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int b_ezsigntemplate_editallowed; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type; //referenced enum
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_response_compound_v3_t;

__attribute__((deprecated)) ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    int fki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_response_compound_v3_free(ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3);

ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3_parseFromJSON(cJSON *ezsigntemplate_response_compound_v3JSON);

cJSON *ezsigntemplate_response_compound_v3_convertToJSON(ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3);

#endif /* _ezsigntemplate_response_compound_v3_H_ */

