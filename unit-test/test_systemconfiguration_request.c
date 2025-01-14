#ifndef systemconfiguration_request_TEST
#define systemconfiguration_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_request.h"
systemconfiguration_request_t* instantiate_systemconfiguration_request(int include_optional);



systemconfiguration_request_t* instantiate_systemconfiguration_request(int include_optional) {
  systemconfiguration_request_t* systemconfiguration_request = NULL;
  if (include_optional) {
    systemconfiguration_request = systemconfiguration_request_create(
      1,
      78,
      ezmax_api_definition__full_systemconfiguration_request__"Stage",
      ezmax_api_definition__full_systemconfiguration_request__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_request__"en_CA",
      ezmax_api_definition__full_systemconfiguration_request__"Yes",
      ezmax_api_definition__full_systemconfiguration_request__"Standard",
      true,
      true,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  } else {
    systemconfiguration_request = systemconfiguration_request_create(
      1,
      78,
      ezmax_api_definition__full_systemconfiguration_request__"Stage",
      ezmax_api_definition__full_systemconfiguration_request__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_request__"en_CA",
      ezmax_api_definition__full_systemconfiguration_request__"Yes",
      ezmax_api_definition__full_systemconfiguration_request__"Standard",
      true,
      true,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  }

  return systemconfiguration_request;
}


#ifdef systemconfiguration_request_MAIN

void test_systemconfiguration_request(int include_optional) {
    systemconfiguration_request_t* systemconfiguration_request_1 = instantiate_systemconfiguration_request(include_optional);

	cJSON* jsonsystemconfiguration_request_1 = systemconfiguration_request_convertToJSON(systemconfiguration_request_1);
	printf("systemconfiguration_request :\n%s\n", cJSON_Print(jsonsystemconfiguration_request_1));
	systemconfiguration_request_t* systemconfiguration_request_2 = systemconfiguration_request_parseFromJSON(jsonsystemconfiguration_request_1);
	cJSON* jsonsystemconfiguration_request_2 = systemconfiguration_request_convertToJSON(systemconfiguration_request_2);
	printf("repeating systemconfiguration_request:\n%s\n", cJSON_Print(jsonsystemconfiguration_request_2));
}

int main() {
  test_systemconfiguration_request(1);
  test_systemconfiguration_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_request_MAIN
#endif // systemconfiguration_request_TEST
