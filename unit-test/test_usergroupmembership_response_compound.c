#ifndef usergroupmembership_response_compound_TEST
#define usergroupmembership_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_response_compound.h"
usergroupmembership_response_compound_t* instantiate_usergroupmembership_response_compound(int include_optional);



usergroupmembership_response_compound_t* instantiate_usergroupmembership_response_compound(int include_optional) {
  usergroupmembership_response_compound_t* usergroupmembership_response_compound = NULL;
  if (include_optional) {
    usergroupmembership_response_compound = usergroupmembership_response_compound_create(
      21,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  } else {
    usergroupmembership_response_compound = usergroupmembership_response_compound_create(
      21,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  }

  return usergroupmembership_response_compound;
}


#ifdef usergroupmembership_response_compound_MAIN

void test_usergroupmembership_response_compound(int include_optional) {
    usergroupmembership_response_compound_t* usergroupmembership_response_compound_1 = instantiate_usergroupmembership_response_compound(include_optional);

	cJSON* jsonusergroupmembership_response_compound_1 = usergroupmembership_response_compound_convertToJSON(usergroupmembership_response_compound_1);
	printf("usergroupmembership_response_compound :\n%s\n", cJSON_Print(jsonusergroupmembership_response_compound_1));
	usergroupmembership_response_compound_t* usergroupmembership_response_compound_2 = usergroupmembership_response_compound_parseFromJSON(jsonusergroupmembership_response_compound_1);
	cJSON* jsonusergroupmembership_response_compound_2 = usergroupmembership_response_compound_convertToJSON(usergroupmembership_response_compound_2);
	printf("repeating usergroupmembership_response_compound:\n%s\n", cJSON_Print(jsonusergroupmembership_response_compound_2));
}

int main() {
  test_usergroupmembership_response_compound(1);
  test_usergroupmembership_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_response_compound_MAIN
#endif // usergroupmembership_response_compound_TEST
