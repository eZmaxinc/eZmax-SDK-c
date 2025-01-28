/*
 * scim_service_provider_config_filter.h
 *
 * A complex type that specifies FILTER options.
 */

#ifndef _scim_service_provider_config_filter_H_
#define _scim_service_provider_config_filter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_filter_t scim_service_provider_config_filter_t;




typedef struct scim_service_provider_config_filter_t {
    int supported; //boolean
    int max_results; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} scim_service_provider_config_filter_t;

__attribute__((deprecated)) scim_service_provider_config_filter_t *scim_service_provider_config_filter_create(
    int supported,
    int max_results
);

void scim_service_provider_config_filter_free(scim_service_provider_config_filter_t *scim_service_provider_config_filter);

scim_service_provider_config_filter_t *scim_service_provider_config_filter_parseFromJSON(cJSON *scim_service_provider_config_filterJSON);

cJSON *scim_service_provider_config_filter_convertToJSON(scim_service_provider_config_filter_t *scim_service_provider_config_filter);

#endif /* _scim_service_provider_config_filter_H_ */

