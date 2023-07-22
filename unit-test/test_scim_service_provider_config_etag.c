#ifndef scim_service_provider_config_etag_TEST
#define scim_service_provider_config_etag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_etag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_etag.h"
scim_service_provider_config_etag_t* instantiate_scim_service_provider_config_etag(int include_optional);



scim_service_provider_config_etag_t* instantiate_scim_service_provider_config_etag(int include_optional) {
  scim_service_provider_config_etag_t* scim_service_provider_config_etag = NULL;
  if (include_optional) {
    scim_service_provider_config_etag = scim_service_provider_config_etag_create(
      false
    );
  } else {
    scim_service_provider_config_etag = scim_service_provider_config_etag_create(
      false
    );
  }

  return scim_service_provider_config_etag;
}


#ifdef scim_service_provider_config_etag_MAIN

void test_scim_service_provider_config_etag(int include_optional) {
    scim_service_provider_config_etag_t* scim_service_provider_config_etag_1 = instantiate_scim_service_provider_config_etag(include_optional);

	cJSON* jsonscim_service_provider_config_etag_1 = scim_service_provider_config_etag_convertToJSON(scim_service_provider_config_etag_1);
	printf("scim_service_provider_config_etag :\n%s\n", cJSON_Print(jsonscim_service_provider_config_etag_1));
	scim_service_provider_config_etag_t* scim_service_provider_config_etag_2 = scim_service_provider_config_etag_parseFromJSON(jsonscim_service_provider_config_etag_1);
	cJSON* jsonscim_service_provider_config_etag_2 = scim_service_provider_config_etag_convertToJSON(scim_service_provider_config_etag_2);
	printf("repeating scim_service_provider_config_etag:\n%s\n", cJSON_Print(jsonscim_service_provider_config_etag_2));
}

int main() {
  test_scim_service_provider_config_etag(1);
  test_scim_service_provider_config_etag(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_etag_MAIN
#endif // scim_service_provider_config_etag_TEST
