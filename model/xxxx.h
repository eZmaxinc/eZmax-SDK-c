/*
 * xxxx.h
 *
 * Test
 */

#ifndef _xxxx_H_
#define _xxxx_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct xxxx_t xxxx_t;




typedef struct xxxx_t {
    int foo; //numeric
    int bar; //numeric

} xxxx_t;

xxxx_t *xxxx_create(
    int foo,
    int bar
);

void xxxx_free(xxxx_t *xxxx);

xxxx_t *xxxx_parseFromJSON(cJSON *xxxxJSON);

cJSON *xxxx_convertToJSON(xxxx_t *xxxx);

#endif /* _xxxx_H_ */

