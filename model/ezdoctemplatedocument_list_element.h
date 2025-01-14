/*
 * ezdoctemplatedocument_list_element.h
 *
 * A Ezdoctemplatedocument List Element
 */

#ifndef _ezdoctemplatedocument_list_element_H_
#define _ezdoctemplatedocument_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_list_element_t ezdoctemplatedocument_list_element_t;

#include "field_e_ezdoctemplatedocument_privacylevel.h"

// Enum  for ezdoctemplatedocument_list_element

typedef enum  { ezmax_api_definition__full_ezdoctemplatedocument_list_element__NULL = 0, ezmax_api_definition__full_ezdoctemplatedocument_list_element__Company, ezmax_api_definition__full_ezdoctemplatedocument_list_element__Ezsignfoldertype, ezmax_api_definition__full_ezdoctemplatedocument_list_element__User } ezmax_api_definition__full_ezdoctemplatedocument_list_element__e;

char* ezdoctemplatedocument_list_element_e_ezdoctemplatedocument_privacylevel_ToString(ezmax_api_definition__full_ezdoctemplatedocument_list_element__e e_ezdoctemplatedocument_privacylevel);

ezmax_api_definition__full_ezdoctemplatedocument_list_element__e ezdoctemplatedocument_list_element_e_ezdoctemplatedocument_privacylevel_FromString(char* e_ezdoctemplatedocument_privacylevel);



typedef struct ezdoctemplatedocument_list_element_t {
    int pki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatetype_id; //numeric
    int fki_ezdoctemplatefieldtypecategory_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezdoctemplatetype_description_x; // string
    char *s_ezdoctemplatefieldtypecategory_description_x; // string
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel; // custom
    int b_ezdoctemplatedocument_isactive; //boolean
    char *s_ezdoctemplatedocument_name_x; // string

} ezdoctemplatedocument_list_element_t;

ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_create(
    int pki_ezdoctemplatedocument_id,
    int fki_language_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatetype_id,
    int fki_ezdoctemplatefieldtypecategory_id,
    char *s_ezsignfoldertype_name_x,
    char *s_ezdoctemplatetype_description_x,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    field_e_ezdoctemplatedocument_privacylevel_t *e_ezdoctemplatedocument_privacylevel,
    int b_ezdoctemplatedocument_isactive,
    char *s_ezdoctemplatedocument_name_x
);

void ezdoctemplatedocument_list_element_free(ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element);

ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element_parseFromJSON(cJSON *ezdoctemplatedocument_list_elementJSON);

cJSON *ezdoctemplatedocument_list_element_convertToJSON(ezdoctemplatedocument_list_element_t *ezdoctemplatedocument_list_element);

#endif /* _ezdoctemplatedocument_list_element_H_ */

