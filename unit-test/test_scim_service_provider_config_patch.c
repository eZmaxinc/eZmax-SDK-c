#ifndef scim_service_provider_config_patch_TEST
#define scim_service_provider_config_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_patch.h"
scim_service_provider_config_patch_t* instantiate_scim_service_provider_config_patch(int include_optional);



scim_service_provider_config_patch_t* instantiate_scim_service_provider_config_patch(int include_optional) {
  scim_service_provider_config_patch_t* scim_service_provider_config_patch = NULL;
  if (include_optional) {
    scim_service_provider_config_patch = scim_service_provider_config_patch_create(
      false
    );
  } else {
    scim_service_provider_config_patch = scim_service_provider_config_patch_create(
      false
    );
  }

  return scim_service_provider_config_patch;
}


#ifdef scim_service_provider_config_patch_MAIN

void test_scim_service_provider_config_patch(int include_optional) {
    scim_service_provider_config_patch_t* scim_service_provider_config_patch_1 = instantiate_scim_service_provider_config_patch(include_optional);

	cJSON* jsonscim_service_provider_config_patch_1 = scim_service_provider_config_patch_convertToJSON(scim_service_provider_config_patch_1);
	printf("scim_service_provider_config_patch :\n%s\n", cJSON_Print(jsonscim_service_provider_config_patch_1));
	scim_service_provider_config_patch_t* scim_service_provider_config_patch_2 = scim_service_provider_config_patch_parseFromJSON(jsonscim_service_provider_config_patch_1);
	cJSON* jsonscim_service_provider_config_patch_2 = scim_service_provider_config_patch_convertToJSON(scim_service_provider_config_patch_2);
	printf("repeating scim_service_provider_config_patch:\n%s\n", cJSON_Print(jsonscim_service_provider_config_patch_2));
}

int main() {
  test_scim_service_provider_config_patch(1);
  test_scim_service_provider_config_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_patch_MAIN
#endif // scim_service_provider_config_patch_TEST
