#ifndef scim_service_provider_config_TEST
#define scim_service_provider_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config.h"
scim_service_provider_config_t* instantiate_scim_service_provider_config(int include_optional);

#include "test_scim_service_provider_config_bulk.c"
#include "test_scim_service_provider_config_change_password.c"
#include "test_scim_service_provider_config_etag.c"
#include "test_scim_service_provider_config_filter.c"
#include "test_scim_service_provider_config_patch.c"
#include "test_scim_service_provider_config_sort.c"


scim_service_provider_config_t* instantiate_scim_service_provider_config(int include_optional) {
  scim_service_provider_config_t* scim_service_provider_config = NULL;
  if (include_optional) {
    scim_service_provider_config = scim_service_provider_config_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_bulk(0),
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_change_password(0),
      "https://github.com/eZmaxinc/eZmax-API",
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_etag(0),
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_filter(0),
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_patch(0),
       // false, not to have infinite recursion
      instantiate_scim_service_provider_config_sort(0)
    );
  } else {
    scim_service_provider_config = scim_service_provider_config_create(
      list_createList(),
      NULL,
      NULL,
      "https://github.com/eZmaxinc/eZmax-API",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return scim_service_provider_config;
}


#ifdef scim_service_provider_config_MAIN

void test_scim_service_provider_config(int include_optional) {
    scim_service_provider_config_t* scim_service_provider_config_1 = instantiate_scim_service_provider_config(include_optional);

	cJSON* jsonscim_service_provider_config_1 = scim_service_provider_config_convertToJSON(scim_service_provider_config_1);
	printf("scim_service_provider_config :\n%s\n", cJSON_Print(jsonscim_service_provider_config_1));
	scim_service_provider_config_t* scim_service_provider_config_2 = scim_service_provider_config_parseFromJSON(jsonscim_service_provider_config_1);
	cJSON* jsonscim_service_provider_config_2 = scim_service_provider_config_convertToJSON(scim_service_provider_config_2);
	printf("repeating scim_service_provider_config:\n%s\n", cJSON_Print(jsonscim_service_provider_config_2));
}

int main() {
  test_scim_service_provider_config(1);
  test_scim_service_provider_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_MAIN
#endif // scim_service_provider_config_TEST
