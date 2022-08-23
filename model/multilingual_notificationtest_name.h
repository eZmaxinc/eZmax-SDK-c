/*
 * multilingual_notificationtest_name.h
 *
 * Name of the Notificationtest
 */

#ifndef _multilingual_notificationtest_name_H_
#define _multilingual_notificationtest_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_notificationtest_name_t multilingual_notificationtest_name_t;




typedef struct multilingual_notificationtest_name_t {
    char *s_notificationtest_name1; // string
    char *s_notificationtest_name2; // string

} multilingual_notificationtest_name_t;

multilingual_notificationtest_name_t *multilingual_notificationtest_name_create(
    char *s_notificationtest_name1,
    char *s_notificationtest_name2
);

void multilingual_notificationtest_name_free(multilingual_notificationtest_name_t *multilingual_notificationtest_name);

multilingual_notificationtest_name_t *multilingual_notificationtest_name_parseFromJSON(cJSON *multilingual_notificationtest_nameJSON);

cJSON *multilingual_notificationtest_name_convertToJSON(multilingual_notificationtest_name_t *multilingual_notificationtest_name);

#endif /* _multilingual_notificationtest_name_H_ */

