/*
 * custom_ezsignimportdocument_response.h
 *
 * An Ezsignimportdocument
 */

#ifndef _custom_ezsignimportdocument_response_H_
#define _custom_ezsignimportdocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignimportdocument_response_t custom_ezsignimportdocument_response_t;




typedef struct custom_ezsignimportdocument_response_t {
    int pki_ezsignimportdocument_id; //numeric
    char *s_ezsignimportdocument_name; // string
    int fki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignimportdocument_response_t;

__attribute__((deprecated)) custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_create(
    int pki_ezsignimportdocument_id,
    char *s_ezsignimportdocument_name,
    int fki_ezsignfolder_id,
    char *s_ezsignfolder_description
);

void custom_ezsignimportdocument_response_free(custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response);

custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response_parseFromJSON(cJSON *custom_ezsignimportdocument_responseJSON);

cJSON *custom_ezsignimportdocument_response_convertToJSON(custom_ezsignimportdocument_response_t *custom_ezsignimportdocument_response);

#endif /* _custom_ezsignimportdocument_response_H_ */

