#ifndef scim_service_provider_config_bulk_TEST
#define scim_service_provider_config_bulk_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_bulk_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_bulk.h"
scim_service_provider_config_bulk_t* instantiate_scim_service_provider_config_bulk(int include_optional);



scim_service_provider_config_bulk_t* instantiate_scim_service_provider_config_bulk(int include_optional) {
  scim_service_provider_config_bulk_t* scim_service_provider_config_bulk = NULL;
  if (include_optional) {
    scim_service_provider_config_bulk = scim_service_provider_config_bulk_create(
      false,
      0,
      0
    );
  } else {
    scim_service_provider_config_bulk = scim_service_provider_config_bulk_create(
      false,
      0,
      0
    );
  }

  return scim_service_provider_config_bulk;
}


#ifdef scim_service_provider_config_bulk_MAIN

void test_scim_service_provider_config_bulk(int include_optional) {
    scim_service_provider_config_bulk_t* scim_service_provider_config_bulk_1 = instantiate_scim_service_provider_config_bulk(include_optional);

	cJSON* jsonscim_service_provider_config_bulk_1 = scim_service_provider_config_bulk_convertToJSON(scim_service_provider_config_bulk_1);
	printf("scim_service_provider_config_bulk :\n%s\n", cJSON_Print(jsonscim_service_provider_config_bulk_1));
	scim_service_provider_config_bulk_t* scim_service_provider_config_bulk_2 = scim_service_provider_config_bulk_parseFromJSON(jsonscim_service_provider_config_bulk_1);
	cJSON* jsonscim_service_provider_config_bulk_2 = scim_service_provider_config_bulk_convertToJSON(scim_service_provider_config_bulk_2);
	printf("repeating scim_service_provider_config_bulk:\n%s\n", cJSON_Print(jsonscim_service_provider_config_bulk_2));
}

int main() {
  test_scim_service_provider_config_bulk(1);
  test_scim_service_provider_config_bulk(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_bulk_MAIN
#endif // scim_service_provider_config_bulk_TEST
