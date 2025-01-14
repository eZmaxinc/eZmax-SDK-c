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

// Enum  for ezsigntemplate_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsigntemplate_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__No, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__Filename, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__Content } ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e;

char* ezsigntemplate_response_compound_v3_e_ezsigntemplate_recognition_ToString(ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e e_ezsigntemplate_recognition);

ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e ezsigntemplate_response_compound_v3_e_ezsigntemplate_recognition_FromString(char* e_ezsigntemplate_recognition);

// Enum  for ezsigntemplate_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsigntemplate_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__User, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__Usergroup, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__Company, ezmax_api_definition__full_ezsigntemplate_response_compound_v3__Ezsignfoldertype } ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e;

char* ezsigntemplate_response_compound_v3_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e e_ezsigntemplate_type);

ezmax_api_definition__full_ezsigntemplate_response_compound_v3__e ezsigntemplate_response_compound_v3_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type);



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
    field_e_ezsigntemplate_recognition_t *e_ezsigntemplate_recognition; // custom
    char *s_ezsigntemplate_filenameregexp; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int b_ezsigntemplate_editallowed; //boolean
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type; // custom
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

} ezsigntemplate_response_compound_v3_t;

ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3_create(
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
    field_e_ezsigntemplate_recognition_t *e_ezsigntemplate_recognition,
    char *s_ezsigntemplate_filenameregexp,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_response_compound_v3_free(ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3);

ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3_parseFromJSON(cJSON *ezsigntemplate_response_compound_v3JSON);

cJSON *ezsigntemplate_response_compound_v3_convertToJSON(ezsigntemplate_response_compound_v3_t *ezsigntemplate_response_compound_v3);

#endif /* _ezsigntemplate_response_compound_v3_H_ */

