#ifndef global_ezmaxclient_version_v1_response_TEST
#define global_ezmaxclient_version_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define global_ezmaxclient_version_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/global_ezmaxclient_version_v1_response.h"
global_ezmaxclient_version_v1_response_t* instantiate_global_ezmaxclient_version_v1_response(int include_optional);



global_ezmaxclient_version_v1_response_t* instantiate_global_ezmaxclient_version_v1_response(int include_optional) {
  global_ezmaxclient_version_v1_response_t* global_ezmaxclient_version_v1_response = NULL;
  if (include_optional) {
    global_ezmaxclient_version_v1_response = global_ezmaxclient_version_v1_response_create(
      "0",
      "11"
    );
  } else {
    global_ezmaxclient_version_v1_response = global_ezmaxclient_version_v1_response_create(
      "0",
      "11"
    );
  }

  return global_ezmaxclient_version_v1_response;
}


#ifdef global_ezmaxclient_version_v1_response_MAIN

void test_global_ezmaxclient_version_v1_response(int include_optional) {
    global_ezmaxclient_version_v1_response_t* global_ezmaxclient_version_v1_response_1 = instantiate_global_ezmaxclient_version_v1_response(include_optional);

	cJSON* jsonglobal_ezmaxclient_version_v1_response_1 = global_ezmaxclient_version_v1_response_convertToJSON(global_ezmaxclient_version_v1_response_1);
	printf("global_ezmaxclient_version_v1_response :\n%s\n", cJSON_Print(jsonglobal_ezmaxclient_version_v1_response_1));
	global_ezmaxclient_version_v1_response_t* global_ezmaxclient_version_v1_response_2 = global_ezmaxclient_version_v1_response_parseFromJSON(jsonglobal_ezmaxclient_version_v1_response_1);
	cJSON* jsonglobal_ezmaxclient_version_v1_response_2 = global_ezmaxclient_version_v1_response_convertToJSON(global_ezmaxclient_version_v1_response_2);
	printf("repeating global_ezmaxclient_version_v1_response:\n%s\n", cJSON_Print(jsonglobal_ezmaxclient_version_v1_response_2));
}

int main() {
  test_global_ezmaxclient_version_v1_response(1);
  test_global_ezmaxclient_version_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // global_ezmaxclient_version_v1_response_MAIN
#endif // global_ezmaxclient_version_v1_response_TEST
