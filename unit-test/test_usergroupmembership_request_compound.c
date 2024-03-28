#ifndef usergroupmembership_request_compound_TEST
#define usergroupmembership_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_request_compound.h"
usergroupmembership_request_compound_t* instantiate_usergroupmembership_request_compound(int include_optional);



usergroupmembership_request_compound_t* instantiate_usergroupmembership_request_compound(int include_optional) {
  usergroupmembership_request_compound_t* usergroupmembership_request_compound = NULL;
  if (include_optional) {
    usergroupmembership_request_compound = usergroupmembership_request_compound_create(
      21,
      2,
      70,
      16
    );
  } else {
    usergroupmembership_request_compound = usergroupmembership_request_compound_create(
      21,
      2,
      70,
      16
    );
  }

  return usergroupmembership_request_compound;
}


#ifdef usergroupmembership_request_compound_MAIN

void test_usergroupmembership_request_compound(int include_optional) {
    usergroupmembership_request_compound_t* usergroupmembership_request_compound_1 = instantiate_usergroupmembership_request_compound(include_optional);

	cJSON* jsonusergroupmembership_request_compound_1 = usergroupmembership_request_compound_convertToJSON(usergroupmembership_request_compound_1);
	printf("usergroupmembership_request_compound :\n%s\n", cJSON_Print(jsonusergroupmembership_request_compound_1));
	usergroupmembership_request_compound_t* usergroupmembership_request_compound_2 = usergroupmembership_request_compound_parseFromJSON(jsonusergroupmembership_request_compound_1);
	cJSON* jsonusergroupmembership_request_compound_2 = usergroupmembership_request_compound_convertToJSON(usergroupmembership_request_compound_2);
	printf("repeating usergroupmembership_request_compound:\n%s\n", cJSON_Print(jsonusergroupmembership_request_compound_2));
}

int main() {
  test_usergroupmembership_request_compound(1);
  test_usergroupmembership_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_request_compound_MAIN
#endif // usergroupmembership_request_compound_TEST
