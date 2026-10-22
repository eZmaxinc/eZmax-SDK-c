/*
 * multilingual_documenttype_name.h
 *
 * The name1 of the Documenttype
 */

#ifndef _multilingual_documenttype_name_H_
#define _multilingual_documenttype_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_documenttype_name_t multilingual_documenttype_name_t;




typedef struct multilingual_documenttype_name_t {
    char *s_documenttype_name1; // string
    char *s_documenttype_name2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_documenttype_name_t;

__attribute__((deprecated)) multilingual_documenttype_name_t *multilingual_documenttype_name_create(
    char *s_documenttype_name1,
    char *s_documenttype_name2
);

void multilingual_documenttype_name_free(multilingual_documenttype_name_t *multilingual_documenttype_name);

multilingual_documenttype_name_t *multilingual_documenttype_name_parseFromJSON(cJSON *multilingual_documenttype_nameJSON);

cJSON *multilingual_documenttype_name_convertToJSON(multilingual_documenttype_name_t *multilingual_documenttype_name);

#endif /* _multilingual_documenttype_name_H_ */

