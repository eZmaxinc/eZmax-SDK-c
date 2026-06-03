/*
 * otherincometype_autocomplete_element_response.h
 *
 * A Otherincometype AutocompleteElement Response
 */

#ifndef _otherincometype_autocomplete_element_response_H_
#define _otherincometype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincometype_autocomplete_element_response_t otherincometype_autocomplete_element_response_t;




typedef struct otherincometype_autocomplete_element_response_t {
    int *pki_otherincometype_id; //numeric
    char *s_otherincometype_description_x; // string
    int *b_otherincometype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} otherincometype_autocomplete_element_response_t;

__attribute__((deprecated)) otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_create(
    int *pki_otherincometype_id,
    char *s_otherincometype_description_x,
    int *b_otherincometype_isactive
);

void otherincometype_autocomplete_element_response_free(otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response);

otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response_parseFromJSON(cJSON *otherincometype_autocomplete_element_responseJSON);

cJSON *otherincometype_autocomplete_element_response_convertToJSON(otherincometype_autocomplete_element_response_t *otherincometype_autocomplete_element_response);

#endif /* _otherincometype_autocomplete_element_response_H_ */

