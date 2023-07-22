/*
 * scim_service_provider_config_etag.h
 *
 * A complex type that specifies ETag configuration options.
 */

#ifndef _scim_service_provider_config_etag_H_
#define _scim_service_provider_config_etag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_etag_t scim_service_provider_config_etag_t;




typedef struct scim_service_provider_config_etag_t {
    int supported; //boolean

} scim_service_provider_config_etag_t;

scim_service_provider_config_etag_t *scim_service_provider_config_etag_create(
    int supported
);

void scim_service_provider_config_etag_free(scim_service_provider_config_etag_t *scim_service_provider_config_etag);

scim_service_provider_config_etag_t *scim_service_provider_config_etag_parseFromJSON(cJSON *scim_service_provider_config_etagJSON);

cJSON *scim_service_provider_config_etag_convertToJSON(scim_service_provider_config_etag_t *scim_service_provider_config_etag);

#endif /* _scim_service_provider_config_etag_H_ */

