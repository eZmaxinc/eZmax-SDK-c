/*
 * multilingual_userlogintype_description.h
 *
 * The description of the Userlogintype
 */

#ifndef _multilingual_userlogintype_description_H_
#define _multilingual_userlogintype_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_userlogintype_description_t multilingual_userlogintype_description_t;




typedef struct multilingual_userlogintype_description_t {
    char *s_userlogintype_description1; // string
    char *s_userlogintype_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_userlogintype_description_t;

__attribute__((deprecated)) multilingual_userlogintype_description_t *multilingual_userlogintype_description_create(
    char *s_userlogintype_description1,
    char *s_userlogintype_description2
);

void multilingual_userlogintype_description_free(multilingual_userlogintype_description_t *multilingual_userlogintype_description);

multilingual_userlogintype_description_t *multilingual_userlogintype_description_parseFromJSON(cJSON *multilingual_userlogintype_descriptionJSON);

cJSON *multilingual_userlogintype_description_convertToJSON(multilingual_userlogintype_description_t *multilingual_userlogintype_description);

#endif /* _multilingual_userlogintype_description_H_ */

