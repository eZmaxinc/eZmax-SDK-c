/*
 * multilingual_notificationsubsection_name.h
 *
 * Name of the Notificationsubsection
 */

#ifndef _multilingual_notificationsubsection_name_H_
#define _multilingual_notificationsubsection_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_notificationsubsection_name_t multilingual_notificationsubsection_name_t;




typedef struct multilingual_notificationsubsection_name_t {
    char *s_notificationsubsection_name1; // string
    char *s_notificationsubsection_name2; // string

} multilingual_notificationsubsection_name_t;

multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_create(
    char *s_notificationsubsection_name1,
    char *s_notificationsubsection_name2
);

void multilingual_notificationsubsection_name_free(multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name);

multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_parseFromJSON(cJSON *multilingual_notificationsubsection_nameJSON);

cJSON *multilingual_notificationsubsection_name_convertToJSON(multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name);

#endif /* _multilingual_notificationsubsection_name_H_ */

