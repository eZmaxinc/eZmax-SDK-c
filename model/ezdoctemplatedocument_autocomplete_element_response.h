/*
 * ezdoctemplatedocument_autocomplete_element_response.h
 *
 * A Ezdoctemplatedocument AutocompleteElement Response
 */

#ifndef _ezdoctemplatedocument_autocomplete_element_response_H_
#define _ezdoctemplatedocument_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_autocomplete_element_response_t ezdoctemplatedocument_autocomplete_element_response_t;




typedef struct ezdoctemplatedocument_autocomplete_element_response_t {
    int pki_ezdoctemplatedocument_id; //numeric
    char *s_ezdoctemplatedocument_name_x; // string
    int b_ezdoctemplatedocument_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_autocomplete_element_response_t;

__attribute__((deprecated)) ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_create(
    int pki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    int b_ezdoctemplatedocument_isactive
);

void ezdoctemplatedocument_autocomplete_element_response_free(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response);

ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatedocument_autocomplete_element_responseJSON);

cJSON *ezdoctemplatedocument_autocomplete_element_response_convertToJSON(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response);

#endif /* _ezdoctemplatedocument_autocomplete_element_response_H_ */

