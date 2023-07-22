#ifndef scim_service_provider_config_sort_TEST
#define scim_service_provider_config_sort_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_sort_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_sort.h"
scim_service_provider_config_sort_t* instantiate_scim_service_provider_config_sort(int include_optional);



scim_service_provider_config_sort_t* instantiate_scim_service_provider_config_sort(int include_optional) {
  scim_service_provider_config_sort_t* scim_service_provider_config_sort = NULL;
  if (include_optional) {
    scim_service_provider_config_sort = scim_service_provider_config_sort_create(
      false
    );
  } else {
    scim_service_provider_config_sort = scim_service_provider_config_sort_create(
      false
    );
  }

  return scim_service_provider_config_sort;
}


#ifdef scim_service_provider_config_sort_MAIN

void test_scim_service_provider_config_sort(int include_optional) {
    scim_service_provider_config_sort_t* scim_service_provider_config_sort_1 = instantiate_scim_service_provider_config_sort(include_optional);

	cJSON* jsonscim_service_provider_config_sort_1 = scim_service_provider_config_sort_convertToJSON(scim_service_provider_config_sort_1);
	printf("scim_service_provider_config_sort :\n%s\n", cJSON_Print(jsonscim_service_provider_config_sort_1));
	scim_service_provider_config_sort_t* scim_service_provider_config_sort_2 = scim_service_provider_config_sort_parseFromJSON(jsonscim_service_provider_config_sort_1);
	cJSON* jsonscim_service_provider_config_sort_2 = scim_service_provider_config_sort_convertToJSON(scim_service_provider_config_sort_2);
	printf("repeating scim_service_provider_config_sort:\n%s\n", cJSON_Print(jsonscim_service_provider_config_sort_2));
}

int main() {
  test_scim_service_provider_config_sort(1);
  test_scim_service_provider_config_sort(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_sort_MAIN
#endif // scim_service_provider_config_sort_TEST
