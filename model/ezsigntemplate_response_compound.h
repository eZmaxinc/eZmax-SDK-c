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
#include "ezsigntemplate_response.h"
#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"
#include "field_e_ezsigntemplate_type.h"

// Enum  for ezsigntemplate_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplate_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplate_response_compound__User, ezmax_api_definition__full_ezsigntemplate_response_compound__Usergroup, ezmax_api_definition__full_ezsigntemplate_response_compound__Company, ezmax_api_definition__full_ezsigntemplate_response_compound__Ezsignfoldertype } ezmax_api_definition__full_ezsigntemplate_response_compound__e;

char* ezsigntemplate_response_compound_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_response_compound__e e_ezsigntemplate_type);

ezmax_api_definition__full_ezsigntemplate_response_compound__e ezsigntemplate_response_compound_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type);



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
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type; // custom
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

} ezsigntemplate_response_compound_t;

ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_create(
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
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_response_compound_free(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound);

ezsigntemplate_response_compound_t *ezsigntemplate_response_compound_parseFromJSON(cJSON *ezsigntemplate_response_compoundJSON);

cJSON *ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_response_compound_t *ezsigntemplate_response_compound);

#endif /* _ezsigntemplate_response_compound_H_ */

