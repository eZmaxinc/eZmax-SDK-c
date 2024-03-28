#ifndef systemconfiguration_response_TEST
#define systemconfiguration_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_response.h"
systemconfiguration_response_t* instantiate_systemconfiguration_response(int include_optional);



systemconfiguration_response_t* instantiate_systemconfiguration_response(int include_optional) {
  systemconfiguration_response_t* systemconfiguration_response = NULL;
  if (include_optional) {
    systemconfiguration_response = systemconfiguration_response_create(
      1,
      28,
      "eZsign (Pro)",
      ezmax_api_definition__full_systemconfiguration_response__"Stage",
      ezmax_api_definition__full_systemconfiguration_response__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_response__"en_CA",
      ezmax_api_definition__full_systemconfiguration_response__"Yes",
      ezmax_api_definition__full_systemconfiguration_response__"Standard",
      true,
      true,
      1,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  } else {
    systemconfiguration_response = systemconfiguration_response_create(
      1,
      28,
      "eZsign (Pro)",
      ezmax_api_definition__full_systemconfiguration_response__"Stage",
      ezmax_api_definition__full_systemconfiguration_response__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_response__"en_CA",
      ezmax_api_definition__full_systemconfiguration_response__"Yes",
      ezmax_api_definition__full_systemconfiguration_response__"Standard",
      true,
      true,
      1,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  }

  return systemconfiguration_response;
}


#ifdef systemconfiguration_response_MAIN

void test_systemconfiguration_response(int include_optional) {
    systemconfiguration_response_t* systemconfiguration_response_1 = instantiate_systemconfiguration_response(include_optional);

	cJSON* jsonsystemconfiguration_response_1 = systemconfiguration_response_convertToJSON(systemconfiguration_response_1);
	printf("systemconfiguration_response :\n%s\n", cJSON_Print(jsonsystemconfiguration_response_1));
	systemconfiguration_response_t* systemconfiguration_response_2 = systemconfiguration_response_parseFromJSON(jsonsystemconfiguration_response_1);
	cJSON* jsonsystemconfiguration_response_2 = systemconfiguration_response_convertToJSON(systemconfiguration_response_2);
	printf("repeating systemconfiguration_response:\n%s\n", cJSON_Print(jsonsystemconfiguration_response_2));
}

int main() {
  test_systemconfiguration_response(1);
  test_systemconfiguration_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_response_MAIN
#endif // systemconfiguration_response_TEST
