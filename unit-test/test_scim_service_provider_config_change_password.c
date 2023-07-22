#ifndef scim_service_provider_config_change_password_TEST
#define scim_service_provider_config_change_password_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_service_provider_config_change_password_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_service_provider_config_change_password.h"
scim_service_provider_config_change_password_t* instantiate_scim_service_provider_config_change_password(int include_optional);



scim_service_provider_config_change_password_t* instantiate_scim_service_provider_config_change_password(int include_optional) {
  scim_service_provider_config_change_password_t* scim_service_provider_config_change_password = NULL;
  if (include_optional) {
    scim_service_provider_config_change_password = scim_service_provider_config_change_password_create(
      false
    );
  } else {
    scim_service_provider_config_change_password = scim_service_provider_config_change_password_create(
      false
    );
  }

  return scim_service_provider_config_change_password;
}


#ifdef scim_service_provider_config_change_password_MAIN

void test_scim_service_provider_config_change_password(int include_optional) {
    scim_service_provider_config_change_password_t* scim_service_provider_config_change_password_1 = instantiate_scim_service_provider_config_change_password(include_optional);

	cJSON* jsonscim_service_provider_config_change_password_1 = scim_service_provider_config_change_password_convertToJSON(scim_service_provider_config_change_password_1);
	printf("scim_service_provider_config_change_password :\n%s\n", cJSON_Print(jsonscim_service_provider_config_change_password_1));
	scim_service_provider_config_change_password_t* scim_service_provider_config_change_password_2 = scim_service_provider_config_change_password_parseFromJSON(jsonscim_service_provider_config_change_password_1);
	cJSON* jsonscim_service_provider_config_change_password_2 = scim_service_provider_config_change_password_convertToJSON(scim_service_provider_config_change_password_2);
	printf("repeating scim_service_provider_config_change_password:\n%s\n", cJSON_Print(jsonscim_service_provider_config_change_password_2));
}

int main() {
  test_scim_service_provider_config_change_password(1);
  test_scim_service_provider_config_change_password(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_service_provider_config_change_password_MAIN
#endif // scim_service_provider_config_change_password_TEST
