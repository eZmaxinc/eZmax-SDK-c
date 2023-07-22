#ifndef systemconfiguration_request_compound_TEST
#define systemconfiguration_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_request_compound.h"
systemconfiguration_request_compound_t* instantiate_systemconfiguration_request_compound(int include_optional);



systemconfiguration_request_compound_t* instantiate_systemconfiguration_request_compound(int include_optional) {
  systemconfiguration_request_compound_t* systemconfiguration_request_compound = NULL;
  if (include_optional) {
    systemconfiguration_request_compound = systemconfiguration_request_compound_create(
      1,
      ezmax_api_definition__full_systemconfiguration_request_compound__"Stage",
      ezmax_api_definition__full_systemconfiguration_request_compound__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_request_compound__"en_CA",
      ezmax_api_definition__full_systemconfiguration_request_compound__"Yes",
      true,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  } else {
    systemconfiguration_request_compound = systemconfiguration_request_compound_create(
      1,
      ezmax_api_definition__full_systemconfiguration_request_compound__"Stage",
      ezmax_api_definition__full_systemconfiguration_request_compound__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_request_compound__"en_CA",
      ezmax_api_definition__full_systemconfiguration_request_compound__"Yes",
      true,
      true,
      "2020-12-31",
      "2021-12-31"
    );
  }

  return systemconfiguration_request_compound;
}


#ifdef systemconfiguration_request_compound_MAIN

void test_systemconfiguration_request_compound(int include_optional) {
    systemconfiguration_request_compound_t* systemconfiguration_request_compound_1 = instantiate_systemconfiguration_request_compound(include_optional);

	cJSON* jsonsystemconfiguration_request_compound_1 = systemconfiguration_request_compound_convertToJSON(systemconfiguration_request_compound_1);
	printf("systemconfiguration_request_compound :\n%s\n", cJSON_Print(jsonsystemconfiguration_request_compound_1));
	systemconfiguration_request_compound_t* systemconfiguration_request_compound_2 = systemconfiguration_request_compound_parseFromJSON(jsonsystemconfiguration_request_compound_1);
	cJSON* jsonsystemconfiguration_request_compound_2 = systemconfiguration_request_compound_convertToJSON(systemconfiguration_request_compound_2);
	printf("repeating systemconfiguration_request_compound:\n%s\n", cJSON_Print(jsonsystemconfiguration_request_compound_2));
}

int main() {
  test_systemconfiguration_request_compound(1);
  test_systemconfiguration_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_request_compound_MAIN
#endif // systemconfiguration_request_compound_TEST
