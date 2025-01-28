/*
 * global_ezmaxclient_version_v1_response.h
 *
 * Response for GET /1/ezmaxclient/{pksEzmaxclientOs}/version
 */

#ifndef _global_ezmaxclient_version_v1_response_H_
#define _global_ezmaxclient_version_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct global_ezmaxclient_version_v1_response_t global_ezmaxclient_version_v1_response_t;




typedef struct global_ezmaxclient_version_v1_response_t {
    char *s_ezmaxclient_version; // string
    char *s_ezmaxclient_oslatestversion; // string

    int _library_owned; // Is the library responsible for freeing this object?
} global_ezmaxclient_version_v1_response_t;

__attribute__((deprecated)) global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_create(
    char *s_ezmaxclient_version,
    char *s_ezmaxclient_oslatestversion
);

void global_ezmaxclient_version_v1_response_free(global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response);

global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_parseFromJSON(cJSON *global_ezmaxclient_version_v1_responseJSON);

cJSON *global_ezmaxclient_version_v1_response_convertToJSON(global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response);

#endif /* _global_ezmaxclient_version_v1_response_H_ */

