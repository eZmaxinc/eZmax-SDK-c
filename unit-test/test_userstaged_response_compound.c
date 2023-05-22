#ifndef userstaged_response_compound_TEST
#define userstaged_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_response_compound.h"
userstaged_response_compound_t* instantiate_userstaged_response_compound(int include_optional);



userstaged_response_compound_t* instantiate_userstaged_response_compound(int include_optional) {
  userstaged_response_compound_t* userstaged_response_compound = NULL;
  if (include_optional) {
    userstaged_response_compound = userstaged_response_compound_create(
      90,
      22,
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  } else {
    userstaged_response_compound = userstaged_response_compound_create(
      90,
      22,
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  }

  return userstaged_response_compound;
}


#ifdef userstaged_response_compound_MAIN

void test_userstaged_response_compound(int include_optional) {
    userstaged_response_compound_t* userstaged_response_compound_1 = instantiate_userstaged_response_compound(include_optional);

	cJSON* jsonuserstaged_response_compound_1 = userstaged_response_compound_convertToJSON(userstaged_response_compound_1);
	printf("userstaged_response_compound :\n%s\n", cJSON_Print(jsonuserstaged_response_compound_1));
	userstaged_response_compound_t* userstaged_response_compound_2 = userstaged_response_compound_parseFromJSON(jsonuserstaged_response_compound_1);
	cJSON* jsonuserstaged_response_compound_2 = userstaged_response_compound_convertToJSON(userstaged_response_compound_2);
	printf("repeating userstaged_response_compound:\n%s\n", cJSON_Print(jsonuserstaged_response_compound_2));
}

int main() {
  test_userstaged_response_compound(1);
  test_userstaged_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_response_compound_MAIN
#endif // userstaged_response_compound_TEST
