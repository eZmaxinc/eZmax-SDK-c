/*
 * scim_service_provider_config_sort.h
 *
 * A complex type that specifies Sort configuration options.
 */

#ifndef _scim_service_provider_config_sort_H_
#define _scim_service_provider_config_sort_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_sort_t scim_service_provider_config_sort_t;




typedef struct scim_service_provider_config_sort_t {
    int supported; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} scim_service_provider_config_sort_t;

__attribute__((deprecated)) scim_service_provider_config_sort_t *scim_service_provider_config_sort_create(
    int supported
);

void scim_service_provider_config_sort_free(scim_service_provider_config_sort_t *scim_service_provider_config_sort);

scim_service_provider_config_sort_t *scim_service_provider_config_sort_parseFromJSON(cJSON *scim_service_provider_config_sortJSON);

cJSON *scim_service_provider_config_sort_convertToJSON(scim_service_provider_config_sort_t *scim_service_provider_config_sort);

#endif /* _scim_service_provider_config_sort_H_ */

