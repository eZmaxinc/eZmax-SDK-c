/*
 * ezdoctemplatedocument_response_compound.h
 *
 * A Ezdoctemplatedocument Object
 */

#ifndef _ezdoctemplatedocument_response_compound_H_
#define _ezdoctemplatedocument_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_response_compound_t ezdoctemplatedocument_response_compound_t;

#include "field_e_ezdoctemplatedocument_privacylevel.h"
#include "multilingual_ezdoctemplatedocument_name.h"



typedef struct ezdoctemplatedocument_response_compound_t {
    int pki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatetype_id; //numeric
    int fki_ezdoctemplatefieldtypecategory_id; //numeric
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel; //referenced enum
    int b_ezdoctemplatedocument_isactive; //boolean
    struct multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name; //model
    char *s_ezdoctemplatedocument_name_x; // string
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezdoctemplatefieldtypecategory_description_x; // string
    char *s_ezdoctemplatetype_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_response_compound_t;

__attribute__((deprecated)) ezdoctemplatedocument_response_compound_t *ezdoctemplatedocument_response_compound_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    ezmax_api_definition__full_field_e_ezdoctemplatedocument_privacylevel__e e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name,
    char *s_ezdoctemplatedocument_name_x,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    char *s_ezdoctemplatetype_description_x
);

void ezdoctemplatedocument_response_compound_free(ezdoctemplatedocument_response_compound_t *ezdoctemplatedocument_response_compound);

ezdoctemplatedocument_response_compound_t *ezdoctemplatedocument_response_compound_parseFromJSON(cJSON *ezdoctemplatedocument_response_compoundJSON);

cJSON *ezdoctemplatedocument_response_compound_convertToJSON(ezdoctemplatedocument_response_compound_t *ezdoctemplatedocument_response_compound);

#endif /* _ezdoctemplatedocument_response_compound_H_ */

