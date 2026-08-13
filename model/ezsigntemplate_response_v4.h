/*
 * ezsigntemplate_response_v4.h
 *
 * A Ezsigntemplate Object
 */

#ifndef _ezsigntemplate_response_v4_H_
#define _ezsigntemplate_response_v4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_response_v4_t ezsigntemplate_response_v4_t;

#include "common_audit.h"
#include "custom_ezsignfoldertype_template_response.h"
#include "field_e_ezsigntemplate_recognition.h"
#include "field_e_ezsigntemplate_type.h"



typedef struct ezsigntemplate_response_v4_t {
    int *pki_ezsigntemplate_id; //numeric
    int *fki_ezsigntemplatedocument_id; //numeric
    int *fki_ezsignfoldertype_id; //numeric
    struct custom_ezsignfoldertype_template_response_t *obj_ezsignfoldertype; //model
    int *fki_language_id; //numeric
    int *fki_ezdoctemplatedocument_id; //numeric
    char *s_ezdoctemplatedocument_name_x; // string
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_externaldescription; // string
    char *t_ezsigntemplate_comment; // string
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition; //referenced enum
    char *s_ezsigntemplate_filenameregexp; // string
    int *b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int *b_ezsigntemplate_editallowed; //boolean
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_response_v4_t;

__attribute__((deprecated)) ezsigntemplate_response_v4_t *ezsigntemplate_response_v4_create(
    int *pki_ezsigntemplate_id,
    int *fki_ezsigntemplatedocument_id,
    int *fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_template_response_t *obj_ezsignfoldertype,
    int *fki_language_id,
    int *fki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_externaldescription,
    char *t_ezsigntemplate_comment,
    ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int *b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int *b_ezsigntemplate_editallowed,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
);

void ezsigntemplate_response_v4_free(ezsigntemplate_response_v4_t *ezsigntemplate_response_v4);

ezsigntemplate_response_v4_t *ezsigntemplate_response_v4_parseFromJSON(cJSON *ezsigntemplate_response_v4JSON);

cJSON *ezsigntemplate_response_v4_convertToJSON(ezsigntemplate_response_v4_t *ezsigntemplate_response_v4);

#endif /* _ezsigntemplate_response_v4_H_ */

