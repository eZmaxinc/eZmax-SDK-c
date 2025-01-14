/*
 * ezdoctemplatedocument_request.h
 *
 * A Ezdoctemplatedocument Object
 */

#ifndef _ezdoctemplatedocument_request_H_
#define _ezdoctemplatedocument_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_request_t ezdoctemplatedocument_request_t;

#include "field_e_ezdoctemplatedocument_privacylevel.h"
#include "multilingual_ezdoctemplatedocument_name.h"

// Enum  for ezdoctemplatedocument_request

typedef enum  { ezmax_api_definition__full_ezdoctemplatedocument_request__NULL = 0, ezmax_api_definition__full_ezdoctemplatedocument_request__Company, ezmax_api_definition__full_ezdoctemplatedocument_request__Ezsignfoldertype, ezmax_api_definition__full_ezdoctemplatedocument_request__User } ezmax_api_definition__full_ezdoctemplatedocument_request__e;

char* ezdoctemplatedocument_request_e_ezdoctemplatedocument_privacylevel_ToString(ezmax_api_definition__full_ezdoctemplatedocument_request__e e_ezdoctemplatedocument_privacylevel);

ezmax_api_definition__full_ezdoctemplatedocument_request__e ezdoctemplatedocument_request_e_ezdoctemplatedocument_privacylevel_FromString(char* e_ezdoctemplatedocument_privacylevel);



typedef struct ezdoctemplatedocument_request_t {
    int pki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatetype_id; //numeric
    int fki_ezdoctemplatefieldtypecategory_id; //numeric
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel; // custom
    int b_ezdoctemplatedocument_isactive; //boolean
    struct multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name; //model

} ezdoctemplatedocument_request_t;

ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    multilingual_ezdoctemplatedocument_name_t *obj_ezdoctemplatedocument_name
);

void ezdoctemplatedocument_request_free(ezdoctemplatedocument_request_t *ezdoctemplatedocument_request);

ezdoctemplatedocument_request_t *ezdoctemplatedocument_request_parseFromJSON(cJSON *ezdoctemplatedocument_requestJSON);

cJSON *ezdoctemplatedocument_request_convertToJSON(ezdoctemplatedocument_request_t *ezdoctemplatedocument_request);

#endif /* _ezdoctemplatedocument_request_H_ */

