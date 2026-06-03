/*
 * ezsignimportfolder_response.h
 *
 * A Ezsignimportfolder Object
 */

#ifndef _ezsignimportfolder_response_H_
#define _ezsignimportfolder_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_response_t ezsignimportfolder_response_t;




typedef struct ezsignimportfolder_response_t {
    int *pki_ezsignimportfolder_id; //numeric
    char *s_ezsignimportfolder_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_response_t;

__attribute__((deprecated)) ezsignimportfolder_response_t *ezsignimportfolder_response_create(
    int *pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name
);

void ezsignimportfolder_response_free(ezsignimportfolder_response_t *ezsignimportfolder_response);

ezsignimportfolder_response_t *ezsignimportfolder_response_parseFromJSON(cJSON *ezsignimportfolder_responseJSON);

cJSON *ezsignimportfolder_response_convertToJSON(ezsignimportfolder_response_t *ezsignimportfolder_response);

#endif /* _ezsignimportfolder_response_H_ */

