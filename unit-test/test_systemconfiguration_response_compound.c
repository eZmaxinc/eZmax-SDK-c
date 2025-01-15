#ifndef systemconfiguration_response_compound_TEST
#define systemconfiguration_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_response_compound.h"
systemconfiguration_response_compound_t* instantiate_systemconfiguration_response_compound(int include_optional);

#include "test_object.c"


systemconfiguration_response_compound_t* instantiate_systemconfiguration_response_compound(int include_optional) {
  systemconfiguration_response_compound_t* systemconfiguration_response_compound = NULL;
  if (include_optional) {
    systemconfiguration_response_compound = systemconfiguration_response_compound_create(
      1,
      28,
      78,
      "eZsign (Pro)",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Stage",
      ezmax_api_definition__full_systemconfiguration_response_compound__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_response_compound__"en_CA",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Yes",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Standard",
      true,
      true,
      1,
      1,
      true,
      "2020-12-31",
      "2021-12-31",
       // false, not to have infinite recursion
      instantiate_object(0)
    );
  } else {
    systemconfiguration_response_compound = systemconfiguration_response_compound_create(
      1,
      28,
      78,
      "eZsign (Pro)",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Stage",
      ezmax_api_definition__full_systemconfiguration_response_compound__"fr_QC",
      ezmax_api_definition__full_systemconfiguration_response_compound__"en_CA",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Yes",
      ezmax_api_definition__full_systemconfiguration_response_compound__"Standard",
      true,
      true,
      1,
      1,
      true,
      "2020-12-31",
      "2021-12-31",
      NULL
    );
  }

  return systemconfiguration_response_compound;
}


#ifdef systemconfiguration_response_compound_MAIN

void test_systemconfiguration_response_compound(int include_optional) {
    systemconfiguration_response_compound_t* systemconfiguration_response_compound_1 = instantiate_systemconfiguration_response_compound(include_optional);

	cJSON* jsonsystemconfiguration_response_compound_1 = systemconfiguration_response_compound_convertToJSON(systemconfiguration_response_compound_1);
	printf("systemconfiguration_response_compound :\n%s\n", cJSON_Print(jsonsystemconfiguration_response_compound_1));
	systemconfiguration_response_compound_t* systemconfiguration_response_compound_2 = systemconfiguration_response_compound_parseFromJSON(jsonsystemconfiguration_response_compound_1);
	cJSON* jsonsystemconfiguration_response_compound_2 = systemconfiguration_response_compound_convertToJSON(systemconfiguration_response_compound_2);
	printf("repeating systemconfiguration_response_compound:\n%s\n", cJSON_Print(jsonsystemconfiguration_response_compound_2));
}

int main() {
  test_systemconfiguration_response_compound(1);
  test_systemconfiguration_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_response_compound_MAIN
#endif // systemconfiguration_response_compound_TEST
