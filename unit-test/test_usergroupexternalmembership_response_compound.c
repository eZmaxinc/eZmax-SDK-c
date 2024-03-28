#ifndef usergroupexternalmembership_response_compound_TEST
#define usergroupexternalmembership_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternalmembership_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternalmembership_response_compound.h"
usergroupexternalmembership_response_compound_t* instantiate_usergroupexternalmembership_response_compound(int include_optional);



usergroupexternalmembership_response_compound_t* instantiate_usergroupexternalmembership_response_compound(int include_optional) {
  usergroupexternalmembership_response_compound_t* usergroupexternalmembership_response_compound = NULL;
  if (include_optional) {
    usergroupexternalmembership_response_compound = usergroupexternalmembership_response_compound_create(
      21,
      16,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administrators"
    );
  } else {
    usergroupexternalmembership_response_compound = usergroupexternalmembership_response_compound_create(
      21,
      16,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administrators"
    );
  }

  return usergroupexternalmembership_response_compound;
}


#ifdef usergroupexternalmembership_response_compound_MAIN

void test_usergroupexternalmembership_response_compound(int include_optional) {
    usergroupexternalmembership_response_compound_t* usergroupexternalmembership_response_compound_1 = instantiate_usergroupexternalmembership_response_compound(include_optional);

	cJSON* jsonusergroupexternalmembership_response_compound_1 = usergroupexternalmembership_response_compound_convertToJSON(usergroupexternalmembership_response_compound_1);
	printf("usergroupexternalmembership_response_compound :\n%s\n", cJSON_Print(jsonusergroupexternalmembership_response_compound_1));
	usergroupexternalmembership_response_compound_t* usergroupexternalmembership_response_compound_2 = usergroupexternalmembership_response_compound_parseFromJSON(jsonusergroupexternalmembership_response_compound_1);
	cJSON* jsonusergroupexternalmembership_response_compound_2 = usergroupexternalmembership_response_compound_convertToJSON(usergroupexternalmembership_response_compound_2);
	printf("repeating usergroupexternalmembership_response_compound:\n%s\n", cJSON_Print(jsonusergroupexternalmembership_response_compound_2));
}

int main() {
  test_usergroupexternalmembership_response_compound(1);
  test_usergroupexternalmembership_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternalmembership_response_compound_MAIN
#endif // usergroupexternalmembership_response_compound_TEST
