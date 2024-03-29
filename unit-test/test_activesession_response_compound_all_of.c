#ifndef activesession_response_compound_all_of_TEST
#define activesession_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_response_compound_all_of.h"
activesession_response_compound_all_of_t* instantiate_activesession_response_compound_all_of(int include_optional);

#include "test_activesession_response_compound_user.c"
#include "test_activesession_response_compound_user.c"
#include "test_activesession_response_compound_apikey.c"


activesession_response_compound_all_of_t* instantiate_activesession_response_compound_all_of(int include_optional) {
  activesession_response_compound_all_of_t* activesession_response_compound_all_of = NULL;
  if (include_optional) {
    activesession_response_compound_all_of = activesession_response_compound_all_of_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_apikey(0),
      list_createList()
    );
  } else {
    activesession_response_compound_all_of = activesession_response_compound_all_of_create(
      list_createList(),
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return activesession_response_compound_all_of;
}


#ifdef activesession_response_compound_all_of_MAIN

void test_activesession_response_compound_all_of(int include_optional) {
    activesession_response_compound_all_of_t* activesession_response_compound_all_of_1 = instantiate_activesession_response_compound_all_of(include_optional);

	cJSON* jsonactivesession_response_compound_all_of_1 = activesession_response_compound_all_of_convertToJSON(activesession_response_compound_all_of_1);
	printf("activesession_response_compound_all_of :\n%s\n", cJSON_Print(jsonactivesession_response_compound_all_of_1));
	activesession_response_compound_all_of_t* activesession_response_compound_all_of_2 = activesession_response_compound_all_of_parseFromJSON(jsonactivesession_response_compound_all_of_1);
	cJSON* jsonactivesession_response_compound_all_of_2 = activesession_response_compound_all_of_convertToJSON(activesession_response_compound_all_of_2);
	printf("repeating activesession_response_compound_all_of:\n%s\n", cJSON_Print(jsonactivesession_response_compound_all_of_2));
}

int main() {
  test_activesession_response_compound_all_of(1);
  test_activesession_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_response_compound_all_of_MAIN
#endif // activesession_response_compound_all_of_TEST
