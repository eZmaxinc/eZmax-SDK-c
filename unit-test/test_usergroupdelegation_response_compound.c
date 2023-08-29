#ifndef usergroupdelegation_response_compound_TEST
#define usergroupdelegation_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_response_compound.h"
usergroupdelegation_response_compound_t* instantiate_usergroupdelegation_response_compound(int include_optional);



usergroupdelegation_response_compound_t* instantiate_usergroupdelegation_response_compound(int include_optional) {
  usergroupdelegation_response_compound_t* usergroupdelegation_response_compound = NULL;
  if (include_optional) {
    usergroupdelegation_response_compound = usergroupdelegation_response_compound_create(
      141,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  } else {
    usergroupdelegation_response_compound = usergroupdelegation_response_compound_create(
      141,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  }

  return usergroupdelegation_response_compound;
}


#ifdef usergroupdelegation_response_compound_MAIN

void test_usergroupdelegation_response_compound(int include_optional) {
    usergroupdelegation_response_compound_t* usergroupdelegation_response_compound_1 = instantiate_usergroupdelegation_response_compound(include_optional);

	cJSON* jsonusergroupdelegation_response_compound_1 = usergroupdelegation_response_compound_convertToJSON(usergroupdelegation_response_compound_1);
	printf("usergroupdelegation_response_compound :\n%s\n", cJSON_Print(jsonusergroupdelegation_response_compound_1));
	usergroupdelegation_response_compound_t* usergroupdelegation_response_compound_2 = usergroupdelegation_response_compound_parseFromJSON(jsonusergroupdelegation_response_compound_1);
	cJSON* jsonusergroupdelegation_response_compound_2 = usergroupdelegation_response_compound_convertToJSON(usergroupdelegation_response_compound_2);
	printf("repeating usergroupdelegation_response_compound:\n%s\n", cJSON_Print(jsonusergroupdelegation_response_compound_2));
}

int main() {
  test_usergroupdelegation_response_compound(1);
  test_usergroupdelegation_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_response_compound_MAIN
#endif // usergroupdelegation_response_compound_TEST
