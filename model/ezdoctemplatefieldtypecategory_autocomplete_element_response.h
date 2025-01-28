/*
 * ezdoctemplatefieldtypecategory_autocomplete_element_response.h
 *
 * A Ezdoctemplatefieldtypecategory AutocompleteElement Response
 */

#ifndef _ezdoctemplatefieldtypecategory_autocomplete_element_response_H_
#define _ezdoctemplatefieldtypecategory_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatefieldtypecategory_autocomplete_element_response_t ezdoctemplatefieldtypecategory_autocomplete_element_response_t;




typedef struct ezdoctemplatefieldtypecategory_autocomplete_element_response_t {
    int pki_ezdoctemplatefieldtypecategory_id; //numeric
    int fki_ezdoctemplatetype_id; //numeric
    char *s_ezdoctemplatefieldtypecategory_description_x; // string
    int b_ezdoctemplatefieldtypecategory_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatefieldtypecategory_autocomplete_element_response_t;

__attribute__((deprecated)) ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_create(
    int pki_ezdoctemplatefieldtypecategory_id,
    int fki_ezdoctemplatetype_id,
    char *s_ezdoctemplatefieldtypecategory_description_x,
    int b_ezdoctemplatefieldtypecategory_isactive
);

void ezdoctemplatefieldtypecategory_autocomplete_element_response_free(ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response);

ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatefieldtypecategory_autocomplete_element_responseJSON);

cJSON *ezdoctemplatefieldtypecategory_autocomplete_element_response_convertToJSON(ezdoctemplatefieldtypecategory_autocomplete_element_response_t *ezdoctemplatefieldtypecategory_autocomplete_element_response);

#endif /* _ezdoctemplatefieldtypecategory_autocomplete_element_response_H_ */

