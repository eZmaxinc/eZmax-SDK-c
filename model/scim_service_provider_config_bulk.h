/*
 * scim_service_provider_config_bulk.h
 *
 * A complex type that specifies bulk configuration options.
 */

#ifndef _scim_service_provider_config_bulk_H_
#define _scim_service_provider_config_bulk_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_bulk_t scim_service_provider_config_bulk_t;




typedef struct scim_service_provider_config_bulk_t {
    int supported; //boolean
    int max_operations; //numeric
    int max_payload_size; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} scim_service_provider_config_bulk_t;

__attribute__((deprecated)) scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_create(
    int supported,
    int max_operations,
    int max_payload_size
);

void scim_service_provider_config_bulk_free(scim_service_provider_config_bulk_t *scim_service_provider_config_bulk);

scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_parseFromJSON(cJSON *scim_service_provider_config_bulkJSON);

cJSON *scim_service_provider_config_bulk_convertToJSON(scim_service_provider_config_bulk_t *scim_service_provider_config_bulk);

#endif /* _scim_service_provider_config_bulk_H_ */

