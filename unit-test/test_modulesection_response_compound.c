#ifndef modulesection_response_compound_TEST
#define modulesection_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulesection_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulesection_response_compound.h"
modulesection_response_compound_t* instantiate_modulesection_response_compound(int include_optional);



modulesection_response_compound_t* instantiate_modulesection_response_compound(int include_optional) {
  modulesection_response_compound_t* modulesection_response_compound = NULL;
  if (include_optional) {
    modulesection_response_compound = modulesection_response_compound_create(
      53,
      40,
      "Access",
      "Access",
      list_createList()
    );
  } else {
    modulesection_response_compound = modulesection_response_compound_create(
      53,
      40,
      "Access",
      "Access",
      list_createList()
    );
  }

  return modulesection_response_compound;
}


#ifdef modulesection_response_compound_MAIN

void test_modulesection_response_compound(int include_optional) {
    modulesection_response_compound_t* modulesection_response_compound_1 = instantiate_modulesection_response_compound(include_optional);

	cJSON* jsonmodulesection_response_compound_1 = modulesection_response_compound_convertToJSON(modulesection_response_compound_1);
	printf("modulesection_response_compound :\n%s\n", cJSON_Print(jsonmodulesection_response_compound_1));
	modulesection_response_compound_t* modulesection_response_compound_2 = modulesection_response_compound_parseFromJSON(jsonmodulesection_response_compound_1);
	cJSON* jsonmodulesection_response_compound_2 = modulesection_response_compound_convertToJSON(modulesection_response_compound_2);
	printf("repeating modulesection_response_compound:\n%s\n", cJSON_Print(jsonmodulesection_response_compound_2));
}

int main() {
  test_modulesection_response_compound(1);
  test_modulesection_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulesection_response_compound_MAIN
#endif // modulesection_response_compound_TEST
