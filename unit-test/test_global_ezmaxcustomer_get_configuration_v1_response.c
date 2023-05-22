#ifndef global_ezmaxcustomer_get_configuration_v1_response_TEST
#define global_ezmaxcustomer_get_configuration_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define global_ezmaxcustomer_get_configuration_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/global_ezmaxcustomer_get_configuration_v1_response.h"
global_ezmaxcustomer_get_configuration_v1_response_t* instantiate_global_ezmaxcustomer_get_configuration_v1_response(int include_optional);



global_ezmaxcustomer_get_configuration_v1_response_t* instantiate_global_ezmaxcustomer_get_configuration_v1_response(int include_optional) {
  global_ezmaxcustomer_get_configuration_v1_response_t* global_ezmaxcustomer_get_configuration_v1_response = NULL;
  if (include_optional) {
    global_ezmaxcustomer_get_configuration_v1_response = global_ezmaxcustomer_get_configuration_v1_response_create(
      "ca-central-1",
      "ca-central-1",
      "prod",
      "6kivk421lhteuktijfsvv4r1cl",
      "6kivk421lhteuktijfsvv4r1cl"
    );
  } else {
    global_ezmaxcustomer_get_configuration_v1_response = global_ezmaxcustomer_get_configuration_v1_response_create(
      "ca-central-1",
      "ca-central-1",
      "prod",
      "6kivk421lhteuktijfsvv4r1cl",
      "6kivk421lhteuktijfsvv4r1cl"
    );
  }

  return global_ezmaxcustomer_get_configuration_v1_response;
}


#ifdef global_ezmaxcustomer_get_configuration_v1_response_MAIN

void test_global_ezmaxcustomer_get_configuration_v1_response(int include_optional) {
    global_ezmaxcustomer_get_configuration_v1_response_t* global_ezmaxcustomer_get_configuration_v1_response_1 = instantiate_global_ezmaxcustomer_get_configuration_v1_response(include_optional);

	cJSON* jsonglobal_ezmaxcustomer_get_configuration_v1_response_1 = global_ezmaxcustomer_get_configuration_v1_response_convertToJSON(global_ezmaxcustomer_get_configuration_v1_response_1);
	printf("global_ezmaxcustomer_get_configuration_v1_response :\n%s\n", cJSON_Print(jsonglobal_ezmaxcustomer_get_configuration_v1_response_1));
	global_ezmaxcustomer_get_configuration_v1_response_t* global_ezmaxcustomer_get_configuration_v1_response_2 = global_ezmaxcustomer_get_configuration_v1_response_parseFromJSON(jsonglobal_ezmaxcustomer_get_configuration_v1_response_1);
	cJSON* jsonglobal_ezmaxcustomer_get_configuration_v1_response_2 = global_ezmaxcustomer_get_configuration_v1_response_convertToJSON(global_ezmaxcustomer_get_configuration_v1_response_2);
	printf("repeating global_ezmaxcustomer_get_configuration_v1_response:\n%s\n", cJSON_Print(jsonglobal_ezmaxcustomer_get_configuration_v1_response_2));
}

int main() {
  test_global_ezmaxcustomer_get_configuration_v1_response(1);
  test_global_ezmaxcustomer_get_configuration_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // global_ezmaxcustomer_get_configuration_v1_response_MAIN
#endif // global_ezmaxcustomer_get_configuration_v1_response_TEST
