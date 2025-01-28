/*
 * ezdoctemplatetype_autocomplete_element_response.h
 *
 * A Ezdoctemplatetype AutocompleteElement Response
 */

#ifndef _ezdoctemplatetype_autocomplete_element_response_H_
#define _ezdoctemplatetype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatetype_autocomplete_element_response_t ezdoctemplatetype_autocomplete_element_response_t;




typedef struct ezdoctemplatetype_autocomplete_element_response_t {
    int pki_ezdoctemplatetype_id; //numeric
    char *s_ezdoctemplatetype_description_x; // string
    int b_ezdoctemplatetype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatetype_autocomplete_element_response_t;

__attribute__((deprecated)) ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_create(
    int pki_ezdoctemplatetype_id,
    char *s_ezdoctemplatetype_description_x,
    int b_ezdoctemplatetype_isactive
);

void ezdoctemplatetype_autocomplete_element_response_free(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response);

ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatetype_autocomplete_element_responseJSON);

cJSON *ezdoctemplatetype_autocomplete_element_response_convertToJSON(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response);

#endif /* _ezdoctemplatetype_autocomplete_element_response_H_ */

