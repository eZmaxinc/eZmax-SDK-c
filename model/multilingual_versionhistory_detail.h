/*
 * multilingual_versionhistory_detail.h
 *
 * Detail of the Versionhistory
 */

#ifndef _multilingual_versionhistory_detail_H_
#define _multilingual_versionhistory_detail_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_versionhistory_detail_t multilingual_versionhistory_detail_t;




typedef struct multilingual_versionhistory_detail_t {
    char *t_versionhistory_detail1; // string
    char *t_versionhistory_detail2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_versionhistory_detail_t;

__attribute__((deprecated)) multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_create(
    char *t_versionhistory_detail1,
    char *t_versionhistory_detail2
);

void multilingual_versionhistory_detail_free(multilingual_versionhistory_detail_t *multilingual_versionhistory_detail);

multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_parseFromJSON(cJSON *multilingual_versionhistory_detailJSON);

cJSON *multilingual_versionhistory_detail_convertToJSON(multilingual_versionhistory_detail_t *multilingual_versionhistory_detail);

#endif /* _multilingual_versionhistory_detail_H_ */

