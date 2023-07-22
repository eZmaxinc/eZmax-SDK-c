#ifndef scim_service_provider_config_filter_TEST
#define scim_service_provider_config_filter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_filter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_filter.h"
scim_service_provider_config_filter_t* instantiate_scim_service_provider_config_filter(int include_optional);



scim_service_provider_config_filter_t* instantiate_scim_service_provider_config_filter(int include_optional) {
  scim_service_provider_config_filter_t* scim_service_provider_config_filter = NULL;
  if (include_optional) {
    scim_service_provider_config_filter = scim_service_provider_config_filter_create(
      true,
      10000
    );
  } else {
    scim_service_provider_config_filter = scim_service_provider_config_filter_create(
      true,
      10000
    );
  }

  return scim_service_provider_config_filter;
}


#ifdef scim_service_provider_config_filter_MAIN

void test_scim_service_provider_config_filter(int include_optional) {
    scim_service_provider_config_filter_t* scim_service_provider_config_filter_1 = instantiate_scim_service_provider_config_filter(include_optional);

	cJSON* jsonscim_service_provider_config_filter_1 = scim_service_provider_config_filter_convertToJSON(scim_service_provider_config_filter_1);
	printf("scim_service_provider_config_filter :\n%s\n", cJSON_Print(jsonscim_service_provider_config_filter_1));
	scim_service_provider_config_filter_t* scim_service_provider_config_filter_2 = scim_service_provider_config_filter_parseFromJSON(jsonscim_service_provider_config_filter_1);
	cJSON* jsonscim_service_provider_config_filter_2 = scim_service_provider_config_filter_convertToJSON(scim_service_provider_config_filter_2);
	printf("repeating scim_service_provider_config_filter:\n%s\n", cJSON_Print(jsonscim_service_provider_config_filter_2));
}

int main() {
  test_scim_service_provider_config_filter(1);
  test_scim_service_provider_config_filter(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_filter_MAIN
#endif // scim_service_provider_config_filter_TEST
