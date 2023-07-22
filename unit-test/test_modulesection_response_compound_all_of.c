#ifndef modulesection_response_compound_all_of_TEST
#define modulesection_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulesection_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulesection_response_compound_all_of.h"
modulesection_response_compound_all_of_t* instantiate_modulesection_response_compound_all_of(int include_optional);



modulesection_response_compound_all_of_t* instantiate_modulesection_response_compound_all_of(int include_optional) {
  modulesection_response_compound_all_of_t* modulesection_response_compound_all_of = NULL;
  if (include_optional) {
    modulesection_response_compound_all_of = modulesection_response_compound_all_of_create(
      list_createList()
    );
  } else {
    modulesection_response_compound_all_of = modulesection_response_compound_all_of_create(
      list_createList()
    );
  }

  return modulesection_response_compound_all_of;
}


#ifdef modulesection_response_compound_all_of_MAIN

void test_modulesection_response_compound_all_of(int include_optional) {
    modulesection_response_compound_all_of_t* modulesection_response_compound_all_of_1 = instantiate_modulesection_response_compound_all_of(include_optional);

	cJSON* jsonmodulesection_response_compound_all_of_1 = modulesection_response_compound_all_of_convertToJSON(modulesection_response_compound_all_of_1);
	printf("modulesection_response_compound_all_of :\n%s\n", cJSON_Print(jsonmodulesection_response_compound_all_of_1));
	modulesection_response_compound_all_of_t* modulesection_response_compound_all_of_2 = modulesection_response_compound_all_of_parseFromJSON(jsonmodulesection_response_compound_all_of_1);
	cJSON* jsonmodulesection_response_compound_all_of_2 = modulesection_response_compound_all_of_convertToJSON(modulesection_response_compound_all_of_2);
	printf("repeating modulesection_response_compound_all_of:\n%s\n", cJSON_Print(jsonmodulesection_response_compound_all_of_2));
}

int main() {
  test_modulesection_response_compound_all_of(1);
  test_modulesection_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulesection_response_compound_all_of_MAIN
#endif // modulesection_response_compound_all_of_TEST
