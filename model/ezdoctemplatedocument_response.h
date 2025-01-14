/*
 * ezdoctemplatedocument_response.h
 *
 * A Ezdoctemplatedocument Object
 */

#ifndef _ezdoctemplatedocument_response_H_
#define _ezdoctemplatedocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_response_t ezdoctemplatedocument_response_t;

#include "field_e_ezdoctemplatedocument_privacylevel.h"
#include "multilingual_ezdoctemplatedocument_name.h"

// Enum  for ezdoctemplatedocument_response

typedef enum  { ezmax_api_definition__full_ezdoctemplatedocument_response__NULL = 0, ezmax_api_definition__full_ezdoctemplatedocument_response__Company, ezmax_api_definition__full_ezdoctemplatedocument_response__Ezsignfoldertype, ezmax_api_definition__full_ezdoctemplatedocument_response__User } ezmax_api_definition__full_ezdoctemplatedocument_response__e;

char* ezdoctemplatedocument_response_e_ezdoctemplatedocument_privacylevel_ToString(ezmax_api_definition__full_ezdoctemplatedocument_response__e e_ezdoctemplatedocument_privacylevel);

ezmax_api_definition__full_ezdoctemplatedocument_response__e ezdoctemplatedocument_response_e_ezdoctemplatedocument_privacylevel_FromString(char* e_ezdoctemplatedocument_privacylevel);



typedef struct ezdoctemplatedocument_response_t {
    int pki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatetype_id; //numeric
    int fki_ezdoctemplatefieldtypecategory_id; //numeric
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel; // custom
    int b_ezdoctemplatedocument_isactive; //boolean
    struct multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name; //model
    char *s_ezdoctemplatedocument_name_x; // string
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezdoctemplatefieldtypecategory_description_x; // string
    char *s_ezdoctemplatetype_description_x; // string

} ezdoctemplatedocument_response_t;

ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name,
    char *s_ezdoctemplatedocument_name_x,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    char *s_ezdoctemplatetype_description_x
);

void ezdoctemplatedocument_response_free(ezdoctemplatedocument_response_t *ezdoctemplatedocument_response);

ezdoctemplatedocument_response_t *ezdoctemplatedocument_response_parseFromJSON(cJSON *ezdoctemplatedocument_responseJSON);

cJSON *ezdoctemplatedocument_response_convertToJSON(ezdoctemplatedocument_response_t *ezdoctemplatedocument_response);

#endif /* _ezdoctemplatedocument_response_H_ */

